#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00E0[4096] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0,
    17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 0,
    33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0,
    49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0,
    65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0,
    81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0,
    0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0,
    142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0,
    0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0,
    0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0,
    0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188,
    0, 0, 0, 0, 0, 189, 190, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0,
    0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0,
    0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244,
    0, 245, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0,
    0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0,
    0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0,
    312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330,
    0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0,
    0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0,
    0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 352,
    0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0,
    0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 365,
    0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0,
    0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 377, 378, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 383, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385,
    0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 391, 0, 392, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0,
    0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403,
    0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0,
    415, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0,
    0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 431, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434,
    0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 447, 0, 0,
    0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0,
    452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0,
    0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0,
    462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0,
    0, 0, 487, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0,
};

void unit_00E0(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00480000;
    case 2u: goto L_00480008;
    case 3u: goto L_00480010;
    case 4u: goto L_00480018;
    case 5u: goto L_00480020;
    case 6u: goto L_00480028;
    case 7u: goto L_00480030;
    case 8u: goto L_00480038;
    case 9u: goto L_00480040;
    case 10u: goto L_00480048;
    case 11u: goto L_00480050;
    case 12u: goto L_00480058;
    case 13u: goto L_00480060;
    case 14u: goto L_00480068;
    case 15u: goto L_00480070;
    case 16u: goto L_00480078;
    case 17u: goto L_00480080;
    case 18u: goto L_00480088;
    case 19u: goto L_00480090;
    case 20u: goto L_00480098;
    case 21u: goto L_004800A0;
    case 22u: goto L_004800A8;
    case 23u: goto L_004800B0;
    case 24u: goto L_004800B8;
    case 25u: goto L_004800C0;
    case 26u: goto L_004800C8;
    case 27u: goto L_004800D0;
    case 28u: goto L_004800D8;
    case 29u: goto L_004800E0;
    case 30u: goto L_004800E8;
    case 31u: goto L_004800F0;
    case 32u: goto L_004800F8;
    case 33u: goto L_00480100;
    case 34u: goto L_00480108;
    case 35u: goto L_00480110;
    case 36u: goto L_00480118;
    case 37u: goto L_00480120;
    case 38u: goto L_00480128;
    case 39u: goto L_00480130;
    case 40u: goto L_00480138;
    case 41u: goto L_00480140;
    case 42u: goto L_00480148;
    case 43u: goto L_00480150;
    case 44u: goto L_00480158;
    case 45u: goto L_00480160;
    case 46u: goto L_00480168;
    case 47u: goto L_00480170;
    case 48u: goto L_00480178;
    case 49u: goto L_00480180;
    case 50u: goto L_00480188;
    case 51u: goto L_00480190;
    case 52u: goto L_00480198;
    case 53u: goto L_004801A0;
    case 54u: goto L_004801A8;
    case 55u: goto L_004801B0;
    case 56u: goto L_004801B8;
    case 57u: goto L_004801C0;
    case 58u: goto L_004801C8;
    case 59u: goto L_004801D0;
    case 60u: goto L_004801D8;
    case 61u: goto L_004801E0;
    case 62u: goto L_004801E8;
    case 63u: goto L_004801F0;
    case 64u: goto L_004801F8;
    case 65u: goto L_00480200;
    case 66u: goto L_00480208;
    case 67u: goto L_00480210;
    case 68u: goto L_00480218;
    case 69u: goto L_00480220;
    case 70u: goto L_00480228;
    case 71u: goto L_00480230;
    case 72u: goto L_00480238;
    case 73u: goto L_00480240;
    case 74u: goto L_00480248;
    case 75u: goto L_00480250;
    case 76u: goto L_00480258;
    case 77u: goto L_00480260;
    case 78u: goto L_00480268;
    case 79u: goto L_00480270;
    case 80u: goto L_00480278;
    case 81u: goto L_00480280;
    case 82u: goto L_00480288;
    case 83u: goto L_00480290;
    case 84u: goto L_00480298;
    case 85u: goto L_004802A0;
    case 86u: goto L_004802A8;
    case 87u: goto L_004802B0;
    case 88u: goto L_004802B8;
    case 89u: goto L_004802C0;
    case 90u: goto L_004802C8;
    case 91u: goto L_004802D0;
    case 92u: goto L_004802D8;
    case 93u: goto L_004802E0;
    case 94u: goto L_004802F0;
    case 95u: goto L_00480300;
    case 96u: goto L_00480324;
    case 97u: goto L_00480330;
    case 98u: goto L_00480354;
    case 99u: goto L_00480380;
    case 100u: goto L_00480398;
    case 101u: goto L_004803A0;
    case 102u: goto L_004803C4;
    case 103u: goto L_004803D0;
    case 104u: goto L_004803F4;
    case 105u: goto L_00480414;
    case 106u: goto L_00480428;
    case 107u: goto L_00480468;
    case 108u: goto L_00480480;
    case 109u: goto L_004804A8;
    case 110u: goto L_004804E0;
    case 111u: goto L_004804F8;
    case 112u: goto L_00480520;
    case 113u: goto L_00480528;
    case 114u: goto L_00480530;
    case 115u: goto L_00480558;
    case 116u: goto L_00480588;
    case 117u: goto L_0048059C;
    case 118u: goto L_004805E0;
    case 119u: goto L_004805F8;
    case 120u: goto L_00480608;
    case 121u: goto L_004806A0;
    case 122u: goto L_004806D8;
    case 123u: goto L_004806EC;
    case 124u: goto L_00480720;
    case 125u: goto L_00480728;
    case 126u: goto L_00480738;
    case 127u: goto L_004807D0;
    case 128u: goto L_00480808;
    case 129u: goto L_0048081C;
    case 130u: goto L_00480850;
    case 131u: goto L_00480868;
    case 132u: goto L_00480878;
    case 133u: goto L_004808A8;
    case 134u: goto L_004808B0;
    case 135u: goto L_004808C8;
    case 136u: goto L_004808E0;
    case 137u: goto L_00480910;
    case 138u: goto L_00480918;
    case 139u: goto L_00480930;
    case 140u: goto L_00480948;
    case 141u: goto L_00480978;
    case 142u: goto L_00480980;
    case 143u: goto L_00480998;
    case 144u: goto L_004809B0;
    case 145u: goto L_004809E0;
    case 146u: goto L_004809E8;
    case 147u: goto L_00480A00;
    case 148u: goto L_00480A18;
    case 149u: goto L_00480A58;
    case 150u: goto L_00480A60;
    case 151u: goto L_00480AB8;
    case 152u: goto L_00480AC8;
    case 153u: goto L_00480AD8;
    case 154u: goto L_00480AE8;
    case 155u: goto L_00480AF0;
    case 156u: goto L_00480B34;
    case 157u: goto L_00480B78;
    case 158u: goto L_00480B8C;
    case 159u: goto L_00480BAC;
    case 160u: goto L_00480BB4;
    case 161u: goto L_00480BC0;
    case 162u: goto L_00480BE0;
    case 163u: goto L_00480BF4;
    case 164u: goto L_00480C08;
    case 165u: goto L_00480C60;
    case 166u: goto L_00480C78;
    case 167u: goto L_00480C80;
    case 168u: goto L_00480CD0;
    case 169u: goto L_00480CF0;
    case 170u: goto L_00480D04;
    case 171u: goto L_00480D18;
    case 172u: goto L_00480D28;
    case 173u: goto L_00480D30;
    case 174u: goto L_00480D48;
    case 175u: goto L_00480D68;
    case 176u: goto L_00480D78;
    case 177u: goto L_00480D88;
    case 178u: goto L_00480D9C;
    case 179u: goto L_00480DB8;
    case 180u: goto L_00480E9C;
    case 181u: goto L_00480EA8;
    case 182u: goto L_00480EC0;
    case 183u: goto L_00480ED0;
    case 184u: goto L_00480EE8;
    case 185u: goto L_00480F10;
    case 186u: goto L_00480F50;
    case 187u: goto L_00480F90;
    case 188u: goto L_00480FFC;
    case 189u: goto L_00481014;
    case 190u: goto L_00481018;
    case 191u: goto L_00481024;
    case 192u: goto L_0048102C;
    case 193u: goto L_00481060;
    case 194u: goto L_00481080;
    case 195u: goto L_004810B0;
    case 196u: goto L_004810C8;
    case 197u: goto L_00481108;
    case 198u: goto L_00481128;
    case 199u: goto L_00481178;
    case 200u: goto L_004811A8;
    case 201u: goto L_00481214;
    case 202u: goto L_00481230;
    case 203u: goto L_00481248;
    case 204u: goto L_00481254;
    case 205u: goto L_00481270;
    case 206u: goto L_004812A0;
    case 207u: goto L_004812D8;
    case 208u: goto L_004812E8;
    case 209u: goto L_00481320;
    case 210u: goto L_00481370;
    case 211u: goto L_0048138C;
    case 212u: goto L_004813A4;
    case 213u: goto L_00481410;
    case 214u: goto L_00481430;
    case 215u: goto L_00481438;
    case 216u: goto L_00481468;
    case 217u: goto L_004814A8;
    case 218u: goto L_00481518;
    case 219u: goto L_00481530;
    case 220u: goto L_00481550;
    case 221u: goto L_00481574;
    case 222u: goto L_00481584;
    case 223u: goto L_004815E0;
    case 224u: goto L_0048163C;
    case 225u: goto L_0048164C;
    case 226u: goto L_00481664;
    case 227u: goto L_00481680;
    case 228u: goto L_00481690;
    case 229u: goto L_004816A0;
    case 230u: goto L_004816B4;
    case 231u: goto L_004816D4;
    case 232u: goto L_004816E8;
    case 233u: goto L_004816F8;
    case 234u: goto L_0048170C;
    case 235u: goto L_00481724;
    case 236u: goto L_0048172C;
    case 237u: goto L_00481734;
    case 238u: goto L_0048174C;
    case 239u: goto L_00481788;
    case 240u: goto L_004817B8;
    case 241u: goto L_00481818;
    case 242u: goto L_00481838;
    case 243u: goto L_00481874;
    case 244u: goto L_0048187C;
    case 245u: goto L_00481884;
    case 246u: goto L_0048188C;
    case 247u: goto L_00481898;
    case 248u: goto L_004818C4;
    case 249u: goto L_004818D4;
    case 250u: goto L_00481920;
    case 251u: goto L_0048195C;
    case 252u: goto L_00481964;
    case 253u: goto L_0048196C;
    case 254u: goto L_00481974;
    case 255u: goto L_0048197C;
    case 256u: goto L_004819E8;
    case 257u: goto L_00481A30;
    case 258u: goto L_00481A5C;
    case 259u: goto L_00481AF0;
    case 260u: goto L_00481B1C;
    case 261u: goto L_00481BE0;
    case 262u: goto L_00481BF0;
    case 263u: goto L_00481C08;
    case 264u: goto L_00481C34;
    case 265u: goto L_00481CA0;
    case 266u: goto L_00481CB0;
    case 267u: goto L_00481CC8;
    case 268u: goto L_00481CF8;
    case 269u: goto L_00481D04;
    case 270u: goto L_00481D34;
    case 271u: goto L_00481D48;
    case 272u: goto L_00481D54;
    case 273u: goto L_00481D5C;
    case 274u: goto L_00481D84;
    case 275u: goto L_00481D98;
    case 276u: goto L_00481DAC;
    case 277u: goto L_00481DC0;
    case 278u: goto L_00481DD4;
    case 279u: goto L_00481DE8;
    case 280u: goto L_00481E18;
    case 281u: goto L_00481E68;
    case 282u: goto L_00481EA0;
    case 283u: goto L_00481ED8;
    case 284u: goto L_00481F28;
    case 285u: goto L_00481F84;
    case 286u: goto L_00482040;
    case 287u: goto L_00482060;
    case 288u: goto L_00482098;
    case 289u: goto L_004820B0;
    case 290u: goto L_004820C8;
    case 291u: goto L_004820E0;
    case 292u: goto L_00482100;
    case 293u: goto L_00482118;
    case 294u: goto L_00482158;
    case 295u: goto L_0048217C;
    case 296u: goto L_004821B8;
    case 297u: goto L_004821D8;
    case 298u: goto L_00482208;
    case 299u: goto L_00482228;
    case 300u: goto L_00482268;
    case 301u: goto L_00482288;
    case 302u: goto L_004822B0;
    case 303u: goto L_004822C8;
    case 304u: goto L_004822E0;
    case 305u: goto L_004822F8;
    case 306u: goto L_00482328;
    case 307u: goto L_00482348;
    case 308u: goto L_00482388;
    case 309u: goto L_004823A8;
    case 310u: goto L_004823D0;
    case 311u: goto L_004823E8;
    case 312u: goto L_00482400;
    case 313u: goto L_00482418;
    case 314u: goto L_00482450;
    case 315u: goto L_00482498;
    case 316u: goto L_004824D0;
    case 317u: goto L_004824E4;
    case 318u: goto L_0048251C;
    case 319u: goto L_00482528;
    case 320u: goto L_00482540;
    case 321u: goto L_00482550;
    case 322u: goto L_00482568;
    case 323u: goto L_00482578;
    case 324u: goto L_004825A4;
    case 325u: goto L_004825C8;
    case 326u: goto L_00482604;
    case 327u: goto L_00482610;
    case 328u: goto L_00482648;
    case 329u: goto L_0048266C;
    case 330u: goto L_0048267C;
    case 331u: goto L_00482690;
    case 332u: goto L_004826C8;
    case 333u: goto L_004826EC;
    case 334u: goto L_004826FC;
    case 335u: goto L_00482710;
    case 336u: goto L_00482730;
    case 337u: goto L_00482740;
    case 338u: goto L_00482758;
    case 339u: goto L_00482768;
    case 340u: goto L_00482788;
    case 341u: goto L_00482818;
    case 342u: goto L_00482820;
    case 343u: goto L_00482850;
    case 344u: goto L_0048289C;
    case 345u: goto L_004828A4;
    case 346u: goto L_004828E4;
    case 347u: goto L_004828F8;
    case 348u: goto L_00482908;
    case 349u: goto L_00482914;
    case 350u: goto L_00482960;
    case 351u: goto L_00482968;
    case 352u: goto L_0048297C;
    case 353u: goto L_0048298C;
    case 354u: goto L_0048299C;
    case 355u: goto L_004829E8;
    case 356u: goto L_004829F8;
    case 357u: goto L_00482A08;
    case 358u: goto L_00482A20;
    case 359u: goto L_00482A98;
    case 360u: goto L_00482ACC;
    case 361u: goto L_00482AE8;
    case 362u: goto L_00482B70;
    case 363u: goto L_00482BD8;
    case 364u: goto L_00482BEC;
    case 365u: goto L_00482BFC;
    case 366u: goto L_00482C20;
    case 367u: goto L_00482C50;
    case 368u: goto L_00482C60;
    case 369u: goto L_00482C90;
    case 370u: goto L_00482CA0;
    case 371u: goto L_00482CF8;
    case 372u: goto L_00482D1C;
    case 373u: goto L_00482DC0;
    case 374u: goto L_00482DE8;
    case 375u: goto L_00482E1C;
    case 376u: goto L_00482E3C;
    case 377u: goto L_00482E94;
    case 378u: goto L_00482E98;
    case 379u: goto L_00482E9C;
    case 380u: goto L_00482EB0;
    case 381u: goto L_00482EE0;
    case 382u: goto L_00482EE8;
    case 383u: goto L_00482EF0;
    case 384u: goto L_00482F64;
    case 385u: goto L_00482F7C;
    case 386u: goto L_00482F94;
    case 387u: goto L_00482FAC;
    case 388u: goto L_00482FB4;
    case 389u: goto L_00482FC0;
    case 390u: goto L_00482FEC;
    case 391u: goto L_00482FF0;
    case 392u: goto L_00482FF8;
    case 393u: goto L_00483038;
    case 394u: goto L_00483048;
    case 395u: goto L_00483060;
    case 396u: goto L_00483078;
    case 397u: goto L_00483090;
    case 398u: goto L_004830D4;
    case 399u: goto L_004830F0;
    case 400u: goto L_00483108;
    case 401u: goto L_00483128;
    case 402u: goto L_00483158;
    case 403u: goto L_0048317C;
    case 404u: goto L_00483198;
    case 405u: goto L_0048320C;
    case 406u: goto L_00483240;
    case 407u: goto L_00483248;
    case 408u: goto L_00483268;
    case 409u: goto L_00483290;
    case 410u: goto L_004832A8;
    case 411u: goto L_004832D8;
    case 412u: goto L_004832E8;
    case 413u: goto L_00483340;
    case 414u: goto L_00483378;
    case 415u: goto L_00483380;
    case 416u: goto L_00483390;
    case 417u: goto L_004833A0;
    case 418u: goto L_004833B0;
    case 419u: goto L_004833D0;
    case 420u: goto L_004833F8;
    case 421u: goto L_00483410;
    case 422u: goto L_00483434;
    case 423u: goto L_00483460;
    case 424u: goto L_0048349C;
    case 425u: goto L_004834E0;
    case 426u: goto L_00483518;
    case 427u: goto L_00483564;
    case 428u: goto L_00483574;
    case 429u: goto L_0048359C;
    case 430u: goto L_004835AC;
    case 431u: goto L_004835B4;
    case 432u: goto L_004835C4;
    case 433u: goto L_004835CC;
    case 434u: goto L_004835FC;
    case 435u: goto L_0048360C;
    case 436u: goto L_00483630;
    case 437u: goto L_004836C0;
    case 438u: goto L_00483718;
    case 439u: goto L_00483784;
    case 440u: goto L_0048379C;
    case 441u: goto L_004837AC;
    case 442u: goto L_004837F4;
    case 443u: goto L_00483820;
    case 444u: goto L_00483830;
    case 445u: goto L_0048385C;
    case 446u: goto L_0048386C;
    case 447u: goto L_00483874;
    case 448u: goto L_00483884;
    case 449u: goto L_0048388C;
    case 450u: goto L_004838C0;
    case 451u: goto L_004838F4;
    case 452u: goto L_00483900;
    case 453u: goto L_00483918;
    case 454u: goto L_00483958;
    case 455u: goto L_00483970;
    case 456u: goto L_00483988;
    case 457u: goto L_00483990;
    case 458u: goto L_004839A8;
    case 459u: goto L_004839B0;
    case 460u: goto L_004839D0;
    case 461u: goto L_004839E4;
    case 462u: goto L_00483A00;
    case 463u: goto L_00483A18;
    case 464u: goto L_00483A70;
    case 465u: goto L_00483A98;
    case 466u: goto L_00483AB4;
    case 467u: goto L_00483B08;
    case 468u: goto L_00483B24;
    case 469u: goto L_00483B2C;
    case 470u: goto L_00483B40;
    case 471u: goto L_00483B5C;
    case 472u: goto L_00483B78;
    case 473u: goto L_00483C14;
    case 474u: goto L_00483C40;
    case 475u: goto L_00483C68;
    case 476u: goto L_00483CB8;
    case 477u: goto L_00483CE8;
    case 478u: goto L_00483D20;
    case 479u: goto L_00483D7C;
    case 480u: goto L_00483DC4;
    case 481u: goto L_00483E60;
    case 482u: goto L_00483EA8;
    case 483u: goto L_00483EE4;
    case 484u: goto L_00483F1C;
    case 485u: goto L_00483F30;
    case 486u: goto L_00483F70;
    case 487u: goto L_00483F88;
    case 488u: goto L_00483F98;
    case 489u: goto L_00483FA4;
    case 490u: goto L_00483FB8;
    case 491u: goto L_00483FC8;
    case 492u: goto L_00483FF0;
    default: bad_entry(c, 0x00480000u); return;
    }
