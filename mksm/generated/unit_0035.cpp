#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0035[4096] = {
    1, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0,
    0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 37,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0,
    0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0,
    0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0,
    68, 0, 69, 0, 70, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 74, 0, 75, 0, 76, 0, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0,
    82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 86, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 100,
    0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 111,
    0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 131,
    0, 0, 0, 0, 132, 0, 0, 0, 133, 134, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 137, 138, 0, 139, 0, 140, 0, 0, 141, 0, 142, 0,
    143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0,
    0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 0, 154, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 160, 0, 161, 0, 162,
    0, 0, 163, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 169, 0, 170, 0, 171, 0, 0, 172, 0, 173, 0, 174, 0, 0,
    0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 182, 0, 0, 183, 0, 184,
    0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 192, 0, 193, 0, 194, 0, 0, 195, 0, 0, 196, 0,
    0, 0, 197, 0, 0, 198, 0, 199, 0, 200, 0, 201, 0, 0, 202, 0, 203, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207,
    0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 212, 0, 213, 0, 0, 214, 0, 215, 0, 216, 0, 217, 0,
    0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 230, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0,
    0, 0, 0, 0, 238, 0, 0, 239, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0,
    0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0,
    0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0,
    0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0,
    0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 296, 0, 0, 0, 0, 0,
    0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0,
    0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0,
    0, 0, 327, 0, 328, 0, 0, 0, 329, 0, 330, 0, 0, 0, 331, 0, 332, 0, 333, 0, 334, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0,
    337, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354,
    0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0,
    0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365,
    0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 382, 0, 383, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0,
    0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0,
    0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0,
    395, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 398, 0, 399, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405,
    0, 0, 0, 406, 0, 407, 0, 408, 0, 409, 0, 0, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 418,
    0, 0, 0, 419, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 424,
    0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0,
    0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 443, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446,
    0, 0, 0, 447, 0, 0, 0, 448, 0, 449, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    453, 0, 0, 454, 0, 455, 0, 456, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0,
    0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 469, 0, 470, 0, 471, 0, 0, 0, 472, 0, 0, 473, 0, 0, 474,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0,
    0, 492, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 504, 0,
    0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 507, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 511, 0, 0, 512, 0, 0, 0, 0, 513,
    0, 0, 0, 0, 514, 0, 515, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0,
    0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0,
    0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 538,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0,
    0, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 545, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0,
    549, 0, 0, 0, 550, 0, 0, 0, 0, 0, 551, 0, 552, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0,
    0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 560, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0,
    563, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 567, 0,
    0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 0, 572, 0, 0, 0, 573, 0, 574, 0, 0, 0, 0, 575,
    0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 582, 0,
    0, 0, 583, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0,
    589, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 593, 594, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 0,
    597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601,
    0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 0,
    0, 607, 0, 0, 0, 0, 0, 608, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0,
};

void unit_0035(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001D4000;
    case 2u: goto L_001D400C;
    case 3u: goto L_001D4010;
    case 4u: goto L_001D4048;
    case 5u: goto L_001D4094;
    case 6u: goto L_001D40A0;
    case 7u: goto L_001D40B8;
    case 8u: goto L_001D40C8;
    case 9u: goto L_001D40E0;
    case 10u: goto L_001D40F4;
    case 11u: goto L_001D4114;
    case 12u: goto L_001D412C;
    case 13u: goto L_001D4154;
    case 14u: goto L_001D4168;
    case 15u: goto L_001D4180;
    case 16u: goto L_001D4194;
    case 17u: goto L_001D419C;
    case 18u: goto L_001D41DC;
    case 19u: goto L_001D41F4;
    case 20u: goto L_001D4204;
    case 21u: goto L_001D4214;
    case 22u: goto L_001D4240;
    case 23u: goto L_001D4254;
    case 24u: goto L_001D4264;
    case 25u: goto L_001D4274;
    case 26u: goto L_001D42A0;
    case 27u: goto L_001D42B0;
    case 28u: goto L_001D42C0;
    case 29u: goto L_001D42D0;
    case 30u: goto L_001D42E0;
    case 31u: goto L_001D4308;
    case 32u: goto L_001D4324;
    case 33u: goto L_001D4334;
    case 34u: goto L_001D4344;
    case 35u: goto L_001D4360;
    case 36u: goto L_001D4368;
    case 37u: goto L_001D437C;
    case 38u: goto L_001D4390;
    case 39u: goto L_001D43B4;
    case 40u: goto L_001D43CC;
    case 41u: goto L_001D43D4;
    case 42u: goto L_001D43F0;
    case 43u: goto L_001D4410;
    case 44u: goto L_001D443C;
    case 45u: goto L_001D4468;
    case 46u: goto L_001D4470;
    case 47u: goto L_001D4478;
    case 48u: goto L_001D4488;
    case 49u: goto L_001D4498;
    case 50u: goto L_001D44A0;
    case 51u: goto L_001D44B0;
    case 52u: goto L_001D44B8;
    case 53u: goto L_001D44D0;
    case 54u: goto L_001D4508;
    case 55u: goto L_001D4568;
    case 56u: goto L_001D45E0;
    case 57u: goto L_001D45F8;
    case 58u: goto L_001D4604;
    case 59u: goto L_001D4624;
    case 60u: goto L_001D4634;
    case 61u: goto L_001D4660;
    case 62u: goto L_001D4688;
    case 63u: goto L_001D4690;
    case 64u: goto L_001D46A8;
    case 65u: goto L_001D46B8;
    case 66u: goto L_001D46DC;
    case 67u: goto L_001D46F8;
    case 68u: goto L_001D4700;
    case 69u: goto L_001D4708;
    case 70u: goto L_001D4710;
    case 71u: goto L_001D471C;
    case 72u: goto L_001D4724;
    case 73u: goto L_001D4734;
    case 74u: goto L_001D473C;
    case 75u: goto L_001D4744;
    case 76u: goto L_001D474C;
    case 77u: goto L_001D4758;
    case 78u: goto L_001D4760;
    case 79u: goto L_001D4768;
    case 80u: goto L_001D4770;
    case 81u: goto L_001D4778;
    case 82u: goto L_001D4780;
    case 83u: goto L_001D4788;
    case 84u: goto L_001D47AC;
    case 85u: goto L_001D47B4;
    case 86u: goto L_001D47BC;
    case 87u: goto L_001D47C4;
    case 88u: goto L_001D47D4;
    case 89u: goto L_001D47DC;
    case 90u: goto L_001D4800;
    case 91u: goto L_001D4840;
    case 92u: goto L_001D4850;
    case 93u: goto L_001D4878;
    case 94u: goto L_001D4880;
    case 95u: goto L_001D4894;
    case 96u: goto L_001D48B0;
    case 97u: goto L_001D48C4;
    case 98u: goto L_001D48D8;
    case 99u: goto L_001D48E4;
    case 100u: goto L_001D48FC;
    case 101u: goto L_001D4904;
    case 102u: goto L_001D4938;
    case 103u: goto L_001D4940;
    case 104u: goto L_001D4970;
    case 105u: goto L_001D498C;
    case 106u: goto L_001D4998;
    case 107u: goto L_001D49A4;
    case 108u: goto L_001D49D0;
    case 109u: goto L_001D49E8;
    case 110u: goto L_001D49F4;
    case 111u: goto L_001D49FC;
    case 112u: goto L_001D4A04;
    case 113u: goto L_001D4A14;
    case 114u: goto L_001D4A24;
    case 115u: goto L_001D4A2C;
    case 116u: goto L_001D4A34;
    case 117u: goto L_001D4A3C;
    case 118u: goto L_001D4A44;
    case 119u: goto L_001D4A50;
    case 120u: goto L_001D4AB8;
    case 121u: goto L_001D4ADC;
    case 122u: goto L_001D4AF0;
    case 123u: goto L_001D4B04;
    case 124u: goto L_001D4B14;
    case 125u: goto L_001D4B24;
    case 126u: goto L_001D4B34;
    case 127u: goto L_001D4B44;
    case 128u: goto L_001D4B54;
    case 129u: goto L_001D4B64;
    case 130u: goto L_001D4B74;
    case 131u: goto L_001D4B7C;
    case 132u: goto L_001D4B90;
    case 133u: goto L_001D4BA0;
    case 134u: goto L_001D4BA4;
    case 135u: goto L_001D4BB0;
    case 136u: goto L_001D4BBC;
    case 137u: goto L_001D4BD0;
    case 138u: goto L_001D4BD4;
    case 139u: goto L_001D4BDC;
    case 140u: goto L_001D4BE4;
    case 141u: goto L_001D4BF0;
    case 142u: goto L_001D4BF8;
    case 143u: goto L_001D4C00;
    case 144u: goto L_001D4C1C;
    case 145u: goto L_001D4C2C;
    case 146u: goto L_001D4C40;
    case 147u: goto L_001D4C54;
    case 148u: goto L_001D4C64;
    case 149u: goto L_001D4C74;
    case 150u: goto L_001D4C88;
    case 151u: goto L_001D4C90;
    case 152u: goto L_001D4C98;
    case 153u: goto L_001D4CA0;
    case 154u: goto L_001D4CAC;
    case 155u: goto L_001D4CB4;
    case 156u: goto L_001D4CBC;
    case 157u: goto L_001D4CC8;
    case 158u: goto L_001D4CD8;
    case 159u: goto L_001D4CE4;
    case 160u: goto L_001D4CEC;
    case 161u: goto L_001D4CF4;
    case 162u: goto L_001D4CFC;
    case 163u: goto L_001D4D08;
    case 164u: goto L_001D4D10;
    case 165u: goto L_001D4D18;
    case 166u: goto L_001D4D24;
    case 167u: goto L_001D4D34;
    case 168u: goto L_001D4D40;
    case 169u: goto L_001D4D48;
    case 170u: goto L_001D4D50;
    case 171u: goto L_001D4D58;
    case 172u: goto L_001D4D64;
    case 173u: goto L_001D4D6C;
    case 174u: goto L_001D4D74;
    case 175u: goto L_001D4D88;
    case 176u: goto L_001D4D9C;
    case 177u: goto L_001D4DAC;
    case 178u: goto L_001D4DBC;
    case 179u: goto L_001D4DD0;
    case 180u: goto L_001D4DD8;
    case 181u: goto L_001D4DE0;
    case 182u: goto L_001D4DE8;
    case 183u: goto L_001D4DF4;
    case 184u: goto L_001D4DFC;
    case 185u: goto L_001D4E04;
    case 186u: goto L_001D4E10;
    case 187u: goto L_001D4E20;
    case 188u: goto L_001D4E2C;
    case 189u: goto L_001D4E34;
    case 190u: goto L_001D4E3C;
    case 191u: goto L_001D4E44;
    case 192u: goto L_001D4E50;
    case 193u: goto L_001D4E58;
    case 194u: goto L_001D4E60;
    case 195u: goto L_001D4E6C;
    case 196u: goto L_001D4E78;
    case 197u: goto L_001D4E88;
    case 198u: goto L_001D4E94;
    case 199u: goto L_001D4E9C;
    case 200u: goto L_001D4EA4;
    case 201u: goto L_001D4EAC;
    case 202u: goto L_001D4EB8;
    case 203u: goto L_001D4EC0;
    case 204u: goto L_001D4EC8;
    case 205u: goto L_001D4ED8;
    case 206u: goto L_001D4EE8;
    case 207u: goto L_001D4EFC;
    case 208u: goto L_001D4F0C;
    case 209u: goto L_001D4F1C;
    case 210u: goto L_001D4F3C;
    case 211u: goto L_001D4F44;
    case 212u: goto L_001D4F4C;
    case 213u: goto L_001D4F54;
    case 214u: goto L_001D4F60;
    case 215u: goto L_001D4F68;
    case 216u: goto L_001D4F70;
    case 217u: goto L_001D4F78;
    case 218u: goto L_001D4F8C;
    case 219u: goto L_001D4FA0;
    case 220u: goto L_001D4FA8;
    case 221u: goto L_001D4FB0;
    case 222u: goto L_001D4FE0;
    case 223u: goto L_001D4FF0;
    case 224u: goto L_001D5020;
    case 225u: goto L_001D5038;
    case 226u: goto L_001D5040;
    case 227u: goto L_001D5048;
    case 228u: goto L_001D5050;
    case 229u: goto L_001D505C;
    case 230u: goto L_001D5088;
    case 231u: goto L_001D5094;
    case 232u: goto L_001D50A4;
    case 233u: goto L_001D50B4;
    case 234u: goto L_001D50C4;
    case 235u: goto L_001D50D4;
    case 236u: goto L_001D50E4;
    case 237u: goto L_001D50EC;
    case 238u: goto L_001D5110;
    case 239u: goto L_001D511C;
    case 240u: goto L_001D5124;
    case 241u: goto L_001D5134;
    case 242u: goto L_001D5148;
    case 243u: goto L_001D5188;
    case 244u: goto L_001D519C;
    case 245u: goto L_001D51B0;
    case 246u: goto L_001D51CC;
    case 247u: goto L_001D5224;
    case 248u: goto L_001D5240;
    case 249u: goto L_001D5278;
    case 250u: goto L_001D52A0;
    case 251u: goto L_001D52D0;
    case 252u: goto L_001D52E0;
    case 253u: goto L_001D52EC;
    case 254u: goto L_001D5310;
    case 255u: goto L_001D533C;
    case 256u: goto L_001D5358;
    case 257u: goto L_001D5398;
    case 258u: goto L_001D53B8;
    case 259u: goto L_001D53D8;
    case 260u: goto L_001D53E4;
    case 261u: goto L_001D5408;
    case 262u: goto L_001D543C;
    case 263u: goto L_001D544C;
    case 264u: goto L_001D5488;
    case 265u: goto L_001D54CC;
    case 266u: goto L_001D54EC;
    case 267u: goto L_001D54FC;
    case 268u: goto L_001D5530;
    case 269u: goto L_001D5550;
    case 270u: goto L_001D5560;
    case 271u: goto L_001D5578;
    case 272u: goto L_001D558C;
    case 273u: goto L_001D55D0;
    case 274u: goto L_001D55E0;
    case 275u: goto L_001D5610;
    case 276u: goto L_001D561C;
    case 277u: goto L_001D5634;
    case 278u: goto L_001D5640;
    case 279u: goto L_001D56A0;
    case 280u: goto L_001D56D4;
    case 281u: goto L_001D56F4;
    case 282u: goto L_001D5708;
    case 283u: goto L_001D574C;
    case 284u: goto L_001D5754;
    case 285u: goto L_001D576C;
    case 286u: goto L_001D578C;
    case 287u: goto L_001D579C;
    case 288u: goto L_001D57B8;
    case 289u: goto L_001D57CC;
    case 290u: goto L_001D57DC;
    case 291u: goto L_001D57F8;
    case 292u: goto L_001D5820;
    case 293u: goto L_001D5838;
    case 294u: goto L_001D5858;
    case 295u: goto L_001D5860;
    case 296u: goto L_001D5868;
    case 297u: goto L_001D588C;
    case 298u: goto L_001D5898;
    case 299u: goto L_001D58B0;
    case 300u: goto L_001D58D8;
    case 301u: goto L_001D58EC;
    case 302u: goto L_001D5904;
    case 303u: goto L_001D5918;
    case 304u: goto L_001D5998;
    case 305u: goto L_001D59A8;
    case 306u: goto L_001D59F8;
    case 307u: goto L_001D5A20;
    case 308u: goto L_001D5A34;
    case 309u: goto L_001D5A4C;
    case 310u: goto L_001D5A60;
    case 311u: goto L_001D5AAC;
    case 312u: goto L_001D5AD4;
    case 313u: goto L_001D5B18;
    case 314u: goto L_001D5B28;
    case 315u: goto L_001D5B78;
    case 316u: goto L_001D5BA0;
    case 317u: goto L_001D5BB4;
    case 318u: goto L_001D5BCC;
    case 319u: goto L_001D5BE0;
    case 320u: goto L_001D5C2C;
    case 321u: goto L_001D5C54;
    case 322u: goto L_001D5C88;
    case 323u: goto L_001D5CC0;
    case 324u: goto L_001D5CD0;
    case 325u: goto L_001D5CD8;
    case 326u: goto L_001D5CF8;
    case 327u: goto L_001D5D08;
    case 328u: goto L_001D5D10;
    case 329u: goto L_001D5D20;
    case 330u: goto L_001D5D28;
    case 331u: goto L_001D5D38;
    case 332u: goto L_001D5D40;
    case 333u: goto L_001D5D48;
    case 334u: goto L_001D5D50;
    case 335u: goto L_001D5D68;
    case 336u: goto L_001D5D70;
    case 337u: goto L_001D5D80;
    case 338u: goto L_001D5D90;
    case 339u: goto L_001D5DA0;
    case 340u: goto L_001D5DB0;
    case 341u: goto L_001D5DB8;
    case 342u: goto L_001D5DD0;
    case 343u: goto L_001D5DE0;
    case 344u: goto L_001D5DF8;
    case 345u: goto L_001D5E10;
    case 346u: goto L_001D5E30;
    case 347u: goto L_001D5EE0;
    case 348u: goto L_001D5EF0;
    case 349u: goto L_001D5F10;
    case 350u: goto L_001D5F24;
    case 351u: goto L_001D5F30;
    case 352u: goto L_001D5F44;
    case 353u: goto L_001D5F5C;
    case 354u: goto L_001D5F7C;
    case 355u: goto L_001D5F88;
    case 356u: goto L_001D5FC0;
    case 357u: goto L_001D5FD4;
    case 358u: goto L_001D5FF0;
    case 359u: goto L_001D600C;
    case 360u: goto L_001D6030;
    case 361u: goto L_001D6098;
    case 362u: goto L_001D61B8;
    case 363u: goto L_001D6378;
    case 364u: goto L_001D63C8;
    case 365u: goto L_001D647C;
    case 366u: goto L_001D648C;
    case 367u: goto L_001D64E8;
    case 368u: goto L_001D6558;
    case 369u: goto L_001D656C;
    case 370u: goto L_001D65B0;
    case 371u: goto L_001D6618;
    case 372u: goto L_001D6648;
    case 373u: goto L_001D6668;
    case 374u: goto L_001D6678;
    case 375u: goto L_001D66A4;
    case 376u: goto L_001D66F0;
    case 377u: goto L_001D66FC;
    case 378u: goto L_001D6730;
    case 379u: goto L_001D6740;
    case 380u: goto L_001D6750;
    case 381u: goto L_001D6768;
    case 382u: goto L_001D6770;
    case 383u: goto L_001D6778;
    case 384u: goto L_001D67D8;
    case 385u: goto L_001D67F4;
    case 386u: goto L_001D6808;
    case 387u: goto L_001D6960;
    case 388u: goto L_001D6984;
    case 389u: goto L_001D6990;
    case 390u: goto L_001D69A8;
    case 391u: goto L_001D69B0;
    case 392u: goto L_001D69D0;
    case 393u: goto L_001D69E4;
    case 394u: goto L_001D69F8;
    case 395u: goto L_001D6A00;
    case 396u: goto L_001D6A24;
    case 397u: goto L_001D6A2C;
    case 398u: goto L_001D6A34;
    case 399u: goto L_001D6A3C;
    case 400u: goto L_001D6A48;
    case 401u: goto L_001D6A58;
    case 402u: goto L_001D6A74;
    case 403u: goto L_001D6ABC;
    case 404u: goto L_001D6AD4;
    case 405u: goto L_001D6AFC;
    case 406u: goto L_001D6B0C;
    case 407u: goto L_001D6B14;
    case 408u: goto L_001D6B1C;
    case 409u: goto L_001D6B24;
    case 410u: goto L_001D6B34;
    case 411u: goto L_001D6B3C;
    case 412u: goto L_001D6B78;
    case 413u: goto L_001D6BD8;
    case 414u: goto L_001D6C18;
    case 415u: goto L_001D6C40;
    case 416u: goto L_001D6C5C;
    case 417u: goto L_001D6C64;
    case 418u: goto L_001D6C7C;
    case 419u: goto L_001D6C8C;
    case 420u: goto L_001D6C94;
    case 421u: goto L_001D6CA4;
    case 422u: goto L_001D6CD8;
    case 423u: goto L_001D6CF4;
    case 424u: goto L_001D6CFC;
    case 425u: goto L_001D6D18;
    case 426u: goto L_001D6D38;
    case 427u: goto L_001D6D84;
    case 428u: goto L_001D6DA0;
    case 429u: goto L_001D6DC4;
    case 430u: goto L_001D6DE8;
    case 431u: goto L_001D6E0C;
    case 432u: goto L_001D6E30;
    case 433u: goto L_001D6E54;
    case 434u: goto L_001D6E6C;
    case 435u: goto L_001D6E74;
    case 436u: goto L_001D6EA8;
    case 437u: goto L_001D6EBC;
    case 438u: goto L_001D6EC4;
    case 439u: goto L_001D6ED4;
    case 440u: goto L_001D6EF0;
    case 441u: goto L_001D6F18;
    case 442u: goto L_001D6F20;
    case 443u: goto L_001D6F28;
    case 444u: goto L_001D6F34;
    case 445u: goto L_001D6F6C;
    case 446u: goto L_001D6F7C;
    case 447u: goto L_001D6F8C;
    case 448u: goto L_001D6F9C;
    case 449u: goto L_001D6FA4;
    case 450u: goto L_001D6FAC;
    case 451u: goto L_001D6FB4;
    case 452u: goto L_001D6FD0;
    case 453u: goto L_001D7000;
    case 454u: goto L_001D700C;
    case 455u: goto L_001D7014;
    case 456u: goto L_001D701C;
    case 457u: goto L_001D7024;
    case 458u: goto L_001D703C;
    case 459u: goto L_001D7070;
    case 460u: goto L_001D70B4;
    case 461u: goto L_001D70D0;
    case 462u: goto L_001D70F8;
    case 463u: goto L_001D7118;
    case 464u: goto L_001D713C;
    case 465u: goto L_001D7150;
    case 466u: goto L_001D7158;
    case 467u: goto L_001D71A4;
    case 468u: goto L_001D71BC;
    case 469u: goto L_001D71C4;
    case 470u: goto L_001D71CC;
    case 471u: goto L_001D71D4;
    case 472u: goto L_001D71E4;
    case 473u: goto L_001D71F0;
    case 474u: goto L_001D71FC;
    case 475u: goto L_001D7224;
    case 476u: goto L_001D723C;
    case 477u: goto L_001D7250;
    case 478u: goto L_001D7288;
    case 479u: goto L_001D72E8;
    case 480u: goto L_001D72F8;
    case 481u: goto L_001D7334;
    case 482u: goto L_001D7348;
    case 483u: goto L_001D7358;
    case 484u: goto L_001D7388;
    case 485u: goto L_001D73C8;
    case 486u: goto L_001D7410;
    case 487u: goto L_001D7434;
    case 488u: goto L_001D7494;
    case 489u: goto L_001D74B0;
    case 490u: goto L_001D74CC;
    case 491u: goto L_001D74E8;
    case 492u: goto L_001D7504;
    case 493u: goto L_001D751C;
    case 494u: goto L_001D7530;
    case 495u: goto L_001D7544;
    case 496u: goto L_001D7580;
    case 497u: goto L_001D75C0;
    case 498u: goto L_001D75E8;
    case 499u: goto L_001D762C;
    case 500u: goto L_001D7640;
    case 501u: goto L_001D7648;
    case 502u: goto L_001D7660;
    case 503u: goto L_001D7670;
    case 504u: goto L_001D7678;
    case 505u: goto L_001D7698;
    case 506u: goto L_001D76A0;
    case 507u: goto L_001D76A8;
    case 508u: goto L_001D76B0;
    case 509u: goto L_001D76C4;
    case 510u: goto L_001D76D4;
    case 511u: goto L_001D76DC;
    case 512u: goto L_001D76E8;
    case 513u: goto L_001D76FC;
    case 514u: goto L_001D7710;
    case 515u: goto L_001D7718;
    case 516u: goto L_001D7720;
    case 517u: goto L_001D7728;
    case 518u: goto L_001D7758;
    case 519u: goto L_001D7788;
    case 520u: goto L_001D7798;
    case 521u: goto L_001D77C0;
    case 522u: goto L_001D77CC;
    case 523u: goto L_001D77EC;
    case 524u: goto L_001D7814;
    case 525u: goto L_001D7824;
    case 526u: goto L_001D7868;
    case 527u: goto L_001D7874;
    case 528u: goto L_001D788C;
    case 529u: goto L_001D78B4;
    case 530u: goto L_001D78C4;
    case 531u: goto L_001D7938;
    case 532u: goto L_001D7978;
    case 533u: goto L_001D7988;
    case 534u: goto L_001D79AC;
    case 535u: goto L_001D79BC;
    case 536u: goto L_001D79D8;
    case 537u: goto L_001D79EC;
    case 538u: goto L_001D79FC;
    case 539u: goto L_001D7A40;
    case 540u: goto L_001D7A68;
    case 541u: goto L_001D7A78;
    case 542u: goto L_001D7A88;
    case 543u: goto L_001D7AA4;
    case 544u: goto L_001D7AB4;
    case 545u: goto L_001D7AC4;
    case 546u: goto L_001D7ACC;
    case 547u: goto L_001D7AE0;
    case 548u: goto L_001D7AF0;
    case 549u: goto L_001D7B00;
    case 550u: goto L_001D7B10;
    case 551u: goto L_001D7B28;
    case 552u: goto L_001D7B30;
    case 553u: goto L_001D7B40;
    case 554u: goto L_001D7B50;
    case 555u: goto L_001D7B78;
    case 556u: goto L_001D7B88;
    case 557u: goto L_001D7B98;
    case 558u: goto L_001D7BB4;
    case 559u: goto L_001D7BC4;
    case 560u: goto L_001D7BD4;
    case 561u: goto L_001D7BDC;
    case 562u: goto L_001D7BF0;
    case 563u: goto L_001D7C00;
    case 564u: goto L_001D7C0C;
    case 565u: goto L_001D7C58;
    case 566u: goto L_001D7C68;
    case 567u: goto L_001D7C78;
    case 568u: goto L_001D7C8C;
    case 569u: goto L_001D7C9C;
    case 570u: goto L_001D7CAC;
    case 571u: goto L_001D7CC0;
    case 572u: goto L_001D7CD0;
    case 573u: goto L_001D7CE0;
    case 574u: goto L_001D7CE8;
    case 575u: goto L_001D7CFC;
    case 576u: goto L_001D7D0C;
    case 577u: goto L_001D7D1C;
    case 578u: goto L_001D7D2C;
    case 579u: goto L_001D7D44;
    case 580u: goto L_001D7D58;
    case 581u: goto L_001D7D68;
    case 582u: goto L_001D7D78;
    case 583u: goto L_001D7D88;
    case 584u: goto L_001D7DA0;
    case 585u: goto L_001D7DC0;
    case 586u: goto L_001D7DD0;
    case 587u: goto L_001D7DE0;
    case 588u: goto L_001D7DF0;
    case 589u: goto L_001D7E00;
    case 590u: goto L_001D7E10;
    case 591u: goto L_001D7E20;
    case 592u: goto L_001D7E30;
    case 593u: goto L_001D7E40;
    case 594u: goto L_001D7E44;
    case 595u: goto L_001D7E60;
    case 596u: goto L_001D7E70;
    case 597u: goto L_001D7E80;
    case 598u: goto L_001D7EAC;
    case 599u: goto L_001D7EBC;
    case 600u: goto L_001D7ECC;
    case 601u: goto L_001D7EFC;
    case 602u: goto L_001D7F0C;
    case 603u: goto L_001D7F1C;
    case 604u: goto L_001D7F4C;
    case 605u: goto L_001D7F5C;
    case 606u: goto L_001D7F74;
    case 607u: goto L_001D7F84;
    case 608u: goto L_001D7F9C;
    case 609u: goto L_001D7FAC;
    case 610u: goto L_001D7FBC;
    case 611u: goto L_001D7FE0;
    case 612u: goto L_001D7FF8;
    default: bad_entry(c, 0x001D4000u); return;
    }