L_00480000:
    set32(c.r[3], 0u - 90u);
    c.budget -= 1;
    c.pc = 0x00480008u; syscall(c, 0x00480004u); if (c.pc != 0x00480008u) return;
    c.budget -= 1;
L_00480008:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480010:
    set32(c.r[3], 0u + 91u);
    c.budget -= 1;
    c.pc = 0x00480018u; syscall(c, 0x00480014u); if (c.pc != 0x00480018u) return;
    c.budget -= 1;
L_00480018:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480020:
    set32(c.r[3], 0u + 92u);
    c.budget -= 1;
    c.pc = 0x00480028u; syscall(c, 0x00480024u); if (c.pc != 0x00480028u) return;
    c.budget -= 1;
L_00480028:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480030:
    set32(c.r[3], 0u - 92u);
    c.budget -= 1;
    c.pc = 0x00480038u; syscall(c, 0x00480034u); if (c.pc != 0x00480038u) return;
    c.budget -= 1;
L_00480038:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480040:
    set32(c.r[3], 0u + 93u);
    c.budget -= 1;
    c.pc = 0x00480048u; syscall(c, 0x00480044u); if (c.pc != 0x00480048u) return;
    c.budget -= 1;
L_00480048:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480050:
    set32(c.r[3], 0u - 93u);
    c.budget -= 1;
    c.pc = 0x00480058u; syscall(c, 0x00480054u); if (c.pc != 0x00480058u) return;
    c.budget -= 1;
L_00480058:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480060:
    set32(c.r[3], 0u + 94u);
    c.budget -= 1;
    c.pc = 0x00480068u; syscall(c, 0x00480064u); if (c.pc != 0x00480068u) return;
    c.budget -= 1;
L_00480068:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480070:
    set32(c.r[3], 0u - 94u);
    c.budget -= 1;
    c.pc = 0x00480078u; syscall(c, 0x00480074u); if (c.pc != 0x00480078u) return;
    c.budget -= 1;
L_00480078:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480080:
    set32(c.r[3], 0u + 95u);
    c.budget -= 1;
    c.pc = 0x00480088u; syscall(c, 0x00480084u); if (c.pc != 0x00480088u) return;
    c.budget -= 1;
L_00480088:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480090:
    set32(c.r[3], 0u - 95u);
    c.budget -= 1;
    c.pc = 0x00480098u; syscall(c, 0x00480094u); if (c.pc != 0x00480098u) return;
    c.budget -= 1;
L_00480098:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004800A0:
    set32(c.r[3], 0u + 96u);
    c.budget -= 1;
    c.pc = 0x004800A8u; syscall(c, 0x004800A4u); if (c.pc != 0x004800A8u) return;
    c.budget -= 1;
L_004800A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004800B0:
    set32(c.r[3], 0u + 97u);
    c.budget -= 1;
    c.pc = 0x004800B8u; syscall(c, 0x004800B4u); if (c.pc != 0x004800B8u) return;
    c.budget -= 1;
L_004800B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004800C0:
    set32(c.r[3], 0u + 98u);
    c.budget -= 1;
    c.pc = 0x004800C8u; syscall(c, 0x004800C4u); if (c.pc != 0x004800C8u) return;
    c.budget -= 1;
L_004800C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004800D0:
    set32(c.r[3], 0u + 99u);
    c.budget -= 1;
    c.pc = 0x004800D8u; syscall(c, 0x004800D4u); if (c.pc != 0x004800D8u) return;
    c.budget -= 1;
L_004800D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004800E0:
    set32(c.r[3], 0u + 100u);
    c.budget -= 1;
    c.pc = 0x004800E8u; syscall(c, 0x004800E4u); if (c.pc != 0x004800E8u) return;
    c.budget -= 1;
L_004800E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004800F0:
    set32(c.r[3], 0u + 102u);
    c.budget -= 1;
    c.pc = 0x004800F8u; syscall(c, 0x004800F4u); if (c.pc != 0x004800F8u) return;
    c.budget -= 1;
L_004800F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480100:
    set32(c.r[3], 0u - 103u);
    c.budget -= 1;
    c.pc = 0x00480108u; syscall(c, 0x00480104u); if (c.pc != 0x00480108u) return;
    c.budget -= 1;
L_00480108:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480110:
    set32(c.r[3], 0u - 104u);
    c.budget -= 1;
    c.pc = 0x00480118u; syscall(c, 0x00480114u); if (c.pc != 0x00480118u) return;
    c.budget -= 1;
L_00480118:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480120:
    set32(c.r[3], 0u - 106u);
    c.budget -= 1;
    c.pc = 0x00480128u; syscall(c, 0x00480124u); if (c.pc != 0x00480128u) return;
    c.budget -= 1;
L_00480128:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480130:
    set32(c.r[3], 0u + 107u);
    c.budget -= 1;
    c.pc = 0x00480138u; syscall(c, 0x00480134u); if (c.pc != 0x00480138u) return;
    c.budget -= 1;
L_00480138:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480140:
    set32(c.r[3], 0u + 108u);
    c.budget -= 1;
    c.pc = 0x00480148u; syscall(c, 0x00480144u); if (c.pc != 0x00480148u) return;
    c.budget -= 1;
L_00480148:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480150:
    set32(c.r[3], 0u + 109u);
    c.budget -= 1;
    c.pc = 0x00480158u; syscall(c, 0x00480154u); if (c.pc != 0x00480158u) return;
    c.budget -= 1;
L_00480158:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480160:
    set32(c.r[3], 0u + 110u);
    c.budget -= 1;
    c.pc = 0x00480168u; syscall(c, 0x00480164u); if (c.pc != 0x00480168u) return;
    c.budget -= 1;
L_00480168:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480170:
    set32(c.r[3], 0u + 111u);
    c.budget -= 1;
    c.pc = 0x00480178u; syscall(c, 0x00480174u); if (c.pc != 0x00480178u) return;
    c.budget -= 1;
L_00480178:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480180:
    set32(c.r[3], 0u + 112u);
    c.budget -= 1;
    c.pc = 0x00480188u; syscall(c, 0x00480184u); if (c.pc != 0x00480188u) return;
    c.budget -= 1;
L_00480188:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480190:
    set32(c.r[3], 0u - 112u);
    c.budget -= 1;
    c.pc = 0x00480198u; syscall(c, 0x00480194u); if (c.pc != 0x00480198u) return;
    c.budget -= 1;
L_00480198:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004801A0:
    set32(c.r[3], 0u + 113u);
    c.budget -= 1;
    c.pc = 0x004801A8u; syscall(c, 0x004801A4u); if (c.pc != 0x004801A8u) return;
    c.budget -= 1;
L_004801A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004801B0:
    set32(c.r[3], 0u - 113u);
    c.budget -= 1;
    c.pc = 0x004801B8u; syscall(c, 0x004801B4u); if (c.pc != 0x004801B8u) return;
    c.budget -= 1;
L_004801B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004801C0:
    set32(c.r[3], 0u + 114u);
    c.budget -= 1;
    c.pc = 0x004801C8u; syscall(c, 0x004801C4u); if (c.pc != 0x004801C8u) return;
    c.budget -= 1;
L_004801C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004801D0:
    set32(c.r[3], 0u + 115u);
    c.budget -= 1;
    c.pc = 0x004801D8u; syscall(c, 0x004801D4u); if (c.pc != 0x004801D8u) return;
    c.budget -= 1;
L_004801D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004801E0:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x004801E8u; syscall(c, 0x004801E4u); if (c.pc != 0x004801E8u) return;
    c.budget -= 1;
L_004801E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004801F0:
    set32(c.r[3], 0u + 117u);
    c.budget -= 1;
    c.pc = 0x004801F8u; syscall(c, 0x004801F4u); if (c.pc != 0x004801F8u) return;
    c.budget -= 1;
L_004801F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480200:
    set32(c.r[3], 0u + 118u);
    c.budget -= 1;
    c.pc = 0x00480208u; syscall(c, 0x00480204u); if (c.pc != 0x00480208u) return;
    c.budget -= 1;
L_00480208:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480210:
    set32(c.r[3], 0u - 118u);
    c.budget -= 1;
    c.pc = 0x00480218u; syscall(c, 0x00480214u); if (c.pc != 0x00480218u) return;
    c.budget -= 1;
L_00480218:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480220:
    set32(c.r[3], 0u + 119u);
    c.budget -= 1;
    c.pc = 0x00480228u; syscall(c, 0x00480224u); if (c.pc != 0x00480228u) return;
    c.budget -= 1;
L_00480228:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480230:
    set32(c.r[3], 0u - 119u);
    c.budget -= 1;
    c.pc = 0x00480238u; syscall(c, 0x00480234u); if (c.pc != 0x00480238u) return;
    c.budget -= 1;
L_00480238:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480240:
    set32(c.r[3], 0u + 120u);
    c.budget -= 1;
    c.pc = 0x00480248u; syscall(c, 0x00480244u); if (c.pc != 0x00480248u) return;
    c.budget -= 1;
L_00480248:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480250:
    set32(c.r[3], 0u - 120u);
    c.budget -= 1;
    c.pc = 0x00480258u; syscall(c, 0x00480254u); if (c.pc != 0x00480258u) return;
    c.budget -= 1;
L_00480258:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480260:
    set32(c.r[3], 0u + 121u);
    c.budget -= 1;
    c.pc = 0x00480268u; syscall(c, 0x00480264u); if (c.pc != 0x00480268u) return;
    c.budget -= 1;
L_00480268:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480270:
    set32(c.r[3], 0u + 122u);
    c.budget -= 1;
    c.pc = 0x00480278u; syscall(c, 0x00480274u); if (c.pc != 0x00480278u) return;
    c.budget -= 1;
L_00480278:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480280:
    set32(c.r[3], 0u + 123u);
    c.budget -= 1;
    c.pc = 0x00480288u; syscall(c, 0x00480284u); if (c.pc != 0x00480288u) return;
    c.budget -= 1;
L_00480288:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480290:
    set32(c.r[3], 0u + 124u);
    c.budget -= 1;
    c.pc = 0x00480298u; syscall(c, 0x00480294u); if (c.pc != 0x00480298u) return;
    c.budget -= 1;
L_00480298:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004802A0:
    set32(c.r[3], 0u + 125u);
    c.budget -= 1;
    c.pc = 0x004802A8u; syscall(c, 0x004802A4u); if (c.pc != 0x004802A8u) return;
    c.budget -= 1;
L_004802A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004802B0:
    set32(c.r[3], 0u + 126u);
    c.budget -= 1;
    c.pc = 0x004802B8u; syscall(c, 0x004802B4u); if (c.pc != 0x004802B8u) return;
    c.budget -= 1;
L_004802B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004802C0:
    set32(c.r[3], 0u + 127u);
    c.budget -= 1;
    c.pc = 0x004802C8u; syscall(c, 0x004802C4u); if (c.pc != 0x004802C8u) return;
    c.budget -= 1;
L_004802C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004802D0:
    set32(c.r[3], 0u + 130u);
    c.budget -= 1;
    c.pc = 0x004802D8u; syscall(c, 0x004802D4u); if (c.pc != 0x004802D8u) return;
    c.budget -= 1;
L_004802D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004802E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 16336u), 0u);  c.pc = t; return; }
L_004802F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480300u);  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x00480300u) [[unlikely]] return; }
L_00480300:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00480328; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480324u);  if (depth < kMaxDepth) unit_00E1(c, 219u, depth + 1u); else { c.pc = 0x00486008u; return; } if (c.pc != 0x00480324u) [[unlikely]] return; }
L_00480324:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_00480328:
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    c.budget -= 2;
L_00480330:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00480330u | kUnwind; return; } goto L_00480330; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480354u);  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x00480354u) [[unlikely]] return; }
L_00480354:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00480378; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00E1(c, 219u, depth); }
L_00480378:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00480380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480398u); c.r[5].d[0] = c.r[29].d[0] | 8ull;  if (depth < kMaxDepth) unit_00E0(c, 59u, depth + 1u); else { c.pc = 0x004801D0u; return; } if (c.pc != 0x00480398u) [[unlikely]] return; }
L_00480398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004803A0u);  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x004803A0u) [[unlikely]] return; }
L_004803A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_004803C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004803C4u);  if (depth < kMaxDepth) unit_00E1(c, 219u, depth + 1u); else { c.pc = 0x00486008u; return; } if (c.pc != 0x004803C4u) [[unlikely]] return; }
L_004803C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_004803C8:
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    c.budget -= 2;
L_004803D0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004803EC; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004803D0u | kUnwind; return; } goto L_004803D0; } }
L_004803EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004803F4u);  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x004803F4u) [[unlikely]] return; }
L_004803F4:
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 4096u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00480414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480414u);  if (depth < kMaxDepth) unit_00E1(c, 219u, depth + 1u); else { c.pc = 0x00486008u; return; } if (c.pc != 0x00480414u) [[unlikely]] return; }
L_00480414:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00480428:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_00480488; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 16336u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00480478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480468u);  if (depth < kMaxDepth) unit_00E0(c, 210u, depth + 1u); else { c.pc = 0x00481370u; return; } if (c.pc != 0x00480468u) [[unlikely]] return; }
L_00480468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00480488; } }
    st32((c.r[16].w[0] + 16336u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00480478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480480u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 198u, depth + 1u); else { c.pc = 0x00481128u; return; } if (c.pc != 0x00480480u) [[unlikely]] return; }
L_00480480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00480490; } }
L_00480488:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_00480490:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004804A8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_00480500; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 16336u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004804F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004804E0u);  if (depth < kMaxDepth) unit_00E0(c, 210u, depth + 1u); else { c.pc = 0x00481370u; return; } if (c.pc != 0x004804E0u) [[unlikely]] return; }
L_004804E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00480500; } }
    st32((c.r[16].w[0] + 16336u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004804F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004804F8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 206u, depth + 1u); else { c.pc = 0x004812A0u; return; } if (c.pc != 0x004804F8u) [[unlikely]] return; }
L_004804F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00480508; } }
L_00480500:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_00480508:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00480520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_00480528:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_00480530:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0048057C; } }
L_00480558:
    set_interrupts(c, false);
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00480558u | kUnwind; return; } goto L_00480558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 16340u)));  if (t) { goto L_00480580; } }
L_0048057C:
    set32(c.r[2], ld32((c.r[18].w[0] + 16340u)));
    c.budget -= 1;
L_00480580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480588u); set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_00DF(c, 389u, depth + 1u); else { c.pc = 0x0047FE40u; return; } if (c.pc != 0x00480588u) [[unlikely]] return; }
L_00480588:
    c.r[2].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 16340u)));  if (t) { goto L_004805B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048059Cu);  if (depth < kMaxDepth) unit_00DD(c, 35u, depth + 1u); else { c.pc = 0x004745C8u; return; } if (c.pc != 0x0048059Cu) [[unlikely]] return; }
L_0048059C:
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_004805AC; } }
    set_interrupts(c, true);
    c.budget -= 1;
L_004805AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_004805C4; } }
L_004805B8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 16340u), c.r[16].w[0]);  if (t) { goto L_004805C4; } }
    set_interrupts(c, true);
    c.budget -= 1;
L_004805C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004805E0:
    set32(c.r[2], 0u + 8192u);
    st64((c.r[5].w[0] + 72u), 0ull);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004805F8:
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 61440ull;
    c.budget -= 4;
L_00480608:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00480644; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00480644; } }
    c.budget -= 3;
L_00480644:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00480680; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00480680; } }
    c.budget -= 3;
L_00480680:
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.r[2].d[0] = c.r[6].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00480608u | kUnwind; return; } goto L_00480608; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004806A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004806D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004806D8u);  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x004806D8u) [[unlikely]] return; }
L_004806D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65472ull;
    c.r[5].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004806ECu); c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_00E0(c, 119u, depth + 1u); else { c.pc = 0x004805F8u; return; } if (c.pc != 0x004806ECu) [[unlikely]] return; }
L_004806EC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00480708; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_00E1(c, 219u, depth); }
L_00480708:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00480720:
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 2;
L_00480728:
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 61440ull;
    c.budget -= 4;
L_00480738:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00480774; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00480774; } }
    c.budget -= 3;
L_00480774:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004807B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004807B0; } }
    c.budget -= 3;
L_004807B0:
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.r[2].d[0] = c.r[6].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00480738u | kUnwind; return; } goto L_00480738; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004807D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00480808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480808u);  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x00480808u) [[unlikely]] return; }
L_00480808:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65472ull;
    c.r[5].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048081Cu); c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_00E0(c, 125u, depth + 1u); else { c.pc = 0x00480728u; return; } if (c.pc != 0x0048081Cu) [[unlikely]] return; }
L_0048081C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00480838; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_00E1(c, 219u, depth); }
L_00480838:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00480850:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x00480728u | kUnwind; return; } goto L_00480728; }
L_00480868:
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 1ull;  c.pc = t; return; }
L_00480878:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004808A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004808A8u);  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x004808A8u) [[unlikely]] return; }
L_004808A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004808B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 307u, depth + 1u); else { c.pc = 0x0047FBB0u; return; } if (c.pc != 0x004808B0u) [[unlikely]] return; }
L_004808B0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004808CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004808C8u);  if (depth < kMaxDepth) unit_00E1(c, 219u, depth + 1u); else { c.pc = 0x00486008u; return; } if (c.pc != 0x004808C8u) [[unlikely]] return; }
L_004808C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004808CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004808E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00480910; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480910u);  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x00480910u) [[unlikely]] return; }
L_00480910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480918u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 305u, depth + 1u); else { c.pc = 0x0047FBA0u; return; } if (c.pc != 0x00480918u) [[unlikely]] return; }
L_00480918:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00480934; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480930u);  if (depth < kMaxDepth) unit_00E1(c, 219u, depth + 1u); else { c.pc = 0x00486008u; return; } if (c.pc != 0x00480930u) [[unlikely]] return; }
L_00480930:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00480934:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00480948:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00480978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480978u);  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x00480978u) [[unlikely]] return; }
L_00480978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480980u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 311u, depth + 1u); else { c.pc = 0x0047FBD0u; return; } if (c.pc != 0x00480980u) [[unlikely]] return; }
L_00480980:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0048099C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480998u);  if (depth < kMaxDepth) unit_00E1(c, 219u, depth + 1u); else { c.pc = 0x00486008u; return; } if (c.pc != 0x00480998u) [[unlikely]] return; }
L_00480998:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0048099C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004809B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004809E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004809E0u);  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x004809E0u) [[unlikely]] return; }
L_004809E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004809E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 309u, depth + 1u); else { c.pc = 0x0047FBC0u; return; } if (c.pc != 0x004809E8u) [[unlikely]] return; }
L_004809E8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00480A04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480A00u);  if (depth < kMaxDepth) unit_00E1(c, 219u, depth + 1u); else { c.pc = 0x00486008u; return; } if (c.pc != 0x00480A00u) [[unlikely]] return; }
L_00480A00:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00480A04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00480A18:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00770000u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[20], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[19], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[18], c.r[17].w[0] + 8u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 9u);
    c.budget -= 16;
L_00480A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480A60u); set32(c.r[4], ld32((c.r[22].w[0] + 32048u)));  if (depth < kMaxDepth) unit_00DF(c, 401u, depth + 1u); else { c.pc = 0x0047FEA0u; return; } if (c.pc != 0x00480A60u) [[unlikely]] return; }
L_00480A60:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 511ull;
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    st32((c.r[17].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[16].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[20].d[0]; c.r[5].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00480AC0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] - 720u);  if (t) { goto L_00480AA0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00480AB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00480AE0; } }
L_00480AA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_00480AD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00480AE0; } }
L_00480AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480AB8u); c.r[4].d[0] = ld8((c.r[3].w[0]));  if (depth < kMaxDepth) unit_00DF(c, 367u, depth + 1u); else { c.pc = 0x0047FD90u; return; } if (c.pc != 0x00480AB8u) [[unlikely]] return; }
L_00480AB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00480A58u | kUnwind; return; } goto L_00480A58; } }
L_00480AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480AC8u); c.r[4].d[0] = ld8((c.r[6].w[0]));  if (depth < kMaxDepth) unit_00DF(c, 351u, depth + 1u); else { c.pc = 0x0047FD10u; return; } if (c.pc != 0x00480AC8u) [[unlikely]] return; }
L_00480AC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00480A58u | kUnwind; return; } goto L_00480A58; } }
L_00480AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480AD8u); c.r[4].d[0] = ld8((c.r[3].w[0]));  if (depth < kMaxDepth) unit_00DF(c, 375u, depth + 1u); else { c.pc = 0x0047FDD0u; return; } if (c.pc != 0x00480AD8u) [[unlikely]] return; }
L_00480AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00480A58u | kUnwind; return; } goto L_00480A58; } }
L_00480AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480AE8u);  if (depth < kMaxDepth) unit_00E0(c, 331u, depth + 1u); else { c.pc = 0x00482690u; return; } if (c.pc != 0x00480AE8u) [[unlikely]] return; }
L_00480AE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00480A58u | kUnwind; return; } goto L_00480A58; } }
L_00480AF0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16344u)));
    st64((c.r[29].w[0] + 112u), c.r[18].d[0]);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0; st64((c.r[29].w[0] + 96u), c.r[17].d[0]);  if (t) { goto L_00480B8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[17], c.r[2].w[0] - 680u);
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 56u), 0u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 68u), c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480B34u); c.r[18].sd[0] = static_cast<std::int32_t>(0x00770000u);  if (depth < kMaxDepth) unit_00DF(c, 393u, depth + 1u); else { c.pc = 0x0047FE60u; return; } if (c.pc != 0x00480B34u) [[unlikely]] return; }
L_00480B34:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[18].w[0] + 32048u), c.r[2].w[0]);  if (t) { goto L_00480B8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00770000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 2584u);
    set32(c.r[3], c.r[3].w[0] + 31024u);
    set32(c.r[5], c.r[5].w[0] - 24592u);
    set32(c.r[6], 0u + 1024u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[17].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480B78u); st32((c.r[29].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_00DF(c, 329u, depth + 1u); else { c.pc = 0x0047FC60u; return; } if (c.pc != 0x00480B78u) [[unlikely]] return; }
L_00480B78:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; st32((c.r[16].w[0] + 16344u), c.r[4].w[0]);  if (t) { goto L_00480B94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480B8Cu); set32(c.r[4], ld32((c.r[18].w[0] + 32048u)));  if (depth < kMaxDepth) unit_00DF(c, 395u, depth + 1u); else { c.pc = 0x0047FE70u; return; } if (c.pc != 0x00480B8Cu) [[unlikely]] return; }
L_00480B8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00480BC4; } }
L_00480B94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00770000u);
    set32(c.r[3], c.r[2].w[0] + 32056u);
    st32((c.r[2].w[0] + 32056u), 0u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480BACu); st32((c.r[3].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00E0(c, 174u, depth + 1u); else { c.pc = 0x00480D48u; return; } if (c.pc != 0x00480BACu) [[unlikely]] return; }
L_00480BAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480BB4u);  if (depth < kMaxDepth) unit_00DF(c, 359u, depth + 1u); else { c.pc = 0x0047FD50u; return; } if (c.pc != 0x00480BB4u) [[unlikely]] return; }
L_00480BB4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480BC0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DF(c, 347u, depth + 1u); else { c.pc = 0x0047FCF0u; return; } if (c.pc != 0x00480BC0u) [[unlikely]] return; }
L_00480BC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 16344u)));
    c.budget -= 1;
L_00480BC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00480BE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], 0u - 47u);
    c.budget -= 4;
    c.pc = 0x00480BF4u; syscall(c, 0x00480BF0u); if (c.pc != 0x00480BF4u) return;
    c.budget -= 1;