L_001D4000:
    set32(c.r[6], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D400Cu);  if (depth < kMaxDepth) unit_009E(c, 218u, depth + 1u); else { c.pc = 0x0037A868u; return; } if (c.pc != 0x001D400Cu) [[unlikely]] return; }
L_001D400C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D4010:
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
L_001D4048:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] + 10168u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4094u);  if (depth < kMaxDepth) unit_0043(c, 33u, depth + 1u); else { c.pc = 0x0020C7E0u; return; } if (c.pc != 0x001D4094u) [[unlikely]] return; }
L_001D4094:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001D40D4; } }
L_001D40A0:
    set32(c.r[16], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 13224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D40B8u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x001D40B8u) [[unlikely]] return; }
L_001D40B8:
    st32((c.r[17].w[0] + 104u), c.r[16].w[0]);
    set32(c.r[4], c.r[19].w[0] + 10168u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D40C8u);  if (depth < kMaxDepth) unit_0043(c, 35u, depth + 1u); else { c.pc = 0x0020C818u; return; } if (c.pc != 0x001D40C8u) [[unlikely]] return; }
L_001D40C8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D40A0u | kUnwind; return; } goto L_001D40A0; } }
L_001D40D4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D40E0u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x001D40E0u) [[unlikely]] return; }
L_001D40E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D40F4; } }
    set32(c.r[4], c.r[23].w[0] + 7792u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D40F4u);  if (depth < kMaxDepth) unit_0066(c, 215u, depth + 1u); else { c.pc = 0x0029A268u; return; } if (c.pc != 0x001D40F4u) [[unlikely]] return; }
L_001D40F4:
    set32(c.r[2], ld32((c.r[18].w[0] - 29824u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001D4120; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4114u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x001D4114u) [[unlikely]] return; }
L_001D4114:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4130; } }
L_001D4120:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D412Cu);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x001D412Cu) [[unlikely]] return; }
L_001D412C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001D4130:
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] - 29824u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 216u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001D4160; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4154u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x001D4154u) [[unlikely]] return; }
L_001D4154:
    set32(c.r[3], ld32((c.r[18].w[0] - 29824u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 216u)));
    st32((c.r[2].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 3;
L_001D4160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4168u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001D4168u) [[unlikely]] return; }
L_001D4168:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D4188; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4180u);  if (depth < kMaxDepth) unit_0049(c, 144u, depth + 1u); else { c.pc = 0x00225FC0u; return; } if (c.pc != 0x001D4180u) [[unlikely]] return; }
L_001D4180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4194; } }
L_001D4188:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4194u);  if (depth < kMaxDepth) unit_0049(c, 144u, depth + 1u); else { c.pc = 0x00225FC0u; return; } if (c.pc != 0x001D4194u) [[unlikely]] return; }
L_001D4194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D419Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001D419Cu) [[unlikely]] return; }
L_001D419C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D41C8; } }
    set32(c.r[3], ld32((c.r[18].w[0] - 29824u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001D41C4; } }
    st32((c.r[3].w[0] + 208u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D41C8; } }
L_001D41C4:
    st32((c.r[3].w[0] + 208u), c.r[4].w[0]);
    c.budget -= 1;
L_001D41C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[20], 0u + 3u);
    st32((c.r[2].w[0] + 30584u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D41DCu);  if (depth < kMaxDepth) unit_003C(c, 36u, depth + 1u); else { c.pc = 0x001F0648u; return; } if (c.pc != 0x001D41DCu) [[unlikely]] return; }
L_001D41DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[19], ld32((c.r[2].w[0] + 20668u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[18].d[0] = c.r[19].d[0] | 1024ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D41F4u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x001D41F4u) [[unlikely]] return; }
L_001D41F4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4204u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x001D4204u) [[unlikely]] return; }
L_001D4204:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4214u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x001D4214u) [[unlikely]] return; }
L_001D4214:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[16].w[0] - c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] - 5552u);
    set32(c.r[7], 0u + 256u);
    set32(c.r[9], 0u + 3u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u - 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4240u);  if (depth < kMaxDepth) unit_0044(c, 18u, depth + 1u); else { c.pc = 0x00210B28u; return; } if (c.pc != 0x001D4240u) [[unlikely]] return; }
L_001D4240:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[3].w[0] + 20628u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4254u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x001D4254u) [[unlikely]] return; }
L_001D4254:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4264u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x001D4264u) [[unlikely]] return; }
L_001D4264:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4274u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x001D4274u) [[unlikely]] return; }
L_001D4274:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[16].w[0] - c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] - 5536u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[7], 0u + 256u);
    set32(c.r[9], 0u + 3u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D42A0u);  if (depth < kMaxDepth) unit_0044(c, 18u, depth + 1u); else { c.pc = 0x00210B28u; return; } if (c.pc != 0x001D42A0u) [[unlikely]] return; }
L_001D42A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] + 20632u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[18], c.r[2].w[0] + 20640u);
    c.budget -= 4;
L_001D42B0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D42C0u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x001D42C0u) [[unlikely]] return; }
L_001D42C0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] | 1024ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D42D0u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x001D42D0u) [[unlikely]] return; }
L_001D42D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D42E0u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x001D42E0u) [[unlikely]] return; }
L_001D42E0:
    set32(c.r[6], c.r[16].w[0] - c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[7], 0u + 256u);
    set32(c.r[8], c.r[21].w[0] - 5520u);
    set32(c.r[9], 0u + 3u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4308u);  if (depth < kMaxDepth) unit_0044(c, 18u, depth + 1u); else { c.pc = 0x00210B28u; return; } if (c.pc != 0x001D4308u) [[unlikely]] return; }
L_001D4308:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D42B0u | kUnwind; return; } goto L_001D42B0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4324u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x001D4324u) [[unlikely]] return; }
L_001D4324:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4334u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x001D4334u) [[unlikely]] return; }
L_001D4334:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4344u);  if (depth < kMaxDepth) unit_0044(c, 33u, depth + 1u); else { c.pc = 0x00210EC8u; return; } if (c.pc != 0x001D4344u) [[unlikely]] return; }
L_001D4344:
    set32(c.r[5], c.r[2].w[0] >> 31);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4360u);  if (depth < kMaxDepth) unit_0058(c, 11u, depth + 1u); else { c.pc = 0x00260138u; return; } if (c.pc != 0x001D4360u) [[unlikely]] return; }
L_001D4360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4368u);  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x00313C70u; return; } if (c.pc != 0x001D4368u) [[unlikely]] return; }
L_001D4368:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.f[13] = c.r[1].w[0];
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D437Cu);  if (depth < kMaxDepth) unit_009E(c, 85u, depth + 1u); else { c.pc = 0x00378E30u; return; } if (c.pc != 0x001D437Cu) [[unlikely]] return; }
L_001D437C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43C30000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[12] = c.r[1].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4390u);  if (depth < kMaxDepth) unit_009E(c, 91u, depth + 1u); else { c.pc = 0x00378F98u; return; } if (c.pc != 0x001D4390u) [[unlikely]] return; }
L_001D4390:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[6], c.r[6].w[0] - 17232u);
    set32(c.r[4], c.r[4].w[0] - 11856u);
    set32(c.r[5], c.r[5].w[0] - 17280u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D43B4u);  if (depth < kMaxDepth) unit_008E(c, 281u, depth + 1u); else { c.pc = 0x0033B120u; return; } if (c.pc != 0x001D43B4u) [[unlikely]] return; }
L_001D43B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[4].w[0] - 5800u);
    set32(c.r[5], c.r[5].w[0] + 21560u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D43CCu);  if (depth < kMaxDepth) unit_0043(c, 142u, depth + 1u); else { c.pc = 0x0020E0B8u; return; } if (c.pc != 0x001D43CCu) [[unlikely]] return; }
L_001D43CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D43D4u);  if (depth < kMaxDepth) unit_0082(c, 278u, depth + 1u); else { c.pc = 0x0030B9E8u; return; } if (c.pc != 0x001D43D4u) [[unlikely]] return; }
L_001D43D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] | 54504ull;
    set32(c.r[3], c.r[3].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], 0u + 13u);
    set32(c.r[2], 0u + 14u);
    c.budget -= 7;
L_001D43F0:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 13248u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D43F0u | kUnwind; return; } goto L_001D43F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4410u);  if (depth < kMaxDepth) unit_0088(c, 299u, depth + 1u); else { c.pc = 0x003236D8u; return; } if (c.pc != 0x001D4410u) [[unlikely]] return; }
L_001D4410:
    set32(c.r[16], c.r[22].w[0] + 10368u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u + 91u);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], 0u + 36u);
    st32((c.r[22].w[0] + 10368u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D443Cu);  if (depth < kMaxDepth) unit_0061(c, 319u, depth + 1u); else { c.pc = 0x00287200u; return; } if (c.pc != 0x001D443Cu) [[unlikely]] return; }
L_001D443C:
    set32(c.r[5], c.r[23].w[0] + 7792u);
    set32(c.r[8], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 2504u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4468u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D4468u) [[unlikely]] return; }
L_001D4468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4470u);  if (depth < kMaxDepth) unit_0065(c, 350u, depth + 1u); else { c.pc = 0x00297B50u; return; } if (c.pc != 0x001D4470u) [[unlikely]] return; }
L_001D4470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4478u);  if (depth < kMaxDepth) unit_0005(c, 174u, depth + 1u); else { c.pc = 0x00116C98u; return; } if (c.pc != 0x001D4478u) [[unlikely]] return; }
L_001D4478:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[4], c.r[4].w[0] + 20032u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4488u);  if (depth < kMaxDepth) unit_0095(c, 362u, depth + 1u); else { c.pc = 0x00356C68u; return; } if (c.pc != 0x001D4488u) [[unlikely]] return; }
L_001D4488:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] + 29712u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4498u);  if (depth < kMaxDepth) unit_0094(c, 363u, depth + 1u); else { c.pc = 0x00353C90u; return; } if (c.pc != 0x001D4498u) [[unlikely]] return; }
L_001D4498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D44A0u);  if (depth < kMaxDepth) unit_0068(c, 286u, depth + 1u); else { c.pc = 0x002A38F0u; return; } if (c.pc != 0x001D44A0u) [[unlikely]] return; }
L_001D44A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 12224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D44B0u);  if (depth < kMaxDepth) unit_007E(c, 40u, depth + 1u); else { c.pc = 0x002F81E0u; return; } if (c.pc != 0x001D44B0u) [[unlikely]] return; }
L_001D44B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D44B8u);  if (depth < kMaxDepth) unit_0073(c, 110u, depth + 1u); else { c.pc = 0x002CDD08u; return; } if (c.pc != 0x001D44B8u) [[unlikely]] return; }
L_001D44B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    set32(c.r[5], c.r[5].w[0] + 28976u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D44D0u);  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B2F98u; return; } if (c.pc != 0x001D44D0u) [[unlikely]] return; }
L_001D44D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] + 13712u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    st32((c.r[2].w[0] + 17992u), c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[5], c.r[5].w[0] - 17192u);
    set32(c.r[6], c.r[6].w[0] + 14264u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 31492u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 3100u), c.r[6].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4508u);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x001D4508u) [[unlikely]] return; }