L_00480BF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[4].d[0]; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;  if (t) { goto L_00480C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480C08u);  if (depth < kMaxDepth) unit_00DF(c, 369u, depth + 1u); else { c.pc = 0x0047FDA0u; return; } if (c.pc != 0x00480C08u) [[unlikely]] return; }
L_00480C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00480C68; } }
L_00480C10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_00480C24; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16344u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00770000u);  if (t) { goto L_00480C2C; } }
L_00480C24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00480C64; } }
L_00480C2C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00770000u);
    set32(c.r[3], c.r[3].w[0] + 32056u);
    set32(c.r[4], ld32((c.r[5].w[0] + 32048u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480C60u); st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_00DF(c, 399u, depth + 1u); else { c.pc = 0x0047FE90u; return; } if (c.pc != 0x00480C60u) [[unlikely]] return; }
L_00480C60:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00480C64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00480C68:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00480C78:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_00480C80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_00480CB4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32776ull;  if (t) { goto L_00480D34; } }
L_00480CB4:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 656u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480CD0u); st32((c.r[29].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_00DF(c, 393u, depth + 1u); else { c.pc = 0x0047FE60u; return; } if (c.pc != 0x00480CD0u) [[unlikely]] return; }
L_00480CD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00480CE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32771ull;  if (t) { goto L_00480D34; } }
L_00480CE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480CF0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 382u, depth + 1u); else { c.pc = 0x00487280u; return; } if (c.pc != 0x00480CF0u) [[unlikely]] return; }
L_00480CF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3776u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480D04u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 389u, depth + 1u); else { c.pc = 0x004873B0u; return; } if (c.pc != 0x00480D04u) [[unlikely]] return; }
L_00480D04:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_00480D20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480D18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 395u, depth + 1u); else { c.pc = 0x0047FE70u; return; } if (c.pc != 0x00480D18u) [[unlikely]] return; }
L_00480D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00480D34; } }
L_00480D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480D28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 401u, depth + 1u); else { c.pc = 0x0047FEA0u; return; } if (c.pc != 0x00480D28u) [[unlikely]] return; }
L_00480D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480D30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 395u, depth + 1u); else { c.pc = 0x0047FE70u; return; } if (c.pc != 0x00480D30u) [[unlikely]] return; }
L_00480D30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00480D34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00480D48:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480D68u); st64((c.r[29].w[0] + 48u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_00E0(c, 131u, depth + 1u); else { c.pc = 0x00480868u; return; } if (c.pc != 0x00480D68u) [[unlikely]] return; }
L_00480D68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00480EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480D78u);  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x00480D78u) [[unlikely]] return; }
L_00480D78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00480DB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480D88u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 361u, depth + 1u); else { c.pc = 0x0047FD60u; return; } if (c.pc != 0x00480D88u) [[unlikely]] return; }
L_00480D88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_00480DA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480D9Cu);  if (depth < kMaxDepth) unit_00E1(c, 219u, depth + 1u); else { c.pc = 0x00486008u; return; } if (c.pc != 0x00480D9Cu) [[unlikely]] return; }
L_00480D9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00480EA8; } }
L_00480DA4:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_00480DC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480DB8u);  if (depth < kMaxDepth) unit_00E1(c, 219u, depth + 1u); else { c.pc = 0x00486008u; return; } if (c.pc != 0x00480DB8u) [[unlikely]] return; }
L_00480DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00480EA8; } }
L_00480DC0:
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 672u);
    st128((c.r[2].w[0]) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 64u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 80u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 96u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 112u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 128u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 144u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 160u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 176u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 192u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 208u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 240u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 256u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 272u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 288u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 304u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 320u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 336u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 352u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 368u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 384u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 400u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 416u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 432u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 512u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 528u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 544u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 560u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 576u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 592u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 608u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 624u) & ~15u, c.r[0]);
    set32(c.r[8], c.r[18].w[0] << 0);
    st64((c.r[2].w[0] + 64u), c.r[8].d[0]);
    set32(c.r[8], ld32((c.r[2].w[0] + 448u)));
    st64((c.r[2].w[0] + 448u), c.r[8].d[0]);
    st64((c.r[2].w[0] + 456u), 0ull);
    set32(c.r[8], ld32((c.r[2].w[0] + 464u)));
    st64((c.r[2].w[0] + 464u), c.r[8].d[0]);
    st64((c.r[2].w[0] + 472u), 0ull);
    set32(c.r[8], ld32((c.r[2].w[0] + 480u)));
    st64((c.r[2].w[0] + 480u), c.r[8].d[0]);
    st64((c.r[2].w[0] + 488u), 0ull);
    set32(c.r[8], ld32((c.r[2].w[0] + 496u)));
    st64((c.r[2].w[0] + 496u), c.r[8].d[0]);
    st64((c.r[2].w[0] + 504u), 0ull);
    c.budget -= 55;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480E9Cu);  if (depth < kMaxDepth) unit_00E1(c, 219u, depth + 1u); else { c.pc = 0x00486008u; return; } if (c.pc != 0x00480E9Cu) [[unlikely]] return; }
L_00480E9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480EA8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 333u, depth + 1u); else { c.pc = 0x0047FC80u; return; } if (c.pc != 0x00480EA8u) [[unlikely]] return; }
L_00480EA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00480EC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480ED0u); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 399u, depth + 1u); else { c.pc = 0x0047FE90u; return; } if (c.pc != 0x00480ED0u) [[unlikely]] return; }
L_00480ED0:
    set_interrupts(c, true);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00480EE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[3], c.r[2].w[0] - 32448u);
    st32((c.r[2].w[0] - 32448u), c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + 16u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 12u), c.r[4].w[0]);  c.pc = t; return; }
L_00480F10:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[5].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_00480F44; } }
    set32(c.r[2], c.r[5].w[0] + 16u);
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00480F44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480F50:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[5].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_00480F84; } }
    set32(c.r[2], c.r[5].w[0] + 16u);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_00480F84:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00480F90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (t) { goto L_0048109C; } }
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00480FD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004810EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00481114; } }
L_00480FD0:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00481110; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 20u)));  goto L_00481040; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(321ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_00480FFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480FFCu); set32(c.r[4], c.r[4].w[0] - 632u);  if (depth < kMaxDepth) unit_00E0(c, 331u, depth + 1u); else { c.pc = 0x00482690u; return; } if (c.pc != 0x00480FFCu) [[unlikely]] return; }
L_00480FFC:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481014u); set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00E1(c, 413u, depth + 1u); else { c.pc = 0x00487760u; return; } if (c.pc != 0x00481014u) [[unlikely]] return; }
L_00481014:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00481018:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0048102C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 1;
L_00481024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048102Cu); set32(c.r[4], c.r[4].w[0] - 592u);  if (depth < kMaxDepth) unit_00E0(c, 331u, depth + 1u); else { c.pc = 0x00482690u; return; } if (c.pc != 0x0048102Cu) [[unlikely]] return; }
L_0048102C:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00481110; } }
L_00481040:
    set32(c.r[16], 0u + 12u);
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00481090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (t) { goto L_00481064; } }
    c.budget -= 1;
L_00481060:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_00481064:
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481080u); set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_00E0(c, 185u, depth + 1u); else { c.pc = 0x00480F10u; return; } if (c.pc != 0x00481080u) [[unlikely]] return; }
L_00481080:
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00481060u | kUnwind; return; } goto L_00481060; }
L_00481090:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00481110; } }
L_0048109C:
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004810B0u); c.r[6].d[0] = c.r[6].d[0] & 65535ull;  if (depth < kMaxDepth) unit_00E1(c, 415u, depth + 1u); else { c.pc = 0x00487798u; return; } if (c.pc != 0x004810B0u) [[unlikely]] return; }
L_004810B0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_004810D0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004810C8u); set32(c.r[4], c.r[4].w[0] - 568u);  if (depth < kMaxDepth) unit_00E0(c, 331u, depth + 1u); else { c.pc = 0x00482690u; return; } if (c.pc != 0x004810C8u) [[unlikely]] return; }
L_004810C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00481108; } }
L_004810D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00481110; } }
L_004810EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00481108; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481108u); set32(c.r[4], c.r[4].w[0] - 544u);  if (depth < kMaxDepth) unit_00E0(c, 331u, depth + 1u); else { c.pc = 0x00482690u; return; } if (c.pc != 0x00481108u) [[unlikely]] return; }
L_00481108:
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_00481110:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00481114:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00481128:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00780000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[19], c.r[21].w[0] - 32176u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00481274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481178u);  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x00481178u) [[unlikely]] return; }
L_00481178:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 32128u);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[8], 0u - 1u);
    st32((c.r[19].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[7], 0u + 10u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[6].w[0] + 12u);
    c.budget -= 12;
L_004811A8:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[8].d[0]) { set32(c.r[16], c.r[21].w[0] - 32176u);  goto L_004811F8; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_004811D8; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_004811F4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_004811D8:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004811A8u | kUnwind; return; } goto L_004811A8; } }
L_004811F4:
    set32(c.r[16], c.r[21].w[0] - 32176u);
    c.budget -= 1;
L_004811F8:
    set32(c.r[2], c.r[17].w[0] + 12u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 7u)));
    set32(c.r[4], ld32((c.r[21].w[0] - 32176u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481214u); st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00E1(c, 408u, depth + 1u); else { c.pc = 0x00487700u; return; } if (c.pc != 0x00481214u) [[unlikely]] return; }
L_00481214:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00481238; } }
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00481274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481230u);  if (depth < kMaxDepth) unit_00E1(c, 219u, depth + 1u); else { c.pc = 0x00486008u; return; } if (c.pc != 0x00481230u) [[unlikely]] return; }
L_00481230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00481274; } }
L_00481238:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00481260; } }
    c.budget -= 1;
L_00481248:
    set32(c.r[4], ld32((c.r[17].w[0] - 32176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481254u);  if (depth < kMaxDepth) unit_00E1(c, 410u, depth + 1u); else { c.pc = 0x00487730u; return; } if (c.pc != 0x00481254u) [[unlikely]] return; }
L_00481254:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481248u | kUnwind; return; } goto L_00481248; } }
L_00481260:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00481274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481270u);  if (depth < kMaxDepth) unit_00E1(c, 219u, depth + 1u); else { c.pc = 0x00486008u; return; } if (c.pc != 0x00481270u) [[unlikely]] return; }
L_00481270:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00481274:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004812A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 11;
    { const bool t = c.r[18].sd[0] <= 0; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0048134C; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.budget -= 3;
L_004812D8:
    set32(c.r[17], c.r[3].w[0] + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] - 32152u)));
    set32(c.r[16], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_004812E8:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004812E8u | kUnwind; return; } goto L_004812E8; } }
    set32(c.r[5], c.r[19].w[0] - 32176u);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481320u); set32(c.r[4], ld32((c.r[5].w[0] + 24u)));  if (depth < kMaxDepth) unit_00E0(c, 186u, depth + 1u); else { c.pc = 0x00480F50u; return; } if (c.pc != 0x00481320u) [[unlikely]] return; }
L_00481320:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 13u);  if (t) { goto L_00481338; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00481340; } }
L_00481338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00481350; } }
L_00481340:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004812D8u | kUnwind; return; } goto L_004812D8; } }
L_0048134C:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_00481350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00481370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048138Cu); c.r[16].sd[0] = static_cast<std::int32_t>(0x00780000u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x0048138Cu) [[unlikely]] return; }
L_0048138C:
    set32(c.r[17], c.r[16].w[0] - 32176u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 528u);
    set32(c.r[6], c.r[6].w[0] + 3984u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004813A4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 405u, depth + 1u); else { c.pc = 0x004876B0u; return; } if (c.pc != 0x004813A4u) [[unlikely]] return; }
L_004813A4:
    st32((c.r[16].w[0] - 32176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] - 32176u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);  if (t) { goto L_004813BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00481418; } }
L_004813BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], c.r[4].w[0] - 31808u);
    set32(c.r[2], c.r[2].w[0] - 32128u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[6], 0u + 528u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], 0u + 69u);
    set32(c.r[3], 0u + 72u);
    set32(c.r[4], 0u + 256u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481410u); st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_00E0(c, 184u, depth + 1u); else { c.pc = 0x00480EE8u; return; } if (c.pc != 0x00481410u) [[unlikely]] return; }
L_00481410:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00481418:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00481430:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 61744ull;
    c.budget -= 2;
L_00481438:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481438u | kUnwind; return; } goto L_00481438; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 61824ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_00481468:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 16348u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 126ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (t) { goto L_004814B0; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00780000u);
    st32((c.r[17].w[0] + 16348u), 0u);
    set32(c.r[2], c.r[18].w[0] - 31488u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004814A8u); st8((c.r[2].w[0] + 127u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00E1(c, 418u, depth + 1u); else { c.pc = 0x004877E0u; return; } if (c.pc != 0x004814A8u) [[unlikely]] return; }
L_004814A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 16348u)));  if (t) { goto L_004814B4; } }
L_004814B0:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.budget -= 1;
L_004814B4:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[18].w[0] - 31488u);  if (t) { goto L_004814F0; } }
    set32(c.r[4], c.r[18].w[0] - 31488u);
    st32((c.r[17].w[0] + 16348u), 0u);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_00E1(c, 418u, depth); }
L_004814F0:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[17].w[0] + 16348u), c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00481518:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00481540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481530u); set32(c.r[4], 0u + 13u);  if (depth < kMaxDepth) unit_00E0(c, 214u, depth + 1u); else { c.pc = 0x00481430u; return; } if (c.pc != 0x00481530u) [[unlikely]] return; }
L_00481530:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], 0u + 10u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00481430u | kUnwind; return; } goto L_00481430; }
L_00481540:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00481430u | kUnwind; return; } goto L_00481430; }
L_00481550:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] << 1;
    c.r[6].d[0] = c.r[2].d[0] >> 53;
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-1075ll);
    c.r[2].d[0] = c.r[6].sd[0] < -53ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[6].sd[0] < 13ll ? 1ull : 0ull;  if (t) { goto L_00481574; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00481574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] << 12;  if (t) { goto L_00481584; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 9999u);  c.pc = t; return; }
L_00481584:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 37;
    c.r[5].d[0] = c.r[2].d[0] >> 12;
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] >= 0; c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];  if (t) { goto L_004815C8; } }
    c.r[6].d[0] = 0ull - c.r[6].d[0];
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-2ll);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] >> (c.r[3].w[0] & 63u);
    c.r[4].d[0] = c.r[5].d[0] & 3ull;
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[5].d[0] >> 2;  goto L_004815D4; }
    c.r[2].d[0] = c.r[5].d[0] >> 2;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004815D4; } }
L_004815C8:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] << (c.r[2].w[0] & 63u);
    c.budget -= 3;
L_004815D4:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  c.pc = t; return; }
L_004815E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0048162C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00481790; } }
L_0048162C:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048163Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x0048163Cu) [[unlikely]] return; }
L_0048163C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00481670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048164Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0048164Cu) [[unlikely]] return; }
L_0048164C:
    set32(c.r[20], 0u + 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[21].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00481664u); set32(c.r[6], 0u + 45u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00481664u) [[unlikely]] return; }
L_00481664:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_00481670:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] - 488u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481680u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x00481680u) [[unlikely]] return; }
L_00481680:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[19].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_004816C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004816A4; } }
L_00481690:
    c.r[5].d[0] = 0ull | 32840ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004816A0u); set32(c.r[18], c.r[18].w[0] - 1u);  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x004816A0u) [[unlikely]] return; }
L_004816A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004816A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] - 480u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004816B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x004816B4u) [[unlikely]] return; }
L_004816B4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481690u | kUnwind; return; } goto L_00481690; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00481714; } }
L_004816C4:
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004816D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x004816D4u) [[unlikely]] return; }
L_004816D4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[19].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_00481714; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004816FC; } }
    c.budget -= 1;
L_004816E8:
    c.r[5].d[0] = 0ull | 32840ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004816F8u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0040(c, 226u, depth + 1u); else { c.pc = 0x002028F8u; return; } if (c.pc != 0x004816F8u) [[unlikely]] return; }
L_004816F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004816FC:
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048170Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x0048170Cu) [[unlikely]] return; }
L_0048170C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004816E8u | kUnwind; return; } goto L_004816E8; } }
L_00481714:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] - 472u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481724u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x00481724u) [[unlikely]] return; }
L_00481724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048172Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 11u, depth + 1u); else { c.pc = 0x00488470u; return; } if (c.pc != 0x0048172Cu) [[unlikely]] return; }
L_0048172C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481734u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 220u, depth + 1u); else { c.pc = 0x00481550u; return; } if (c.pc != 0x00481734u) [[unlikely]] return; }
L_00481734:
    set32(c.r[7], c.r[19].w[0] - 512u);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048174Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 323u, depth + 1u); else { c.pc = 0x00482578u; return; } if (c.pc != 0x0048174Cu) [[unlikely]] return; }
L_0048174C:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0; set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_0048176C; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 504u);  if (t) { goto L_00481780; } }
L_0048176C:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 496u);
    c.budget -= 5;