L_001D4508:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00120000u);
    set32(c.r[4], 0u + 1000u);
    set32(c.r[3], c.r[3].w[0] + 4152u);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st32((c.r[2].w[0] + 416u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] - 26456u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    set32(c.r[2], 0u + 3u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 4984u), 0u);
    st32((c.r[4].w[0] - 26452u), 0u);
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D4568:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 23000u)));
    c.r[21].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001D4610; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001D4610; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001D4610; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001D4610; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[2].w[0] - 26384u), 0u);
    set32(c.r[19], c.r[3].w[0] + 14208u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[18], 0u + 13248u);
    c.budget -= 6;
L_001D45E0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] + c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D45F8u);  if (depth < kMaxDepth) unit_0088(c, 127u, depth + 1u); else { c.pc = 0x00321588u; return; } if (c.pc != 0x001D45F8u) [[unlikely]] return; }
L_001D45F8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4604u);  if (depth < kMaxDepth) unit_007E(c, 78u, depth + 1u); else { c.pc = 0x002F8600u; return; } if (c.pc != 0x001D4604u) [[unlikely]] return; }
L_001D4604:
    c.r[2].d[0] = c.r[17].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D45E0u | kUnwind; return; } goto L_001D45E0; } }
L_001D4610:
    set32(c.r[2], c.r[20].w[0] + 10384u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 36u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4624u);  if (depth < kMaxDepth) unit_0049(c, 225u, depth + 1u); else { c.pc = 0x00226C60u; return; } if (c.pc != 0x001D4624u) [[unlikely]] return; }
L_001D4624:
    set32(c.r[4], c.r[21].w[0] + 17200u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4634u);  if (depth < kMaxDepth) unit_0071(c, 303u, depth + 1u); else { c.pc = 0x002C7298u; return; } if (c.pc != 0x001D4634u) [[unlikely]] return; }
L_001D4634:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D4660:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[17], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4688u);  if (depth < kMaxDepth) unit_0069(c, 49u, depth + 1u); else { c.pc = 0x002A4C30u; return; } if (c.pc != 0x001D4688u) [[unlikely]] return; }
L_001D4688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4690u);  if (depth < kMaxDepth) unit_003C(c, 166u, depth + 1u); else { c.pc = 0x001F18C0u; return; } if (c.pc != 0x001D4690u) [[unlikely]] return; }
L_001D4690:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    c.r[2].d[0] = c.r[2].d[0] | 2816ull;
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[3].w[0] + 13248u);
    c.budget -= 6;
L_001D46A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D46B8u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001D46B8u) [[unlikely]] return; }
L_001D46B8:
    st8((c.r[16].w[0] + 10090u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st16((c.r[16].w[0] + 7694u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 10924u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D46A8u | kUnwind; return; } goto L_001D46A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D46DCu);  if (depth < kMaxDepth) unit_007D(c, 213u, depth + 1u); else { c.pc = 0x002F70B0u; return; } if (c.pc != 0x001D46DCu) [[unlikely]] return; }
L_001D46DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st32((c.r[3].w[0] - 18344u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 10260u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D46F8u);  if (depth < kMaxDepth) unit_003D(c, 211u, depth + 1u); else { c.pc = 0x001F7460u; return; } if (c.pc != 0x001D46F8u) [[unlikely]] return; }
L_001D46F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4700u);  if (depth < kMaxDepth) unit_0053(c, 7u, depth + 1u); else { c.pc = 0x0024C1F8u; return; } if (c.pc != 0x001D4700u) [[unlikely]] return; }
L_001D4700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4708u);  if (depth < kMaxDepth) unit_0049(c, 241u, depth + 1u); else { c.pc = 0x00226EA0u; return; } if (c.pc != 0x001D4708u) [[unlikely]] return; }
L_001D4708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4710u);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x001D4710u) [[unlikely]] return; }
L_001D4710:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D471Cu);  if (depth < kMaxDepth) unit_0077(c, 22u, depth + 1u); else { c.pc = 0x002DC5D8u; return; } if (c.pc != 0x001D471Cu) [[unlikely]] return; }
L_001D471C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4724u);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x001D4724u) [[unlikely]] return; }
L_001D4724:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4734u);  if (depth < kMaxDepth) unit_0077(c, 27u, depth + 1u); else { c.pc = 0x002DC6B8u; return; } if (c.pc != 0x001D4734u) [[unlikely]] return; }
L_001D4734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D473Cu);  if (depth < kMaxDepth) unit_0049(c, 243u, depth + 1u); else { c.pc = 0x00226EC8u; return; } if (c.pc != 0x001D473Cu) [[unlikely]] return; }
L_001D473C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4744u);  if (depth < kMaxDepth) unit_007E(c, 85u, depth + 1u); else { c.pc = 0x002F8788u; return; } if (c.pc != 0x001D4744u) [[unlikely]] return; }
L_001D4744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D474Cu);  if (depth < kMaxDepth) unit_0084(c, 28u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x001D474Cu) [[unlikely]] return; }
L_001D474C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4758u);  if (depth < kMaxDepth) unit_0076(c, 120u, depth + 1u); else { c.pc = 0x002D9C60u; return; } if (c.pc != 0x001D4758u) [[unlikely]] return; }
L_001D4758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4760u);  if (depth < kMaxDepth) unit_0088(c, 114u, depth + 1u); else { c.pc = 0x00321368u; return; } if (c.pc != 0x001D4760u) [[unlikely]] return; }
L_001D4760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4768u);  if (depth < kMaxDepth) unit_003C(c, 280u, depth + 1u); else { c.pc = 0x001F2F48u; return; } if (c.pc != 0x001D4768u) [[unlikely]] return; }
L_001D4768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4770u);  if (depth < kMaxDepth) unit_0073(c, 97u, depth + 1u); else { c.pc = 0x002CDC18u; return; } if (c.pc != 0x001D4770u) [[unlikely]] return; }
L_001D4770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4778u);  if (depth < kMaxDepth) unit_0073(c, 115u, depth + 1u); else { c.pc = 0x002CDD70u; return; } if (c.pc != 0x001D4778u) [[unlikely]] return; }
L_001D4778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4780u);  if (depth < kMaxDepth) unit_0055(c, 88u, depth + 1u); else { c.pc = 0x00254C60u; return; } if (c.pc != 0x001D4780u) [[unlikely]] return; }
L_001D4780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4788u);  if (depth < kMaxDepth) unit_0058(c, 60u, depth + 1u); else { c.pc = 0x00260968u; return; } if (c.pc != 0x001D4788u) [[unlikely]] return; }
L_001D4788:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21448u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D47A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 25932u), c.r[2].w[0]);
    c.budget -= 3;
L_001D47A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D47ACu);  if (depth < kMaxDepth) unit_007E(c, 219u, depth + 1u); else { c.pc = 0x002FA7E0u; return; } if (c.pc != 0x001D47ACu) [[unlikely]] return; }
L_001D47AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D47B4u);  if (depth < kMaxDepth) unit_006B(c, 181u, depth + 1u); else { c.pc = 0x002AF550u; return; } if (c.pc != 0x001D47B4u) [[unlikely]] return; }
L_001D47B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D47BCu);  if (depth < kMaxDepth) unit_0088(c, 150u, depth + 1u); else { c.pc = 0x00321998u; return; } if (c.pc != 0x001D47BCu) [[unlikely]] return; }
L_001D47BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D47C4u);  if (depth < kMaxDepth) unit_0034(c, 156u, depth + 1u); else { c.pc = 0x001D1A68u; return; } if (c.pc != 0x001D47C4u) [[unlikely]] return; }
L_001D47C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22944u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D47D4u);  if (depth < kMaxDepth) unit_0086(c, 42u, depth + 1u); else { c.pc = 0x00318570u; return; } if (c.pc != 0x001D47D4u) [[unlikely]] return; }
L_001D47D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D47DCu);  if (depth < kMaxDepth) unit_0028(c, 304u, depth + 1u); else { c.pc = 0x001A3988u; return; } if (c.pc != 0x001D47DCu) [[unlikely]] return; }
L_001D47DC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D4800:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] + 17200u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    set32(c.r[18], c.r[16].w[0] + 12224u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4840u);  if (depth < kMaxDepth) unit_0071(c, 303u, depth + 1u); else { c.pc = 0x002C7298u; return; } if (c.pc != 0x001D4840u) [[unlikely]] return; }
L_001D4840:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st32((c.r[2].w[0] + 7876u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4850u);  if (depth < kMaxDepth) unit_0035(c, 61u, depth + 1u); else { c.pc = 0x001D4660u; return; } if (c.pc != 0x001D4850u) [[unlikely]] return; }
L_001D4850:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[16], c.r[2].w[0] - 5800u);
    set32(c.r[8], 0u + 4u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4878u);  if (depth < kMaxDepth) unit_0043(c, 82u, depth + 1u); else { c.pc = 0x0020D200u; return; } if (c.pc != 0x001D4878u) [[unlikely]] return; }
L_001D4878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4880u);  if (depth < kMaxDepth) unit_0039(c, 333u, depth + 1u); else { c.pc = 0x001E6D08u; return; } if (c.pc != 0x001D4880u) [[unlikely]] return; }
L_001D4880:
    set32(c.r[19], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4894u);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8438u; return; } if (c.pc != 0x001D4894u) [[unlikely]] return; }
L_001D4894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D48B0; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D48B0u);  if (depth < kMaxDepth) unit_0043(c, 114u, depth + 1u); else { c.pc = 0x0020D9E8u; return; } if (c.pc != 0x001D48B0u) [[unlikely]] return; }
L_001D48B0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[16].w[0] + 13496u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D48C4u);  if (depth < kMaxDepth) unit_0039(c, 68u, depth + 1u); else { c.pc = 0x001E4858u; return; } if (c.pc != 0x001D48C4u) [[unlikely]] return; }
L_001D48C4:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 58u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D48D8u);  if (depth < kMaxDepth) unit_007E(c, 301u, depth + 1u); else { c.pc = 0x002FB1C0u; return; } if (c.pc != 0x001D48D8u) [[unlikely]] return; }
L_001D48D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D48E4u);  if (depth < kMaxDepth) unit_0039(c, 62u, depth + 1u); else { c.pc = 0x001E47C0u; return; } if (c.pc != 0x001D48E4u) [[unlikely]] return; }
L_001D48E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 20672u)));
    set32(c.r[5], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D48FCu);  if (depth < kMaxDepth) unit_0039(c, 100u, depth + 1u); else { c.pc = 0x001E4C28u; return; } if (c.pc != 0x001D48FCu) [[unlikely]] return; }
L_001D48FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4904u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001D4904u) [[unlikely]] return; }
L_001D4904:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D4948; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 13u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 20720u)));
    set32(c.r[5], 0u + 13u);
    st32((c.r[3].w[0] - 26588u), c.r[2].w[0]);
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4938u);  if (depth < kMaxDepth) unit_0039(c, 100u, depth + 1u); else { c.pc = 0x001E4C28u; return; } if (c.pc != 0x001D4938u) [[unlikely]] return; }
L_001D4938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4940u);  if (depth < kMaxDepth) unit_0034(c, 115u, depth + 1u); else { c.pc = 0x001D1560u; return; } if (c.pc != 0x001D4940u) [[unlikely]] return; }
L_001D4940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4974; } }
L_001D4948:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 15u);
    set32(c.r[6], ld32((c.r[17].w[0] + 20720u)));
    st32((c.r[16].w[0] - 26588u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4970u);  if (depth < kMaxDepth) unit_0039(c, 100u, depth + 1u); else { c.pc = 0x001E4C28u; return; } if (c.pc != 0x001D4970u) [[unlikely]] return; }
L_001D4970:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D4974:
    set32(c.r[6], ld32((c.r[16].w[0] + 20720u)));
    set32(c.r[17], c.r[20].w[0] + 12224u);
    set32(c.r[5], 0u + 135u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D498Cu);  if (depth < kMaxDepth) unit_0039(c, 100u, depth + 1u); else { c.pc = 0x001E4C28u; return; } if (c.pc != 0x001D498Cu) [[unlikely]] return; }
L_001D498C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4998u);  if (depth < kMaxDepth) unit_0038(c, 298u, depth + 1u); else { c.pc = 0x001E1C88u; return; } if (c.pc != 0x001D4998u) [[unlikely]] return; }
L_001D4998:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D49A4u);  if (depth < kMaxDepth) unit_0039(c, 134u, depth + 1u); else { c.pc = 0x001E5158u; return; } if (c.pc != 0x001D49A4u) [[unlikely]] return; }
L_001D49A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[3].w[0] - 17360u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] - 19344u);
    set32(c.r[5], ld32((c.r[18].w[0] - 26588u)));
    st32((c.r[2].w[0] + 7524u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 44u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D49D0u);  if (depth < kMaxDepth) unit_0088(c, 257u, depth + 1u); else { c.pc = 0x00322E98u; return; } if (c.pc != 0x001D49D0u) [[unlikely]] return; }
L_001D49D0:
    set32(c.r[5], ld32((c.r[18].w[0] - 26588u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[6], 0u + 44u);
    set32(c.r[4], c.r[4].w[0] + 24040u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D49E8u);  if (depth < kMaxDepth) unit_007D(c, 251u, depth + 1u); else { c.pc = 0x002F7788u; return; } if (c.pc != 0x001D49E8u) [[unlikely]] return; }
L_001D49E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D49F4u);  if (depth < kMaxDepth) unit_0088(c, 278u, depth + 1u); else { c.pc = 0x003232E0u; return; } if (c.pc != 0x001D49F4u) [[unlikely]] return; }
L_001D49F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D49FCu);  if (depth < kMaxDepth) unit_0033(c, 210u, depth + 1u); else { c.pc = 0x001CEE00u; return; } if (c.pc != 0x001D49FCu) [[unlikely]] return; }
L_001D49FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4A04u);  if (depth < kMaxDepth) unit_0023(c, 125u, depth + 1u); else { c.pc = 0x0018DC80u; return; } if (c.pc != 0x001D4A04u) [[unlikely]] return; }
L_001D4A04:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4A14u);  if (depth < kMaxDepth) unit_0037(c, 432u, depth + 1u); else { c.pc = 0x001DEE38u; return; } if (c.pc != 0x001D4A14u) [[unlikely]] return; }
L_001D4A14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[4].w[0] - 29904u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4A24u);  if (depth < kMaxDepth) unit_0060(c, 247u, depth + 1u); else { c.pc = 0x00283A90u; return; } if (c.pc != 0x001D4A24u) [[unlikely]] return; }
L_001D4A24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4A2Cu);  if (depth < kMaxDepth) unit_0023(c, 128u, depth + 1u); else { c.pc = 0x0018DD18u; return; } if (c.pc != 0x001D4A2Cu) [[unlikely]] return; }
L_001D4A2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4A34u);  if (depth < kMaxDepth) unit_001E(c, 196u, depth + 1u); else { c.pc = 0x0017B958u; return; } if (c.pc != 0x001D4A34u) [[unlikely]] return; }
L_001D4A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4A3Cu);  if (depth < kMaxDepth) unit_001E(c, 198u, depth + 1u); else { c.pc = 0x0017BA40u; return; } if (c.pc != 0x001D4A3Cu) [[unlikely]] return; }
L_001D4A3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4A44u);  if (depth < kMaxDepth) unit_0034(c, 197u, depth + 1u); else { c.pc = 0x001D1E88u; return; } if (c.pc != 0x001D4A44u) [[unlikely]] return; }
L_001D4A44:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4A50u);  if (depth < kMaxDepth) unit_0087(c, 127u, depth + 1u); else { c.pc = 0x0031DE38u; return; } if (c.pc != 0x001D4A50u) [[unlikely]] return; }
L_001D4A50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 5012u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D4A6C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 23020u), c.r[2].w[0]);
    c.budget -= 3;
L_001D4A6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] + 14664u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 128u)));
    st32((c.r[5].w[0] + 10148u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 7872u), 0u);
    st32((c.r[4].w[0] - 6092u), 0u);
    c.budget -= 13;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_001D4AB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7792u);
    st32((c.r[2].w[0] + 840u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 836u), c.r[6].w[0]);
    c.budget -= 4;
L_001D4AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4AB8u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001D4AB8u) [[unlikely]] return; }
L_001D4AB8:
    set32(c.r[18], 0u + 2u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_001D4B74; } }
    set32(c.r[16], c.r[19].w[0] - 14960u);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4ADCu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001D4ADCu) [[unlikely]] return; }
L_001D4ADC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4AF0u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001D4AF0u) [[unlikely]] return; }
L_001D4AF0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4B04u);  if (depth < kMaxDepth) unit_0036(c, 441u, depth + 1u); else { c.pc = 0x001DB520u; return; } if (c.pc != 0x001D4B04u) [[unlikely]] return; }
L_001D4B04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4B14u);  if (depth < kMaxDepth) unit_0036(c, 441u, depth + 1u); else { c.pc = 0x001DB520u; return; } if (c.pc != 0x001D4B14u) [[unlikely]] return; }
L_001D4B14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4B24u);  if (depth < kMaxDepth) unit_0036(c, 447u, depth + 1u); else { c.pc = 0x001DB5F0u; return; } if (c.pc != 0x001D4B24u) [[unlikely]] return; }
L_001D4B24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4B34u);  if (depth < kMaxDepth) unit_0036(c, 447u, depth + 1u); else { c.pc = 0x001DB5F0u; return; } if (c.pc != 0x001D4B34u) [[unlikely]] return; }
L_001D4B34:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4B44u);  if (depth < kMaxDepth) unit_0036(c, 441u, depth + 1u); else { c.pc = 0x001DB520u; return; } if (c.pc != 0x001D4B44u) [[unlikely]] return; }
L_001D4B44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4B54u);  if (depth < kMaxDepth) unit_0036(c, 441u, depth + 1u); else { c.pc = 0x001DB520u; return; } if (c.pc != 0x001D4B54u) [[unlikely]] return; }
L_001D4B54:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4B64u);  if (depth < kMaxDepth) unit_0036(c, 447u, depth + 1u); else { c.pc = 0x001DB5F0u; return; } if (c.pc != 0x001D4B64u) [[unlikely]] return; }
L_001D4B64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4B74u);  if (depth < kMaxDepth) unit_0036(c, 447u, depth + 1u); else { c.pc = 0x001DB5F0u; return; } if (c.pc != 0x001D4B74u) [[unlikely]] return; }
L_001D4B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4B7Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001D4B7Cu) [[unlikely]] return; }
L_001D4B7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_001D4C2C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4B90u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D4B90u) [[unlikely]] return; }
L_001D4B90:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4BA0u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001D4BA0u) [[unlikely]] return; }
L_001D4BA0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D4BA4:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4BB0u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013A6A8u; return; } if (c.pc != 0x001D4BB0u) [[unlikely]] return; }
L_001D4BB0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4BBCu);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013A670u; return; } if (c.pc != 0x001D4BBCu) [[unlikely]] return; }
L_001D4BBC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4BD0u);  if (depth < kMaxDepth) unit_0001(c, 153u, depth + 1u); else { c.pc = 0x001051B8u; return; } if (c.pc != 0x001D4BD0u) [[unlikely]] return; }
L_001D4BD0:
    st32((c.r[18].w[0] - 29908u), c.r[2].w[0]);
    c.budget -= 1;
L_001D4BD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4C00; } }
L_001D4BDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4BE4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001D4BE4u) [[unlikely]] return; }
L_001D4BE4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4BF0u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D4BF0u) [[unlikely]] return; }
L_001D4BF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4BDCu | kUnwind; return; } goto L_001D4BDC; } }
L_001D4BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4C00u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001D4C00u) [[unlikely]] return; }
L_001D4C00:
    set32(c.r[2], ld32((c.r[18].w[0] - 29908u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D4C2C; } }
    set32(c.r[4], c.r[20].w[0] + 12224u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4C1Cu);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8438u; return; } if (c.pc != 0x001D4C1Cu) [[unlikely]] return; }
L_001D4C1C:
    set32(c.r[4], ld32((c.r[18].w[0] - 29908u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4C2Cu);  if (depth < kMaxDepth) unit_0001(c, 332u, depth + 1u); else { c.pc = 0x001064A0u; return; } if (c.pc != 0x001D4C2Cu) [[unlikely]] return; }
L_001D4C2C:
    set32(c.r[16], c.r[19].w[0] - 14960u);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4C40u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001D4C40u) [[unlikely]] return; }
L_001D4C40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4C54u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001D4C54u) [[unlikely]] return; }
L_001D4C54:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4C64u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D4C64u) [[unlikely]] return; }
L_001D4C64:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4C74u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001D4C74u) [[unlikely]] return; }
L_001D4C74:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4C88u);  if (depth < kMaxDepth) unit_0000(c, 1u, depth + 1u); else { c.pc = 0x00100000u; return; } if (c.pc != 0x001D4C88u) [[unlikely]] return; }
L_001D4C88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] - 29936u), c.r[2].w[0]);
    c.budget -= 2;
L_001D4C90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4CBC; } }
L_001D4C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4CA0u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001D4CA0u) [[unlikely]] return; }
L_001D4CA0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4CACu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D4CACu) [[unlikely]] return; }
L_001D4CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4C98u | kUnwind; return; } goto L_001D4C98; } }
L_001D4CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4CBCu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001D4CBCu) [[unlikely]] return; }
L_001D4CBC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4CC8u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D4CC8u) [[unlikely]] return; }
L_001D4CC8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4CD8u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001D4CD8u) [[unlikely]] return; }
L_001D4CD8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4CE4u);  if (depth < kMaxDepth) unit_0007(c, 182u, depth + 1u); else { c.pc = 0x0011D6D0u; return; } if (c.pc != 0x001D4CE4u) [[unlikely]] return; }
L_001D4CE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] - 29932u), c.r[2].w[0]);
    c.budget -= 2;
L_001D4CEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4D18; } }
L_001D4CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4CFCu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001D4CFCu) [[unlikely]] return; }
L_001D4CFC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4D08u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D4D08u) [[unlikely]] return; }
L_001D4D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4CF4u | kUnwind; return; } goto L_001D4CF4; } }
L_001D4D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4D18u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001D4D18u) [[unlikely]] return; }
L_001D4D18:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4D24u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D4D24u) [[unlikely]] return; }
L_001D4D24:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 12816u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4D34u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001D4D34u) [[unlikely]] return; }
L_001D4D34:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4D40u);  if (depth < kMaxDepth) unit_001D(c, 161u, depth + 1u); else { c.pc = 0x00176018u; return; } if (c.pc != 0x001D4D40u) [[unlikely]] return; }
L_001D4D40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] - 29928u), c.r[2].w[0]);
    c.budget -= 2;
L_001D4D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4D74; } }
L_001D4D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4D58u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001D4D58u) [[unlikely]] return; }
L_001D4D58:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4D64u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D4D64u) [[unlikely]] return; }
L_001D4D64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4D50u | kUnwind; return; } goto L_001D4D50; } }
L_001D4D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4D74u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001D4D74u) [[unlikely]] return; }
L_001D4D74:
    set32(c.r[16], c.r[19].w[0] - 14960u);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4D88u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001D4D88u) [[unlikely]] return; }
L_001D4D88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4D9Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001D4D9Cu) [[unlikely]] return; }
L_001D4D9C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4DACu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D4DACu) [[unlikely]] return; }
L_001D4DAC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4DBCu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001D4DBCu) [[unlikely]] return; }
L_001D4DBC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4DD0u);  if (depth < kMaxDepth) unit_0000(c, 81u, depth + 1u); else { c.pc = 0x00100D78u; return; } if (c.pc != 0x001D4DD0u) [[unlikely]] return; }
L_001D4DD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] - 29924u), c.r[2].w[0]);
    c.budget -= 2;
L_001D4DD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4E04; } }
L_001D4DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4DE8u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001D4DE8u) [[unlikely]] return; }
L_001D4DE8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4DF4u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D4DF4u) [[unlikely]] return; }
L_001D4DF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4DE0u | kUnwind; return; } goto L_001D4DE0; } }
L_001D4DFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4E04u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001D4E04u) [[unlikely]] return; }
L_001D4E04:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4E10u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D4E10u) [[unlikely]] return; }
L_001D4E10:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4E20u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001D4E20u) [[unlikely]] return; }
L_001D4E20:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4E2Cu);  if (depth < kMaxDepth) unit_002C(c, 452u, depth + 1u); else { c.pc = 0x001B3150u; return; } if (c.pc != 0x001D4E2Cu) [[unlikely]] return; }
L_001D4E2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] - 29920u), c.r[2].w[0]);
    c.budget -= 2;
L_001D4E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4E60; } }
L_001D4E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4E44u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001D4E44u) [[unlikely]] return; }
L_001D4E44:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4E50u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D4E50u) [[unlikely]] return; }
L_001D4E50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4E3Cu | kUnwind; return; } goto L_001D4E3C; } }
L_001D4E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4E60u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001D4E60u) [[unlikely]] return; }
L_001D4E60:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4E6Cu);  if (depth < kMaxDepth) unit_0034(c, 295u, depth + 1u); else { c.pc = 0x001D2E18u; return; } if (c.pc != 0x001D4E6Cu) [[unlikely]] return; }
L_001D4E6C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4E78u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D4E78u) [[unlikely]] return; }
L_001D4E78:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4E88u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001D4E88u) [[unlikely]] return; }
L_001D4E88:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4E94u);  if (depth < kMaxDepth) unit_0008(c, 155u, depth + 1u); else { c.pc = 0x00121580u; return; } if (c.pc != 0x001D4E94u) [[unlikely]] return; }
L_001D4E94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] - 29916u), c.r[2].w[0]);
    c.budget -= 2;
L_001D4E9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4EC8; } }
L_001D4EA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4EACu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001D4EACu) [[unlikely]] return; }
L_001D4EAC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4EB8u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D4EB8u) [[unlikely]] return; }
L_001D4EB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4EA4u | kUnwind; return; } goto L_001D4EA4; } }
L_001D4EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4EC8u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001D4EC8u) [[unlikely]] return; }
L_001D4EC8:
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[19].w[0] - 14960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4ED8u);  if (depth < kMaxDepth) unit_0034(c, 308u, depth + 1u); else { c.pc = 0x001D2F28u; return; } if (c.pc != 0x001D4ED8u) [[unlikely]] return; }
L_001D4ED8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4EE8u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001D4EE8u) [[unlikely]] return; }
L_001D4EE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4EFCu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001D4EFCu) [[unlikely]] return; }
L_001D4EFC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4F0Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D4F0Cu) [[unlikely]] return; }
L_001D4F0C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4F1Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001D4F1Cu) [[unlikely]] return; }
L_001D4F1C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4F3Cu);  if (depth < kMaxDepth) unit_0001(c, 43u, depth + 1u); else { c.pc = 0x00104510u; return; } if (c.pc != 0x001D4F3Cu) [[unlikely]] return; }
L_001D4F3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] - 29912u), c.r[2].w[0]);
    c.budget -= 2;
L_001D4F44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4F70; } }
L_001D4F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4F54u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001D4F54u) [[unlikely]] return; }
L_001D4F54:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4F60u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D4F60u) [[unlikely]] return; }
L_001D4F60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4F4Cu | kUnwind; return; } goto L_001D4F4C; } }
L_001D4F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4F70u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001D4F70u) [[unlikely]] return; }
L_001D4F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4F78u);  if (depth < kMaxDepth) unit_001A(c, 210u, depth + 1u); else { c.pc = 0x0016A438u; return; } if (c.pc != 0x001D4F78u) [[unlikely]] return; }
L_001D4F78:
    set32(c.r[16], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] - 29816u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4F8Cu);  if (depth < kMaxDepth) unit_0034(c, 325u, depth + 1u); else { c.pc = 0x001D31C0u; return; } if (c.pc != 0x001D4F8Cu) [[unlikely]] return; }
L_001D4F8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[2].w[0] + 19624u), c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4FA0u);  if (depth < kMaxDepth) unit_0035(c, 485u, depth + 1u); else { c.pc = 0x001D73C8u; return; } if (c.pc != 0x001D4FA0u) [[unlikely]] return; }
L_001D4FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4FA8u);  if (depth < kMaxDepth) unit_0039(c, 82u, depth + 1u); else { c.pc = 0x001E4AB0u; return; } if (c.pc != 0x001D4FA8u) [[unlikely]] return; }
L_001D4FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4FB0u);  if (depth < kMaxDepth) unit_009E(c, 88u, depth + 1u); else { c.pc = 0x00378E98u; return; } if (c.pc != 0x001D4FB0u) [[unlikely]] return; }
L_001D4FB0:
    set32(c.r[2], c.r[21].w[0] + 14664u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 152u)));
    st32((c.r[3].w[0] + 19304u), c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001D4FE0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] - 19088u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4FE0u);  if (depth < kMaxDepth) unit_0089(c, 268u, depth + 1u); else { c.pc = 0x003272F8u; return; } if (c.pc != 0x001D4FE0u) [[unlikely]] return; }
L_001D4FE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 5304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4FF0u);  if (depth < kMaxDepth) unit_0032(c, 394u, depth + 1u); else { c.pc = 0x001CBD38u; return; } if (c.pc != 0x001D4FF0u) [[unlikely]] return; }
L_001D4FF0:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D5020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5038u);  if (depth < kMaxDepth) unit_0091(c, 146u, depth + 1u); else { c.pc = 0x00345880u; return; } if (c.pc != 0x001D5038u) [[unlikely]] return; }
L_001D5038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5040u);  if (depth < kMaxDepth) unit_0040(c, 59u, depth + 1u); else { c.pc = 0x00200A70u; return; } if (c.pc != 0x001D5040u) [[unlikely]] return; }
L_001D5040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5048u);  if (depth < kMaxDepth) unit_0044(c, 133u, depth + 1u); else { c.pc = 0x00212860u; return; } if (c.pc != 0x001D5048u) [[unlikely]] return; }
L_001D5048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5050u);  if (depth < kMaxDepth) unit_0037(c, 497u, depth + 1u); else { c.pc = 0x001DFA30u; return; } if (c.pc != 0x001D5050u) [[unlikely]] return; }
L_001D5050:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D505Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001D505Cu) [[unlikely]] return; }
L_001D505C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], ld32((c.r[4].w[0] - 368u)));
    st32((c.r[3].w[0] - 3028u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 20668u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5088u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D5088u) [[unlikely]] return; }
L_001D5088:
    set32(c.r[4], ld32((c.r[16].w[0] + 20668u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5094u);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x001D5094u) [[unlikely]] return; }
L_001D5094:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D50A4u);  if (depth < kMaxDepth) unit_0095(c, 127u, depth + 1u); else { c.pc = 0x003550F8u; return; } if (c.pc != 0x001D50A4u) [[unlikely]] return; }
L_001D50A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] + 29712u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D50B4u);  if (depth < kMaxDepth) unit_0094(c, 379u, depth + 1u); else { c.pc = 0x00353ED8u; return; } if (c.pc != 0x001D50B4u) [[unlikely]] return; }
L_001D50B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[4], c.r[4].w[0] + 20032u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D50C4u);  if (depth < kMaxDepth) unit_0095(c, 379u, depth + 1u); else { c.pc = 0x00356F20u; return; } if (c.pc != 0x001D50C4u) [[unlikely]] return; }
L_001D50C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 12912u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D50D4u);  if (depth < kMaxDepth) unit_0067(c, 259u, depth + 1u); else { c.pc = 0x0029E7E0u; return; } if (c.pc != 0x001D50D4u) [[unlikely]] return; }
L_001D50D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 32380u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D50E4u);  if (depth < kMaxDepth) unit_006C(c, 89u, depth + 1u); else { c.pc = 0x002B0F10u; return; } if (c.pc != 0x001D50E4u) [[unlikely]] return; }
L_001D50E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D50ECu);  if (depth < kMaxDepth) unit_007A(c, 265u, depth + 1u); else { c.pc = 0x002EB940u; return; } if (c.pc != 0x001D50ECu) [[unlikely]] return; }
L_001D50EC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[16], c.r[16].w[0] - 5800u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[5].w[0] + 21560u);
    st32((c.r[2].w[0] - 29664u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5110u);  if (depth < kMaxDepth) unit_0043(c, 146u, depth + 1u); else { c.pc = 0x0020E1B0u; return; } if (c.pc != 0x001D5110u) [[unlikely]] return; }
L_001D5110:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D511Cu);  if (depth < kMaxDepth) unit_0043(c, 103u, depth + 1u); else { c.pc = 0x0020D7C0u; return; } if (c.pc != 0x001D511Cu) [[unlikely]] return; }
L_001D511C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5124u);  if (depth < kMaxDepth) unit_0039(c, 343u, depth + 1u); else { c.pc = 0x001E6E50u; return; } if (c.pc != 0x001D5124u) [[unlikely]] return; }
L_001D5124:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5134u);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x001D5134u) [[unlikely]] return; }
L_001D5134:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D5148:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], ld32((c.r[3].w[0] - 12556u)));
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D51A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[16], c.r[2].w[0] - 19792u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5188u);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x001D5188u) [[unlikely]] return; }
L_001D5188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D51A4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D519Cu);  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x001255E0u; return; } if (c.pc != 0x001D519Cu) [[unlikely]] return; }
L_001D519C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D51A8; } }
L_001D51A4:
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_001D51A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D51B0u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x001D51B0u) [[unlikely]] return; }
L_001D51B0:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[17], c.r[3].w[0] - 29668u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D51CCu);  if (depth < kMaxDepth) unit_009B(c, 432u, depth + 1u); else { c.pc = 0x0036F778u; return; } if (c.pc != 0x001D51CCu) [[unlikely]] return; }
L_001D51CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D51DC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001D51EC; } }
L_001D51DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 29656u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D51F0; } }
L_001D51EC:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001D51F0:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 29660u)));
    set32(c.r[2], ld32((c.r[19].w[0] - 29668u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001D5258; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D522C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 19344u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5224u);  if (depth < kMaxDepth) unit_0088(c, 275u, depth + 1u); else { c.pc = 0x00323240u; return; } if (c.pc != 0x001D5224u) [[unlikely]] return; }
L_001D5224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5240; } }
L_001D522C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 19344u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5240u);  if (depth < kMaxDepth) unit_0088(c, 285u, depth + 1u); else { c.pc = 0x00323420u; return; } if (c.pc != 0x001D5240u) [[unlikely]] return; }
L_001D5240:
    set32(c.r[3], ld32((c.r[19].w[0] - 29668u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] - 29664u), 0u);
    st32((c.r[16].w[0] - 29660u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5280; } }
L_001D5258:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5280; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[16].w[0] - 29664u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5278u);  if (depth < kMaxDepth) unit_0023(c, 68u, depth + 1u); else { c.pc = 0x0018D118u; return; } if (c.pc != 0x001D5278u) [[unlikely]] return; }
L_001D5278:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] - 29664u), c.r[2].w[0]);
    c.budget -= 2;
L_001D5280:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D52A0:
    set32(c.r[29], c.r[29].w[0] - 1216u);
    st128((c.r[29].w[0] + 1184u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 1168u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 1152u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 1136u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 1120u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 1104u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 1088u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 1072u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 1200u), c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D52D0u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001D52D0u) [[unlikely]] return; }
L_001D52D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D53D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D52E0u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x001D52E0u) [[unlikely]] return; }
L_001D52E0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D52ECu);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x001D52ECu) [[unlikely]] return; }
L_001D52EC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001D5344; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5310u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D5310u) [[unlikely]] return; }
L_001D5310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D5344; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.f[15] = 0u;
    set32(c.r[2], c.r[2].w[0] - 17840u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[14] = ld32((c.r[2].w[0] + 136u));
    c.f[12] = ld32((c.r[2].w[0] + 128u));
    c.f[13] = ld32((c.r[2].w[0] + 132u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D533Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001D533Cu) [[unlikely]] return; }
L_001D533C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D53B8; } }
L_001D5344:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5358u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001D5358u) [[unlikely]] return; }
L_001D5358:
    set32(c.r[3], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[7], 0u + 268u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] - 14152u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5398u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001D5398u) [[unlikely]] return; }
L_001D5398:
    c.f[12] = ld32((c.r[29].w[0] + 144u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 148u));
    c.f[14] = ld32((c.r[29].w[0] + 152u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D53B8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001D53B8u) [[unlikely]] return; }
L_001D53B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 10260u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5444; } }
L_001D53D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D53D8u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x001D53D8u) [[unlikely]] return; }
L_001D53D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D53E4u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x001D53E4u) [[unlikely]] return; }
L_001D53E4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001D5468; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5408u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D5408u) [[unlikely]] return; }
L_001D5408:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D5468; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.f[15] = 0u;
    set32(c.r[2], c.r[2].w[0] - 17840u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[14] = ld32((c.r[2].w[0] + 136u));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[12] = ld32((c.r[2].w[0] + 128u));
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = ld32((c.r[2].w[0] + 132u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D543Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001D543Cu) [[unlikely]] return; }
L_001D543C:
    set32(c.r[5], ld32((c.r[16].w[0] + 10260u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 2;
L_001D5444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D544Cu);  if (depth < kMaxDepth) unit_0081(c, 280u, depth + 1u); else { c.pc = 0x00307470u; return; } if (c.pc != 0x001D544Cu) [[unlikely]] return; }
L_001D544C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D565C; } }
    st32((c.r[21].w[0] + 10260u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5660; } }
L_001D5468:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    set32(c.r[19], 0u + 268u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5488u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001D5488u) [[unlikely]] return; }
L_001D5488:
    c.r[21].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 104u)));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[17], c.r[17].w[0] - 14152u);
    set32(c.r[5], c.r[29].w[0] + 544u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[20], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D54CCu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001D54CCu) [[unlikely]] return; }
L_001D54CC:
    c.f[12] = ld32((c.r[29].w[0] + 672u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 676u));
    c.f[14] = ld32((c.r[29].w[0] + 680u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D54ECu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001D54ECu) [[unlikely]] return; }