L_00481780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481788u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 323u, depth + 1u); else { c.pc = 0x00482578u; return; } if (c.pc != 0x00481788u) [[unlikely]] return; }
L_00481788:
    set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_00481790:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004817B8:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 256u), c.r[30].d[0]);
    set32(c.r[2], c.r[29].w[0] + 31u);
    st64((c.r[29].w[0] + 224u), c.r[22].d[0]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 272u), c.r[31].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 240u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 208u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[16].d[0]);
    st32((c.r[29].w[0] + 64u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[22].w[0]));
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 88u), 0u);  if (t) { goto L_0048247C; } }
    set32(c.r[3], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 2;
L_00481818:
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 37u);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 84u), 0u);  if (t) { goto L_00482434; } }
L_00481838:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[5].d[0] = ld8((c.r[22].w[0]));
    set32(c.r[2], c.r[5].w[0] - 32u);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(89ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00481F84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 416u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00480000u < 16384u) { entry = entries_00E0[(t - 0x00480000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00481874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481838u | kUnwind; return; } goto L_00481838; } }
L_0048187C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 2ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481838u | kUnwind; return; } goto L_00481838; } }
L_00481884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 4ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481838u | kUnwind; return; } goto L_00481838; } }
L_0048188C:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 10u);
    c.budget -= 3;
L_00481898:
    mmi::mult(c, 0, c.r[16].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] << 24);
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    c.r[5].d[0] = ld8((c.r[22].w[0]));
    set32(c.r[4], c.r[4].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481898u | kUnwind; return; } goto L_00481898; } }
    st32((c.r[29].w[0] + 80u), c.r[16].w[0]);
    c.budget -= 1;
L_004818C4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_00482464; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[22].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481838u | kUnwind; return; } goto L_00481838; } }
L_004818D4:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[21].d[0] = c.r[21].d[0] | 32ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    set32(c.r[2], 0u + 42u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_00481908; } }
    set32(c.r[30], c.r[30].w[0] + 8u);
    set32(c.r[2], 0u - 2u);
    set32(c.r[16], ld32((c.r[30].w[0] - 8u)));
    set32(c.r[8], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481838u | kUnwind; return; } goto L_00481838; } }
L_00481908:
    set32(c.r[2], c.r[5].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00481948; } }
    set32(c.r[6], 0u + 10u);
    c.budget -= 2;
L_00481920:
    mmi::mult(c, 0, c.r[16].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] << 24);
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    c.r[5].d[0] = ld8((c.r[22].w[0]));
    set32(c.r[4], c.r[4].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481920u | kUnwind; return; } goto L_00481920; } }
L_00481948:
    set32(c.r[2], 0u - 2u);
    set32(c.r[8], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004818C4u | kUnwind; return; } goto L_004818C4; } }
L_0048195C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 8ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481838u | kUnwind; return; } goto L_00481838; } }
L_00481964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 16ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481838u | kUnwind; return; } goto L_00481838; } }
L_0048196C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 64ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481838u | kUnwind; return; } goto L_00481838; } }
L_00481974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 128ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481838u | kUnwind; return; } goto L_00481838; } }
L_0048197C:
    c.r[2].d[0] = c.r[21].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 128ull;  if (t) { goto L_00481994; } }
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[30].w[0] - 8u));  if (t) { goto L_004819A8; } }
L_00481994:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[30], c.r[30].w[0] + 8u);  if (t) { goto L_004819A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[30].w[0] - 8u));  if (t) { goto L_004819A8; } }
L_004819A4:
    c.r[16].d[0] = ld32((c.r[30].w[0] - 8u));
    c.budget -= 1;
L_004819A8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_004819D8; } }
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_004819C4; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_00481A1C; } }
L_004819C4:
    set32(c.r[23], c.r[22].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_00481A20; } }
L_004819D8:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[3].d[0] = c.r[21].d[0] & 16ull;
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 4;
L_004819E8:
    c.r[2].d[0] = c.r[16].d[0] & 7ull;
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[16].d[0] = c.r[16].d[0] >> 3;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004819E8u | kUnwind; return; } goto L_004819E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_00481A24; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_00481A24; } }
L_00481A1C:
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 1;
L_00481A20:
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 1;
L_00481A24:
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + 1u);  if (t) { goto L_00481FB4; } }
L_00481A30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].d[0] = c.r[21].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 464u);  if (t) { goto L_00481A84; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], 0u + 120u);
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_00481A84; } }
L_00481A5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].d[0] = c.r[21].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 440u);  if (t) { goto L_00481A84; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], 0u + 88u);
    set32(c.r[5], 0u + 2u);
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 84u), c.r[5].w[0]);
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00481A84:
    c.r[2].d[0] = c.r[21].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 128ull;  if (t) { goto L_00481A9C; } }
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[30].w[0] - 8u));  if (t) { goto L_00481AB0; } }
L_00481A9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[30], c.r[30].w[0] + 8u);  if (t) { goto L_00481AAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[30].w[0] - 8u));  if (t) { goto L_00481AB0; } }
L_00481AAC:
    c.r[16].d[0] = ld32((c.r[30].w[0] - 8u));
    c.budget -= 1;
L_00481AB0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_00481AE4; } }
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 84u), 0u);  if (t) { goto L_00481ACC; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_00481CE0; } }
L_00481ACC:
    set32(c.r[2], 0u + 48u);
    set32(c.r[23], c.r[22].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_00481CE4; } }
L_00481AE4:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 3;
L_00481AF0:
    c.r[2].d[0] = c.r[16].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[16].d[0] = c.r[16].d[0] >> 4;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481AF0u | kUnwind; return; } goto L_00481AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_00481CEC; } }
L_00481B1C:
    c.r[2].d[0] = c.r[21].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 128ull;  if (t) { goto L_00481B34; } }
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[30].w[0] - 8u));  if (t) { goto L_00481B48; } }
L_00481B34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[30], c.r[30].w[0] + 8u);  if (t) { goto L_00481B44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[30].w[0] - 8u)));  if (t) { goto L_00481B48; } }
L_00481B44:
    set32(c.r[16], ld32((c.r[30].w[0] - 8u)));
    c.budget -= 1;
L_00481B48:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_00481B80; } }
    c.r[2].d[0] = c.r[21].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 43u);  if (t) { goto L_00481B68; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_00481B8C; } }
L_00481B68:
    c.r[2].d[0] = c.r[21].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_00481B90; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.r[4].w[0]);  if (t) { goto L_00481B8C; } }
L_00481B80:
    set32(c.r[2], 0u + 45u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0] + 84u), c.r[5].w[0]);
    c.budget -= 3;
L_00481B8C:
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00481B90:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00481BC4; } }
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_00481BAC; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_00481C20; } }
L_00481BAC:
    set32(c.r[2], 0u + 48u);
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    set32(c.r[17], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00481C24; } }
L_00481BC4:
    c.r[3].d[0] = 0ull - c.r[16].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_00481C20; } }
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 2;
L_00481BE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481BF0u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_00E2(c, 43u, depth + 1u); else { c.pc = 0x004886F0u; return; } if (c.pc != 0x00481BF0u) [[unlikely]] return; }
L_00481BF0:
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481C08u); st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00E1(c, 466u, depth + 1u); else { c.pc = 0x00487D20u; return; } if (c.pc != 0x00481C08u) [[unlikely]] return; }
L_00481C08:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481BE0u | kUnwind; return; } goto L_00481BE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_00481C2C; } }
L_00481C20:
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 1;
L_00481C24:
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 2;
L_00481C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + 1u);  if (t) { goto L_00481FB4; } }
L_00481C34:
    c.r[2].d[0] = c.r[21].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 128ull;  if (t) { goto L_00481C4C; } }
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[30].w[0] - 8u));  if (t) { goto L_00481C60; } }
L_00481C4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[30], c.r[30].w[0] + 8u);  if (t) { goto L_00481C5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[30].w[0] - 8u));  if (t) { goto L_00481C60; } }
L_00481C5C:
    c.r[16].d[0] = ld32((c.r[30].w[0] - 8u));
    c.budget -= 1;
L_00481C60:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_00481C90; } }
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_00481C7C; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_00481CE0; } }
L_00481C7C:
    set32(c.r[23], c.r[22].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_00481CE4; } }
L_00481C90:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 4;
L_00481CA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481CB0u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_00E2(c, 45u, depth + 1u); else { c.pc = 0x00489328u; return; } if (c.pc != 0x00481CB0u) [[unlikely]] return; }
L_00481CB0:
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481CC8u); st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00E2(c, 44u, depth + 1u); else { c.pc = 0x00488D58u; return; } if (c.pc != 0x00481CC8u) [[unlikely]] return; }
L_00481CC8:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481CA0u | kUnwind; return; } goto L_00481CA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_00481CEC; } }
L_00481CE0:
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 1;
L_00481CE4:
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 2;
L_00481CEC:
    set32(c.r[18], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] - c.r[17].w[0]);  if (t) { goto L_00481FB8; } }
L_00481CF8:
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481D04u); c.r[4].d[0] = ld64((c.r[30].w[0] - 8u));  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x00481D04u) [[unlikely]] return; }
L_00481D04:
    c.f[12] = c.f[0];
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (t) { goto L_00481D2C; } }
    set32(c.r[6], 0u + 48u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_00482444; } }
L_00481D2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481D34u); set32(c.r[23], c.r[22].w[0] + 1u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x00481D34u) [[unlikely]] return; }
L_00481D34:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481D48u); set32(c.r[6], ld32((c.r[29].w[0] + 92u)));  if (depth < kMaxDepth) unit_00E0(c, 223u, depth + 1u); else { c.pc = 0x004815E0u; return; } if (c.pc != 0x00481D48u) [[unlikely]] return; }
L_00481D48:
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[5].w[0]);
    c.budget -= 3;
L_00481D54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_00482464; } }
L_00481D5C:
    set32(c.r[30], c.r[30].w[0] + 8u);
    set32(c.r[3], ld32((c.r[30].w[0] - 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[21].d[0] & 32ull;  if (t) { goto L_00481DF0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 40u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00481D84u); set32(c.r[23], c.r[22].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00481D84u) [[unlikely]] return; }
L_00481D84:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 110u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00481D98u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00481D98u) [[unlikely]] return; }
L_00481D98:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 117u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00481DACu); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00481DACu) [[unlikely]] return; }
L_00481DAC:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 108u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00481DC0u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00481DC0u) [[unlikely]] return; }
L_00481DC0:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 108u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00481DD4u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00481DD4u) [[unlikely]] return; }
L_00481DD4:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 41u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00481DE8u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00481DE8u) [[unlikely]] return; }
L_00481DE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_00482464; } }
L_00481DF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00481E50; } }
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00481E3C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00481E3C; } }
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 3;
L_00481E18:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00481E98; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481E18u | kUnwind; return; } goto L_00481E18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00481FB8; } }
L_00481E3C:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00481E98; } }
L_00481E50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00481E8C; } }
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 3;
L_00481E68:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481E68u | kUnwind; return; } goto L_00481E68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00481FB8; } }
L_00481E8C:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 3;
L_00481E98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00481FB8; } }
L_00481EA0:
    set32(c.r[30], c.r[30].w[0] + 8u);
    set32(c.r[17], ld32((c.r[29].w[0] + 76u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] - 8u)));
    c.r[21].d[0] = c.r[21].d[0] | 256ull;
    set32(c.r[8], 0u + 1u);
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + 1u);  if (t) { goto L_00481FB4; } }
L_00481ED8:
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = ld32((c.r[30].w[0] - 8u));
    set32(c.r[4], c.r[2].w[0] - 464u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_00481F18; } }
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_00481F04; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_00481F54; } }
L_00481F04:
    set32(c.r[23], c.r[22].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_00481F58; } }
L_00481F18:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 4;
L_00481F28:
    c.r[2].d[0] = c.r[16].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[16].d[0] = c.r[16].d[0] >> 4;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481F28u | kUnwind; return; } goto L_00481F28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_00481F60; } }
L_00481F54:
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 1;
L_00481F58:
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    set32(c.r[2], 0u + 48u);
    c.budget -= 2;
L_00481F60:
    set32(c.r[3], 0u + 120u);
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] - c.r[17].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_00481FB8; } }
L_00481F84:
    set32(c.r[2], c.r[6].w[0] << 24);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_00482460; } }
    c.r[21].d[0] = c.r[21].d[0] | 256ull;
    set32(c.r[8], 0u + 1u);
    set32(c.r[23], c.r[22].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[18], c.r[17].w[0] + 1u);
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 9;
L_00481FB4:
    set32(c.r[4], c.r[5].w[0] - c.r[17].w[0]);
    c.budget -= 1;
L_00481FB8:
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] - c.r[4].w[0]);
    if (c.r[2].d[0] == 0) c.r[8].d[0] = 0ull;
    set32(c.r[3], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[17], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    c.budget -= 12;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_00482004; } }
    c.r[2].d[0] = c.r[21].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], 0u + 32u);  if (t) { goto L_00482024; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].sd[0] < 1ll ? 1ull : 0ull;  if (t) { goto L_00482020; } }
L_00482004:
    c.r[3].d[0] = c.r[21].d[0] & 36ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[7], 0u + 32u);  if (t) { goto L_00482024; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[3], 0u + 48u);
    c.r[2].d[0] = c.r[5].sd[0] < 1ll ? 1ull : 0ull;
    c.budget -= 3;
L_00482020:
    if (c.r[2].d[0] == 0) c.r[7].d[0] = c.r[3].d[0];
    c.budget -= 1;
L_00482024:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  if (t) { goto L_00482130; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00482084; } }
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00482040:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00482060u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00482060u) [[unlikely]] return; }
L_00482060:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00482040u | kUnwind; return; } goto L_00482040; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00482088; } }
L_00482084:
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00482088:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_004820C0; } }
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 2;
L_00482098:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 48u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004820B0u); set32(c.r[16], c.r[16].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004820B0u) [[unlikely]] return; }
L_004820B0:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00482098u | kUnwind; return; } goto L_00482098; } }
L_004820C0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_004820F8; } }
L_004820C8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004820E0u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004820E0u) [[unlikely]] return; }
L_004820E0:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004820C8u | kUnwind; return; } goto L_004820C8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 1;
L_004820F8:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481D54u | kUnwind; return; } goto L_00481D54; } }
L_00482100:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 32u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00482118u); set32(c.r[16], c.r[16].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00482118u) [[unlikely]] return; }
L_00482118:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00482100u | kUnwind; return; } goto L_00482100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_00482464; } }
L_00482130:
    c.r[2].d[0] = c.r[21].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_00482314; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[5], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_004821F8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004821A4; } }
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00482158:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048217Cu); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048217Cu) [[unlikely]] return; }
L_0048217C:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    st32((c.r[29].w[0] + 88u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00482158u | kUnwind; return; } goto L_00482158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_004821AC; } }
L_004821A4:
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 2;
L_004821AC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004822A4; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004821B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004821D8u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004821D8u) [[unlikely]] return; }
L_004821D8:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004821B8u | kUnwind; return; } goto L_004821B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004822A4; } }
L_004821F8:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00482250; } }
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00482208:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00482228u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00482228u) [[unlikely]] return; }
L_00482228:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    st32((c.r[29].w[0] + 88u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00482208u | kUnwind; return; } goto L_00482208; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  if (t) { goto L_00482258; } }
L_00482250:
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 2;
L_00482258:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004822A4; } }
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_00482268:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00482288u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00482288u) [[unlikely]] return; }
L_00482288:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00482268u | kUnwind; return; } goto L_00482268; } }
L_004822A4:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_004822D8; } }
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_004822B0:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 48u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004822C8u); set32(c.r[16], c.r[16].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004822C8u) [[unlikely]] return; }
L_004822C8:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004822B0u | kUnwind; return; } goto L_004822B0; } }
L_004822D8:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[5].d[0] = ld8((c.r[22].w[0]));  goto L_00482464; }
L_004822E0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004822F8u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004822F8u) [[unlikely]] return; }
L_004822F8:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004822E0u | kUnwind; return; } goto L_004822E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_00482464; } }
L_00482314:
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00482370; } }
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00482328:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00482348u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00482348u) [[unlikely]] return; }
L_00482348:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    st32((c.r[29].w[0] + 88u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00482328u | kUnwind; return; } goto L_00482328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  if (t) { goto L_00482378; } }
L_00482370:
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 2;
L_00482378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004823C4; } }
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_00482388:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004823A8u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004823A8u) [[unlikely]] return; }
L_004823A8:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00482388u | kUnwind; return; } goto L_00482388; } }
L_004823C4:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_004823F8; } }
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_004823D0:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 48u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004823E8u); set32(c.r[16], c.r[16].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004823E8u) [[unlikely]] return; }
L_004823E8:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004823D0u | kUnwind; return; } goto L_004823D0; } }
L_004823F8:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[5].d[0] = ld8((c.r[22].w[0]));  goto L_00482464; }
L_00482400:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00482418u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00482418u) [[unlikely]] return; }
L_00482418:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00482400u | kUnwind; return; } goto L_00482400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_00482464; } }
L_00482434:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (t) { goto L_00482460; } }
    set32(c.r[23], c.r[22].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 2;
L_00482444:
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00482450u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00482450u) [[unlikely]] return; }
L_00482450:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481D54u | kUnwind; return; } goto L_00481D54; } }
L_00482460:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_00482464:
    if (c.r[5].d[0] != 0) c.r[22].d[0] = c.r[23].d[0];
    c.r[2].d[0] = ld8((c.r[22].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00481818u | kUnwind; return; } goto L_00481818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (t) { goto L_00482488; } }