L_001D54EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D54FCu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001D54FCu) [[unlikely]] return; }
L_001D54FC:
    set32(c.r[3], ld32((c.r[2].w[0] + 104u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5530u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001D5530u) [[unlikely]] return; }
L_001D5530:
    c.f[12] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[13] = ld32((c.r[29].w[0] + 180u));
    c.f[14] = ld32((c.r[29].w[0] + 184u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5550u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001D5550u) [[unlikely]] return; }
L_001D5550:
    set32(c.r[5], ld32((c.r[18].w[0] + 10260u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5560u);  if (depth < kMaxDepth) unit_0081(c, 280u, depth + 1u); else { c.pc = 0x00307470u; return; } if (c.pc != 0x001D5560u) [[unlikely]] return; }
L_001D5560:
    set32(c.r[22], c.r[29].w[0] + 16u);
    set32(c.r[5], ld32((c.r[18].w[0] + 10260u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5578u);  if (depth < kMaxDepth) unit_0081(c, 280u, depth + 1u); else { c.pc = 0x00307470u; return; } if (c.pc != 0x001D5578u) [[unlikely]] return; }
L_001D5578:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[20].d[0];  if (t) { goto L_001D5598; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[19].d[0];  if (t) { goto L_001D565C; } }
L_001D558C:
    st32((c.r[21].w[0] + 10260u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5660; } }
L_001D5598:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[20].d[0];  if (t) { goto L_001D5650; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D558Cu | kUnwind; return; } goto L_001D558C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[18], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 17840u);
    c.f[15] = 0u;
    c.f[14] = ld32((c.r[2].w[0] + 136u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 128u));
    c.f[13] = ld32((c.r[2].w[0] + 132u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D55D0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001D55D0u) [[unlikely]] return; }
L_001D55D0:
    set32(c.r[5], ld32((c.r[21].w[0] + 10260u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D55E0u);  if (depth < kMaxDepth) unit_0081(c, 280u, depth + 1u); else { c.pc = 0x00307470u; return; } if (c.pc != 0x001D55E0u) [[unlikely]] return; }
L_001D55E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_001D565C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_001D5650; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D558Cu | kUnwind; return; } goto L_001D558C; } }
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5610u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001D5610u) [[unlikely]] return; }
L_001D5610:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D561Cu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x001D561Cu) [[unlikely]] return; }
L_001D561C:
    c.f[20] = c.f[0];
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5634u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001D5634u) [[unlikely]] return; }
L_001D5634:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5640u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x001D5640u) [[unlikely]] return; }
L_001D5640:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D558Cu | kUnwind; return; } goto L_001D558C; } }
L_001D5650:
    st32((c.r[21].w[0] + 10260u), c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5660; } }
L_001D565C:
    st32((c.r[21].w[0] + 10260u), 0u);
    c.budget -= 1;
L_001D5660:
    set32(c.r[3], ld32((c.r[21].w[0] + 10260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    ld128((c.r[29].w[0] + 1184u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1168u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 1152u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 1136u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 1120u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 1104u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 1088u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1072u));
    c.f[20] = ld32((c.r[29].w[0] + 1200u));
    st32((c.r[2].w[0] - 7276u), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 1216u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D56A0:
    set32(c.r[29], c.r[29].w[0] - 160u);
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
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D56D4u);  if (depth < kMaxDepth) unit_007D(c, 64u, depth + 1u); else { c.pc = 0x002F4870u; return; } if (c.pc != 0x001D56D4u) [[unlikely]] return; }
L_001D56D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[16], c.r[3].w[0] - 16432u);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D56F4; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D56F4u);  if (depth < kMaxDepth) unit_0087(c, 127u, depth + 1u); else { c.pc = 0x0031DE38u; return; } if (c.pc != 0x001D56F4u) [[unlikely]] return; }
L_001D56F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5708u);  if (depth < kMaxDepth) unit_0079(c, 130u, depth + 1u); else { c.pc = 0x002E60B8u; return; } if (c.pc != 0x001D5708u) [[unlikely]] return; }
L_001D5708:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 6092u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D574C; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x001D571Cu);  goto L_001D5720; }
L_001D5720:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 23016u)));
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D574C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D574C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D574Cu);  if (depth < kMaxDepth) unit_0079(c, 130u, depth + 1u); else { c.pc = 0x002E60B8u; return; } if (c.pc != 0x001D574Cu) [[unlikely]] return; }
L_001D574C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5754u);  if (depth < kMaxDepth) unit_0006(c, 363u, depth + 1u); else { c.pc = 0x0011AFC8u; return; } if (c.pc != 0x001D5754u) [[unlikely]] return; }
L_001D5754:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D576Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D576Cu) [[unlikely]] return; }
L_001D576C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23020u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D57D4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D578Cu);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x001D578Cu) [[unlikely]] return; }
L_001D578C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D57D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D579Cu);  if (depth < kMaxDepth) unit_007C(c, 89u, depth + 1u); else { c.pc = 0x002F1690u; return; } if (c.pc != 0x001D579Cu) [[unlikely]] return; }
L_001D579C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[2], c.r[3].w[0] - 16432u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D57B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D57B8u);  if (depth < kMaxDepth) unit_003B(c, 79u, depth + 1u); else { c.pc = 0x001ED6F0u; return; } if (c.pc != 0x001D57B8u) [[unlikely]] return; }
L_001D57B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[2].w[0] + 25152u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D57CCu);  if (depth < kMaxDepth) unit_0035(c, 250u, depth + 1u); else { c.pc = 0x001D52A0u; return; } if (c.pc != 0x001D57CCu) [[unlikely]] return; }
L_001D57CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5830; } }
L_001D57D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D57DCu);  if (depth < kMaxDepth) unit_0035(c, 250u, depth + 1u); else { c.pc = 0x001D52A0u; return; } if (c.pc != 0x001D57DCu) [[unlikely]] return; }
L_001D57DC:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[2].w[0] + 14208u);
    set32(c.r[17], 0u + 13248u);
    set32(c.r[19], c.r[18].w[0] + 13248u);
    c.budget -= 7;
L_001D57F8:
    set32(c.r[16], c.r[4].w[0] + 1u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 112u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D5820; } }
    mmi::mult(c, 0, c.r[4].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5820u);  if (depth < kMaxDepth) unit_0019(c, 157u, depth + 1u); else { c.pc = 0x00165C70u; return; } if (c.pc != 0x001D5820u) [[unlikely]] return; }
L_001D5820:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D57F8u | kUnwind; return; } goto L_001D57F8; } }
L_001D5830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5838u);  if (depth < kMaxDepth) unit_0084(c, 135u, depth + 1u); else { c.pc = 0x00311F48u; return; } if (c.pc != 0x001D5838u) [[unlikely]] return; }
L_001D5838:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[16], c.r[3].w[0] - 16432u);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5858; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5858u);  if (depth < kMaxDepth) unit_0087(c, 127u, depth + 1u); else { c.pc = 0x0031DE38u; return; } if (c.pc != 0x001D5858u) [[unlikely]] return; }
L_001D5858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5860u);  if (depth < kMaxDepth) unit_0079(c, 110u, depth + 1u); else { c.pc = 0x002E59E8u; return; } if (c.pc != 0x001D5860u) [[unlikely]] return; }
L_001D5860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5868u);  if (depth < kMaxDepth) unit_003B(c, 342u, depth + 1u); else { c.pc = 0x001EFF50u; return; } if (c.pc != 0x001D5868u) [[unlikely]] return; }
L_001D5868:
    set32(c.r[2], c.r[20].w[0] - 26128u);
    set32(c.r[3], ld32((c.r[2].w[0] + 196u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D5C68; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D588C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D588Cu);  if (depth < kMaxDepth) unit_007B(c, 102u, depth + 1u); else { c.pc = 0x002ED5C0u; return; } if (c.pc != 0x001D588Cu) [[unlikely]] return; }
L_001D588C:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5898u);  if (depth < kMaxDepth) unit_0081(c, 227u, depth + 1u); else { c.pc = 0x003069A0u; return; } if (c.pc != 0x001D5898u) [[unlikely]] return; }
L_001D5898:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[18], 0u + 7u);
    set32(c.r[16], c.r[22].w[0] + 27456u);
    c.budget -= 6;
L_001D58B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5920; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5920; } }
    set32(c.r[4], c.r[21].w[0] + 9872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D58D8u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001D58D8u) [[unlikely]] return; }
L_001D58D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D5920; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D58ECu);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x001D58ECu) [[unlikely]] return; }
L_001D58EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D592C; } }
    set32(c.r[4], c.r[19].w[0] - 19312u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5904u);  if (depth < kMaxDepth) unit_0088(c, 304u, depth + 1u); else { c.pc = 0x00323770u; return; } if (c.pc != 0x001D5904u) [[unlikely]] return; }
L_001D5904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D592C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5918u);  if (depth < kMaxDepth) unit_0089(c, 142u, depth + 1u); else { c.pc = 0x00325A50u; return; } if (c.pc != 0x001D5918u) [[unlikely]] return; }
L_001D5918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D592C; } }
L_001D5920:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5948; } }
L_001D592C:
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_001D5948; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13192u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 3;
L_001D5948:
    c.r[3].d[0] = c.r[3].d[0] << (c.r[17].w[0] & 63u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[20].d[0] = c.r[20].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[17].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D58B0u | kUnwind; return; } goto L_001D58B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23016u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D5AF4; } }
    set32(c.r[19], c.r[22].w[0] + 27456u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[21], c.r[2].w[0] + 9872u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[30], 0u + 7u);
    set32(c.r[23], 0u + 1u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
L_001D5998:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D59A8u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001D59A8u) [[unlikely]] return; }
L_001D59A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D5AD4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001D5AD4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5AD4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5AD4; } }
    set32(c.r[2], c.r[23].w[0] << (c.r[18].w[0] & 31u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    set32(c.r[5], 0u - 1u);
    c.r[20].d[0] = c.r[20].d[0] & c.r[3].d[0];
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D59F8u);  if (depth < kMaxDepth) unit_0079(c, 209u, depth + 1u); else { c.pc = 0x002E7240u; return; } if (c.pc != 0x001D59F8u) [[unlikely]] return; }
L_001D59F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5A68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5A68; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5A20u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001D5A20u) [[unlikely]] return; }
L_001D5A20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D5A68; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5A34u);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x001D5A34u) [[unlikely]] return; }
L_001D5A34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5A74; } }
    set32(c.r[4], c.r[22].w[0] - 19312u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5A4Cu);  if (depth < kMaxDepth) unit_0088(c, 304u, depth + 1u); else { c.pc = 0x00323770u; return; } if (c.pc != 0x001D5A4Cu) [[unlikely]] return; }
L_001D5A4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5A74; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5A60u);  if (depth < kMaxDepth) unit_0089(c, 142u, depth + 1u); else { c.pc = 0x00325A50u; return; } if (c.pc != 0x001D5A60u) [[unlikely]] return; }
L_001D5A60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5A74; } }
L_001D5A68:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5A90; } }
L_001D5A74:
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[30].d[0];  if (t) { goto L_001D5A90; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13192u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 3;
L_001D5A90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[3].d[0] = c.r[3].d[0] << (c.r[18].w[0] & 63u);
    set32(c.r[16], c.r[2].w[0] + 12320u);
    c.r[20].d[0] = c.r[20].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5AACu);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x001D5AACu) [[unlikely]] return; }
L_001D5AAC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001D5AD4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001D5AD4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5AD4u);  if (depth < kMaxDepth) unit_0081(c, 153u, depth + 1u); else { c.pc = 0x00305F30u; return; } if (c.pc != 0x001D5AD4u) [[unlikely]] return; }
L_001D5AD4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 13248u);
    set32(c.r[17], c.r[17].w[0] + 13248u);
    c.r[2].d[0] = c.r[18].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D5998u | kUnwind; return; } goto L_001D5998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5C68; } }
L_001D5AF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[19], c.r[2].w[0] + 3072u);
    set32(c.r[21], c.r[3].w[0] + 9872u);
    set32(c.r[18], 0u + 13u);
    set32(c.r[30], 0u + 7u);
    set32(c.r[23], 0u + 1u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 9;
L_001D5B18:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5B28u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001D5B28u) [[unlikely]] return; }
L_001D5B28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D5C54; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001D5C54; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5C54; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5C54; } }
    set32(c.r[2], c.r[23].w[0] << (c.r[18].w[0] & 31u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    set32(c.r[5], 0u - 1u);
    c.r[20].d[0] = c.r[20].d[0] & c.r[3].d[0];
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5B78u);  if (depth < kMaxDepth) unit_0079(c, 209u, depth + 1u); else { c.pc = 0x002E7240u; return; } if (c.pc != 0x001D5B78u) [[unlikely]] return; }
L_001D5B78:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5BE8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5BE8; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5BA0u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001D5BA0u) [[unlikely]] return; }
L_001D5BA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D5BE8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5BB4u);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x001D5BB4u) [[unlikely]] return; }
L_001D5BB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5BF4; } }
    set32(c.r[4], c.r[22].w[0] - 19312u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5BCCu);  if (depth < kMaxDepth) unit_0088(c, 304u, depth + 1u); else { c.pc = 0x00323770u; return; } if (c.pc != 0x001D5BCCu) [[unlikely]] return; }
L_001D5BCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5BF4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5BE0u);  if (depth < kMaxDepth) unit_0089(c, 142u, depth + 1u); else { c.pc = 0x00325A50u; return; } if (c.pc != 0x001D5BE0u) [[unlikely]] return; }
L_001D5BE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5BF4; } }
L_001D5BE8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5C10; } }
L_001D5BF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[30].d[0];  if (t) { goto L_001D5C10; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13192u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 3;
L_001D5C10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[3].d[0] = c.r[3].d[0] << (c.r[18].w[0] & 63u);
    set32(c.r[16], c.r[2].w[0] + 12320u);
    c.r[20].d[0] = c.r[20].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5C2Cu);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x001D5C2Cu) [[unlikely]] return; }
L_001D5C2C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001D5C54; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001D5C54; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5C54u);  if (depth < kMaxDepth) unit_0081(c, 153u, depth + 1u); else { c.pc = 0x00305F30u; return; } if (c.pc != 0x001D5C54u) [[unlikely]] return; }
L_001D5C54:
    set32(c.r[19], c.r[19].w[0] - 13248u);
    set32(c.r[17], c.r[17].w[0] - 13248u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D5B18u | kUnwind; return; } goto L_001D5B18; } }
L_001D5C68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[2], c.r[3].w[0] - 16432u);
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D5C88; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5C88u);  if (depth < kMaxDepth) unit_0087(c, 127u, depth + 1u); else { c.pc = 0x0031DE38u; return; } if (c.pc != 0x001D5C88u) [[unlikely]] return; }
L_001D5C88:
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
L_001D5CC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5CD0u);  if (depth < kMaxDepth) unit_0005(c, 10u, depth + 1u); else { c.pc = 0x001141B0u; return; } if (c.pc != 0x001D5CD0u) [[unlikely]] return; }
L_001D5CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5CD8u);  if (depth < kMaxDepth) unit_0003(c, 309u, depth + 1u); else { c.pc = 0x0010FE38u; return; } if (c.pc != 0x001D5CD8u) [[unlikely]] return; }
L_001D5CD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10276u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D5D08; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5CF8u);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x001D5CF8u) [[unlikely]] return; }
L_001D5CF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5D08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5D08u);  if (depth < kMaxDepth) unit_0068(c, 276u, depth + 1u); else { c.pc = 0x002A3840u; return; } if (c.pc != 0x001D5D08u) [[unlikely]] return; }
L_001D5D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5D10u);  if (depth < kMaxDepth) unit_0094(c, 339u, depth + 1u); else { c.pc = 0x00353908u; return; } if (c.pc != 0x001D5D10u) [[unlikely]] return; }
L_001D5D10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[4], c.r[4].w[0] + 20032u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5D20u);  if (depth < kMaxDepth) unit_0095(c, 413u, depth + 1u); else { c.pc = 0x00357428u; return; } if (c.pc != 0x001D5D20u) [[unlikely]] return; }
L_001D5D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5D28u);  if (depth < kMaxDepth) unit_0068(c, 284u, depth + 1u); else { c.pc = 0x002A38C8u; return; } if (c.pc != 0x001D5D28u) [[unlikely]] return; }
L_001D5D28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 18288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5D38u);  if (depth < kMaxDepth) unit_0006(c, 24u, depth + 1u); else { c.pc = 0x001182D8u; return; } if (c.pc != 0x001D5D38u) [[unlikely]] return; }
L_001D5D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5D40u);  if (depth < kMaxDepth) unit_0081(c, 107u, depth + 1u); else { c.pc = 0x00305748u; return; } if (c.pc != 0x001D5D40u) [[unlikely]] return; }
L_001D5D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5D48u);  if (depth < kMaxDepth) unit_0018(c, 368u, depth + 1u); else { c.pc = 0x001631E0u; return; } if (c.pc != 0x001D5D48u) [[unlikely]] return; }
L_001D5D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5D50u);  if (depth < kMaxDepth) unit_0006(c, 461u, depth + 1u); else { c.pc = 0x0011BBD8u; return; } if (c.pc != 0x001D5D50u) [[unlikely]] return; }
L_001D5D50:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5D68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D5D68u) [[unlikely]] return; }
L_001D5D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5D70u);  if (depth < kMaxDepth) unit_0030(c, 57u, depth + 1u); else { c.pc = 0x001C0A18u; return; } if (c.pc != 0x001D5D70u) [[unlikely]] return; }
L_001D5D70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 21680u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5D80u);  if (depth < kMaxDepth) unit_002A(c, 381u, depth + 1u); else { c.pc = 0x001AB3B0u; return; } if (c.pc != 0x001D5D80u) [[unlikely]] return; }
L_001D5D80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] + 26848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5D90u);  if (depth < kMaxDepth) unit_0093(c, 232u, depth + 1u); else { c.pc = 0x0034E660u; return; } if (c.pc != 0x001D5D90u) [[unlikely]] return; }
L_001D5D90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 12688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5DA0u);  if (depth < kMaxDepth) unit_001A(c, 94u, depth + 1u); else { c.pc = 0x00169258u; return; } if (c.pc != 0x001D5DA0u) [[unlikely]] return; }
L_001D5DA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 18848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5DB0u);  if (depth < kMaxDepth) unit_0006(c, 75u, depth + 1u); else { c.pc = 0x001189A8u; return; } if (c.pc != 0x001D5DB0u) [[unlikely]] return; }
L_001D5DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5DB8u);  if (depth < kMaxDepth) unit_002A(c, 408u, depth + 1u); else { c.pc = 0x001AB738u; return; } if (c.pc != 0x001D5DB8u) [[unlikely]] return; }
L_001D5DB8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5DD0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D5DD0u) [[unlikely]] return; }
L_001D5DD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D5DE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5DF8u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x001D5DF8u) [[unlikely]] return; }
L_001D5DF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D5E90; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5E10u);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x001D5E10u) [[unlikely]] return; }
L_001D5E10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5E90; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[3], c.r[3].w[0] + 27456u);
    c.r[2].d[0] = c.r[2].d[0] | 54400ull;
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
L_001D5E30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 112u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001D5E78; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001D5E78; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 11504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001D5E78; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 11516u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D5E78; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 10372u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D5E78; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 2;
L_001D5E78:
    set32(c.r[3], c.r[3].w[0] + 13248u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D5E30u | kUnwind; return; } goto L_001D5E30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5EE0; } }