L_0048247C:
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 92u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
L_00482488:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00482498u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00482498u) [[unlikely]] return; }
L_00482498:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 256u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 240u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 224u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_004824D0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004824E4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_004824E4:
    c.r[2].d[0] = c.r[6].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[7].w[0])));  goto L_0048251C; }
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[4], ld32((c.r[7].w[0])));
    if (c.r[2].d[0] == 0) c.r[6].d[0] = 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0048251C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00482528:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00482540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482540u);  if (depth < kMaxDepth) unit_00E0(c, 216u, depth + 1u); else { c.pc = 0x00481468u; return; } if (c.pc != 0x00482540u) [[unlikely]] return; }
L_00482540:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00482550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00482568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482568u);  if (depth < kMaxDepth) unit_00E0(c, 218u, depth + 1u); else { c.pc = 0x00481518u; return; } if (c.pc != 0x00482568u) [[unlikely]] return; }
L_00482568:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00482578:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[8].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[8], c.r[29].w[0] + 96u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    st64((c.r[29].w[0] + 104u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[10].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004825A4u); st64((c.r[29].w[0] + 120u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_00E0(c, 240u, depth + 1u); else { c.pc = 0x004817B8u; return; } if (c.pc != 0x004825A4u) [[unlikely]] return; }
L_004825A4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004825C8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 104u), c.r[7].d[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[8].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[9].d[0]);
    set32(c.r[4], c.r[4].w[0] + 9424u);
    st64((c.r[29].w[0] + 128u), c.r[10].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 136u), c.r[11].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482604u); set32(c.r[8], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_00E0(c, 240u, depth + 1u); else { c.pc = 0x004817B8u; return; } if (c.pc != 0x00482604u) [[unlikely]] return; }
L_00482604:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00482610:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 168u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 184u), c.r[11].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482648u); st32((c.r[29].w[0]), 0u);  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x00482648u) [[unlikely]] return; }
L_00482648:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9512u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048266Cu); set32(c.r[8], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_00E0(c, 240u, depth + 1u); else { c.pc = 0x004817B8u; return; } if (c.pc != 0x0048266Cu) [[unlikely]] return; }
L_0048266C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00482680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048267Cu);  if (depth < kMaxDepth) unit_00E1(c, 219u, depth + 1u); else { c.pc = 0x00486008u; return; } if (c.pc != 0x0048267Cu) [[unlikely]] return; }
L_0048267C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00482680:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00482690:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 168u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 184u), c.r[11].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004826C8u); st32((c.r[29].w[0]), 0u);  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x004826C8u) [[unlikely]] return; }
L_004826C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9552u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004826ECu); set32(c.r[8], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_00E0(c, 240u, depth + 1u); else { c.pc = 0x004817B8u; return; } if (c.pc != 0x004826ECu) [[unlikely]] return; }
L_004826EC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00482700; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004826FCu);  if (depth < kMaxDepth) unit_00E1(c, 219u, depth + 1u); else { c.pc = 0x00486008u; return; } if (c.pc != 0x004826FCu) [[unlikely]] return; }
L_004826FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00482700:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00482710:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00482730:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  c.pc = t; return; }
L_00482740:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 30720u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_00482758:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 216u);
    c.budget -= 4;
L_00482768:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482788u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x00482788u) [[unlikely]] return; }
L_00482788:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[10].w[0] + 16352u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00780000u);  if (t) { goto L_004827B8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 96u);  [[clang::musttail]] return unit_00E1(c, 219u, depth); }
L_004827B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], c.r[5].w[0] - 31232u);
    set32(c.r[6], c.r[19].w[0] - 31360u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[3], 0u + 1u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[2], c.r[18].w[0] - 31144u);
    st32((c.r[10].w[0] + 16352u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 30720u);
    set32(c.r[8], c.r[9].w[0] - 31104u);
    st32((c.r[18].w[0] - 31144u), c.r[6].w[0]);
    set32(c.r[7], 0u + 32u);
    st32((c.r[2].w[0] + 28u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[4], c.r[3].w[0] + 384u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00780000u);
    st32((c.r[2].w[0] + 12u), c.r[8].w[0]);
    c.budget -= 24;
L_00482818:
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 2;
L_00482820:
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00482820u | kUnwind; return; } goto L_00482820; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[16], 0u + 31u);
    set32(c.r[2], c.r[2].w[0] - 30720u);
    set32(c.r[2], c.r[2].w[0] + 124u);
    c.budget -= 5;
L_00482850:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00482850u | kUnwind; return; } goto L_00482850; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 10032u);
    set32(c.r[4], c.r[9].w[0] - 31104u);
    set32(c.r[3], c.r[3].w[0] + 10000u);
    set32(c.r[17], c.r[18].w[0] - 31144u);
    st32((c.r[9].w[0] - 31104u), c.r[2].w[0]);
    set32(c.r[16], 0u + 32u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048289Cu); st32((c.r[4].w[0] + 4u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00E1(c, 219u, depth + 1u); else { c.pc = 0x00486008u; return; } if (c.pc != 0x0048289Cu) [[unlikely]] return; }
L_0048289C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004828A4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x004828A4u) [[unlikely]] return; }
L_004828A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 57360ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_004828C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 8176u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 3;
L_004828C8:
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_004828E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004828E4u);  if (depth < kMaxDepth) unit_00E0(c, 73u, depth + 1u); else { c.pc = 0x00480240u; return; } if (c.pc != 0x004828E4u) [[unlikely]] return; }
L_004828E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 1;
L_004828E8:
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] + 11424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004828F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 299u, depth + 1u); else { c.pc = 0x0047FB70u; return; } if (c.pc != 0x004828F8u) [[unlikely]] return; }
L_004828F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482908u); st32((c.r[3].w[0] - 31148u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00E0(c, 144u, depth + 1u); else { c.pc = 0x004809B0u; return; } if (c.pc != 0x00482908u) [[unlikely]] return; }
L_00482908:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482914u);  if (depth < kMaxDepth) unit_00E0(c, 79u, depth + 1u); else { c.pc = 0x00480270u; return; } if (c.pc != 0x00482914u) [[unlikely]] return; }
L_00482914:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0048295C; } }
    set32(c.r[5], c.r[20].w[0] - 31168u);
    set32(c.r[2], c.r[19].w[0] - 31360u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[6], 0u + 20u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[5].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 16;
    { set32(c.r[29], c.r[29].w[0] + 96u);  goto L_00482C20; }
L_0048295C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 1;
L_00482960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482968u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_00E0(c, 79u, depth + 1u); else { c.pc = 0x00480270u; return; } if (c.pc != 0x00482968u) [[unlikely]] return; }
L_00482968:
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00482960u | kUnwind; return; } goto L_00482960; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048297Cu); set32(c.r[16], c.r[18].w[0] - 31144u);  if (depth < kMaxDepth) unit_00E0(c, 79u, depth + 1u); else { c.pc = 0x00480270u; return; } if (c.pc != 0x0048297Cu) [[unlikely]] return; }
L_0048297C:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048298Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 77u, depth + 1u); else { c.pc = 0x00480260u; return; } if (c.pc != 0x0048298Cu) [[unlikely]] return; }
L_0048298C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048299Cu); c.r[4].d[0] = c.r[4].d[0] | 1ull;  if (depth < kMaxDepth) unit_00E0(c, 77u, depth + 1u); else { c.pc = 0x00480260u; return; } if (c.pc != 0x0048299Cu) [[unlikely]] return; }
L_0048299C:
    set32(c.r[3], c.r[20].w[0] - 31168u);
    set32(c.r[2], c.r[19].w[0] - 31360u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[6], 0u + 20u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 12u), 0u);
    c.budget -= 19;
    { set32(c.r[29], c.r[29].w[0] + 96u);  goto L_00482C20; }
L_004829E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004829F8u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_00E0(c, 140u, depth + 1u); else { c.pc = 0x00480948u; return; } if (c.pc != 0x004829F8u) [[unlikely]] return; }
L_004829F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482A08u); set32(c.r[5], ld32((c.r[3].w[0] - 31148u)));  if (depth < kMaxDepth) unit_00DF(c, 303u, depth + 1u); else { c.pc = 0x0047FB90u; return; } if (c.pc != 0x00482A08u) [[unlikely]] return; }
L_00482A08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 16352u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00482A20:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00482A64; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[5], 0u + 12u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] - 31144u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    c.r[5].d[0] = c.r[28].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_00482A8C; } }
L_00482A64:
    set32(c.r[3], 0u + 12u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - 31144u);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    c.r[5].d[0] = c.r[28].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 10;
L_00482A8C:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 8u), c.r[5].w[0]);  c.pc = t; return; }
L_00482A98:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[2], 0u + 12u);  if (t) { goto L_00482ACC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[5], 0u + 12u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] - 31132u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0]), 0u);  c.pc = t; return; }
L_00482ACC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[4].w[0] - 31124u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0]), 0u);  c.pc = t; return; }
L_00482AE8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], c.r[17].w[0] - 16u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(97ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_00482B30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00482BFC; } }
L_00482B30:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00482B78; } }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], c.r[5].w[0] << 8);
    st32((c.r[16].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[18], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[19].d[0] & 4ull;
    st32((c.r[29].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 12u), 0u);  if (t) { goto L_00482B84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482B70u);  if (depth < kMaxDepth) unit_00E0(c, 374u, depth + 1u); else { c.pc = 0x00482DE8u; return; } if (c.pc != 0x00482B70u) [[unlikely]] return; }
L_00482B70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[18].w[0] << 4);  if (t) { goto L_00482B88; } }
L_00482B78:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00482B84:
    set32(c.r[5], c.r[18].w[0] << 4);
    c.budget -= 1;
L_00482B88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 31136u)));
    set32(c.r[3], c.r[29].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[2], c.r[29].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[29].w[0] + 8u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[20].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], 0u + 68u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482BD8u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_00E0(c, 374u, depth + 1u); else { c.pc = 0x00482DE8u; return; } if (c.pc != 0x00482BD8u) [[unlikely]] return; }
L_00482BD8:
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00482BF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482BECu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 71u, depth + 1u); else { c.pc = 0x00480230u; return; } if (c.pc != 0x00482BECu) [[unlikely]] return; }
L_00482BEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_00482C00; } }
L_00482BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482BFCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 69u, depth + 1u); else { c.pc = 0x00480220u; return; } if (c.pc != 0x00482BFCu) [[unlikely]] return; }
L_00482BFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00482C00:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00482C20:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[9].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482C50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 361u, depth + 1u); else { c.pc = 0x00482AE8u; return; } if (c.pc != 0x00482C50u) [[unlikely]] return; }
L_00482C50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00482C60:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[9].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482C90u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00E0(c, 361u, depth + 1u); else { c.pc = 0x00482AE8u; return; } if (c.pc != 0x00482C90u) [[unlikely]] return; }
L_00482C90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00482CA0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00780000u);
    st64((c.r[29].w[0] + 128u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[17], c.r[3].w[0] - 31144u);
    st64((c.r[29].w[0] + 112u), c.r[16].d[0]);
    set32(c.r[7], ld32((c.r[3].w[0] - 31144u)));
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00482DD4; } }
    set32(c.r[2], c.r[5].w[0] + 15u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[5].w[0] + 30u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] <= 0; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00482D14; } }
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_00482CF8:
    ld128((c.r[6].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00482CF8u | kUnwind; return; } goto L_00482CF8; } }
L_00482D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482D1Cu);  if (depth < kMaxDepth) unit_00E0(c, 75u, depth + 1u); else { c.pc = 0x00480250u; return; } if (c.pc != 0x00482D1Cu) [[unlikely]] return; }
L_00482D1C:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00482D74; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[5].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_00482DC8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00482DC8; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_00482DB0; } }
L_00482D74:
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_00482DC8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00482DC8; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
L_00482DB0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00482DC0u); set32(c.r[5], ld32((c.r[2].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00482DC0u) [[unlikely]] return; }
L_00482DC0:
    c.r[2].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00482DC8:
    set_interrupts(c, true);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00482DD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00482DE8:
    c.r[25].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[25].d[0] = c.r[25].d[0] | 65472ull;
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[10], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_00482E8C; } }
    c.r[8].d[0] = c.r[4].d[0] & c.r[25].d[0];
    set32(c.r[10], c.r[10].w[0] - 1u);
    c.r[9].d[0] = c.r[10].d[0] & c.r[25].d[0];
    set32(c.r[10], c.r[9].w[0] - c.r[8].w[0]);
    set32(c.r[11], c.r[10].w[0] >> 6);
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[9].d[0] = c.r[11].d[0] & 7ull;
    c.budget -= 9;
    { const bool t = c.r[9].d[0] == 0ull; set32(c.r[10], c.r[11].w[0] >> 3);  if (t) { goto L_00482E38; } }
L_00482E1C:
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[9].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00482E1Cu | kUnwind; return; } goto L_00482E1C; } }
L_00482E38:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[10], c.r[10].w[0] - 1u);  if (t) { goto L_00482E8C; } }
    goto L_00482E40;
L_00482E3C:
    set32(c.r[10], c.r[10].w[0] - 1u);
    c.budget -= 1;
L_00482E40:
    c.budget -= 19;
    { const bool t = c.r[10].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 512u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00482E3Cu | kUnwind; return; } goto L_00482E3C; } }
L_00482E8C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00482E94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] - 64u);  c.pc = t; return; }
L_00482E98:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.budget -= 1;
L_00482E9C:
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482EB0u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x00482EB0u) [[unlikely]] return; }
L_00482EB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 16356u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00482ED8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_00E1(c, 219u, depth); }
L_00482ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482EE0u); st32((c.r[3].w[0] + 16356u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00E1(c, 219u, depth + 1u); else { c.pc = 0x00486008u; return; } if (c.pc != 0x00482EE0u) [[unlikely]] return; }
L_00482EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482EE8u);  if (depth < kMaxDepth) unit_00E0(c, 339u, depth + 1u); else { c.pc = 0x00482768u; return; } if (c.pc != 0x00482EE8u) [[unlikely]] return; }
L_00482EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482EF0u);  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x00482EF0u) [[unlikely]] return; }
L_00482EF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[18], c.r[3].w[0] - 30592u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[16], c.r[8].w[0] - 24448u);
    set32(c.r[3], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[6], c.r[6].w[0] - 28544u);
    set32(c.r[7], c.r[7].w[0] - 26496u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] | c.r[2].d[0];
    st32((c.r[8].w[0] - 24448u), c.r[17].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 12696u);
    st32((c.r[16].w[0] + 28u), c.r[7].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482F64u); st32((c.r[16].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_00E0(c, 358u, depth + 1u); else { c.pc = 0x00482A20u; return; } if (c.pc != 0x00482F64u) [[unlikely]] return; }
L_00482F64:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[5].w[0] + 13328u);
    c.r[4].d[0] = c.r[4].d[0] | 9ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482F7Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 358u, depth + 1u); else { c.pc = 0x00482A20u; return; } if (c.pc != 0x00482F7Cu) [[unlikely]] return; }
L_00482F7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[5].w[0] + 13872u);
    c.r[4].d[0] = c.r[4].d[0] | 10ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482F94u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 358u, depth + 1u); else { c.pc = 0x00482A20u; return; } if (c.pc != 0x00482F94u) [[unlikely]] return; }
L_00482F94:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[5].w[0] + 12968u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482FACu); c.r[4].d[0] = c.r[4].d[0] | 12ull;  if (depth < kMaxDepth) unit_00E0(c, 358u, depth + 1u); else { c.pc = 0x00482A20u; return; } if (c.pc != 0x00482FACu) [[unlikely]] return; }
L_00482FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482FB4u);  if (depth < kMaxDepth) unit_00E1(c, 219u, depth + 1u); else { c.pc = 0x00486008u; return; } if (c.pc != 0x00482FB4u) [[unlikely]] return; }
L_00482FB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482FC0u); c.r[4].d[0] = c.r[4].d[0] | 2ull;  if (depth < kMaxDepth) unit_00E0(c, 79u, depth + 1u); else { c.pc = 0x00480270u; return; } if (c.pc != 0x00482FC0u) [[unlikely]] return; }
L_00482FC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00483020; } }
    set32(c.r[5], c.r[18].w[0] + 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[5].w[0] + 12u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482FECu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 366u, depth + 1u); else { c.pc = 0x00482C20u; return; } if (c.pc != 0x00482FECu) [[unlikely]] return; }
L_00482FEC:
    c.budget -= 1;
L_00482FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482FF8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 337u, depth + 1u); else { c.pc = 0x00482740u; return; } if (c.pc != 0x00482FF8u) [[unlikely]] return; }
L_00482FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00482FF0u | kUnwind; return; } goto L_00482FF0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[5], 0u + 1u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00480260u | kUnwind; return; } goto L_00480260; }
L_00483020:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00483038:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483048u);  if (depth < kMaxDepth) unit_00E0(c, 355u, depth + 1u); else { c.pc = 0x004829E8u; return; } if (c.pc != 0x00483048u) [[unlikely]] return; }
L_00483048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 16356u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00483060:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483078u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 216u, depth + 1u); else { c.pc = 0x00485FB8u; return; } if (c.pc != 0x00483078u) [[unlikely]] return; }
L_00483078:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_004830E8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_00483090:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_004830DC; }
    set32(c.r[2], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | 5ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_004830C8; } }
    set32(c.r[2], c.r[2].w[0] + 2u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004830C8:
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004830D4u); st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00E1(c, 219u, depth + 1u); else { c.pc = 0x00486008u; return; } if (c.pc != 0x004830D4u) [[unlikely]] return; }
L_004830D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004830F4; } }
L_004830DC:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00483090u | kUnwind; return; } goto L_00483090; } }
L_004830E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004830F0u);  if (depth < kMaxDepth) unit_00E1(c, 219u, depth + 1u); else { c.pc = 0x00486008u; return; } if (c.pc != 0x004830F0u) [[unlikely]] return; }
L_004830F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004830F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00483108:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_00483128:
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00483138u);  goto L_0048313C; }
L_0048313C:
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 6);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);  c.pc = t; return; }
L_00483158:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00483174; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00483184; }
L_00483174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048317Cu);  if (depth < kMaxDepth) unit_00E0(c, 401u, depth + 1u); else { c.pc = 0x00483128u; return; } if (c.pc != 0x0048317Cu) [[unlikely]] return; }
L_0048317C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00483190; } }
L_00483184:
    set32(c.r[2], c.r[5].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_00483190:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00483198:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 10ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_004831E4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 28u)));  if (t) { goto L_0048322C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 9ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0048321C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (t) { goto L_00483230; } }
L_004831E4:
    set32(c.r[17], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_00483230; }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048320Cu); set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048320Cu) [[unlikely]] return; }
L_0048320C:
    c.r[3].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 28u)));  if (t) { goto L_0048322C; } }
L_0048321C:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_0048322C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_00483230:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_00483240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483240u);  if (depth < kMaxDepth) unit_00DF(c, 399u, depth + 1u); else { c.pc = 0x0047FE90u; return; } if (c.pc != 0x00483240u) [[unlikely]] return; }
L_00483240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483248u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00E0(c, 400u, depth + 1u); else { c.pc = 0x00483108u; return; } if (c.pc != 0x00483248u) [[unlikely]] return; }
L_00483248:
    st32((c.r[17].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00483268:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    set32(c.r[6], 0u + 64u);
    set32(c.r[7], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[8], ld32((c.r[5].w[0] + 40u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483290u); set32(c.r[9], ld32((c.r[5].w[0] + 44u)));  if (depth < kMaxDepth) unit_00E0(c, 368u, depth + 1u); else { c.pc = 0x00482C60u; return; } if (c.pc != 0x00483290u) [[unlikely]] return; }
L_00483290:
    set32(c.r[3], 0u + 2048u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004832A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004832E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004832D8u); set32(c.r[5], c.r[5].w[0] >> 16);  if (depth < kMaxDepth) unit_00E0(c, 402u, depth + 1u); else { c.pc = 0x00483158u; return; } if (c.pc != 0x004832D8u) [[unlikely]] return; }
L_004832D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004832EC; } }
L_004832E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004832E8u);  if (depth < kMaxDepth) unit_00E0(c, 401u, depth + 1u); else { c.pc = 0x00483128u; return; } if (c.pc != 0x004832E8u) [[unlikely]] return; }
L_004832E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004832EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 28u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[9], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483340u); set32(c.r[8], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_00E0(c, 368u, depth + 1u); else { c.pc = 0x00482C60u; return; } if (c.pc != 0x00483340u) [[unlikely]] return; }
L_00483340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00483368; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 12904u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[4], 0u + 2048u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00E1(c, 397u, depth); }
L_00483368:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00483378:
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 2;
L_00483380:
    set32(c.r[5], ld32((c.r[5].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004833C4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 1;
L_00483390:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[5].w[0] + 20u)));  goto L_004833BC; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_004833A0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[3], ld32((c.r[3].w[0] + 56u)));  goto L_004833B0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; return; }
L_004833B0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004833A0u | kUnwind; return; } goto L_004833A0; }
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 1;
L_004833BC:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00483390u | kUnwind; return; } goto L_00483390; }
L_004833C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004833D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004833F8u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 368u, depth + 1u); else { c.pc = 0x00482C60u; return; } if (c.pc != 0x004833F8u) [[unlikely]] return; }
L_004833F8:
    set32(c.r[3], 0u + 2048u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00483410:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483434u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 401u, depth + 1u); else { c.pc = 0x00483128u; return; } if (c.pc != 0x00483434u) [[unlikely]] return; }
L_00483434:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 9ull;
    st32((c.r[18].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483460u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_00E0(c, 415u, depth + 1u); else { c.pc = 0x00483380u; return; } if (c.pc != 0x00483460u) [[unlikely]] return; }
L_00483460:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[18].w[0] + 36u), c.r[2].w[0]);  goto L_00483474; }
    st32((c.r[18].w[0] + 36u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 40u), 0u);  if (t) { goto L_0048347C; } }
L_00483474:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 2;
L_0048347C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048349Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 368u, depth + 1u); else { c.pc = 0x00482C60u; return; } if (c.pc != 0x0048349Cu) [[unlikely]] return; }
L_0048349C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004834C8; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 13264u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[4], 0u + 2048u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_00E1(c, 397u, depth); }
L_004834C8:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004834E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[4], c.r[4].w[0] - 24448u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483518u); st32((c.r[17].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_00E0(c, 395u, depth + 1u); else { c.pc = 0x00483060u; return; } if (c.pc != 0x00483518u) [[unlikely]] return; }
L_00483518:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00483610; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[18].d[0] & 1ull;
    st32((c.r[17].w[0]), c.r[16].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 28u), c.r[17].w[0]);  if (t) { goto L_004835D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 40u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483564u); st32((c.r[29].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_00DF(c, 393u, depth + 1u); else { c.pc = 0x0047FE60u; return; } if (c.pc != 0x00483564u) [[unlikely]] return; }
L_00483564:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0048357C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483574u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 400u, depth + 1u); else { c.pc = 0x00483108u; return; } if (c.pc != 0x00483574u) [[unlikely]] return; }
L_00483574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_00483610; } }
L_0048357C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 9ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048359Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 366u, depth + 1u); else { c.pc = 0x00482C20u; return; } if (c.pc != 0x0048359Cu) [[unlikely]] return; }
L_0048359C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004835BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004835ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 400u, depth + 1u); else { c.pc = 0x00483108u; return; } if (c.pc != 0x004835ACu) [[unlikely]] return; }
L_004835AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004835B4u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00DF(c, 395u, depth + 1u); else { c.pc = 0x0047FE70u; return; } if (c.pc != 0x004835B4u) [[unlikely]] return; }
L_004835B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_00483610; } }
L_004835BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004835C4u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00DF(c, 401u, depth + 1u); else { c.pc = 0x0047FEA0u; return; } if (c.pc != 0x004835C4u) [[unlikely]] return; }
L_004835C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004835CCu); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00DF(c, 395u, depth + 1u); else { c.pc = 0x0047FE70u; return; } if (c.pc != 0x004835CCu) [[unlikely]] return; }
L_004835CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00483610; } }
L_004835D4:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 9ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004835FCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 366u, depth + 1u); else { c.pc = 0x00482C20u; return; } if (c.pc != 0x004835FCu) [[unlikely]] return; }
L_004835FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00483610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048360Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 400u, depth + 1u); else { c.pc = 0x00483108u; return; } if (c.pc != 0x0048360Cu) [[unlikely]] return; }
L_0048360C:
    set32(c.r[2], 0u - 2u);
    c.budget -= 1;
L_00483610:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00483630:
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 16u)));  goto L_0048364C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00483650; } }
L_0048364C:
    st32((c.r[2].w[0] + 60u), c.r[5].w[0]);
    c.budget -= 1;
L_00483650:
    st32((c.r[6].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[5].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[5].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[5].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[5].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    st32((c.r[5].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 20;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_004836B4; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004836B4; } }
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00480BE0u | kUnwind; return; } goto L_00480BE0; }
L_004836B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004836C0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[23].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483718u); set32(c.r[4], c.r[4].w[0] - 24448u);  if (depth < kMaxDepth) unit_00E0(c, 395u, depth + 1u); else { c.pc = 0x00483060u; return; } if (c.pc != 0x00483718u) [[unlikely]] return; }
L_00483718:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00483890; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[16].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[23].w[0]);
    c.r[2].d[0] = c.r[28].d[0] + 0ull;
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[30].d[0] & 2ull;
    st32((c.r[16].w[0] + 32u), c.r[22].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_004837AC; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[20].d[0]; c.r[2].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;  if (t) { goto L_0048378C; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483784u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[18].d[0];  if (depth < kMaxDepth) unit_00E0(c, 374u, depth + 1u); else { c.pc = 0x00482DE8u; return; } if (c.pc != 0x00483784u) [[unlikely]] return; }
L_00483784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[30].d[0] & 1ull;  if (t) { goto L_004837B0; } }
L_0048378C:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0048379C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048379Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 374u, depth + 1u); else { c.pc = 0x00482DE8u; return; } if (c.pc != 0x0048379Cu) [[unlikely]] return; }
L_0048379C:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_004837AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004837ACu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 374u, depth + 1u); else { c.pc = 0x00482DE8u; return; } if (c.pc != 0x004837ACu) [[unlikely]] return; }
L_004837AC:
    c.r[2].d[0] = c.r[30].d[0] & 1ull;
    c.budget -= 1;
L_004837B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_00483804; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004837C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), 0u);  if (t) { goto L_004837CC; } }
L_004837C8:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 1;
L_004837CC:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 20u)));
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 10ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004837F4u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_00E0(c, 366u, depth + 1u); else { c.pc = 0x00482C20u; return; } if (c.pc != 0x004837F4u) [[unlikely]] return; }
L_004837F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00483890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0048386C; } }
L_00483804:
    set32(c.r[19], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 24u);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483820u); st32((c.r[29].w[0] + 4u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_00DF(c, 393u, depth + 1u); else { c.pc = 0x0047FE60u; return; } if (c.pc != 0x00483820u) [[unlikely]] return; }
L_00483820:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00483838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483830u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 400u, depth + 1u); else { c.pc = 0x00483108u; return; } if (c.pc != 0x00483830u) [[unlikely]] return; }
L_00483830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_00483890; } }
L_00483838:
    st32((c.r[16].w[0] + 48u), c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[17].w[0] + 20u)));
    c.r[4].d[0] = c.r[4].d[0] | 10ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048385Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_00E0(c, 366u, depth + 1u); else { c.pc = 0x00482C20u; return; } if (c.pc != 0x0048385Cu) [[unlikely]] return; }