L_001D5E90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10272u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D5EE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 31956u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D5EC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10264u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D5EE0; } }
L_001D5EC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 17704u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5EE0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D5EE0u) [[unlikely]] return; }
L_001D5EE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D5EF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5F10u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x001D5F10u) [[unlikely]] return; }
L_001D5F10:
    set32(c.r[3], ld32((c.r[16].w[0] + 12208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001D5F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5F24u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x001D5F24u) [[unlikely]] return; }
L_001D5F24:
    st32((c.r[16].w[0] + 12208u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5F30u);  if (depth < kMaxDepth) unit_0037(c, 109u, depth + 1u); else { c.pc = 0x001DCCA0u; return; } if (c.pc != 0x001D5F30u) [[unlikely]] return; }
L_001D5F30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5F44u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x001D5F44u) [[unlikely]] return; }
L_001D5F44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_001D6010; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5F5Cu);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x001D5F5Cu) [[unlikely]] return; }
L_001D5F5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D6010; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[17], c.r[2].w[0] - 14960u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5F7Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001D5F7Cu) [[unlikely]] return; }
L_001D5F7C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5F88u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x001D5F88u) [[unlikely]] return; }
L_001D5F88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D5FE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 26368u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D5FB0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5FCC; } }
L_001D5FB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5FC0u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001D5FC0u) [[unlikely]] return; }
L_001D5FC0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_001D5FCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5FD4u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001D5FD4u) [[unlikely]] return; }
L_001D5FD4:
    st8((c.r[16].w[0] + 10090u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6010; } }
L_001D5FE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[2].w[0] + 19504u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5FF0u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001D5FF0u) [[unlikely]] return; }
L_001D5FF0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001D600C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D600Cu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001D600Cu) [[unlikely]] return; }
L_001D600C:
    st8((c.r[16].w[0] + 10090u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001D6010:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D6030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[2].w[0] - 6080u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[17], c.r[3].w[0] + 27456u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] + 28392u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 10272u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[6].w[0] - 25268u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[3].w[0] + 256u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6098u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001D6098u) [[unlikely]] return; }
L_001D6098:
    c.f[2] = ld32((c.r[16].w[0] + 132u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], c.r[2].w[0] - 17840u);
    c.f[6] = 0u;
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    st32((c.r[4].w[0] + 128u), c.f[1]);
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[2]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D60D0; } }
    c.f[2] = c.f[6];
    c.budget -= 1;
L_001D60D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    set32(c.r[3], c.r[17].w[0] - 13248u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC51C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[3] = c.r[1].w[0];
    c.f[2] = ld32((c.r[2].w[0] - 26360u));
    c.f[4] = ld32((c.r[3].w[0] + 13384u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC6940000u);
    c.r[1].d[0] = c.r[1].d[0] | 28672ull;
    c.f[5] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3FA0000u);
    c.f[2] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[5]));
    st32((c.r[4].w[0] + 148u), c.f[6]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 144u), c.f[2]);
    st32((c.r[4].w[0] + 132u), c.f[0]);
    c.budget -= 25;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D6138; } }
    st32((c.r[3].w[0] + 13384u), c.f[5]);
    c.budget -= 1;
L_001D6138:
    c.f[0] = ld32((c.r[3].w[0] + 13384u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46940000u);
    c.r[1].d[0] = c.r[1].d[0] | 28672ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D6160; } }
    st32((c.r[3].w[0] + 13384u), c.f[1]);
    c.budget -= 1;
L_001D6160:
    c.f[0] = ld32((c.r[3].w[0] + 13376u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D6178; } }
    st32((c.r[3].w[0] + 13376u), c.f[5]);
    c.budget -= 1;
L_001D6178:
    c.f[0] = ld32((c.r[3].w[0] + 13376u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D6190; } }
    st32((c.r[3].w[0] + 13376u), c.f[1]);
    c.budget -= 1;
L_001D6190:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[7] = c.r[1].w[0];
    c.f[6] = c.f[1];
    c.f[3] = ld32((c.r[2].w[0] - 26364u));
    c.f[4] = c.f[5];
    set32(c.r[3], c.r[17].w[0] + 26496u);
    set32(c.r[5], 0u + 19u);
    c.budget -= 10;
L_001D61B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D634C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D634C; } }
    st32((c.r[3].w[0] + 504u), 0u);
    c.f[2] = ld32((c.r[3].w[0] + 128u));
    c.f[0] = ld32((c.r[4].w[0] + 13376u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D6210; } }
    c.f[1] = fp::add(c.f[3], c.f[3]);
    c.f[0] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[0]));
    st32((c.r[3].w[0] + 128u), c.f[0]);
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D6210; } }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 128u), c.f[0]);
    c.budget -= 2;
L_001D6210:
    c.f[0] = ld32((c.r[4].w[0] + 13376u));
    c.f[1] = ld32((c.r[3].w[0] + 128u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D624C; } }
    c.f[2] = fp::add(c.f[3], c.f[3]);
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    st32((c.r[3].w[0] + 128u), c.f[0]);
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D624C; } }
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 128u), c.f[0]);
    c.budget -= 2;
L_001D624C:
    c.f[1] = fp::sub(c.f[3], c.f[7]);
    c.f[0] = ld32((c.r[4].w[0] + 13384u));
    c.f[2] = ld32((c.r[3].w[0] + 136u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D628C; } }
    c.f[1] = fp::add(c.f[3], c.f[3]);
    c.f[0] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[0]));
    st32((c.r[3].w[0] + 136u), c.f[0]);
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D628C; } }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 136u), c.f[0]);
    c.budget -= 2;
L_001D628C:
    c.f[1] = fp::add(c.f[3], c.f[7]);
    c.f[0] = ld32((c.r[4].w[0] + 13384u));
    c.f[2] = ld32((c.r[3].w[0] + 136u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D62CC; } }
    c.f[1] = fp::add(c.f[3], c.f[3]);
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    st32((c.r[3].w[0] + 136u), c.f[0]);
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D62CC; } }
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 136u), c.f[0]);
    c.budget -= 2;
L_001D62CC:
    c.f[0] = ld32((c.r[3].w[0] + 136u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC6940000u);
    c.r[1].d[0] = c.r[1].d[0] | 28672ull;
    c.f[2] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D62F4; } }
    st32((c.r[3].w[0] + 136u), c.f[2]);
    c.budget -= 1;
L_001D62F4:
    c.f[0] = ld32((c.r[3].w[0] + 136u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46940000u);
    c.r[1].d[0] = c.r[1].d[0] | 28672ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D631C; } }
    st32((c.r[3].w[0] + 136u), c.f[1]);
    c.budget -= 1;
L_001D631C:
    c.f[0] = ld32((c.r[3].w[0] + 128u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D6334; } }
    st32((c.r[3].w[0] + 128u), c.f[2]);
    c.budget -= 1;
L_001D6334:
    c.f[0] = ld32((c.r[3].w[0] + 128u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D634C; } }
    st32((c.r[3].w[0] + 128u), c.f[1]);
    c.budget -= 1;
L_001D634C:
    set32(c.r[3], c.r[3].w[0] + 13248u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D61B8u | kUnwind; return; } goto L_001D61B8; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D6378:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[19], c.r[2].w[0] + 10768u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    set32(c.r[18], c.r[2].w[0] - 6080u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    set32(c.r[23], c.r[19].w[0] + 428u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[30], c.r[3].w[0] - 13888u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[9].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[22], 0u + 40u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 20;
L_001D63C8:
    mmi::mult(c, 0, c.r[9].w[0], c.r[22].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[19].w[0] + 420u);
    set32(c.r[21], c.r[9].w[0] + 1u);
    set32(c.r[20], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D656C; } }
    set32(c.r[3], c.r[19].w[0] + c.r[6].w[0]);
    set32(c.r[5], 0u + 268u);
    set32(c.r[16], ld32((c.r[3].w[0] + 404u)));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 408u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[2].w[0] + c.r[30].w[0]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D656C; } }
    set32(c.r[2], c.r[19].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 412u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001D645C; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0] + 416u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D6498; } }
L_001D645C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 144u), 0u);
    st32((c.r[18].w[0] + 148u), 0u);
    st32((c.r[18].w[0] + 152u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D647Cu);  if (depth < kMaxDepth) unit_0049(c, 4u, depth + 1u); else { c.pc = 0x002240F0u; return; } if (c.pc != 0x001D647Cu) [[unlikely]] return; }
L_001D647C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D648Cu);  if (depth < kMaxDepth) unit_006B(c, 191u, depth + 1u); else { c.pc = 0x002AF720u; return; } if (c.pc != 0x001D648Cu) [[unlikely]] return; }
L_001D648C:
    st32((c.r[20].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D656C; } }
L_001D6498:
    set32(c.r[2], c.r[8].w[0] - c.r[3].w[0]);
    set32(c.r[4], 0u + 40u);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[19].w[0] + 424u);
    c.r[5].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[1] = 0u;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[9].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 3u);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[23].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 20;
L_001D64E8:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D64E8u | kUnwind; return; } goto L_001D64E8; } }
    mmi::mult(c, 0, c.r[9].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 148u), 0u);
    st32((c.r[18].w[0] + 152u), 0u);
    set32(c.r[6], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 144u), c.f[1]);
    c.r[6].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 4u);
    if (c.r[6].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6558u);  if (depth < kMaxDepth) unit_006B(c, 189u, depth + 1u); else { c.pc = 0x002AF6B8u; return; } if (c.pc != 0x001D6558u) [[unlikely]] return; }
L_001D6558:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D656Cu);  if (depth < kMaxDepth) unit_0049(c, 4u, depth + 1u); else { c.pc = 0x002240F0u; return; } if (c.pc != 0x001D656Cu) [[unlikely]] return; }
L_001D656C:
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D63C8u | kUnwind; return; } goto L_001D63C8; } }
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
L_001D65B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[5].w[0] + 2016u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[17], c.r[4].w[0] - 6080u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    set32(c.r[22], c.r[3].w[0] + 12u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    set32(c.r[23], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[30], c.r[2].w[0] - 13248u);
    c.r[20].d[0] = c.r[18].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 26;
L_001D6618:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D66A4; } }
    set32(c.r[6], ld32((c.r[22].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6648u);  if (depth < kMaxDepth) unit_0049(c, 139u, depth + 1u); else { c.pc = 0x00225E48u; return; } if (c.pc != 0x001D6648u) [[unlikely]] return; }
L_001D6648:
    c.f[12] = ld32((c.r[17].w[0] + 128u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[17].w[0] + 132u));
    c.f[14] = ld32((c.r[17].w[0] + 136u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6668u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001D6668u) [[unlikely]] return; }
L_001D6668:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6678u);  if (depth < kMaxDepth) unit_0060(c, 185u, depth + 1u); else { c.pc = 0x00282E28u; return; } if (c.pc != 0x001D6678u) [[unlikely]] return; }
L_001D6678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[23].d[0];  if (t) { goto L_001D668C; } }
    st32((c.r[16].w[0] - 12736u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6694; } }
L_001D668C:
    set32(c.r[2], c.r[19].w[0] + c.r[30].w[0]);
    st32((c.r[2].w[0] + 512u), 0u);
    c.budget -= 2;
L_001D6694:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D66A4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001D66A4u) [[unlikely]] return; }
L_001D66A4:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[22], c.r[22].w[0] + 268u);
    set32(c.r[19], c.r[19].w[0] + 13248u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D6618u | kUnwind; return; } goto L_001D6618; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] - 17840u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[14] = ld32((c.r[2].w[0] + 136u));
    c.f[12] = ld32((c.r[2].w[0] + 128u));
    c.f[13] = ld32((c.r[2].w[0] + 132u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D66F0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001D66F0u) [[unlikely]] return; }
L_001D66F0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D66FCu);  if (depth < kMaxDepth) unit_0060(c, 188u, depth + 1u); else { c.pc = 0x00282F70u; return; } if (c.pc != 0x001D66FCu) [[unlikely]] return; }
L_001D66FC:
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
L_001D6730:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6740u);  if (depth < kMaxDepth) unit_001F(c, 323u, depth + 1u); else { c.pc = 0x0017FDD0u; return; } if (c.pc != 0x001D6740u) [[unlikely]] return; }
L_001D6740:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] + 24040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6750u);  if (depth < kMaxDepth) unit_007D(c, 262u, depth + 1u); else { c.pc = 0x002F7A00u; return; } if (c.pc != 0x001D6750u) [[unlikely]] return; }
L_001D6750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D6768; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6768u);  if (depth < kMaxDepth) unit_0037(c, 462u, depth + 1u); else { c.pc = 0x001DF0F8u; return; } if (c.pc != 0x001D6768u) [[unlikely]] return; }
L_001D6768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6770u);  if (depth < kMaxDepth) unit_0018(c, 180u, depth + 1u); else { c.pc = 0x00161B70u; return; } if (c.pc != 0x001D6770u) [[unlikely]] return; }
L_001D6770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6778u);  if (depth < kMaxDepth) unit_009E(c, 71u, depth + 1u); else { c.pc = 0x00378A30u; return; } if (c.pc != 0x001D6778u) [[unlikely]] return; }
L_001D6778:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + 14664u);
    set32(c.r[2], ld32((c.r[3].w[0] + 220u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D67A8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 220u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D67A8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 2;
L_001D67A8:
    set32(c.r[3], c.r[4].w[0] + 14664u);
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D67CC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 212u), 0u);
    st32((c.r[3].w[0] + 224u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D67D0; } }
L_001D67CC:
    st32((c.r[3].w[0] + 224u), 0u);
    c.budget -= 1;
L_001D67D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D67D8u);  if (depth < kMaxDepth) unit_0018(c, 172u, depth + 1u); else { c.pc = 0x001619F0u; return; } if (c.pc != 0x001D67D8u) [[unlikely]] return; }
L_001D67D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 5728u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D67F4; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D67F4u);  if (depth < kMaxDepth) unit_0087(c, 127u, depth + 1u); else { c.pc = 0x0031DE38u; return; } if (c.pc != 0x001D67F4u) [[unlikely]] return; }
L_001D67F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D6808:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 2048u)));
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], ld32((c.r[3].w[0] - 31960u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
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
    st32((c.r[2].w[0] + 2048u), c.r[4].w[0]);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D68E0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[6].w[0] + 10264u), 0u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001D6894; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D6938; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D68A0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D68C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6938; } }
L_001D6894:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D68A4; } }
L_001D68A0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001D68A4:
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x001D68ACu);  goto L_001D68B0; }
L_001D68B0:
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D6938; } }
    st32((c.r[6].w[0] + 10264u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6938; } }
L_001D68C8:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D6938; } }
    st32((c.r[6].w[0] + 10264u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6938; } }
L_001D68E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D6900; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23012u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D6930; } }
L_001D6900:
    set32(c.r[2], 0u + 6u);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x001D690Cu);  goto L_001D6910; }
L_001D6910:
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D6930; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 10264u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6938; } }
L_001D6930:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st32((c.r[2].w[0] + 10264u), 0u);
    c.budget -= 2;
L_001D6938:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 5728u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_001D703C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 26820u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6960u);  if (depth < kMaxDepth) unit_0083(c, 237u, depth + 1u); else { c.pc = 0x0030F0C0u; return; } if (c.pc != 0x001D6960u) [[unlikely]] return; }
L_001D6960:
    set32(c.r[2], ld32((c.r[16].w[0] - 29700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001D6988; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 29692u)));
    set32(c.r[4], c.r[4].w[0] + 12224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6984u);  if (depth < kMaxDepth) unit_0038(c, 207u, depth + 1u); else { c.pc = 0x001E15A0u; return; } if (c.pc != 0x001D6984u) [[unlikely]] return; }
L_001D6984:
    st32((c.r[16].w[0] - 29700u), 0u);
    c.budget -= 1;
L_001D6988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6990u);  if (depth < kMaxDepth) unit_0035(c, 348u, depth + 1u); else { c.pc = 0x001D5EF0u; return; } if (c.pc != 0x001D6990u) [[unlikely]] return; }
L_001D6990:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12212u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D69A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D69A8u);  if (depth < kMaxDepth) unit_0035(c, 360u, depth + 1u); else { c.pc = 0x001D6030u; return; } if (c.pc != 0x001D69A8u) [[unlikely]] return; }
L_001D69A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D69B0u);  if (depth < kMaxDepth) unit_0074(c, 29u, depth + 1u); else { c.pc = 0x002D0498u; return; } if (c.pc != 0x001D69B0u) [[unlikely]] return; }
L_001D69B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[16], c.r[3].w[0] + 14664u);
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 228u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001D69F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D69D0u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x001D69D0u) [[unlikely]] return; }
L_001D69D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D69F8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 232u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D69E4u);  if (depth < kMaxDepth) unit_007D(c, 228u, depth + 1u); else { c.pc = 0x002F7258u; return; } if (c.pc != 0x001D69E4u) [[unlikely]] return; }
L_001D69E4:
    st32((c.r[16].w[0] + 228u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D69F8; } }
L_001D69F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D69F8u);  if (depth < kMaxDepth) unit_0082(c, 233u, depth + 1u); else { c.pc = 0x0030B418u; return; } if (c.pc != 0x001D69F8u) [[unlikely]] return; }
L_001D69F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6A00u);  if (depth < kMaxDepth) unit_0043(c, 23u, depth + 1u); else { c.pc = 0x0020C6C0u; return; } if (c.pc != 0x001D6A00u) [[unlikely]] return; }
L_001D6A00:
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[18].w[0] + 14664u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 196u)));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[21], 0u + 6u);
    set32(c.r[20], 0u + 13u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6A24u);  if (depth < kMaxDepth) unit_0040(c, 32u, depth + 1u); else { c.pc = 0x00200668u; return; } if (c.pc != 0x001D6A24u) [[unlikely]] return; }
L_001D6A24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6A2Cu);  if (depth < kMaxDepth) unit_0035(c, 323u, depth + 1u); else { c.pc = 0x001D5CC0u; return; } if (c.pc != 0x001D6A2Cu) [[unlikely]] return; }
L_001D6A2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6A34u);  if (depth < kMaxDepth) unit_004F(c, 73u, depth + 1u); else { c.pc = 0x0023DA40u; return; } if (c.pc != 0x001D6A34u) [[unlikely]] return; }
L_001D6A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6A3Cu);  if (depth < kMaxDepth) unit_0039(c, 418u, depth + 1u); else { c.pc = 0x001E7E80u; return; } if (c.pc != 0x001D6A3Cu) [[unlikely]] return; }
L_001D6A3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[18], c.r[2].w[0] + 27456u);
    c.budget -= 3;
L_001D6A48:
    set32(c.r[4], c.r[18].w[0] + 10280u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6A58u);  if (depth < kMaxDepth) unit_009E(c, 64u, depth + 1u); else { c.pc = 0x00378920u; return; } if (c.pc != 0x001D6A58u) [[unlikely]] return; }
L_001D6A58:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001D6AD4; } }
    set32(c.r[4], c.r[22].w[0] + 9872u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6A74u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001D6A74u) [[unlikely]] return; }
L_001D6A74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001D6AD4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D6AA8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_001D6AA8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 920u)));
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D6AD4; } }
L_001D6AA8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6ABCu);  if (depth < kMaxDepth) unit_0061(c, 88u, depth + 1u); else { c.pc = 0x00284FE0u; return; } if (c.pc != 0x001D6ABCu) [[unlikely]] return; }
L_001D6ABC:
    set32(c.r[2], ld32((c.r[16].w[0] + 920u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001D6AD4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6AD4u);  if (depth < kMaxDepth) unit_009E(c, 69u, depth + 1u); else { c.pc = 0x00378A08u; return; } if (c.pc != 0x001D6AD4u) [[unlikely]] return; }
L_001D6AD4:
    set32(c.r[18], c.r[18].w[0] + 13248u);
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D6A48u | kUnwind; return; } goto L_001D6A48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[17], c.r[2].w[0] + 10464u);
    set32(c.r[4], c.r[4].w[0] + 27792u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6AFCu);  if (depth < kMaxDepth) unit_009E(c, 110u, depth + 1u); else { c.pc = 0x003792F0u; return; } if (c.pc != 0x001D6AFCu) [[unlikely]] return; }
L_001D6AFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 928u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6B0Cu);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x003664F8u; return; } if (c.pc != 0x001D6B0Cu) [[unlikely]] return; }
L_001D6B0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6B14u);  if (depth < kMaxDepth) unit_0032(c, 374u, depth + 1u); else { c.pc = 0x001CB9B0u; return; } if (c.pc != 0x001D6B14u) [[unlikely]] return; }
L_001D6B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6B1Cu);  if (depth < kMaxDepth) unit_0035(c, 242u, depth + 1u); else { c.pc = 0x001D5148u; return; } if (c.pc != 0x001D6B1Cu) [[unlikely]] return; }
L_001D6B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6B24u);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CD830u; return; } if (c.pc != 0x001D6B24u) [[unlikely]] return; }
L_001D6B24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 14016u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6B34u);  if (depth < kMaxDepth) unit_009A(c, 229u, depth + 1u); else { c.pc = 0x0036B278u; return; } if (c.pc != 0x001D6B34u) [[unlikely]] return; }
L_001D6B34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6B3Cu);  if (depth < kMaxDepth) unit_0037(c, 178u, depth + 1u); else { c.pc = 0x001DD498u; return; } if (c.pc != 0x001D6B3Cu) [[unlikely]] return; }
L_001D6B3C:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D6C38; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D6B80; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6B78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D6B78u) [[unlikely]] return; }
L_001D6B78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6C38; } }
L_001D6B80:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D6BA4; } }
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x001D6B98u);  goto L_001D6B9C; }
L_001D6B9C:
    c.r[2].d[0] = c.hi.d[0];
    if (c.r[2].d[0] != 0) c.r[4].d[0] = 0ull;
    c.budget -= 2;
L_001D6BA4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D6C38; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[16], c.r[4].w[0] - c.r[2].w[0]);
    st32((c.r[3].w[0] - 21440u), c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001D6BEC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6BD8u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x001D6BD8u) [[unlikely]] return; }
L_001D6BD8:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x001D6BE0u);  goto L_001D6BE4; }
L_001D6BE4:
    c.r[3].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_001D6BEC:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[16], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001D6C2C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6C18u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x001D6C18u) [[unlikely]] return; }
L_001D6C18:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x001D6C20u);  goto L_001D6C24; }
L_001D6C24:
    c.r[3].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_001D6C2C:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
L_001D6C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6C40u);  if (depth < kMaxDepth) unit_0007(c, 337u, depth + 1u); else { c.pc = 0x0011EC50u; return; } if (c.pc != 0x001D6C40u) [[unlikely]] return; }
L_001D6C40:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6C5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D6C5Cu) [[unlikely]] return; }
L_001D6C5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6C64u);  if (depth < kMaxDepth) unit_0006(c, 223u, depth + 1u); else { c.pc = 0x00119CD8u; return; } if (c.pc != 0x001D6C64u) [[unlikely]] return; }
L_001D6C64:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6C7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D6C7Cu) [[unlikely]] return; }
L_001D6C7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6C8Cu);  if (depth < kMaxDepth) unit_0087(c, 273u, depth + 1u); else { c.pc = 0x0031FCE0u; return; } if (c.pc != 0x001D6C8Cu) [[unlikely]] return; }
L_001D6C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6C94u);  if (depth < kMaxDepth) unit_002B(c, 205u, depth + 1u); else { c.pc = 0x001ADCC0u; return; } if (c.pc != 0x001D6C94u) [[unlikely]] return; }
L_001D6C94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6CA4u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x001D6CA4u) [[unlikely]] return; }
L_001D6CA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D6CC0; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[16], 0u + 1u);
    st32((c.r[23].w[0] - 26356u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6CD0; } }
L_001D6CC0:
    set32(c.r[2], ld32((c.r[23].w[0] - 26356u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D6D18; } }
    st32((c.r[23].w[0] - 26356u), 0u);
    c.budget -= 1;
L_001D6CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6CD8u);  if (depth < kMaxDepth) unit_0061(c, 24u, depth + 1u); else { c.pc = 0x00284410u; return; } if (c.pc != 0x001D6CD8u) [[unlikely]] return; }
L_001D6CD8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6CF4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D6CF4u) [[unlikely]] return; }
L_001D6CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6CFCu);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001D6CFCu) [[unlikely]] return; }
L_001D6CFC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 176u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 180u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6D18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D6D18u) [[unlikely]] return; }
L_001D6D18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 4984u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D6D40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6D38u);  if (depth < kMaxDepth) unit_0071(c, 327u, depth + 1u); else { c.pc = 0x002C7790u; return; } if (c.pc != 0x001D6D38u) [[unlikely]] return; }
L_001D6D38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D6D50; } }
L_001D6D40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 13360u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D6D54; } }
L_001D6D50:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001D6D54:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001D6D7C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 23016u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 10112u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 23016u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 10112u), c.r[3].w[0]);
    c.budget -= 8;
L_001D6D7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6D84u);  if (depth < kMaxDepth) unit_0035(c, 279u, depth + 1u); else { c.pc = 0x001D56A0u; return; } if (c.pc != 0x001D6D84u) [[unlikely]] return; }
L_001D6D84:
    set32(c.r[2], c.r[30].w[0] - 16432u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D6DA0; } }
    set32(c.r[4], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6DA0u);  if (depth < kMaxDepth) unit_007B(c, 130u, depth + 1u); else { c.pc = 0x002EDF98u; return; } if (c.pc != 0x001D6DA0u) [[unlikely]] return; }
L_001D6DA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 29936u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D6DC4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[12] = c.r[1].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6DC4u);  if (depth < kMaxDepth) unit_0000(c, 57u, depth + 1u); else { c.pc = 0x001009F8u; return; } if (c.pc != 0x001D6DC4u) [[unlikely]] return; }
L_001D6DC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 29932u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D6DE8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[12] = c.r[1].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6DE8u);  if (depth < kMaxDepth) unit_0007(c, 186u, depth + 1u); else { c.pc = 0x0011D778u; return; } if (c.pc != 0x001D6DE8u) [[unlikely]] return; }
L_001D6DE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 29928u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D6E0C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[12] = c.r[1].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6E0Cu);  if (depth < kMaxDepth) unit_001D(c, 164u, depth + 1u); else { c.pc = 0x00176070u; return; } if (c.pc != 0x001D6E0Cu) [[unlikely]] return; }
L_001D6E0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 29924u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D6E30; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[12] = c.r[1].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6E30u);  if (depth < kMaxDepth) unit_0000(c, 158u, depth + 1u); else { c.pc = 0x00101858u; return; } if (c.pc != 0x001D6E30u) [[unlikely]] return; }
L_001D6E30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 29920u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D6E54; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[12] = c.r[1].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6E54u);  if (depth < kMaxDepth) unit_002C(c, 457u, depth + 1u); else { c.pc = 0x001B31E0u; return; } if (c.pc != 0x001D6E54u) [[unlikely]] return; }
L_001D6E54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 29916u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D6E6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6E6Cu);  if (depth < kMaxDepth) unit_0008(c, 158u, depth + 1u); else { c.pc = 0x001215B8u; return; } if (c.pc != 0x001D6E6Cu) [[unlikely]] return; }
L_001D6E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6E74u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x001D6E74u) [[unlikely]] return; }
L_001D6E74:
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D6EA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 29912u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D6EA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[12] = c.r[1].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6EA8u);  if (depth < kMaxDepth) unit_0001(c, 49u, depth + 1u); else { c.pc = 0x001045C8u; return; } if (c.pc != 0x001D6EA8u) [[unlikely]] return; }
L_001D6EA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[12] = c.r[1].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6EBCu);  if (depth < kMaxDepth) unit_002E(c, 448u, depth + 1u); else { c.pc = 0x001BB218u; return; } if (c.pc != 0x001D6EBCu) [[unlikely]] return; }
L_001D6EBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6EC4u);  if (depth < kMaxDepth) unit_0035(c, 343u, depth + 1u); else { c.pc = 0x001D5DE0u; return; } if (c.pc != 0x001D6EC4u) [[unlikely]] return; }
L_001D6EC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[4], c.r[4].w[0] + 24688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6ED4u);  if (depth < kMaxDepth) unit_0097(c, 192u, depth + 1u); else { c.pc = 0x0035DDA0u; return; } if (c.pc != 0x001D6ED4u) [[unlikely]] return; }
L_001D6ED4:
    set32(c.r[2], ld32((c.r[30].w[0] - 16432u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D6EF0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 12224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6EF0u);  if (depth < kMaxDepth) unit_007E(c, 65u, depth + 1u); else { c.pc = 0x002F83F8u; return; } if (c.pc != 0x001D6EF0u) [[unlikely]] return; }
L_001D6EF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 11448u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D6F20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23020u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D6F20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6F18u);  if (depth < kMaxDepth) unit_0084(c, 41u, depth + 1u); else { c.pc = 0x00310798u; return; } if (c.pc != 0x001D6F18u) [[unlikely]] return; }
L_001D6F18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6F20u);  if (depth < kMaxDepth) unit_0072(c, 263u, depth + 1u); else { c.pc = 0x002CB8F0u; return; } if (c.pc != 0x001D6F20u) [[unlikely]] return; }
L_001D6F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6F28u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x001D6F28u) [[unlikely]] return; }
L_001D6F28:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6F34u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x001D6F34u) [[unlikely]] return; }
L_001D6F34:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D6F6C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 656u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D6F6C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 684u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D6F6C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 704u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D6F6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6F6Cu);  if (depth < kMaxDepth) unit_0012(c, 224u, depth + 1u); else { c.pc = 0x001499A8u; return; } if (c.pc != 0x001D6F6Cu) [[unlikely]] return; }
L_001D6F6C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6F7Cu);  if (depth < kMaxDepth) unit_007E(c, 90u, depth + 1u); else { c.pc = 0x002F8898u; return; } if (c.pc != 0x001D6F7Cu) [[unlikely]] return; }
L_001D6F7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] - 26352u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6F8Cu);  if (depth < kMaxDepth) unit_007A(c, 278u, depth + 1u); else { c.pc = 0x002EBA80u; return; } if (c.pc != 0x001D6F8Cu) [[unlikely]] return; }
L_001D6F8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] + 15024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6F9Cu);  if (depth < kMaxDepth) unit_0093(c, 125u, depth + 1u); else { c.pc = 0x0034D790u; return; } if (c.pc != 0x001D6F9Cu) [[unlikely]] return; }
L_001D6F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6FA4u);  if (depth < kMaxDepth) unit_0082(c, 45u, depth + 1u); else { c.pc = 0x00309DA8u; return; } if (c.pc != 0x001D6FA4u) [[unlikely]] return; }
L_001D6FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6FACu);  if (depth < kMaxDepth) unit_002F(c, 153u, depth + 1u); else { c.pc = 0x001BD858u; return; } if (c.pc != 0x001D6FACu) [[unlikely]] return; }
L_001D6FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6FB4u);  if (depth < kMaxDepth) unit_003B(c, 282u, depth + 1u); else { c.pc = 0x001EF3D0u; return; } if (c.pc != 0x001D6FB4u) [[unlikely]] return; }
L_001D6FB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4984u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D6FD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6FD0u);  if (depth < kMaxDepth) unit_0071(c, 327u, depth + 1u); else { c.pc = 0x002C7790u; return; } if (c.pc != 0x001D6FD0u) [[unlikely]] return; }
L_001D6FD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D6FE8; } }
L_001D6FD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 13360u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D6FEC; } }
L_001D6FE8:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001D6FEC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001D700C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7000u);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x001D7000u) [[unlikely]] return; }
L_001D7000:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D700Cu);  if (depth < kMaxDepth) unit_0077(c, 33u, depth + 1u); else { c.pc = 0x002DC788u; return; } if (c.pc != 0x001D700Cu) [[unlikely]] return; }
L_001D700C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7014u);  if (depth < kMaxDepth) unit_0035(c, 363u, depth + 1u); else { c.pc = 0x001D6378u; return; } if (c.pc != 0x001D7014u) [[unlikely]] return; }
L_001D7014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D701Cu);  if (depth < kMaxDepth) unit_0037(c, 174u, depth + 1u); else { c.pc = 0x001DD448u; return; } if (c.pc != 0x001D701Cu) [[unlikely]] return; }
L_001D701C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7024u);  if (depth < kMaxDepth) unit_001B(c, 303u, depth + 1u); else { c.pc = 0x0016FE30u; return; } if (c.pc != 0x001D7024u) [[unlikely]] return; }
L_001D7024:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 29912u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D703C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D703Cu);  if (depth < kMaxDepth) unit_0001(c, 46u, depth + 1u); else { c.pc = 0x00104578u; return; } if (c.pc != 0x001D703Cu) [[unlikely]] return; }
L_001D703C:
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
L_001D7070:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    set32(c.r[17], c.r[2].w[0] + 12320u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D70B4u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x001D70B4u) [[unlikely]] return; }
L_001D70B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001D7250; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D70D0u);  if (depth < kMaxDepth) unit_006C(c, 247u, depth + 1u); else { c.pc = 0x002B2A30u; return; } if (c.pc != 0x001D70D0u) [[unlikely]] return; }
L_001D70D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_001D7250; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[16], c.r[16].w[0] + 28288u);
    set32(c.r[5], ld32((c.r[2].w[0] - 29252u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D70F8u);  if (depth < kMaxDepth) unit_009E(c, 303u, depth + 1u); else { c.pc = 0x0037B040u; return; } if (c.pc != 0x001D70F8u) [[unlikely]] return; }
L_001D70F8:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] - 29244u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[17], c.r[18].w[0] + 14664u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7118u);  if (depth < kMaxDepth) unit_009E(c, 303u, depth + 1u); else { c.pc = 0x0037B040u; return; } if (c.pc != 0x001D7118u) [[unlikely]] return; }
L_001D7118:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] - 29240u)));
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[16], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D713Cu);  if (depth < kMaxDepth) unit_009E(c, 303u, depth + 1u); else { c.pc = 0x0037B040u; return; } if (c.pc != 0x001D713Cu) [[unlikely]] return; }
L_001D713C:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[22], c.r[2].w[0] + 19264u);
    c.budget -= 5;
L_001D7150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7158u);  if (depth < kMaxDepth) unit_009E(c, 71u, depth + 1u); else { c.pc = 0x00378A30u; return; } if (c.pc != 0x001D7158u) [[unlikely]] return; }
L_001D7158:
    set32(c.r[2], ld32((c.r[17].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D7178; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 220u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D7178; } }
    st32((c.r[17].w[0] + 212u), c.r[16].w[0]);
    c.budget -= 1;
L_001D7178:
    set32(c.r[3], c.r[18].w[0] + 14664u);
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D7198; } }
    st32((c.r[3].w[0] + 224u), c.r[16].w[0]);
    st32((c.r[3].w[0] + 212u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D719C; } }
L_001D7198:
    st32((c.r[3].w[0] + 224u), 0u);
    c.budget -= 1;
L_001D719C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D71A4u);  if (depth < kMaxDepth) unit_007D(c, 21u, depth + 1u); else { c.pc = 0x002F4200u; return; } if (c.pc != 0x001D71A4u) [[unlikely]] return; }
L_001D71A4:
    set32(c.r[2], ld32((c.r[22].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D71F0; } }
    set32(c.r[4], c.r[21].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D71BCu);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001D71BCu) [[unlikely]] return; }
L_001D71BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D71C4u);  if (depth < kMaxDepth) unit_001D(c, 50u, depth + 1u); else { c.pc = 0x00174B40u; return; } if (c.pc != 0x001D71C4u) [[unlikely]] return; }
L_001D71C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D71CCu);  if (depth < kMaxDepth) unit_0091(c, 142u, depth + 1u); else { c.pc = 0x003457D8u; return; } if (c.pc != 0x001D71CCu) [[unlikely]] return; }
L_001D71CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D71D4u);  if (depth < kMaxDepth) unit_0086(c, 72u, depth + 1u); else { c.pc = 0x00318A98u; return; } if (c.pc != 0x001D71D4u) [[unlikely]] return; }
L_001D71D4:
    set32(c.r[4], c.r[20].w[0] - 22944u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D71E4u);  if (depth < kMaxDepth) unit_0085(c, 318u, depth + 1u); else { c.pc = 0x00317590u; return; } if (c.pc != 0x001D71E4u) [[unlikely]] return; }
L_001D71E4:
    set32(c.r[4], c.r[19].w[0] - 20768u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D71F0u);  if (depth < kMaxDepth) unit_0008(c, 84u, depth + 1u); else { c.pc = 0x00120F00u; return; } if (c.pc != 0x001D71F0u) [[unlikely]] return; }
L_001D71F0:
    set32(c.r[4], c.r[23].w[0] + 12320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D71FCu);  if (depth < kMaxDepth) unit_006C(c, 247u, depth + 1u); else { c.pc = 0x002B2A30u; return; } if (c.pc != 0x001D71FCu) [[unlikely]] return; }
L_001D71FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D7150u | kUnwind; return; } goto L_001D7150; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + 28288u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] - 29252u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7224u);  if (depth < kMaxDepth) unit_009E(c, 303u, depth + 1u); else { c.pc = 0x0037B040u; return; } if (c.pc != 0x001D7224u) [[unlikely]] return; }
L_001D7224:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] - 29244u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D723Cu);  if (depth < kMaxDepth) unit_009E(c, 303u, depth + 1u); else { c.pc = 0x0037B040u; return; } if (c.pc != 0x001D723Cu) [[unlikely]] return; }
L_001D723C:
    set32(c.r[5], ld32((c.r[30].w[0] - 29240u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7250u);  if (depth < kMaxDepth) unit_009E(c, 303u, depth + 1u); else { c.pc = 0x0037B040u; return; } if (c.pc != 0x001D7250u) [[unlikely]] return; }
L_001D7250:
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
L_001D7288:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[3], ld32((c.r[2].w[0] - 29800u)));
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D7398; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 73u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12228u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001D7398; } }
    set32(c.r[16], 0u + 1u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[22], 0u + 64u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.budget -= 5;
L_001D72E8:
    set32(c.r[4], c.r[23].w[0] - 14960u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D72F8u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001D72F8u) [[unlikely]] return; }
L_001D72F8:
    set32(c.r[20], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7694u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_001D7388; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D7388; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D7388; } }
    set32(c.r[4], c.r[21].w[0] + 14016u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7334u);  if (depth < kMaxDepth) unit_009A(c, 231u, depth + 1u); else { c.pc = 0x0036B2A0u; return; } if (c.pc != 0x001D7334u) [[unlikely]] return; }