L_0048385C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0048387C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048386Cu); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00DF(c, 395u, depth + 1u); else { c.pc = 0x0047FE70u; return; } if (c.pc != 0x0048386Cu) [[unlikely]] return; }
L_0048386C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483874u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 400u, depth + 1u); else { c.pc = 0x00483108u; return; } if (c.pc != 0x00483874u) [[unlikely]] return; }
L_00483874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_00483890; } }
L_0048387C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483884u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00DF(c, 401u, depth + 1u); else { c.pc = 0x0047FEA0u; return; } if (c.pc != 0x00483884u) [[unlikely]] return; }
L_00483884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048388Cu); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00DF(c, 395u, depth + 1u); else { c.pc = 0x0047FE70u; return; } if (c.pc != 0x0048388Cu) [[unlikely]] return; }
L_0048388C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00483890:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_004838C0:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004838EC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004838EC; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004838F4; } }
L_004838EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004838F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00483900:
    set32(c.r[29], c.r[29].w[0] + 48u);
    set32(c.r[29], c.r[29].w[0] + 64u);
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 6;
L_00483918:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16504u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0048397C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483958u); st32((c.r[29].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DF(c, 393u, depth + 1u); else { c.pc = 0x0047FE60u; return; } if (c.pc != 0x00483958u) [[unlikely]] return; }
L_00483958:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[16].w[0] + 16504u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483970u); st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DF(c, 393u, depth + 1u); else { c.pc = 0x0047FE60u; return; } if (c.pc != 0x00483970u) [[unlikely]] return; }
L_00483970:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[3].w[0] + 16508u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_0048397C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00483988:
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 2;
L_00483990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004839A8u); c.r[17].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (depth < kMaxDepth) unit_00E0(c, 453u, depth + 1u); else { c.pc = 0x00483918u; return; } if (c.pc != 0x004839A8u) [[unlikely]] return; }
L_004839A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004839B0u); set32(c.r[4], ld32((c.r[17].w[0] + 16504u)));  if (depth < kMaxDepth) unit_00DF(c, 401u, depth + 1u); else { c.pc = 0x0047FEA0u; return; } if (c.pc != 0x004839B0u) [[unlikely]] return; }
L_004839B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[16], c.r[3].w[0] - 18944u);
    set32(c.r[3], c.r[16].w[0] + 512u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_004839F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_004839D0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 16u);  goto L_004839EC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 16504u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004839E4u); st32((c.r[16].w[0] + 4u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00DF(c, 397u, depth + 1u); else { c.pc = 0x0047FE80u; return; } if (c.pc != 0x004839E4u) [[unlikely]] return; }
L_004839E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00483A04; } }
L_004839EC:
    c.r[2].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004839D0u | kUnwind; return; } goto L_004839D0; }
L_004839F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483A00u); set32(c.r[4], ld32((c.r[17].w[0] + 16504u)));  if (depth < kMaxDepth) unit_00DF(c, 397u, depth + 1u); else { c.pc = 0x0047FE80u; return; } if (c.pc != 0x00483A00u) [[unlikely]] return; }
L_00483A00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00483A04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00483A18:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 160u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[23].d[0]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[11].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    set32(c.r[17], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 22;
L_00483A70:
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.r[10].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483A98u); c.r[11].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 437u, depth + 1u); else { c.pc = 0x004836C0u; return; } if (c.pc != 0x00483A98u) [[unlikely]] return; }
L_00483A98:
    set32(c.r[16], c.r[2].w[0] >> 31);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 200u)));  if (t) { goto L_00483AD0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1000u);  if (t) { goto L_00483AD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483AB4u); mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]); c.r[4].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_00E0(c, 167u, depth + 1u); else { c.pc = 0x00480C80u; return; } if (c.pc != 0x00483AB4u) [[unlikely]] return; }
L_00483AB4:
    c.r[3].d[0] = c.r[17].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] << 1);  goto L_00483AC0; }
L_00483AC0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 192u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00483A70u | kUnwind; return; } goto L_00483A70; } }
L_00483AD0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00483B08:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483B24u); c.r[17].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (depth < kMaxDepth) unit_00E0(c, 453u, depth + 1u); else { c.pc = 0x00483918u; return; } if (c.pc != 0x00483B24u) [[unlikely]] return; }
L_00483B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483B2Cu); set32(c.r[4], ld32((c.r[17].w[0] + 16504u)));  if (depth < kMaxDepth) unit_00DF(c, 401u, depth + 1u); else { c.pc = 0x0047FEA0u; return; } if (c.pc != 0x00483B2Cu) [[unlikely]] return; }
L_00483B2C:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);  if (t) { goto L_00483B48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483B40u); set32(c.r[4], ld32((c.r[17].w[0] + 16504u)));  if (depth < kMaxDepth) unit_00DF(c, 397u, depth + 1u); else { c.pc = 0x0047FE80u; return; } if (c.pc != 0x00483B40u) [[unlikely]] return; }
L_00483B40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00483B60; } }
L_00483B48:
    set32(c.r[16], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 18944u);
    set32(c.r[4], ld32((c.r[17].w[0] + 16504u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483B5Cu); set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00DF(c, 397u, depth + 1u); else { c.pc = 0x0047FE80u; return; } if (c.pc != 0x00483B5Cu) [[unlikely]] return; }
L_00483B5C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00483B60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00483B78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], ld32((c.r[2].w[0] + 16496u)));
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0] + 32u), c.r[16].d[0]);  if (t) { goto L_00483B98; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_00483B98:
    set32(c.r[3], 0u + 1088u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    st32((c.r[2].w[0] + 16488u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 21120u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[16].d[0] = c.r[3].d[0] | c.r[5].d[0];
    lwl(c.r[2], (c.r[16].w[0] + 3u));
    lwr(c.r[2], (c.r[16].w[0]));
    swl(c.r[2], (c.r[29].w[0] + 3u));
    swr(c.r[2], (c.r[29].w[0]));
    lwl(c.r[6], (c.r[16].w[0] + 7u));
    lwr(c.r[6], (c.r[16].w[0] + 4u));
    swl(c.r[6], (c.r[29].w[0] + 7u));
    swr(c.r[6], (c.r[29].w[0] + 4u));
    lwl(c.r[3], (c.r[16].w[0] + 11u));
    lwr(c.r[3], (c.r[16].w[0] + 8u));
    swl(c.r[3], (c.r[29].w[0] + 11u));
    swr(c.r[3], (c.r[29].w[0] + 8u));
    lwl(c.r[7], (c.r[16].w[0] + 15u));
    lwr(c.r[7], (c.r[16].w[0] + 12u));
    swl(c.r[7], (c.r[29].w[0] + 15u));
    swr(c.r[7], (c.r[29].w[0] + 12u));
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 28;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_00483C14; } }
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483C14u); set32(c.r[6], ld32((c.r[29].w[0] + 12u)));  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x00483C14u) [[unlikely]] return; }
L_00483C14:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(25ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_00483EA8; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00480000u < 16384u) { entry = entries_00E0[(t - 0x00480000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00483C40:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[7], c.r[16].w[0] + 20u);  if (t) { goto L_00483C90; } }
    set32(c.r[8], ld32((c.r[7].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0; c.r[10].d[0] = c.r[8].d[0] | c.r[2].d[0];  if (t) { goto L_00483C90; } }
    set32(c.r[9], c.r[16].w[0] + 36u);
    set32(c.r[2], c.r[9].w[0] + c.r[6].w[0]);
    c.budget -= 2;
L_00483C68:
    set32(c.r[5], c.r[10].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[9].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00483C68u | kUnwind; return; } goto L_00483C68; } }
L_00483C90:
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00483EA8; } }
    set32(c.r[8], ld32((c.r[7].w[0] + 12u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[10].d[0] = c.r[8].d[0] | c.r[2].d[0];  if (t) { goto L_00483EA8; } }
    set32(c.r[9], c.r[7].w[0] + 80u);
    set32(c.r[2], c.r[9].w[0] + c.r[6].w[0]);
    c.budget -= 3;
L_00483CB8:
    set32(c.r[5], c.r[10].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[9].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00483CB8u | kUnwind; return; } goto L_00483CB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_00483EAC; } }
L_00483CE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_00483EAC; } }
    lwl(c.r[4], (c.r[16].w[0] + 23u));
    lwr(c.r[4], (c.r[16].w[0] + 20u));
    swl(c.r[4], (c.r[29].w[0] + 19u));
    swr(c.r[4], (c.r[29].w[0] + 16u));
    set32(c.r[4], c.r[16].w[0] + 24u);
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + 344u);  if (t) { goto L_00483D7C; } }
L_00483D20:
    ldl(c.r[8], (c.r[4].w[0] + 7u));
    ldr(c.r[8], (c.r[4].w[0]));
    ldl(c.r[3], (c.r[4].w[0] + 15u));
    ldr(c.r[3], (c.r[4].w[0] + 8u));
    ldl(c.r[5], (c.r[4].w[0] + 23u));
    ldr(c.r[5], (c.r[4].w[0] + 16u));
    ldl(c.r[7], (c.r[4].w[0] + 31u));
    ldr(c.r[7], (c.r[4].w[0] + 24u));
    sdl(c.r[8], (c.r[6].w[0] + 7u));
    sdr(c.r[8], (c.r[6].w[0]));
    sdl(c.r[3], (c.r[6].w[0] + 15u));
    sdr(c.r[3], (c.r[6].w[0] + 8u));
    sdl(c.r[5], (c.r[6].w[0] + 23u));
    sdr(c.r[5], (c.r[6].w[0] + 16u));
    sdl(c.r[7], (c.r[6].w[0] + 31u));
    sdr(c.r[7], (c.r[6].w[0] + 24u));
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00483D20u | kUnwind; return; } goto L_00483D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00483DB0; } }
L_00483D7C:
    c.r[8].d[0] = ld64((c.r[4].w[0]));
    c.r[3].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[5].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[7].d[0] = ld64((c.r[4].w[0] + 24u));
    st64((c.r[6].w[0]), c.r[8].d[0]);
    st64((c.r[6].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[6].w[0] + 16u), c.r[5].d[0]);
    st64((c.r[6].w[0] + 24u), c.r[7].d[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00483D7Cu | kUnwind; return; } goto L_00483D7C; } }
L_00483DB0:
    lwl(c.r[8], (c.r[4].w[0] + 3u));
    lwr(c.r[8], (c.r[4].w[0]));
    swl(c.r[8], (c.r[6].w[0] + 3u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; swr(c.r[8], (c.r[6].w[0]));  if (t) { goto L_00483EA8; } }
L_00483DC4:
    lwl(c.r[6], (c.r[16].w[0] + 23u));
    lwr(c.r[6], (c.r[16].w[0] + 20u));
    swl(c.r[6], (c.r[29].w[0] + 19u));
    swr(c.r[6], (c.r[29].w[0] + 16u));
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    ldl(c.r[3], (c.r[16].w[0] + 31u));
    ldr(c.r[3], (c.r[16].w[0] + 24u));
    ldl(c.r[4], (c.r[16].w[0] + 39u));
    ldr(c.r[4], (c.r[16].w[0] + 32u));
    ldl(c.r[5], (c.r[16].w[0] + 47u));
    ldr(c.r[5], (c.r[16].w[0] + 40u));
    ldl(c.r[6], (c.r[16].w[0] + 55u));
    ldr(c.r[6], (c.r[16].w[0] + 48u));
    sdl(c.r[3], (c.r[2].w[0] + 7u));
    sdr(c.r[3], (c.r[2].w[0]));
    sdl(c.r[4], (c.r[2].w[0] + 15u));
    sdr(c.r[4], (c.r[2].w[0] + 8u));
    sdl(c.r[5], (c.r[2].w[0] + 23u));
    sdr(c.r[5], (c.r[2].w[0] + 16u));
    sdl(c.r[6], (c.r[2].w[0] + 31u));
    sdr(c.r[6], (c.r[2].w[0] + 24u));
    ldl(c.r[3], (c.r[16].w[0] + 63u));
    ldr(c.r[3], (c.r[16].w[0] + 56u));
    ldl(c.r[4], (c.r[16].w[0] + 71u));
    ldr(c.r[4], (c.r[16].w[0] + 64u));
    ldl(c.r[5], (c.r[16].w[0] + 79u));
    ldr(c.r[5], (c.r[16].w[0] + 72u));
    ldl(c.r[6], (c.r[16].w[0] + 87u));
    ldr(c.r[6], (c.r[16].w[0] + 80u));
    sdl(c.r[3], (c.r[2].w[0] + 39u));
    sdr(c.r[3], (c.r[2].w[0] + 32u));
    sdl(c.r[4], (c.r[2].w[0] + 47u));
    sdr(c.r[4], (c.r[2].w[0] + 40u));
    sdl(c.r[5], (c.r[2].w[0] + 55u));
    sdr(c.r[5], (c.r[2].w[0] + 48u));
    sdl(c.r[6], (c.r[2].w[0] + 63u));
    sdr(c.r[6], (c.r[2].w[0] + 56u));
    c.budget -= 39;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_00483EAC; } }
L_00483E60:
    lwl(c.r[7], (c.r[16].w[0] + 23u));
    lwr(c.r[7], (c.r[16].w[0] + 20u));
    swl(c.r[7], (c.r[29].w[0] + 19u));
    swr(c.r[7], (c.r[29].w[0] + 16u));
    lwl(c.r[4], (c.r[16].w[0] + 27u));
    lwr(c.r[4], (c.r[16].w[0] + 24u));
    swl(c.r[4], (c.r[29].w[0] + 23u));
    swr(c.r[4], (c.r[29].w[0] + 20u));
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_00483EA0; } }
    set32(c.r[2], 0u + 1024u);
    set32(c.r[6], 0u + 1024u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 4;
L_00483EA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483EA8u); set32(c.r[5], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x00483EA8u) [[unlikely]] return; }
L_00483EA8:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_00483EAC:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[7].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_00483F14; } }
    set32(c.r[2], 0u - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 16360u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00483EE0; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[7].w[0] + 16360u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00483F20; } }
    c.budget -= 1;
L_00483EE0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00483EE4:
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] + 16360u);  if (t) { goto L_00483F1C; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00483EE4u | kUnwind; return; } goto L_00483EE4; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00483F20; } }
L_00483F14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483F1Cu);  if (depth < kMaxDepth) unit_00DF(c, 399u, depth + 1u); else { c.pc = 0x0047FE90u; return; } if (c.pc != 0x00483F1Cu) [[unlikely]] return; }
L_00483F1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00483F20:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00483F30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16500u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00483F78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 136u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483F70u); st32((c.r[29].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DF(c, 393u, depth + 1u); else { c.pc = 0x0047FE60u; return; } if (c.pc != 0x00483F70u) [[unlikely]] return; }
L_00483F70:
    st32((c.r[16].w[0] + 16500u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_00483F78:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00483F88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483F98u);  if (depth < kMaxDepth) unit_00E0(c, 485u, depth + 1u); else { c.pc = 0x00483F30u; return; } if (c.pc != 0x00483F98u) [[unlikely]] return; }
L_00483F98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483FA4u); set32(c.r[4], ld32((c.r[2].w[0] + 16500u)));  if (depth < kMaxDepth) unit_00DF(c, 401u, depth + 1u); else { c.pc = 0x0047FEA0u; return; } if (c.pc != 0x00483FA4u) [[unlikely]] return; }
L_00483FA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00483FB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[2].w[0] + 16500u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047FE80u | kUnwind; return; } [[clang::musttail]] return unit_00DF(c, 397u, depth); }
L_00483FC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_00483FF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    set32(c.r[28], ld32((c.r[2].w[0] - 18240u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00483FF0u); set32(c.r[4], ld32((c.r[5].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00483FF0u) [[unlikely]] return; }
L_00483FF0:
    c.r[28].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00483FF4:
    set_interrupts(c, true);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    [[clang::musttail]] return unit_00E1(c, 1u, depth);
}

}