L_001D7334:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.budget -= 5;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_001D736C; } }
L_001D7348:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 14016u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7358u);  if (depth < kMaxDepth) unit_009A(c, 232u, depth + 1u); else { c.pc = 0x0036B2B0u; return; } if (c.pc != 0x001D7358u) [[unlikely]] return; }
L_001D7358:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D7348u | kUnwind; return; } goto L_001D7348; } }
L_001D736C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001D7388; } }
    set32(c.r[4], c.r[19].w[0] + 14016u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7388u);  if (depth < kMaxDepth) unit_009A(c, 276u, depth + 1u); else { c.pc = 0x0036BA10u; return; } if (c.pc != 0x001D7388u) [[unlikely]] return; }
L_001D7388:
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D72E8u | kUnwind; return; } goto L_001D72E8; } }
L_001D7398:
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
L_001D73C8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 14152u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[2].w[0] + 264u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    set32(c.r[16], c.r[3].w[0] + 13248u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    set32(c.r[20], 0u + 52u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], 0u + 82u);
    set32(c.r[17], 0u + 1u);
    c.budget -= 18;
L_001D7410:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_001D7424; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_001D7434; } }
L_001D7424:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7434u);  if (depth < kMaxDepth) unit_006C(c, 305u, depth + 1u); else { c.pc = 0x002B32E8u; return; } if (c.pc != 0x001D7434u) [[unlikely]] return; }
L_001D7434:
    set32(c.r[18], c.r[18].w[0] + 268u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D7410u | kUnwind; return; } goto L_001D7410; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 29824u)));
    set32(c.r[18], 0u + 1u);
    set32(c.r[5], ld32((c.r[3].w[0] - 29816u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[21].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st32((c.r[2].w[0] + 10280u), 0u);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[18].d[0];  if (t) { goto L_001D749C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + 4040u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7494u);  if (depth < kMaxDepth) unit_009E(c, 218u, depth + 1u); else { c.pc = 0x0037A868u; return; } if (c.pc != 0x001D7494u) [[unlikely]] return; }
L_001D7494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D772C; } }
L_001D749C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D74B0u);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x001D74B0u) [[unlikely]] return; }
L_001D74B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D75A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D74CCu);  if (depth < kMaxDepth) unit_006C(c, 232u, depth + 1u); else { c.pc = 0x002B2808u; return; } if (c.pc != 0x001D74CCu) [[unlikely]] return; }
L_001D74CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D750C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[16], c.r[2].w[0] + 24040u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D74E8u);  if (depth < kMaxDepth) unit_007D(c, 262u, depth + 1u); else { c.pc = 0x002F7A00u; return; } if (c.pc != 0x001D74E8u) [[unlikely]] return; }
L_001D74E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D750C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7504u);  if (depth < kMaxDepth) unit_007D(c, 263u, depth + 1u); else { c.pc = 0x002F7A10u; return; } if (c.pc != 0x001D7504u) [[unlikely]] return; }
L_001D7504:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_001D75A0; } }
L_001D750C:
    set32(c.r[16], c.r[17].w[0] + 12320u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D751Cu);  if (depth < kMaxDepth) unit_006C(c, 232u, depth + 1u); else { c.pc = 0x002B2808u; return; } if (c.pc != 0x001D751Cu) [[unlikely]] return; }
L_001D751C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D7538; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7530u);  if (depth < kMaxDepth) unit_006C(c, 233u, depth + 1u); else { c.pc = 0x002B2818u; return; } if (c.pc != 0x001D7530u) [[unlikely]] return; }
L_001D7530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D758C; } }
L_001D7538:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7544u);  if (depth < kMaxDepth) unit_006C(c, 230u, depth + 1u); else { c.pc = 0x002B27E8u; return; } if (c.pc != 0x001D7544u) [[unlikely]] return; }
L_001D7544:
    set32(c.r[3], 0u + 7073u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D758C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[16], c.r[2].w[0] + 19264u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D7580; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7580u);  if (depth < kMaxDepth) unit_009E(c, 375u, depth + 1u); else { c.pc = 0x0037B888u; return; } if (c.pc != 0x001D7580u) [[unlikely]] return; }
L_001D7580:
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D75A0; } }
L_001D758C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[2].w[0] + 19264u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[3].w[0] + 104u), c.r[4].w[0]);
    c.budget -= 5;
L_001D75A0:
    set32(c.r[16], c.r[19].w[0] + 19264u);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D7630; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] + 24040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D75C0u);  if (depth < kMaxDepth) unit_007D(c, 262u, depth + 1u); else { c.pc = 0x002F7A00u; return; } if (c.pc != 0x001D75C0u) [[unlikely]] return; }
L_001D75C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D75F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D75E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D75E8u);  if (depth < kMaxDepth) unit_009E(c, 375u, depth + 1u); else { c.pc = 0x0037B888u; return; } if (c.pc != 0x001D75E8u) [[unlikely]] return; }
L_001D75E8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7630; } }
L_001D75F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D7630; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D762C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D762Cu);  if (depth < kMaxDepth) unit_009E(c, 375u, depth + 1u); else { c.pc = 0x0037B888u; return; } if (c.pc != 0x001D762Cu) [[unlikely]] return; }
L_001D762C:
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 1;
L_001D7630:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 17200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7640u);  if (depth < kMaxDepth) unit_0071(c, 235u, depth + 1u); else { c.pc = 0x002C6878u; return; } if (c.pc != 0x001D7640u) [[unlikely]] return; }
L_001D7640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7648u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001D7648u) [[unlikely]] return; }
L_001D7648:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D7670; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7660u);  if (depth < kMaxDepth) unit_0071(c, 262u, depth + 1u); else { c.pc = 0x002C6DD0u; return; } if (c.pc != 0x001D7660u) [[unlikely]] return; }
L_001D7660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D7670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7670u);  if (depth < kMaxDepth) unit_0071(c, 218u, depth + 1u); else { c.pc = 0x002C62F8u; return; } if (c.pc != 0x001D7670u) [[unlikely]] return; }
L_001D7670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7678u);  if (depth < kMaxDepth) unit_0044(c, 127u, depth + 1u); else { c.pc = 0x002126D8u; return; } if (c.pc != 0x001D7678u) [[unlikely]] return; }
L_001D7678:
    set32(c.r[2], c.r[19].w[0] + 19264u);
    set32(c.r[3], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D76D4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7698u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001D7698u) [[unlikely]] return; }
L_001D7698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D76A0u);  if (depth < kMaxDepth) unit_001D(c, 50u, depth + 1u); else { c.pc = 0x00174B40u; return; } if (c.pc != 0x001D76A0u) [[unlikely]] return; }
L_001D76A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D76A8u);  if (depth < kMaxDepth) unit_0091(c, 142u, depth + 1u); else { c.pc = 0x003457D8u; return; } if (c.pc != 0x001D76A8u) [[unlikely]] return; }
L_001D76A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D76B0u);  if (depth < kMaxDepth) unit_0086(c, 72u, depth + 1u); else { c.pc = 0x00318A98u; return; } if (c.pc != 0x001D76B0u) [[unlikely]] return; }
L_001D76B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22944u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D76C4u);  if (depth < kMaxDepth) unit_0085(c, 318u, depth + 1u); else { c.pc = 0x00317590u; return; } if (c.pc != 0x001D76C4u) [[unlikely]] return; }
L_001D76C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 20768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D76D4u);  if (depth < kMaxDepth) unit_0008(c, 84u, depth + 1u); else { c.pc = 0x00120F00u; return; } if (c.pc != 0x001D76D4u) [[unlikely]] return; }
L_001D76D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D76DCu);  if (depth < kMaxDepth) unit_0035(c, 378u, depth + 1u); else { c.pc = 0x001D6730u; return; } if (c.pc != 0x001D76DCu) [[unlikely]] return; }
L_001D76DC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D76E8u);  if (depth < kMaxDepth) unit_0035(c, 459u, depth + 1u); else { c.pc = 0x001D7070u; return; } if (c.pc != 0x001D76E8u) [[unlikely]] return; }
L_001D76E8:
    set32(c.r[2], ld32((c.r[16].w[0] - 29652u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D7728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D76FCu);  if (depth < kMaxDepth) unit_0035(c, 386u, depth + 1u); else { c.pc = 0x001D6808u; return; } if (c.pc != 0x001D76FCu) [[unlikely]] return; }
L_001D76FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 15804u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7710u);  if (depth < kMaxDepth) unit_007D(c, 21u, depth + 1u); else { c.pc = 0x002F4200u; return; } if (c.pc != 0x001D7710u) [[unlikely]] return; }
L_001D7710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7718u);  if (depth < kMaxDepth) unit_0035(c, 370u, depth + 1u); else { c.pc = 0x001D65B0u; return; } if (c.pc != 0x001D7718u) [[unlikely]] return; }
L_001D7718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7720u);  if (depth < kMaxDepth) unit_007D(c, 8u, depth + 1u); else { c.pc = 0x002F4088u; return; } if (c.pc != 0x001D7720u) [[unlikely]] return; }
L_001D7720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7728u);  if (depth < kMaxDepth) unit_0033(c, 64u, depth + 1u); else { c.pc = 0x001CCC30u; return; } if (c.pc != 0x001D7728u) [[unlikely]] return; }
L_001D7728:
    st32((c.r[16].w[0] - 29652u), 0u);
    c.budget -= 1;
L_001D772C:
    set32(c.r[2], ld32((c.r[21].w[0])));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D7758:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[16].w[0] + 17200u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7788u);  if (depth < kMaxDepth) unit_0071(c, 235u, depth + 1u); else { c.pc = 0x002C6878u; return; } if (c.pc != 0x001D7788u) [[unlikely]] return; }
L_001D7788:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7798u);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x001D7798u) [[unlikely]] return; }
L_001D7798:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D7848; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[17], c.r[2].w[0] + 4040u);
    set32(c.r[20], 0u + 20u);
    set32(c.r[19], 0u + 1u);
    c.budget -= 6;
L_001D77C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D77CCu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D77CCu) [[unlikely]] return; }
L_001D77CC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] - 29676u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D77ECu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D77ECu) [[unlikely]] return; }
L_001D77EC:
    set32(c.r[5], ld32((c.r[18].w[0] - 29676u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x001D77FCu);  goto L_001D7800; }
L_001D7800:
    mmi::div(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7814u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7814u) [[unlikely]] return; }
L_001D7814:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7824u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7824u) [[unlikely]] return; }
L_001D7824:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[20].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D77C0u | kUnwind; return; } goto L_001D77C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7910; } }
L_001D7848:
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D78E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[17], c.r[2].w[0] + 4040u);
    set32(c.r[19], 0u + 20u);
    set32(c.r[18], 0u + 1u);
    c.budget -= 5;
L_001D7868:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7874u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7874u) [[unlikely]] return; }
L_001D7874:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D788Cu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D788Cu) [[unlikely]] return; }
L_001D788C:
    set32(c.r[5], ld32((c.r[20].w[0] - 29676u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x001D789Cu);  goto L_001D78A0; }
L_001D78A0:
    mmi::div(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D78B4u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D78B4u) [[unlikely]] return; }
L_001D78B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D78C4u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D78C4u) [[unlikely]] return; }
L_001D78C4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D7868u | kUnwind; return; } goto L_001D7868; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7910; } }
L_001D78E8:
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D7900; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7914; } }
L_001D7900:
    c.r[3].d[0] = c.r[3].d[0] & 2064ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D7914; } }
L_001D7910:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D7914:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D7938:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[16].w[0] + 4040u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7978u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7978u) [[unlikely]] return; }
L_001D7978:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7988u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7988u) [[unlikely]] return; }
L_001D7988:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D79ACu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D79ACu) [[unlikely]] return; }
L_001D79AC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D79BCu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D79BCu) [[unlikely]] return; }
L_001D79BC:
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[30], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D79D8u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D79D8u) [[unlikely]] return; }
L_001D79D8:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D79ECu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D79ECu) [[unlikely]] return; }
L_001D79EC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D79FCu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D79FCu) [[unlikely]] return; }
L_001D79FC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 20u);
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D7E44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 5168u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001D4000u < 16384u) { entry = entries_0035[(t - 0x001D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001D7A40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 27540u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001D7A90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[2].w[0] + 4040u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7A68u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7A68u) [[unlikely]] return; }
L_001D7A68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7A78u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7A78u) [[unlikely]] return; }
L_001D7A78:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 392u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7A88u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001D7A88u) [[unlikely]] return; }
L_001D7A88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7DA0; } }
L_001D7A90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[3].w[0] + 4040u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7AA4u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7AA4u) [[unlikely]] return; }
L_001D7AA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7AB4u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7AB4u) [[unlikely]] return; }
L_001D7AB4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 393u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7AC4u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001D7AC4u) [[unlikely]] return; }
L_001D7AC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7DA0; } }
L_001D7ACC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[4].w[0] + 4040u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7AE0u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7AE0u) [[unlikely]] return; }
L_001D7AE0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 366u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7AF0u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001D7AF0u) [[unlikely]] return; }
L_001D7AF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7B00u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7B00u) [[unlikely]] return; }
L_001D7B00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7B10u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7B10u) [[unlikely]] return; }
L_001D7B10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] - 29796u)));
    set32(c.r[4], c.r[4].w[0] + 367u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7B28u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001D7B28u) [[unlikely]] return; }
L_001D7B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7DA0; } }
L_001D7B30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[5].w[0] + 4040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7B40u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7B40u) [[unlikely]] return; }
L_001D7B40:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 365u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7E38; } }
L_001D7B50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23344u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001D7BA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[2].w[0] + 4040u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7B78u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7B78u) [[unlikely]] return; }
L_001D7B78:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7B88u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7B88u) [[unlikely]] return; }
L_001D7B88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 363u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7B98u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001D7B98u) [[unlikely]] return; }
L_001D7B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7DA0; } }
L_001D7BA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[3].w[0] + 4040u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7BB4u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7BB4u) [[unlikely]] return; }
L_001D7BB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7BC4u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7BC4u) [[unlikely]] return; }
L_001D7BC4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 364u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7BD4u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001D7BD4u) [[unlikely]] return; }
L_001D7BD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7DA0; } }
L_001D7BDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[18], c.r[4].w[0] + 4040u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7BF0u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7BF0u) [[unlikely]] return; }
L_001D7BF0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 356u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7C00u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001D7C00u) [[unlikely]] return; }
L_001D7C00:
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7C0Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001D7C0Cu) [[unlikely]] return; }
L_001D7C0C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D7C80; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D7C38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D7C4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7E44; } }
L_001D7C38:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D7CB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7E44; } }
L_001D7C4C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7C58u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7C58u) [[unlikely]] return; }
L_001D7C58:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7C68u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7C68u) [[unlikely]] return; }
L_001D7C68:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 353u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7C78u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001D7C78u) [[unlikely]] return; }
L_001D7C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7DA0; } }
L_001D7C80:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7C8Cu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7C8Cu) [[unlikely]] return; }
L_001D7C8C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7C9Cu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7C9Cu) [[unlikely]] return; }
L_001D7C9C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 354u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7CACu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001D7CACu) [[unlikely]] return; }
L_001D7CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7DA0; } }
L_001D7CB4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7CC0u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7CC0u) [[unlikely]] return; }
L_001D7CC0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7CD0u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7CD0u) [[unlikely]] return; }
L_001D7CD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 355u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7CE0u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001D7CE0u) [[unlikely]] return; }
L_001D7CE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7DA0; } }
L_001D7CE8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[5].w[0] + 4040u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7CFCu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7CFCu) [[unlikely]] return; }
L_001D7CFC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 357u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7D0Cu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001D7D0Cu) [[unlikely]] return; }
L_001D7D0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7D1Cu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7D1Cu) [[unlikely]] return; }
L_001D7D1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7D2Cu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7D2Cu) [[unlikely]] return; }
L_001D7D2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 29824u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 204u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7D98; } }
L_001D7D44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[2].w[0] + 4040u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7D58u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7D58u) [[unlikely]] return; }
L_001D7D58:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 357u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7D68u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001D7D68u) [[unlikely]] return; }
L_001D7D68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7D78u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7D78u) [[unlikely]] return; }
L_001D7D78:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7D88u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7D88u) [[unlikely]] return; }
L_001D7D88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 29824u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 208u)));
    c.budget -= 4;
L_001D7D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7DA0u);  if (depth < kMaxDepth) unit_0039(c, 347u, depth + 1u); else { c.pc = 0x001E6EC8u; return; } if (c.pc != 0x001D7DA0u) [[unlikely]] return; }
L_001D7DA0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], 0u + 20u);
    set32(c.r[5], ld32((c.r[17].w[0] + 148u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7E44; } }
L_001D7DC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[3].w[0] + 4040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7DD0u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7DD0u) [[unlikely]] return; }
L_001D7DD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 359u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7E38; } }
L_001D7DE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[5].w[0] + 4040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7DF0u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7DF0u) [[unlikely]] return; }
L_001D7DF0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 358u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7E38; } }
L_001D7E00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[2].w[0] + 4040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7E10u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7E10u) [[unlikely]] return; }
L_001D7E10:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 361u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7E38; } }
L_001D7E20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[3].w[0] + 4040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7E30u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7E30u) [[unlikely]] return; }
L_001D7E30:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 362u);
    c.budget -= 2;
L_001D7E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7E40u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001D7E40u) [[unlikely]] return; }
L_001D7E40:
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 1;
L_001D7E44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[4].w[0] + 4040u);
    c.r[23].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7E60u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7E60u) [[unlikely]] return; }
L_001D7E60:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7E70u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7E70u) [[unlikely]] return; }
L_001D7E70:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7E80u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7E80u) [[unlikely]] return; }
L_001D7E80:
    set32(c.r[19], ld32((c.r[18].w[0] + 96u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[19], c.r[19].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[19], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + c.r[5].w[0]);
    set32(c.r[19], 0u - c.r[19].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7EACu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7EACu) [[unlikely]] return; }
L_001D7EAC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7EBCu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7EBCu) [[unlikely]] return; }
L_001D7EBC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7ECCu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7ECCu) [[unlikely]] return; }
L_001D7ECC:
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 120u)));
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7EFCu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7EFCu) [[unlikely]] return; }
L_001D7EFC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7F0Cu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7F0Cu) [[unlikely]] return; }
L_001D7F0C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7F1Cu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7F1Cu) [[unlikely]] return; }
L_001D7F1C:
    set32(c.r[3], ld32((c.r[18].w[0] + 128u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 136u)));
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7F4Cu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7F4Cu) [[unlikely]] return; }
L_001D7F4C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7F5Cu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7F5Cu) [[unlikely]] return; }
L_001D7F5C:
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[20], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7F74u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7F74u) [[unlikely]] return; }
L_001D7F74:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7F84u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7F84u) [[unlikely]] return; }
L_001D7F84:
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7F9Cu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7F9Cu) [[unlikely]] return; }
L_001D7F9C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7FACu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7FACu) [[unlikely]] return; }
L_001D7FAC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7FBCu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D7FBCu) [[unlikely]] return; }
L_001D7FBC:
    c.f[13] = ld32((c.r[2].w[0] + 68u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[21].w[0] + 144u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0] + 64u));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7FE0u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001D7FE0u) [[unlikely]] return; }
L_001D7FE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 29676u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { [[clang::musttail]] return unit_0036(c, 3u, depth); } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001D7FF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 2;
    [[clang::musttail]] return unit_0036(c, 1u, depth);
}

}
