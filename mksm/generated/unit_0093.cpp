#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0093[4096] = {
    1, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67,
    0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0,
    0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0,
    157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0,
    0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181,
    0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0,
    0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0,
    0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 204,
    0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0,
    0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0,
    0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 252,
    0, 0, 253, 0, 0, 254, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0,
    0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0,
    299, 0, 0, 300, 0, 301, 0, 0, 302, 0, 303, 0, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0, 307, 0, 0, 0, 308, 0, 0, 309, 0, 310,
    0, 0, 311, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0,
    0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 320, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0,
    0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0,
    0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0,
    392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0,
    397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0,
    0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0,
};

void unit_0093(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0034C000;
    case 2u: goto L_0034C004;
    case 3u: goto L_0034C00C;
    case 4u: goto L_0034C034;
    case 5u: goto L_0034C048;
    case 6u: goto L_0034C08C;
    case 7u: goto L_0034C0A4;
    case 8u: goto L_0034C0B8;
    case 9u: goto L_0034C0E8;
    case 10u: goto L_0034C144;
    case 11u: goto L_0034C148;
    case 12u: goto L_0034C178;
    case 13u: goto L_0034C180;
    case 14u: goto L_0034C1DC;
    case 15u: goto L_0034C1F0;
    case 16u: goto L_0034C24C;
    case 17u: goto L_0034C260;
    case 18u: goto L_0034C290;
    case 19u: goto L_0034C2F0;
    case 20u: goto L_0034C2F8;
    case 21u: goto L_0034C328;
    case 22u: goto L_0034C330;
    case 23u: goto L_0034C390;
    case 24u: goto L_0034C3A8;
    case 25u: goto L_0034C408;
    case 26u: goto L_0034C420;
    case 27u: goto L_0034C450;
    case 28u: goto L_0034C4B0;
    case 29u: goto L_0034C4B8;
    case 30u: goto L_0034C4E8;
    case 31u: goto L_0034C4F0;
    case 32u: goto L_0034C550;
    case 33u: goto L_0034C568;
    case 34u: goto L_0034C5C8;
    case 35u: goto L_0034C5E0;
    case 36u: goto L_0034C610;
    case 37u: goto L_0034C670;
    case 38u: goto L_0034C678;
    case 39u: goto L_0034C6A8;
    case 40u: goto L_0034C6B0;
    case 41u: goto L_0034C710;
    case 42u: goto L_0034C728;
    case 43u: goto L_0034C788;
    case 44u: goto L_0034C7A0;
    case 45u: goto L_0034C7D0;
    case 46u: goto L_0034C82C;
    case 47u: goto L_0034C830;
    case 48u: goto L_0034C860;
    case 49u: goto L_0034C868;
    case 50u: goto L_0034C8C4;
    case 51u: goto L_0034C8D8;
    case 52u: goto L_0034C92C;
    case 53u: goto L_0034C938;
    case 54u: goto L_0034C960;
    case 55u: goto L_0034CA78;
    case 56u: goto L_0034CAD8;
    case 57u: goto L_0034CB24;
    case 58u: goto L_0034CB40;
    case 59u: goto L_0034CB9C;
    case 60u: goto L_0034CBF8;
    case 61u: goto L_0034CC54;
    case 62u: goto L_0034CCA0;
    case 63u: goto L_0034CCC0;
    case 64u: goto L_0034CE10;
    case 65u: goto L_0034CE50;
    case 66u: goto L_0034CEAC;
    case 67u: goto L_0034CEFC;
    case 68u: goto L_0034CF14;
    case 69u: goto L_0034CF2C;
    case 70u: goto L_0034CF44;
    case 71u: goto L_0034CF60;
    case 72u: goto L_0034CF80;
    case 73u: goto L_0034CF98;
    case 74u: goto L_0034CFC8;
    case 75u: goto L_0034D010;
    case 76u: goto L_0034D058;
    case 77u: goto L_0034D078;
    case 78u: goto L_0034D0AC;
    case 79u: goto L_0034D0D8;
    case 80u: goto L_0034D100;
    case 81u: goto L_0034D124;
    case 82u: goto L_0034D140;
    case 83u: goto L_0034D178;
    case 84u: goto L_0034D188;
    case 85u: goto L_0034D1B8;
    case 86u: goto L_0034D1DC;
    case 87u: goto L_0034D228;
    case 88u: goto L_0034D248;
    case 89u: goto L_0034D288;
    case 90u: goto L_0034D2B8;
    case 91u: goto L_0034D2E0;
    case 92u: goto L_0034D310;
    case 93u: goto L_0034D34C;
    case 94u: goto L_0034D360;
    case 95u: goto L_0034D384;
    case 96u: goto L_0034D39C;
    case 97u: goto L_0034D3C8;
    case 98u: goto L_0034D3DC;
    case 99u: goto L_0034D3F0;
    case 100u: goto L_0034D408;
    case 101u: goto L_0034D420;
    case 102u: goto L_0034D468;
    case 103u: goto L_0034D480;
    case 104u: goto L_0034D498;
    case 105u: goto L_0034D4D0;
    case 106u: goto L_0034D4E8;
    case 107u: goto L_0034D500;
    case 108u: goto L_0034D554;
    case 109u: goto L_0034D568;
    case 110u: goto L_0034D594;
    case 111u: goto L_0034D5AC;
    case 112u: goto L_0034D5C4;
    case 113u: goto L_0034D5DC;
    case 114u: goto L_0034D5F4;
    case 115u: goto L_0034D60C;
    case 116u: goto L_0034D620;
    case 117u: goto L_0034D630;
    case 118u: goto L_0034D638;
    case 119u: goto L_0034D640;
    case 120u: goto L_0034D670;
    case 121u: goto L_0034D730;
    case 122u: goto L_0034D750;
    case 123u: goto L_0034D768;
    case 124u: goto L_0034D780;
    case 125u: goto L_0034D790;
    case 126u: goto L_0034D7D8;
    case 127u: goto L_0034D804;
    case 128u: goto L_0034D818;
    case 129u: goto L_0034D850;
    case 130u: goto L_0034D884;
    case 131u: goto L_0034D8B0;
    case 132u: goto L_0034D8CC;
    case 133u: goto L_0034D8F4;
    case 134u: goto L_0034D928;
    case 135u: goto L_0034D960;
    case 136u: goto L_0034D970;
    case 137u: goto L_0034D9A0;
    case 138u: goto L_0034D9C0;
    case 139u: goto L_0034D9D0;
    case 140u: goto L_0034DA00;
    case 141u: goto L_0034DA60;
    case 142u: goto L_0034DA80;
    case 143u: goto L_0034DAA8;
    case 144u: goto L_0034DB00;
    case 145u: goto L_0034DB08;
    case 146u: goto L_0034DB20;
    case 147u: goto L_0034DB48;
    case 148u: goto L_0034DB80;
    case 149u: goto L_0034DBA8;
    case 150u: goto L_0034DBD8;
    case 151u: goto L_0034DBE0;
    case 152u: goto L_0034DC20;
    case 153u: goto L_0034DC28;
    case 154u: goto L_0034DC40;
    case 155u: goto L_0034DC54;
    case 156u: goto L_0034DC78;
    case 157u: goto L_0034DC80;
    case 158u: goto L_0034DCA4;
    case 159u: goto L_0034DCC0;
    case 160u: goto L_0034DCF8;
    case 161u: goto L_0034DD2C;
    case 162u: goto L_0034DD68;
    case 163u: goto L_0034DD80;
    case 164u: goto L_0034DD90;
    case 165u: goto L_0034DDE0;
    case 166u: goto L_0034DE18;
    case 167u: goto L_0034DE30;
    case 168u: goto L_0034DE80;
    case 169u: goto L_0034DEE8;
    case 170u: goto L_0034DF20;
    case 171u: goto L_0034DF30;
    case 172u: goto L_0034DF58;
    case 173u: goto L_0034DF60;
    case 174u: goto L_0034DF68;
    case 175u: goto L_0034DFD8;
    case 176u: goto L_0034DFF4;
    case 177u: goto L_0034E014;
    case 178u: goto L_0034E03C;
    case 179u: goto L_0034E054;
    case 180u: goto L_0034E060;
    case 181u: goto L_0034E07C;
    case 182u: goto L_0034E094;
    case 183u: goto L_0034E0B0;
    case 184u: goto L_0034E0D0;
    case 185u: goto L_0034E0F8;
    case 186u: goto L_0034E110;
    case 187u: goto L_0034E128;
    case 188u: goto L_0034E138;
    case 189u: goto L_0034E150;
    case 190u: goto L_0034E178;
    case 191u: goto L_0034E188;
    case 192u: goto L_0034E194;
    case 193u: goto L_0034E1C8;
    case 194u: goto L_0034E210;
    case 195u: goto L_0034E228;
    case 196u: goto L_0034E238;
    case 197u: goto L_0034E24C;
    case 198u: goto L_0034E260;
    case 199u: goto L_0034E270;
    case 200u: goto L_0034E284;
    case 201u: goto L_0034E298;
    case 202u: goto L_0034E2D8;
    case 203u: goto L_0034E2E8;
    case 204u: goto L_0034E2FC;
    case 205u: goto L_0034E31C;
    case 206u: goto L_0034E328;
    case 207u: goto L_0034E330;
    case 208u: goto L_0034E33C;
    case 209u: goto L_0034E354;
    case 210u: goto L_0034E378;
    case 211u: goto L_0034E398;
    case 212u: goto L_0034E3B8;
    case 213u: goto L_0034E3D4;
    case 214u: goto L_0034E3F4;
    case 215u: goto L_0034E41C;
    case 216u: goto L_0034E434;
    case 217u: goto L_0034E450;
    case 218u: goto L_0034E468;
    case 219u: goto L_0034E480;
    case 220u: goto L_0034E498;
    case 221u: goto L_0034E4D0;
    case 222u: goto L_0034E510;
    case 223u: goto L_0034E528;
    case 224u: goto L_0034E570;
    case 225u: goto L_0034E580;
    case 226u: goto L_0034E5BC;
    case 227u: goto L_0034E5C8;
    case 228u: goto L_0034E5D8;
    case 229u: goto L_0034E5F0;
    case 230u: goto L_0034E620;
    case 231u: goto L_0034E630;
    case 232u: goto L_0034E660;
    case 233u: goto L_0034E6B8;
    case 234u: goto L_0034E6D8;
    case 235u: goto L_0034E6F0;
    case 236u: goto L_0034E700;
    case 237u: goto L_0034E714;
    case 238u: goto L_0034E734;
    case 239u: goto L_0034E790;
    case 240u: goto L_0034E7AC;
    case 241u: goto L_0034E7C0;
    case 242u: goto L_0034E7E0;
    case 243u: goto L_0034E804;
    case 244u: goto L_0034E828;
    case 245u: goto L_0034E878;
    case 246u: goto L_0034E8A8;
    case 247u: goto L_0034E908;
    case 248u: goto L_0034E924;
    case 249u: goto L_0034E958;
    case 250u: goto L_0034E964;
    case 251u: goto L_0034E96C;
    case 252u: goto L_0034E97C;
    case 253u: goto L_0034E988;
    case 254u: goto L_0034E994;
    case 255u: goto L_0034E99C;
    case 256u: goto L_0034E9A8;
    case 257u: goto L_0034E9C0;
    case 258u: goto L_0034E9D0;
    case 259u: goto L_0034E9E8;
    case 260u: goto L_0034EA00;
    case 261u: goto L_0034EA18;
    case 262u: goto L_0034EA38;
    case 263u: goto L_0034EA90;
    case 264u: goto L_0034EAB8;
    case 265u: goto L_0034EB04;
    case 266u: goto L_0034EB20;
    case 267u: goto L_0034EB50;
    case 268u: goto L_0034EB60;
    case 269u: goto L_0034EB90;
    case 270u: goto L_0034EBB8;
    case 271u: goto L_0034EC04;
    case 272u: goto L_0034EC20;
    case 273u: goto L_0034EC50;
    case 274u: goto L_0034EC60;
    case 275u: goto L_0034EC90;
    case 276u: goto L_0034ECE8;
    case 277u: goto L_0034ECF8;
    case 278u: goto L_0034ED40;
    case 279u: goto L_0034ED48;
    case 280u: goto L_0034ED50;
    case 281u: goto L_0034ED80;
    case 282u: goto L_0034EDDC;
    case 283u: goto L_0034EDEC;
    case 284u: goto L_0034EE00;
    case 285u: goto L_0034EE2C;
    case 286u: goto L_0034EE38;
    case 287u: goto L_0034EE40;
    case 288u: goto L_0034EE4C;
    case 289u: goto L_0034EE64;
    case 290u: goto L_0034EE88;
    case 291u: goto L_0034EEA8;
    case 292u: goto L_0034EEE0;
    case 293u: goto L_0034EEFC;
    case 294u: goto L_0034EF30;
    case 295u: goto L_0034EF44;
    case 296u: goto L_0034EF4C;
    case 297u: goto L_0034EF64;
    case 298u: goto L_0034EF74;
    case 299u: goto L_0034EF80;
    case 300u: goto L_0034EF8C;
    case 301u: goto L_0034EF94;
    case 302u: goto L_0034EFA0;
    case 303u: goto L_0034EFA8;
    case 304u: goto L_0034EFB8;
    case 305u: goto L_0034EFC4;
    case 306u: goto L_0034EFD0;
    case 307u: goto L_0034EFD8;
    case 308u: goto L_0034EFE8;
    case 309u: goto L_0034EFF4;
    case 310u: goto L_0034EFFC;
    case 311u: goto L_0034F008;
    case 312u: goto L_0034F014;
    case 313u: goto L_0034F024;
    case 314u: goto L_0034F050;
    case 315u: goto L_0034F070;
    case 316u: goto L_0034F088;
    case 317u: goto L_0034F098;
    case 318u: goto L_0034F0D8;
    case 319u: goto L_0034F0E8;
    case 320u: goto L_0034F0F4;
    case 321u: goto L_0034F138;
    case 322u: goto L_0034F144;
    case 323u: goto L_0034F1B0;
    case 324u: goto L_0034F1E0;
    case 325u: goto L_0034F1EC;
    case 326u: goto L_0034F254;
    case 327u: goto L_0034F268;
    case 328u: goto L_0034F288;
    case 329u: goto L_0034F298;
    case 330u: goto L_0034F2D0;
    case 331u: goto L_0034F2E0;
    case 332u: goto L_0034F2F0;
    case 333u: goto L_0034F300;
    case 334u: goto L_0034F32C;
    case 335u: goto L_0034F340;
    case 336u: goto L_0034F358;
    case 337u: goto L_0034F370;
    case 338u: goto L_0034F398;
    case 339u: goto L_0034F3C8;
    case 340u: goto L_0034F3D8;
    case 341u: goto L_0034F3E4;
    case 342u: goto L_0034F420;
    case 343u: goto L_0034F458;
    case 344u: goto L_0034F464;
    case 345u: goto L_0034F4C8;
    case 346u: goto L_0034F4F8;
    case 347u: goto L_0034F508;
    case 348u: goto L_0034F520;
    case 349u: goto L_0034F550;
    case 350u: goto L_0034F580;
    case 351u: goto L_0034F590;
    case 352u: goto L_0034F5C0;
    case 353u: goto L_0034F610;
    case 354u: goto L_0034F648;
    case 355u: goto L_0034F668;
    case 356u: goto L_0034F6D8;
    case 357u: goto L_0034F710;
    case 358u: goto L_0034F728;
    case 359u: goto L_0034F76C;
    case 360u: goto L_0034F7B8;
    case 361u: goto L_0034F828;
    case 362u: goto L_0034F868;
    case 363u: goto L_0034F878;
    case 364u: goto L_0034F8BC;
    case 365u: goto L_0034F900;
    case 366u: goto L_0034F910;
    case 367u: goto L_0034F930;
    case 368u: goto L_0034F948;
    case 369u: goto L_0034F980;
    case 370u: goto L_0034F990;
    case 371u: goto L_0034F9C8;
    case 372u: goto L_0034FA00;
    case 373u: goto L_0034FA2C;
    case 374u: goto L_0034FA48;
    case 375u: goto L_0034FA64;
    case 376u: goto L_0034FAB0;
    case 377u: goto L_0034FAE0;
    case 378u: goto L_0034FAF0;
    case 379u: goto L_0034FB20;
    case 380u: goto L_0034FB48;
    case 381u: goto L_0034FB64;
    case 382u: goto L_0034FB90;
    case 383u: goto L_0034FBA8;
    case 384u: goto L_0034FBD0;
    case 385u: goto L_0034FBE0;
    case 386u: goto L_0034FC08;
    case 387u: goto L_0034FC58;
    case 388u: goto L_0034FC68;
    case 389u: goto L_0034FCA0;
    case 390u: goto L_0034FCB8;
    case 391u: goto L_0034FCE8;
    case 392u: goto L_0034FD00;
    case 393u: goto L_0034FD18;
    case 394u: goto L_0034FD38;
    case 395u: goto L_0034FD50;
    case 396u: goto L_0034FD60;
    case 397u: goto L_0034FD80;
    case 398u: goto L_0034FDB0;
    case 399u: goto L_0034FE30;
    case 400u: goto L_0034FF48;
    case 401u: goto L_0034FF6C;
    case 402u: goto L_0034FF84;
    case 403u: goto L_0034FFE4;
    default: bad_entry(c, 0x0034C000u); return;
    }
L_0034C000:
    c.budget -= 1;
L_0034C004:
    set32(c.r[2], c.r[9].w[0] + c.r[5].w[0]);
    st64((c.r[2].w[0]), c.r[10].d[0]);
    c.budget -= 2;
L_0034C00C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034BFD8u | kUnwind; return; } [[clang::musttail]] return unit_0092(c, 403u, depth); } }
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034BFD0u | kUnwind; return; } [[clang::musttail]] return unit_0092(c, 402u, depth); } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034C034:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[12], 0u + 152u);
    set32(c.r[9], c.r[8].w[0] + 5688u);
    set32(c.r[11], 0u + 2u);
    set32(c.r[5], c.r[8].w[0] + 5712u);
    c.budget -= 5;
L_0034C048:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C07C; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[12].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    st64((c.r[2].w[0]), c.r[10].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[11].d[0];  if (t) { goto L_0034C07C; } }
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    st64((c.r[2].w[0]), c.r[10].d[0]);
    c.budget -= 2;
L_0034C07C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C048u | kUnwind; return; } goto L_0034C048; } }
L_0034C08C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034BFA0u | kUnwind; return; } [[clang::musttail]] return unit_0092(c, 401u, depth); } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034C0A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07800000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C144; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034C0B8:
    set32(c.r[2], c.r[6].w[0] + 23u);
    set32(c.r[9], c.r[6].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C12C; } }
    set32(c.r[12], c.r[6].w[0] + 4u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[14], 0u + 19u);
    set32(c.r[11], c.r[8].w[0] + 4016u);
    set32(c.r[13], 0u + 2u);
    set32(c.r[6], c.r[8].w[0] + 4019u);
    c.budget -= 6;
L_0034C0E8:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C11C; } }
    mmi::mult(c, 0, c.r[12].w[0], c.r[14].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[13].d[0];  if (t) { goto L_0034C11C; } }
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_0034C11C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C0E8u | kUnwind; return; } goto L_0034C0E8; } }
L_0034C12C:
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C0B8u | kUnwind; return; } goto L_0034C0B8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034C144:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034C148:
    set32(c.r[2], c.r[6].w[0] + 19u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C234; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0034C1DC; } }
    set32(c.r[11], c.r[8].w[0] + 4019u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 19u);
    set32(c.r[4], c.r[8].w[0] + 4016u);
    set32(c.r[12], 0u + 2u);
    c.budget -= 5;
L_0034C178:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_0034C180:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C1B4; } }
    mmi::mult(c, 0, c.r[9].w[0], c.r[13].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034C1B4; } }
    set32(c.r[2], c.r[11].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_0034C1B4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C180u | kUnwind; return; } goto L_0034C180; } }
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C178u | kUnwind; return; } goto L_0034C178; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034C1DC:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 19u);
    set32(c.r[11], c.r[8].w[0] + 4016u);
    set32(c.r[12], 0u + 2u);
    set32(c.r[9], c.r[8].w[0] + 4019u);
    c.budget -= 5;
L_0034C1F0:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C224; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[13].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034C224; } }
    set32(c.r[2], c.r[9].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_0034C224:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C1F0u | kUnwind; return; } goto L_0034C1F0; } }
L_0034C234:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C148u | kUnwind; return; } goto L_0034C148; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034C24C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07800000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C2F0; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034C260:
    set32(c.r[2], c.r[6].w[0] + 23u);
    set32(c.r[9], c.r[6].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C2D8; } }
    set32(c.r[12], c.r[6].w[0] + 4u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[14], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 4168u);
    set32(c.r[13], 0u + 2u);
    set32(c.r[6], c.r[8].w[0] + 4174u);
    c.budget -= 6;
L_0034C290:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C2C8; } }
    mmi::mult(c, 0, c.r[12].w[0], c.r[14].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[13].d[0];  if (t) { goto L_0034C2C8; } }
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034C2C8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C290u | kUnwind; return; } goto L_0034C290; } }
L_0034C2D8:
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C260u | kUnwind; return; } goto L_0034C260; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034C2F0:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034C2F8:
    set32(c.r[2], c.r[6].w[0] + 19u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C3F0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0034C390; } }
    set32(c.r[11], c.r[8].w[0] + 4174u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 38u);
    set32(c.r[4], c.r[8].w[0] + 4168u);
    set32(c.r[12], 0u + 2u);
    c.budget -= 5;
L_0034C328:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_0034C330:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C368; } }
    mmi::mult(c, 0, c.r[9].w[0], c.r[13].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[5].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034C368; } }
    set32(c.r[2], c.r[11].w[0] + c.r[6].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_0034C368:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C330u | kUnwind; return; } goto L_0034C330; } }
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C328u | kUnwind; return; } goto L_0034C328; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034C390:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 4168u);
    set32(c.r[12], 0u + 2u);
    set32(c.r[9], c.r[8].w[0] + 4174u);
    c.budget -= 6;
L_0034C3A8:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C3E0; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[13].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034C3E0; } }
    set32(c.r[2], c.r[9].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034C3E0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C3A8u | kUnwind; return; } goto L_0034C3A8; } }
L_0034C3F0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C2F8u | kUnwind; return; } goto L_0034C2F8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034C408:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07800000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C4B0; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034C420:
    set32(c.r[2], c.r[6].w[0] + 23u);
    set32(c.r[9], c.r[6].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C498; } }
    set32(c.r[12], c.r[6].w[0] + 4u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[14], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 6904u);
    set32(c.r[13], 0u + 2u);
    set32(c.r[6], c.r[8].w[0] + 6910u);
    c.budget -= 6;
L_0034C450:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C488; } }
    mmi::mult(c, 0, c.r[12].w[0], c.r[14].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[13].d[0];  if (t) { goto L_0034C488; } }
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034C488:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C450u | kUnwind; return; } goto L_0034C450; } }
L_0034C498:
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C420u | kUnwind; return; } goto L_0034C420; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034C4B0:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034C4B8:
    set32(c.r[2], c.r[6].w[0] + 19u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C5B0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0034C550; } }
    set32(c.r[11], c.r[8].w[0] + 6910u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 38u);
    set32(c.r[4], c.r[8].w[0] + 6904u);
    set32(c.r[12], 0u + 2u);
    c.budget -= 5;
L_0034C4E8:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_0034C4F0:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C528; } }
    mmi::mult(c, 0, c.r[9].w[0], c.r[13].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[5].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034C528; } }
    set32(c.r[2], c.r[11].w[0] + c.r[6].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_0034C528:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C4F0u | kUnwind; return; } goto L_0034C4F0; } }
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C4E8u | kUnwind; return; } goto L_0034C4E8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034C550:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 6904u);
    set32(c.r[12], 0u + 2u);
    set32(c.r[9], c.r[8].w[0] + 6910u);
    c.budget -= 6;
L_0034C568:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C5A0; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[13].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034C5A0; } }
    set32(c.r[2], c.r[9].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034C5A0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C568u | kUnwind; return; } goto L_0034C568; } }
L_0034C5B0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C4B8u | kUnwind; return; } goto L_0034C4B8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034C5C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07800000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C670; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034C5E0:
    set32(c.r[2], c.r[6].w[0] + 23u);
    set32(c.r[9], c.r[6].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C658; } }
    set32(c.r[12], c.r[6].w[0] + 4u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[14], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 7208u);
    set32(c.r[13], 0u + 2u);
    set32(c.r[6], c.r[8].w[0] + 7214u);
    c.budget -= 6;
L_0034C610:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C648; } }
    mmi::mult(c, 0, c.r[12].w[0], c.r[14].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[13].d[0];  if (t) { goto L_0034C648; } }
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034C648:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C610u | kUnwind; return; } goto L_0034C610; } }
L_0034C658:
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C5E0u | kUnwind; return; } goto L_0034C5E0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034C670:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034C678:
    set32(c.r[2], c.r[6].w[0] + 19u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C770; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0034C710; } }
    set32(c.r[11], c.r[8].w[0] + 7214u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 38u);
    set32(c.r[4], c.r[8].w[0] + 7208u);
    set32(c.r[12], 0u + 2u);
    c.budget -= 5;
L_0034C6A8:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_0034C6B0:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C6E8; } }
    mmi::mult(c, 0, c.r[9].w[0], c.r[13].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[5].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034C6E8; } }
    set32(c.r[2], c.r[11].w[0] + c.r[6].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_0034C6E8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C6B0u | kUnwind; return; } goto L_0034C6B0; } }
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C6A8u | kUnwind; return; } goto L_0034C6A8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034C710:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 7208u);
    set32(c.r[12], 0u + 2u);
    set32(c.r[9], c.r[8].w[0] + 7214u);
    c.budget -= 6;
L_0034C728:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C760; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[13].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034C760; } }
    set32(c.r[2], c.r[9].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034C760:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C728u | kUnwind; return; } goto L_0034C728; } }
L_0034C770:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C678u | kUnwind; return; } goto L_0034C678; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034C788:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07800000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C82C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034C7A0:
    set32(c.r[2], c.r[6].w[0] + 23u);
    set32(c.r[9], c.r[6].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C814; } }
    set32(c.r[12], c.r[6].w[0] + 4u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[14], 0u + 19u);
    set32(c.r[11], c.r[8].w[0] + 7512u);
    set32(c.r[13], 0u + 2u);
    set32(c.r[6], c.r[8].w[0] + 7515u);
    c.budget -= 6;
L_0034C7D0:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C804; } }
    mmi::mult(c, 0, c.r[12].w[0], c.r[14].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[13].d[0];  if (t) { goto L_0034C804; } }
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_0034C804:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C7D0u | kUnwind; return; } goto L_0034C7D0; } }
L_0034C814:
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C7A0u | kUnwind; return; } goto L_0034C7A0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034C82C:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034C830:
    set32(c.r[2], c.r[6].w[0] + 19u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C91C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0034C8C4; } }
    set32(c.r[11], c.r[8].w[0] + 7515u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 19u);
    set32(c.r[4], c.r[8].w[0] + 7512u);
    set32(c.r[12], 0u + 2u);
    c.budget -= 5;
L_0034C860:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_0034C868:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C89C; } }
    mmi::mult(c, 0, c.r[9].w[0], c.r[13].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034C89C; } }
    set32(c.r[2], c.r[11].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_0034C89C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C868u | kUnwind; return; } goto L_0034C868; } }
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C860u | kUnwind; return; } goto L_0034C860; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034C8C4:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 19u);
    set32(c.r[11], c.r[8].w[0] + 7512u);
    set32(c.r[12], 0u + 2u);
    set32(c.r[9], c.r[8].w[0] + 7515u);
    c.budget -= 5;
L_0034C8D8:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C90C; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[13].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034C90C; } }
    set32(c.r[2], c.r[9].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_0034C90C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C8D8u | kUnwind; return; } goto L_0034C8D8; } }
L_0034C91C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C830u | kUnwind; return; } goto L_0034C830; } }
L_0034C92C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034C938:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C960u);  if (depth < kMaxDepth) unit_0068(c, 298u, depth + 1u); else { c.pc = 0x002A3B08u; return; } if (c.pc != 0x0034C960u) [[unlikely]] return; }
L_0034C960:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 68u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0034CD30; } }
    c.r[2].d[0] = c.r[16].sd[0] < 69ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C9D4; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0034CCE0; } }
    c.r[2].d[0] = c.r[16].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C9B4; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0034CCA8; } }
    set32(c.r[2], 0u + 63u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0034CCC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CDF0; } }
L_0034C9B4:
    set32(c.r[2], 0u + 66u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0034CD08; } }
    c.r[2].d[0] = c.r[16].sd[0] < 67ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034CD18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CCF0; } }
L_0034C9D4:
    set32(c.r[2], 0u + 71u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0034CDBC; } }
    c.r[2].d[0] = c.r[16].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034CA0C; } }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0034CD40; } }
    set32(c.r[2], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0034CD84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CDF0; } }
L_0034CA0C:
    set32(c.r[2], 0u + 213u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0034CC8C; } }
    c.r[2].d[0] = c.r[16].sd[0] < 214ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034CA38; } }
    set32(c.r[2], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0034CDD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CDF0; } }
L_0034CA38:
    set32(c.r[2], 0u + 546u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0034CDF0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0034CBD4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] - 25880u);
    set32(c.r[3], c.r[3].w[0] - 25952u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034CAD0; } }
    set32(c.r[2], c.r[3].w[0] + 224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 2;
L_0034CA78:
    ldl(c.r[6], (c.r[3].w[0] + 7u));
    ldr(c.r[6], (c.r[3].w[0]));
    ldl(c.r[7], (c.r[3].w[0] + 15u));
    ldr(c.r[7], (c.r[3].w[0] + 8u));
    ldl(c.r[8], (c.r[3].w[0] + 23u));
    ldr(c.r[8], (c.r[3].w[0] + 16u));
    ldl(c.r[9], (c.r[3].w[0] + 31u));
    ldr(c.r[9], (c.r[3].w[0] + 24u));
    sdl(c.r[6], (c.r[4].w[0] + 7u));
    sdr(c.r[6], (c.r[4].w[0]));
    sdl(c.r[7], (c.r[4].w[0] + 15u));
    sdr(c.r[7], (c.r[4].w[0] + 8u));
    sdl(c.r[8], (c.r[4].w[0] + 23u));
    sdr(c.r[8], (c.r[4].w[0] + 16u));
    sdl(c.r[9], (c.r[4].w[0] + 31u));
    sdr(c.r[9], (c.r[4].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034CA78u | kUnwind; return; } goto L_0034CA78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CB08; } }
L_0034CAD0:
    set32(c.r[2], c.r[3].w[0] + 224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 2;
L_0034CAD8:
    c.r[6].d[0] = ld64((c.r[3].w[0]));
    c.r[7].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[8].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[9].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[6].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[7].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[8].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[9].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034CAD8u | kUnwind; return; } goto L_0034CAD8; } }
L_0034CB08:
    set32(c.r[5], ld32((c.r[5].w[0] + 19740u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034CB24u) [[unlikely]] return; }
L_0034CB24:
    set32(c.r[3], c.r[16].w[0] - 25952u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034CB98; } }
    set32(c.r[2], c.r[4].w[0] + 224u);
    c.budget -= 1;
L_0034CB40:
    ldl(c.r[5], (c.r[4].w[0] + 7u));
    ldr(c.r[5], (c.r[4].w[0]));
    ldl(c.r[6], (c.r[4].w[0] + 15u));
    ldr(c.r[6], (c.r[4].w[0] + 8u));
    ldl(c.r[7], (c.r[4].w[0] + 23u));
    ldr(c.r[7], (c.r[4].w[0] + 16u));
    ldl(c.r[8], (c.r[4].w[0] + 31u));
    ldr(c.r[8], (c.r[4].w[0] + 24u));
    sdl(c.r[5], (c.r[3].w[0] + 7u));
    sdr(c.r[5], (c.r[3].w[0]));
    sdl(c.r[6], (c.r[3].w[0] + 15u));
    sdr(c.r[6], (c.r[3].w[0] + 8u));
    sdl(c.r[7], (c.r[3].w[0] + 23u));
    sdr(c.r[7], (c.r[3].w[0] + 16u));
    sdl(c.r[8], (c.r[3].w[0] + 31u));
    sdr(c.r[8], (c.r[3].w[0] + 24u));
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034CB40u | kUnwind; return; } goto L_0034CB40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CDF0; } }
L_0034CB98:
    set32(c.r[2], c.r[4].w[0] + 224u);
    c.budget -= 1;
L_0034CB9C:
    c.r[9].d[0] = ld64((c.r[4].w[0]));
    c.r[5].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[6].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[7].d[0] = ld64((c.r[4].w[0] + 24u));
    st64((c.r[3].w[0]), c.r[9].d[0]);
    st64((c.r[3].w[0] + 8u), c.r[5].d[0]);
    st64((c.r[3].w[0] + 16u), c.r[6].d[0]);
    st64((c.r[3].w[0] + 24u), c.r[7].d[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034CB9Cu | kUnwind; return; } goto L_0034CB9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CDF0; } }
L_0034CBD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[2].w[0] - 25952u);
    set32(c.r[3], c.r[3].w[0] - 25880u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034CC50; } }
    set32(c.r[2], c.r[3].w[0] + 224u);
    c.budget -= 1;
L_0034CBF8:
    ldl(c.r[8], (c.r[3].w[0] + 7u));
    ldr(c.r[8], (c.r[3].w[0]));
    ldl(c.r[9], (c.r[3].w[0] + 15u));
    ldr(c.r[9], (c.r[3].w[0] + 8u));
    ldl(c.r[5], (c.r[3].w[0] + 23u));
    ldr(c.r[5], (c.r[3].w[0] + 16u));
    ldl(c.r[6], (c.r[3].w[0] + 31u));
    ldr(c.r[6], (c.r[3].w[0] + 24u));
    sdl(c.r[8], (c.r[4].w[0] + 7u));
    sdr(c.r[8], (c.r[4].w[0]));
    sdl(c.r[9], (c.r[4].w[0] + 15u));
    sdr(c.r[9], (c.r[4].w[0] + 8u));
    sdl(c.r[5], (c.r[4].w[0] + 23u));
    sdr(c.r[5], (c.r[4].w[0] + 16u));
    sdl(c.r[6], (c.r[4].w[0] + 31u));
    sdr(c.r[6], (c.r[4].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034CBF8u | kUnwind; return; } goto L_0034CBF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CDF0; } }
L_0034CC50:
    set32(c.r[2], c.r[3].w[0] + 224u);
    c.budget -= 1;
L_0034CC54:
    c.r[7].d[0] = ld64((c.r[3].w[0]));
    c.r[8].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[9].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[7].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[8].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[9].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034CC54u | kUnwind; return; } goto L_0034CC54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CDF0; } }
L_0034CC8C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CCA0u);  if (depth < kMaxDepth) unit_006C(c, 294u, depth + 1u); else { c.pc = 0x002B3140u; return; } if (c.pc != 0x0034CCA0u) [[unlikely]] return; }
L_0034CCA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CDF0; } }
L_0034CCA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 6944u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CCC0u);  if (depth < kMaxDepth) unit_0091(c, 48u, depth + 1u); else { c.pc = 0x00344808u; return; } if (c.pc != 0x0034CCC0u) [[unlikely]] return; }
L_0034CCC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CDF0; } }
L_0034CCC8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 962u)));
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st16((c.r[4].w[0] + 458u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CDF0; } }
L_0034CCE0:
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    st16((c.r[4].w[0] + 458u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CDF0; } }
L_0034CCF0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 960u)));
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st16((c.r[4].w[0] + 456u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CDF0; } }
L_0034CD08:
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    st16((c.r[4].w[0] + 456u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CDF0; } }
L_0034CD18:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 966u)));
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st16((c.r[4].w[0] + 460u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CDF0; } }
L_0034CD30:
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    st16((c.r[4].w[0] + 460u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CDF0; } }
L_0034CD40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[17].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 972u)));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[2].w[0] + 468u), c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CDF0; } }
L_0034CD84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[17].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 468u), c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CDF0; } }
L_0034CDBC:
    set32(c.r[2], ld32((c.r[4].w[0] + 464u)));
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 464u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CDF0; } }
L_0034CDD8:
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 464u), c.r[3].w[0]);
    c.budget -= 6;
L_0034CDF0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034CE10:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0034CF44; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034CF44; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 14720u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 144u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CE50u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0034CE50u) [[unlikely]] return; }
L_0034CE50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[2].w[0] - 29220u));
    set32(c.r[4], 0u - 2u);
    c.f[1] = ld32((c.r[3].w[0] - 29216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 40u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[7], 0u + 75u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st16((c.r[29].w[0] + 6u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[9], c.r[29].w[0] + 128u);
    st16((c.r[29].w[0] + 14u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[29].w[0] + 16u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    st16((c.r[29].w[0] + 18u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[29].w[0] + 28u), c.f[0]);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 23;
L_0034CEAC:
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[4]);
    st128((c.r[8].w[0]) & ~15u, c.r[2]);
    st128((c.r[8].w[0] + 16u) & ~15u, c.r[4]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[8], c.r[8].w[0] + 32u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[9].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034CEACu | kUnwind; return; } goto L_0034CEAC; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] + 14864u);
    set32(c.r[2], c.r[2].w[0] + 1264u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[17], c.r[17].w[0] + 14880u);
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    st128((c.r[8].w[0]) & ~15u, c.r[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CEFCu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0034CEFCu) [[unlikely]] return; }
L_0034CEFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3320u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CF14u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x0034CF14u) [[unlikely]] return; }
L_0034CF14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 1216u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CF2Cu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0034CF2Cu) [[unlikely]] return; }
L_0034CF2C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 1064u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CF44u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x0034CF44u) [[unlikely]] return; }
L_0034CF44:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034CF60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 14904u);
    set32(c.r[6], 0u + 60u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CF80u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0034CF80u) [[unlikely]] return; }
L_0034CF80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 14964u), 0u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034CF98:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + 14904u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[16].w[0] + 60u);
    c.f[13] = 0u;
    set32(c.r[6], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 12;
L_0034CFC8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034D02C; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    st32((c.r[17].w[0] - 16812u), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.f[14] = c.f[13];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D010u);  if (depth < kMaxDepth) unit_0087(c, 25u, depth + 1u); else { c.pc = 0x0031C498u; return; } if (c.pc != 0x0034D010u) [[unlikely]] return; }
L_0034D010:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034D020; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0034D020:
    st32((c.r[17].w[0] - 16812u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034D03C; } }
L_0034D02C:
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034CFC8u | kUnwind; return; } goto L_0034CFC8; } }
L_0034D03C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034D058:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 14904u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + 8u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.budget -= 8;
L_0034D078:
    set32(c.r[2], ld32((c.r[3].w[0] - 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0034D0B4; } }
    set32(c.r[2], ld32((c.r[3].w[0] - 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034D0B4; } }
    set32(c.r[4], c.r[6].w[0] + 28288u);
    st32((c.r[3].w[0] - 4u), 0u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D0ACu);  if (depth < kMaxDepth) unit_009E(c, 273u, depth + 1u); else { c.pc = 0x0037ADE8u; return; } if (c.pc != 0x0034D0ACu) [[unlikely]] return; }
L_0034D0AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034D0C8; } }
L_0034D0B4:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.r[2].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034D078u | kUnwind; return; } goto L_0034D078; } }
L_0034D0C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034D0D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14904u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + 8u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.budget -= 10;
L_0034D100:
    set32(c.r[2], ld32((c.r[16].w[0] - 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0034D150; } }
    set32(c.r[5], ld32((c.r[16].w[0] - 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0034D130; } }
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D124u);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037AE10u; return; } if (c.pc != 0x0034D124u) [[unlikely]] return; }
L_0034D124:
    st32((c.r[16].w[0] - 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034D144; } }
L_0034D130:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D140u);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037AE10u; return; } if (c.pc != 0x0034D140u) [[unlikely]] return; }
L_0034D140:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0034D144:
    st32((c.r[16].w[0] - 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034D164; } }
L_0034D150:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034D100u | kUnwind; return; } goto L_0034D100; } }
L_0034D164:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034D178:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[2].w[0] + 14964u), c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034D188:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] + 14904u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[16].w[0] + 60u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.budget -= 12;
L_0034D1B8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034D1F0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0034D1F0; } }
    set32(c.r[4], c.r[19].w[0] + 28288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D1DCu);  if (depth < kMaxDepth) unit_009E(c, 269u, depth + 1u); else { c.pc = 0x0037AD98u; return; } if (c.pc != 0x0034D1DCu) [[unlikely]] return; }
L_0034D1DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034D1F0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034D200; } }
L_0034D1F0:
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034D1B8u | kUnwind; return; } goto L_0034D1B8; } }
L_0034D200:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034D228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 14904u)));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034D26C; } }
L_0034D248:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034D278; } }
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], c.r[8].w[0] + 14904u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
L_0034D26C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034D248u | kUnwind; return; } goto L_0034D248; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_0034D278:
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034D288:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] + 14904u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[16].w[0] + 60u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.budget -= 12;
L_0034D2B8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034D2E0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0034D2E0; } }
    set32(c.r[4], c.r[19].w[0] + 28288u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D2E0u);  if (depth < kMaxDepth) unit_009E(c, 273u, depth + 1u); else { c.pc = 0x0037ADE8u; return; } if (c.pc != 0x0034D2E0u) [[unlikely]] return; }
L_0034D2E0:
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034D2B8u | kUnwind; return; } goto L_0034D2B8; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034D310:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    c.r[11].d[0] = c.r[7].d[0] + 0ull;
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 4576u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[7].d[0] = c.r[10].d[0] + 0ull;
    c.r[8].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D34Cu);  if (depth < kMaxDepth) unit_0077(c, 220u, depth + 1u); else { c.pc = 0x002DF798u; return; } if (c.pc != 0x0034D34Cu) [[unlikely]] return; }
L_0034D34C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034D360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D384u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x0034D384u) [[unlikely]] return; }
L_0034D384:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034D408; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D39Cu);  if (depth < kMaxDepth) unit_0088(c, 302u, depth + 1u); else { c.pc = 0x00323720u; return; } if (c.pc != 0x0034D39Cu) [[unlikely]] return; }
L_0034D39C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034D408; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D3C8u);  if (depth < kMaxDepth) unit_007C(c, 132u, depth + 1u); else { c.pc = 0x002F25F8u; return; } if (c.pc != 0x0034D3C8u) [[unlikely]] return; }
L_0034D3C8:
    set32(c.r[16], c.r[16].w[0] - 19312u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D3DCu);  if (depth < kMaxDepth) unit_0088(c, 333u, depth + 1u); else { c.pc = 0x00323FF8u; return; } if (c.pc != 0x0034D3DCu) [[unlikely]] return; }
L_0034D3DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D3F0u);  if (depth < kMaxDepth) unit_0089(c, 5u, depth + 1u); else { c.pc = 0x00324068u; return; } if (c.pc != 0x0034D3F0u) [[unlikely]] return; }
L_0034D3F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D408u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x0034D408u) [[unlikely]] return; }
L_0034D408:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034D420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 9268u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0034D484; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 9272u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0034D484; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 9266u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034D470; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D468u);  if (depth < kMaxDepth) unit_009E(c, 363u, depth + 1u); else { c.pc = 0x0037B790u; return; } if (c.pc != 0x0034D468u) [[unlikely]] return; }
L_0034D468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034D480; } }
L_0034D470:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D480u);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037AE10u; return; } if (c.pc != 0x0034D480u) [[unlikely]] return; }
L_0034D480:
    st32((c.r[16].w[0] + 9268u), 0u);
    c.budget -= 1;
L_0034D484:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034D498:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 9268u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0034D4EC; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 9266u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034D4D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D4D0u);  if (depth < kMaxDepth) unit_009E(c, 363u, depth + 1u); else { c.pc = 0x0037B790u; return; } if (c.pc != 0x0034D4D0u) [[unlikely]] return; }
L_0034D4D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034D4E8; } }
L_0034D4D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D4E8u);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037AE10u; return; } if (c.pc != 0x0034D4E8u) [[unlikely]] return; }
L_0034D4E8:
    st32((c.r[16].w[0] + 9268u), 0u);
    c.budget -= 1;
L_0034D4EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034D500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8938u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034D51C; } }
    st16((c.r[4].w[0] + 8938u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 1;
L_0034D51C:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    st16((c.r[4].w[0] + 9014u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[4].w[0] + 9016u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034D554; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0034D554; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D554u);  if (depth < kMaxDepth) unit_0079(c, 183u, depth + 1u); else { c.pc = 0x002E6B68u; return; } if (c.pc != 0x0034D554u) [[unlikely]] return; }
L_0034D554:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034D568:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00340000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] + 23312u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] + 15024u);
    set32(c.r[6], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D594u);  if (depth < kMaxDepth) unit_0093(c, 150u, depth + 1u); else { c.pc = 0x0034DBD8u; return; } if (c.pc != 0x0034D594u) [[unlikely]] return; }
L_0034D594:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 21632u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D5ACu);  if (depth < kMaxDepth) unit_0093(c, 150u, depth + 1u); else { c.pc = 0x0034DBD8u; return; } if (c.pc != 0x0034D5ACu) [[unlikely]] return; }
L_0034D5AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 14024u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D5C4u);  if (depth < kMaxDepth) unit_0093(c, 150u, depth + 1u); else { c.pc = 0x0034DBD8u; return; } if (c.pc != 0x0034D5C4u) [[unlikely]] return; }
L_0034D5C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00340000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 31464u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D5DCu);  if (depth < kMaxDepth) unit_0093(c, 150u, depth + 1u); else { c.pc = 0x0034DBD8u; return; } if (c.pc != 0x0034D5DCu) [[unlikely]] return; }
L_0034D5DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 11504u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D5F4u);  if (depth < kMaxDepth) unit_0093(c, 150u, depth + 1u); else { c.pc = 0x0034DBD8u; return; } if (c.pc != 0x0034D5F4u) [[unlikely]] return; }
L_0034D5F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12496u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D60Cu);  if (depth < kMaxDepth) unit_0093(c, 150u, depth + 1u); else { c.pc = 0x0034DBD8u; return; } if (c.pc != 0x0034D60Cu) [[unlikely]] return; }
L_0034D60C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034D620:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034D630:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034D638:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034D640:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 3304u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D670u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x0034D670u) [[unlikely]] return; }
L_0034D670:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034D730; } }
    set32(c.r[5], 0u - 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 255ull;
    c.r[5].d[0] = c.r[18].d[0] & c.r[5].d[0];
    set32(c.r[3], 0u + 256u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[8], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] << 1;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 8;
    c.r[2].d[0] = c.r[2].d[0] | 255ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[7], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 25;
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[4], 0u + 13248u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    mmi::mult(c, 0, c.r[7].w[0], c.r[4].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x87FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 14;
    c.r[2].d[0] = c.r[2].d[0] | 16383ull;
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    set32(c.r[6], ld32((c.r[8].w[0] + 4u)));
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 41;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] & 15ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = 0ull | 65534ull;
    c.r[2].d[0] = c.r[2].d[0] << 19;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 13;
    c.r[2].d[0] = c.r[2].d[0] | 8191ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] + 27456u);
    c.r[6].d[0] = c.r[6].d[0] << 45;
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.budget -= 46;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D730u);  if (depth < kMaxDepth) unit_0091(c, 150u, depth + 1u); else { c.pc = 0x00345930u; return; } if (c.pc != 0x0034D730u) [[unlikely]] return; }
L_0034D730:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034D750:
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] - 21440u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034D768:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D780u);  if (depth < kMaxDepth) unit_0093(c, 64u, depth + 1u); else { c.pc = 0x0034CE10u; return; } if (c.pc != 0x0034D780u) [[unlikely]] return; }
L_0034D780:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034D790:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[22].w[0] + 200u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    set32(c.r[30], 0u + 804u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D7D8u);  if (depth < kMaxDepth) unit_0081(c, 191u, depth + 1u); else { c.pc = 0x00306590u; return; } if (c.pc != 0x0034D7D8u) [[unlikely]] return; }
L_0034D7D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[4], c.r[3].w[0] + 9872u);
    c.lo.d[0] = c.r[2].d[0];
    set32(c.r[23], c.r[16].w[0] + 1u);
    set32(c.r[2], 0u + 13248u);
    mmi::madd(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D804u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0034D804u) [[unlikely]] return; }
L_0034D804:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034D8D8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D818u);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x0034D818u) [[unlikely]] return; }
L_0034D818:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034D8D8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 8;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0034D8D8; } }
    set32(c.r[20], 0u + 1u);
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034D8B4; } }
L_0034D850:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], c.r[21].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[30].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[16].d[0] = ld64((c.r[2].w[0] + 8u));
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    set32(c.r[4], c.r[4].w[0] + 564u);
    set32(c.r[4], c.r[22].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D884u);  if (depth < kMaxDepth) unit_0093(c, 152u, depth + 1u); else { c.pc = 0x0034DC20u; return; } if (c.pc != 0x0034D884u) [[unlikely]] return; }
L_0034D884:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034D8B0; } }
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[10], 0u - 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D8B0u);  if (depth < kMaxDepth) unit_0093(c, 140u, depth + 1u); else { c.pc = 0x0034DA00u; return; } if (c.pc != 0x0034D8B0u) [[unlikely]] return; }
L_0034D8B0:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_0034D8B4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0034D8D8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D8CCu);  if (depth < kMaxDepth) unit_007A(c, 134u, depth + 1u); else { c.pc = 0x002E9A80u; return; } if (c.pc != 0x0034D8CCu) [[unlikely]] return; }
L_0034D8CC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034D850u | kUnwind; return; } goto L_0034D850; } }
L_0034D8D8:
    c.r[16].d[0] = c.r[23].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034D7D8u | kUnwind; return; } goto L_0034D7D8; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D8F4u);  if (depth < kMaxDepth) unit_0093(c, 159u, depth + 1u); else { c.pc = 0x0034DCC0u; return; } if (c.pc != 0x0034D8F4u) [[unlikely]] return; }
L_0034D8F4:
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
L_0034D928:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0034D988; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034D988; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[16], c.r[16].w[0] + 15024u);
    set32(c.r[4], c.r[4].w[0] + 14896u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D960u);  if (depth < kMaxDepth) unit_0093(c, 109u, depth + 1u); else { c.pc = 0x0034D568u; return; } if (c.pc != 0x0034D960u) [[unlikely]] return; }
L_0034D960:
    set32(c.r[3], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] + 560u);
    set32(c.r[2], 0u + 90u);
    c.budget -= 4;
L_0034D970:
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034D970u | kUnwind; return; } goto L_0034D970; } }
L_0034D988:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034D9A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] + 14896u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D9C0u);  if (depth < kMaxDepth) unit_0093(c, 109u, depth + 1u); else { c.pc = 0x0034D568u; return; } if (c.pc != 0x0034D9C0u) [[unlikely]] return; }
L_0034D9C0:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 90u);
    set32(c.r[2], c.r[16].w[0] + 560u);
    c.budget -= 4;
L_0034D9D0:
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034D9D0u | kUnwind; return; } goto L_0034D9D0; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034DA00:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034DACC; } }
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_0034DA60:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034DAA8; } }
    set32(c.r[4], c.r[30].w[0] + 9872u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DA80u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0034DA80u) [[unlikely]] return; }
L_0034DA80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034DAA8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DAA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034DAA8u) [[unlikely]] return; }
L_0034DAA8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.r[2].d[0] = c.r[18].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034DACC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034DA60u | kUnwind; return; } goto L_0034DA60; } }
L_0034DACC:
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
L_0034DB00:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] + 4u);
    c.budget -= 2;
L_0034DB08:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034DB20; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034DB20:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[5].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034DB08u | kUnwind; return; } goto L_0034DB08; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034DB48:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 13u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[2].w[0] + 104u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[20], 0u + 804u);
    c.budget -= 14;
L_0034DB80:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 13248u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[20].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 564u);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DBA8u);  if (depth < kMaxDepth) unit_0093(c, 156u, depth + 1u); else { c.pc = 0x0034DC78u; return; } if (c.pc != 0x0034DBA8u) [[unlikely]] return; }
L_0034DBA8:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034DB80u | kUnwind; return; } goto L_0034DB80; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034DBD8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034DBE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034DC04; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[2].d[0] = c.r[3].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034DBE0u | kUnwind; return; } goto L_0034DBE0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034DC04:
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034DC20:
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034DC28:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034DC40; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034DC40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0034DC54; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034DC54:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[3].sd[0] < 200ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034DC28u | kUnwind; return; } goto L_0034DC28; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034DC78:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] + 4u);
    c.budget -= 2;
L_0034DC80:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034DCA4; } }
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034DCA4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < 200ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034DC80u | kUnwind; return; } goto L_0034DC80; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034DCC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 13u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[2].w[0] + 104u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[20], 0u + 804u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 14;
L_0034DCF8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 564u);
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0034DD30; } }
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DD2Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0034DD2Cu) [[unlikely]] return; }
L_0034DD2C:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0034DD30:
    set32(c.r[18], c.r[18].w[0] + 13248u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034DCF8u | kUnwind; return; } goto L_0034DCF8; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034DD68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DD80u);  if (depth < kMaxDepth) unit_0093(c, 134u, depth + 1u); else { c.pc = 0x0034D928u; return; } if (c.pc != 0x0034DD80u) [[unlikely]] return; }
L_0034DD80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034DD90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[2].w[0] + 6384u), 0u);
    set32(c.r[16], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 18;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0034DEB0; } }
    set32(c.r[22], 0u - 1u);
    set32(c.r[21], 0u + 1u);
    c.budget -= 2;
L_0034DDE0:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[19], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[18], c.r[16].w[0] + 64u);
    set32(c.r[8], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] == c.r[22].d[0];  if (t) { goto L_0034DE80; } }
    st32((c.r[16].w[0]), c.r[21].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034DE64; } }
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0034DE18:
    set32(c.r[6], ld32((c.r[5].w[0] + 40u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_0034DE50; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 2;
L_0034DE30:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[8].d[0];  if (t) { goto L_0034DE68; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 208u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034DE30u | kUnwind; return; } goto L_0034DE30; } }
L_0034DE50:
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 64u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034DE18u | kUnwind; return; } goto L_0034DE18; } }
L_0034DE64:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034DE68:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0034DE80; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DE80u);  if (depth < kMaxDepth) unit_0093(c, 221u, depth + 1u); else { c.pc = 0x0034E4D0u; return; } if (c.pc != 0x0034DE80u) [[unlikely]] return; }
L_0034DE80:
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0] + 6384u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034DE98; } }
    st32((c.r[20].w[0] + 6384u), c.r[6].w[0]);
    c.budget -= 1;
L_0034DE98:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034DDE0u | kUnwind; return; } goto L_0034DDE0; } }
L_0034DEB0:
    set32(c.r[2], ld32((c.r[20].w[0] + 6384u)));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st32((c.r[20].w[0] + 6384u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034DEE8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF20u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0034DF20u) [[unlikely]] return; }
L_0034DF20:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF30u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x0034DF30u) [[unlikely]] return; }
L_0034DF30:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] - 6696u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF58u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x0034DF58u) [[unlikely]] return; }
L_0034DF58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF60u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x0034DF60u) [[unlikely]] return; }
L_0034DF60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF68u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x0034DF68u) [[unlikely]] return; }
L_0034DF68:
    set32(c.r[19], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0034DF84; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0034DF9C; } }
L_0034DF84:
    st32((c.r[17].w[0] + 16u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034E198; } }
L_0034DF9C:
    set32(c.r[18], ld32((c.r[19].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[5].w[0] + 6372u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 6376u), 0u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034E088; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[21], c.r[19].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DFD8u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0034DFD8u) [[unlikely]] return; }
L_0034DFD8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1440u);
    set32(c.r[6], c.r[6].w[0] + 26872u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DFF4u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x0034DFF4u) [[unlikely]] return; }
L_0034DFF4:
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0034E054; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] << 6);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E014u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0034E014u) [[unlikely]] return; }
L_0034E014:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 1448u);
    set32(c.r[8], c.r[8].w[0] + 1496u);
    set32(c.r[9], 0u + 235u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E03Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0034E03Cu) [[unlikely]] return; }
L_0034E03C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E054u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0034E054u) [[unlikely]] return; }
L_0034E054:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E060u);  if (depth < kMaxDepth) unit_0093(c, 225u, depth + 1u); else { c.pc = 0x0034E580u; return; } if (c.pc != 0x0034E060u) [[unlikely]] return; }
L_0034E060:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E07Cu);  if (depth < kMaxDepth) unit_0093(c, 360u, depth + 1u); else { c.pc = 0x0034F7B8u; return; } if (c.pc != 0x0034E07Cu) [[unlikely]] return; }
L_0034E07C:
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034E110; } }
L_0034E088:
    set32(c.r[16], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E094u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0034E094u) [[unlikely]] return; }
L_0034E094:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1440u);
    set32(c.r[6], c.r[6].w[0] + 26872u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E0B0u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x0034E0B0u) [[unlikely]] return; }
L_0034E0B0:
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0034E110; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] << 6);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E0D0u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0034E0D0u) [[unlikely]] return; }
L_0034E0D0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 1448u);
    set32(c.r[8], c.r[8].w[0] + 1496u);
    set32(c.r[9], 0u + 235u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E0F8u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0034E0F8u) [[unlikely]] return; }
L_0034E0F8:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E110u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0034E110u) [[unlikely]] return; }
L_0034E110:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034E168; } }
    c.budget -= 1;
L_0034E128:
    st32((c.r[22].w[0] + 6372u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E138u);  if (depth < kMaxDepth) unit_0093(c, 225u, depth + 1u); else { c.pc = 0x0034E580u; return; } if (c.pc != 0x0034E138u) [[unlikely]] return; }
L_0034E138:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], c.r[19].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E150u);  if (depth < kMaxDepth) unit_0093(c, 355u, depth + 1u); else { c.pc = 0x0034F668u; return; } if (c.pc != 0x0034E150u) [[unlikely]] return; }
L_0034E150:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E128u | kUnwind; return; } goto L_0034E128; } }
L_0034E168:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E178u);  if (depth < kMaxDepth) unit_0093(c, 257u, depth + 1u); else { c.pc = 0x0034E9C0u; return; } if (c.pc != 0x0034E178u) [[unlikely]] return; }
L_0034E178:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 9488u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E188u);  if (depth < kMaxDepth) unit_0094(c, 121u, depth + 1u); else { c.pc = 0x00351808u; return; } if (c.pc != 0x0034E188u) [[unlikely]] return; }
L_0034E188:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E194u);  if (depth < kMaxDepth) unit_0093(c, 164u, depth + 1u); else { c.pc = 0x0034DD90u; return; } if (c.pc != 0x0034E194u) [[unlikely]] return; }
L_0034E194:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034E198:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E1C8:
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0034E204; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034E204; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 26872u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[3].w[0] + 1544u);
    set32(c.r[2], c.r[2].w[0] + 26848u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 10;
L_0034E204:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E210:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E228:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E238u);  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034EA18u; return; } if (c.pc != 0x0034E238u) [[unlikely]] return; }
L_0034E238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034E24C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E24Cu);  if (depth < kMaxDepth) unit_0093(c, 345u, depth + 1u); else { c.pc = 0x0034F4C8u; return; } if (c.pc != 0x0034E24Cu) [[unlikely]] return; }
L_0034E24C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E270u);  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034EA18u; return; } if (c.pc != 0x0034E270u) [[unlikely]] return; }
L_0034E270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034E284; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E284u);  if (depth < kMaxDepth) unit_0093(c, 349u, depth + 1u); else { c.pc = 0x0034F550u; return; } if (c.pc != 0x0034E284u) [[unlikely]] return; }
L_0034E284:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E298:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0034E2C8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034E37C; } }
L_0034E2C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] + 26848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E2D8u);  if (depth < kMaxDepth) unit_0093(c, 239u, depth + 1u); else { c.pc = 0x0034E790u; return; } if (c.pc != 0x0034E2D8u) [[unlikely]] return; }
L_0034E2D8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E2E8u);  if (depth < kMaxDepth) unit_0093(c, 394u, depth + 1u); else { c.pc = 0x0034FD38u; return; } if (c.pc != 0x0034E2E8u) [[unlikely]] return; }
L_0034E2E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034E308; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E2FCu);  if (depth < kMaxDepth) unit_0093(c, 394u, depth + 1u); else { c.pc = 0x0034FD38u; return; } if (c.pc != 0x0034E2FCu) [[unlikely]] return; }
L_0034E2FC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0034E378; } }
L_0034E308:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 6380u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E31Cu);  if (depth < kMaxDepth) unit_0093(c, 345u, depth + 1u); else { c.pc = 0x0034F4C8u; return; } if (c.pc != 0x0034E31Cu) [[unlikely]] return; }
L_0034E31C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E328u);  if (depth < kMaxDepth) unit_0093(c, 338u, depth + 1u); else { c.pc = 0x0034F398u; return; } if (c.pc != 0x0034E328u) [[unlikely]] return; }
L_0034E328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034E33C; } }
L_0034E330:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E33Cu);  if (depth < kMaxDepth) unit_0093(c, 317u, depth + 1u); else { c.pc = 0x0034F098u; return; } if (c.pc != 0x0034E33Cu) [[unlikely]] return; }
L_0034E33C:
    set32(c.r[2], ld32((c.r[16].w[0] + 6380u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034E35C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E354u);  if (depth < kMaxDepth) unit_0093(c, 332u, depth + 1u); else { c.pc = 0x0034F2F0u; return; } if (c.pc != 0x0034E354u) [[unlikely]] return; }
L_0034E354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E330u | kUnwind; return; } goto L_0034E330; } }
L_0034E35C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0034E378; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E378u);  if (depth < kMaxDepth) unit_0093(c, 349u, depth + 1u); else { c.pc = 0x0034F550u; return; } if (c.pc != 0x0034E378u) [[unlikely]] return; }
L_0034E378:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0034E37C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E398:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E3B8u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0034E3B8u) [[unlikely]] return; }
L_0034E3B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1440u);
    set32(c.r[6], c.r[6].w[0] + 26872u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E3D4u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x0034E3D4u) [[unlikely]] return; }
L_0034E3D4:
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0034E434; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] << 6);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E3F4u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0034E3F4u) [[unlikely]] return; }
L_0034E3F4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 235u);
    set32(c.r[7], c.r[7].w[0] + 1448u);
    set32(c.r[8], c.r[8].w[0] + 1496u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E41Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0034E41Cu) [[unlikely]] return; }
L_0034E41C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E434u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0034E434u) [[unlikely]] return; }
L_0034E434:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E450:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034E4C0; } }
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0034E468:
    set32(c.r[7], ld32((c.r[6].w[0] + 40u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] <= 0;  if (t) { goto L_0034E4AC; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 48u)));
    c.budget -= 2;
L_0034E480:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0034E498; } }
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E498:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 208u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E480u | kUnwind; return; } goto L_0034E480; } }
L_0034E4AC:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.r[2].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E468u | kUnwind; return; } goto L_0034E468; } }
L_0034E4C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E4D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 48u)));
    set32(c.r[10], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[10].d[0] == c.r[2].d[0];  if (t) { goto L_0034E570; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034E55C; } }
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0034E510:
    set32(c.r[8], ld32((c.r[5].w[0] + 40u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_0034E548; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 2;
L_0034E528:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[10].d[0];  if (t) { goto L_0034E560; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 208u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E528u | kUnwind; return; } goto L_0034E528; } }
L_0034E548:
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 64u);
    c.r[2].d[0] = c.r[9].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E510u | kUnwind; return; } goto L_0034E510; } }
L_0034E55C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034E560:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0034E570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E570u);  if (depth < kMaxDepth) unit_0093(c, 221u, depth + 1u); else { c.pc = 0x0034E4D0u; return; } if (c.pc != 0x0034E570u) [[unlikely]] return; }
L_0034E570:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E580:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034E5BC; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] << 6);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 28u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E5BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E5C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E5D8:
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 26848u), c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E5F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034E644; } }
    c.budget -= 1;
L_0034E620:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E630u);  if (depth < kMaxDepth) unit_0093(c, 342u, depth + 1u); else { c.pc = 0x0034F420u; return; } if (c.pc != 0x0034E630u) [[unlikely]] return; }
L_0034E630:
    set32(c.r[16], c.r[16].w[0] + 64u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E620u | kUnwind; return; } goto L_0034E620; } }
L_0034E644:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E660:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 14320u)));
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034E760; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 6384u)));
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034E760; } }
    c.budget -= 1;
L_0034E6B8:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[21], c.r[19].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034E74C; } }
    set32(c.r[22], 0u + 1u);
    c.budget -= 2;
L_0034E6D8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_0034E734; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E6F0u);  if (depth < kMaxDepth) unit_0093(c, 332u, depth + 1u); else { c.pc = 0x0034F2F0u; return; } if (c.pc != 0x0034E6F0u) [[unlikely]] return; }
L_0034E6F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E700u);  if (depth < kMaxDepth) unit_0093(c, 317u, depth + 1u); else { c.pc = 0x0034F098u; return; } if (c.pc != 0x0034E700u) [[unlikely]] return; }
L_0034E700:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0034E734; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E714u);  if (depth < kMaxDepth) unit_0093(c, 332u, depth + 1u); else { c.pc = 0x0034F2F0u; return; } if (c.pc != 0x0034E714u) [[unlikely]] return; }
L_0034E714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_0034E734; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034E734; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E734u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034E734u) [[unlikely]] return; }
L_0034E734:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 64u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E6D8u | kUnwind; return; } goto L_0034E6D8; } }
L_0034E74C:
    set32(c.r[2], ld32((c.r[23].w[0] + 6384u)));
    c.r[19].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E6B8u | kUnwind; return; } goto L_0034E6B8; } }
L_0034E760:
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
L_0034E790:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034E7AC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E7AC:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[5].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E7C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034E818; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
L_0034E7E0:
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_0034E804; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0034E804; } }
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E804:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E7E0u | kUnwind; return; } goto L_0034E7E0; } }
L_0034E818:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E828:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 19;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034E8D4; } }
    c.budget -= 1;
L_0034E878:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0034E8BC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034E8BC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E8A8u);  if (depth < kMaxDepth) unit_0093(c, 371u, depth + 1u); else { c.pc = 0x0034F9C8u; return; } if (c.pc != 0x0034E8A8u) [[unlikely]] return; }
L_0034E8A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034E8BC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034E8D8; } }
L_0034E8BC:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 64u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E878u | kUnwind; return; } goto L_0034E878; } }
L_0034E8D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034E8D8:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E908:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E924u);  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034EA18u; return; } if (c.pc != 0x0034E924u) [[unlikely]] return; }
L_0034E924:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0034E9A8; } }
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034E9A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1520u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0034C000u < 16384u) { entry = entries_0093[(t - 0x0034C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0034E958:
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E964u);  if (depth < kMaxDepth) unit_0093(c, 338u, depth + 1u); else { c.pc = 0x0034F398u; return; } if (c.pc != 0x0034E964u) [[unlikely]] return; }
L_0034E964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034E9A8; } }
L_0034E96C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034E9A8; } }
L_0034E97C:
    st32((c.r[6].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034E9A8; } }
L_0034E988:
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E994u);  if (depth < kMaxDepth) unit_0093(c, 349u, depth + 1u); else { c.pc = 0x0034F550u; return; } if (c.pc != 0x0034E994u) [[unlikely]] return; }
L_0034E994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034E9A8; } }
L_0034E99C:
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E9A8u);  if (depth < kMaxDepth) unit_0093(c, 345u, depth + 1u); else { c.pc = 0x0034F4C8u; return; } if (c.pc != 0x0034E9A8u) [[unlikely]] return; }
L_0034E9A8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E9C0:
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E9D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E9E8u);  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034EA18u; return; } if (c.pc != 0x0034E9E8u) [[unlikely]] return; }
L_0034E9E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034EA00; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EA00u);  if (depth < kMaxDepth) unit_0093(c, 366u, depth + 1u); else { c.pc = 0x0034F910u; return; } if (c.pc != 0x0034EA00u) [[unlikely]] return; }
L_0034EA00:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034EA18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 9488u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EA38u);  if (depth < kMaxDepth) unit_0094(c, 166u, depth + 1u); else { c.pc = 0x00351D98u; return; } if (c.pc != 0x0034EA38u) [[unlikely]] return; }
L_0034EA38:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0034EA54; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034EA7C; } }
L_0034EA54:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034EA78; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[5].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034EA7C; } }
L_0034EA78:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034EA7C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034EA90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 9488u)));
    c.f[20] = c.f[12];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EAB8u);  if (depth < kMaxDepth) unit_0094(c, 166u, depth + 1u); else { c.pc = 0x00351D98u; return; } if (c.pc != 0x0034EAB8u) [[unlikely]] return; }
L_0034EAB8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0034EAEC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034EAEC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[5].w[0] << 6);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034EAF0; } }
L_0034EAEC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034EAF0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034EB04; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB04u);  if (depth < kMaxDepth) unit_0093(c, 368u, depth + 1u); else { c.pc = 0x0034F948u; return; } if (c.pc != 0x0034EB04u) [[unlikely]] return; }
L_0034EB04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034EB20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034EB74; } }
    c.budget -= 1;
L_0034EB50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB60u);  if (depth < kMaxDepth) unit_0093(c, 376u, depth + 1u); else { c.pc = 0x0034FAB0u; return; } if (c.pc != 0x0034EB60u) [[unlikely]] return; }
L_0034EB60:
    set32(c.r[16], c.r[16].w[0] + 64u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034EB50u | kUnwind; return; } goto L_0034EB50; } }
L_0034EB74:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034EB90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], ld32((c.r[2].w[0] + 9488u)));
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EBB8u);  if (depth < kMaxDepth) unit_0094(c, 166u, depth + 1u); else { c.pc = 0x00351D98u; return; } if (c.pc != 0x0034EBB8u) [[unlikely]] return; }
L_0034EBB8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0034EBEC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034EBEC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[5].w[0] << 6);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034EBF0; } }
L_0034EBEC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034EBF0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034EC04; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EC04u);  if (depth < kMaxDepth) unit_0093(c, 382u, depth + 1u); else { c.pc = 0x0034FB90u; return; } if (c.pc != 0x0034EC04u) [[unlikely]] return; }
L_0034EC04:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034EC20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034EC74; } }
    c.budget -= 1;
L_0034EC50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EC60u);  if (depth < kMaxDepth) unit_0093(c, 379u, depth + 1u); else { c.pc = 0x0034FB20u; return; } if (c.pc != 0x0034EC60u) [[unlikely]] return; }
L_0034EC60:
    set32(c.r[16], c.r[16].w[0] + 64u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034EC50u | kUnwind; return; } goto L_0034EC50; } }
L_0034EC74:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034EC90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[18].w[0] + 16u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0034ED1C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034ECD8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034ED1C; } }
L_0034ECD8:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034ED18; } }
L_0034ECE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ECF8u);  if (depth < kMaxDepth) unit_0093(c, 391u, depth + 1u); else { c.pc = 0x0034FCE8u; return; } if (c.pc != 0x0034ECF8u) [[unlikely]] return; }
L_0034ECF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034ED1C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 64u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034ECE8u | kUnwind; return; } goto L_0034ECE8; } }
L_0034ED18:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034ED1C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034ED40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034ED48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034ED50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] + 26848u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ED80u);  if (depth < kMaxDepth) unit_0093(c, 241u, depth + 1u); else { c.pc = 0x0034E7C0u; return; } if (c.pc != 0x0034ED80u) [[unlikely]] return; }
L_0034ED80:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0034EDC4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0034EDB4; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0034EDB8; } }
L_0034EDB4:
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_0034EDB8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0034EDD0; } }
L_0034EDC4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034EE8C; } }
L_0034EDD0:
    set32(c.r[4], c.r[16].w[0] + 26848u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EDDCu);  if (depth < kMaxDepth) unit_0093(c, 239u, depth + 1u); else { c.pc = 0x0034E790u; return; } if (c.pc != 0x0034EDDCu) [[unlikely]] return; }
L_0034EDDC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EDECu);  if (depth < kMaxDepth) unit_0093(c, 394u, depth + 1u); else { c.pc = 0x0034FD38u; return; } if (c.pc != 0x0034EDECu) [[unlikely]] return; }
L_0034EDEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034EE18; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EE00u);  if (depth < kMaxDepth) unit_0093(c, 394u, depth + 1u); else { c.pc = 0x0034FD38u; return; } if (c.pc != 0x0034EE00u) [[unlikely]] return; }
L_0034EE00:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0034EE18; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034EE8C; } }
L_0034EE18:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 6380u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EE2Cu);  if (depth < kMaxDepth) unit_0093(c, 345u, depth + 1u); else { c.pc = 0x0034F4C8u; return; } if (c.pc != 0x0034EE2Cu) [[unlikely]] return; }
L_0034EE2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EE38u);  if (depth < kMaxDepth) unit_0093(c, 338u, depth + 1u); else { c.pc = 0x0034F398u; return; } if (c.pc != 0x0034EE38u) [[unlikely]] return; }
L_0034EE38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034EE4C; } }
L_0034EE40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EE4Cu);  if (depth < kMaxDepth) unit_0093(c, 317u, depth + 1u); else { c.pc = 0x0034F098u; return; } if (c.pc != 0x0034EE4Cu) [[unlikely]] return; }
L_0034EE4C:
    set32(c.r[2], ld32((c.r[16].w[0] + 6380u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034EE6C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EE64u);  if (depth < kMaxDepth) unit_0093(c, 332u, depth + 1u); else { c.pc = 0x0034F2F0u; return; } if (c.pc != 0x0034EE64u) [[unlikely]] return; }
L_0034EE64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034EE40u | kUnwind; return; } goto L_0034EE40; } }
L_0034EE6C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0034EE88; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EE88u);  if (depth < kMaxDepth) unit_0093(c, 349u, depth + 1u); else { c.pc = 0x0034F550u; return; } if (c.pc != 0x0034EE88u) [[unlikely]] return; }
L_0034EE88:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0034EE8C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034EEA8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] + 26848u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EEE0u);  if (depth < kMaxDepth) unit_0093(c, 241u, depth + 1u); else { c.pc = 0x0034E7C0u; return; } if (c.pc != 0x0034EEE0u) [[unlikely]] return; }
L_0034EEE0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0034F050; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EEFCu);  if (depth < kMaxDepth) unit_0093(c, 239u, depth + 1u); else { c.pc = 0x0034E790u; return; } if (c.pc != 0x0034EEFCu) [[unlikely]] return; }
L_0034EEFC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034F024; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1600u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0034C000u < 16384u) { entry = entries_0093[(t - 0x0034C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0034EF30:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EF44u);  if (depth < kMaxDepth) unit_0093(c, 349u, depth + 1u); else { c.pc = 0x0034F550u; return; } if (c.pc != 0x0034EF44u) [[unlikely]] return; }
L_0034EF44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034F024; } }
L_0034EF4C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034EF64; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EF64u);  if (depth < kMaxDepth) unit_0093(c, 317u, depth + 1u); else { c.pc = 0x0034F098u; return; } if (c.pc != 0x0034EF64u) [[unlikely]] return; }
L_0034EF64:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034F024; } }
L_0034EF74:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034F024; } }
L_0034EF80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EF8Cu);  if (depth < kMaxDepth) unit_0093(c, 349u, depth + 1u); else { c.pc = 0x0034F550u; return; } if (c.pc != 0x0034EF8Cu) [[unlikely]] return; }
L_0034EF8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034F024; } }
L_0034EF94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EFA0u);  if (depth < kMaxDepth) unit_0093(c, 342u, depth + 1u); else { c.pc = 0x0034F420u; return; } if (c.pc != 0x0034EFA0u) [[unlikely]] return; }
L_0034EFA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034F024; } }
L_0034EFA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EFB8u);  if (depth < kMaxDepth) unit_0093(c, 336u, depth + 1u); else { c.pc = 0x0034F358u; return; } if (c.pc != 0x0034EFB8u) [[unlikely]] return; }
L_0034EFB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EFC4u);  if (depth < kMaxDepth) unit_0093(c, 345u, depth + 1u); else { c.pc = 0x0034F4C8u; return; } if (c.pc != 0x0034EFC4u) [[unlikely]] return; }
L_0034EFC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EFD0u);  if (depth < kMaxDepth) unit_0093(c, 338u, depth + 1u); else { c.pc = 0x0034F398u; return; } if (c.pc != 0x0034EFD0u) [[unlikely]] return; }
L_0034EFD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034F024; } }
L_0034EFD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EFE8u);  if (depth < kMaxDepth) unit_0093(c, 336u, depth + 1u); else { c.pc = 0x0034F358u; return; } if (c.pc != 0x0034EFE8u) [[unlikely]] return; }
L_0034EFE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EFF4u);  if (depth < kMaxDepth) unit_0093(c, 345u, depth + 1u); else { c.pc = 0x0034F4C8u; return; } if (c.pc != 0x0034EFF4u) [[unlikely]] return; }
L_0034EFF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034F024; } }
L_0034EFFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F008u);  if (depth < kMaxDepth) unit_0093(c, 345u, depth + 1u); else { c.pc = 0x0034F4C8u; return; } if (c.pc != 0x0034F008u) [[unlikely]] return; }
L_0034F008:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F014u);  if (depth < kMaxDepth) unit_0093(c, 338u, depth + 1u); else { c.pc = 0x0034F398u; return; } if (c.pc != 0x0034F014u) [[unlikely]] return; }
L_0034F014:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F024u);  if (depth < kMaxDepth) unit_0093(c, 384u, depth + 1u); else { c.pc = 0x0034FBD0u; return; } if (c.pc != 0x0034F024u) [[unlikely]] return; }
L_0034F024:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034F050; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0034F050; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F050u);  if (depth < kMaxDepth) unit_0093(c, 396u, depth + 1u); else { c.pc = 0x0034FD60u; return; } if (c.pc != 0x0034F050u) [[unlikely]] return; }
L_0034F050:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034F070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F088u);  if (depth < kMaxDepth) unit_0093(c, 193u, depth + 1u); else { c.pc = 0x0034E1C8u; return; } if (c.pc != 0x0034F088u) [[unlikely]] return; }
L_0034F088:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034F098:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034F114; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034F108; } }
    c.budget -= 1;
L_0034F0D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F0E8u);  if (depth < kMaxDepth) unit_0094(c, 79u, depth + 1u); else { c.pc = 0x00351080u; return; } if (c.pc != 0x0034F0E8u) [[unlikely]] return; }
L_0034F0E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F0F4u);  if (depth < kMaxDepth) unit_0094(c, 83u, depth + 1u); else { c.pc = 0x00351110u; return; } if (c.pc != 0x0034F0F4u) [[unlikely]] return; }
L_0034F0F4:
    set32(c.r[16], c.r[16].w[0] + 208u);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034F0D8u | kUnwind; return; } goto L_0034F0D8; } }
L_0034F108:
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 3;
L_0034F114:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034F194; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034F16C; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_0034F138:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F144u);  if (depth < kMaxDepth) unit_0094(c, 84u, depth + 1u); else { c.pc = 0x00351128u; return; } if (c.pc != 0x0034F144u) [[unlikely]] return; }
L_0034F144:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_0034F154; } }
    st32((c.r[16].w[0] + 172u), 0u);
    c.budget -= 1;
L_0034F154:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 208u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034F138u | kUnwind; return; } goto L_0034F138; } }
L_0034F16C:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034F188; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0034F188:
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034F268; } }
L_0034F194:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0034F1B0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F1B0u);  if (depth < kMaxDepth) unit_0093(c, 386u, depth + 1u); else { c.pc = 0x0034FC08u; return; } if (c.pc != 0x0034F1B0u) [[unlikely]] return; }
L_0034F1B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034F268; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034F268; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[19], 0u + 1u);
    set32(c.r[16], ld32((c.r[17].w[0] + 48u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034F220; } }
L_0034F1E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F1ECu);  if (depth < kMaxDepth) unit_0094(c, 86u, depth + 1u); else { c.pc = 0x003511A0u; return; } if (c.pc != 0x0034F1ECu) [[unlikely]] return; }
L_0034F1EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034F208; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0034F208; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    if (c.r[2].d[0] == 0) c.r[19].d[0] = 0ull;
    c.budget -= 2;
L_0034F208:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 208u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034F1E0u | kUnwind; return; } goto L_0034F1E0; } }
L_0034F220:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0034F268; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034F268; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0034F254; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F254u);  if (depth < kMaxDepth) unit_0093(c, 385u, depth + 1u); else { c.pc = 0x0034FBE0u; return; } if (c.pc != 0x0034F254u) [[unlikely]] return; }
L_0034F254:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034F268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F268u);  if (depth < kMaxDepth) unit_0093(c, 338u, depth + 1u); else { c.pc = 0x0034F398u; return; } if (c.pc != 0x0034F268u) [[unlikely]] return; }
L_0034F268:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034F288:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 48u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034F298:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 44u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034F2D0; } }
    set32(c.r[2], 0u + 208u);
    set32(c.r[4], ld32((c.r[5].w[0] + 48u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034F2D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034F2E0:
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034F2F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034F300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0034F32C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F32Cu);  if (depth < kMaxDepth) unit_0093(c, 385u, depth + 1u); else { c.pc = 0x0034FBE0u; return; } if (c.pc != 0x0034F32Cu) [[unlikely]] return; }
L_0034F32C:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034F340; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F340u);  if (depth < kMaxDepth) unit_0093(c, 338u, depth + 1u); else { c.pc = 0x0034F398u; return; } if (c.pc != 0x0034F340u) [[unlikely]] return; }
L_0034F340:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034F358:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034F38C; } }
    c.budget -= 1;
L_0034F370:
    st32((c.r[3].w[0] + 180u), c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 208u);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034F370u | kUnwind; return; } goto L_0034F370; } }
L_0034F38C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034F398:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034F3F8; } }
    c.budget -= 1;
L_0034F3C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F3D8u);  if (depth < kMaxDepth) unit_0094(c, 79u, depth + 1u); else { c.pc = 0x00351080u; return; } if (c.pc != 0x0034F3D8u) [[unlikely]] return; }
L_0034F3D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F3E4u);  if (depth < kMaxDepth) unit_0094(c, 83u, depth + 1u); else { c.pc = 0x00351110u; return; } if (c.pc != 0x0034F3E4u) [[unlikely]] return; }
L_0034F3E4:
    set32(c.r[16], c.r[16].w[0] + 208u);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034F3C8u | kUnwind; return; } goto L_0034F3C8; } }
L_0034F3F8:
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034F420:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034F48C; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 2;
L_0034F458:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F464u);  if (depth < kMaxDepth) unit_0094(c, 84u, depth + 1u); else { c.pc = 0x00351128u; return; } if (c.pc != 0x0034F464u) [[unlikely]] return; }
L_0034F464:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_0034F474; } }
    st32((c.r[16].w[0] + 172u), 0u);
    c.budget -= 1;
L_0034F474:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 208u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034F458u | kUnwind; return; } goto L_0034F458; } }
L_0034F48C:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034F4A8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0034F4A8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034F4C8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[18].w[0] + 32u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034F530; } }
L_0034F4F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F508u);  if (depth < kMaxDepth) unit_0094(c, 79u, depth + 1u); else { c.pc = 0x00351080u; return; } if (c.pc != 0x0034F508u) [[unlikely]] return; }
L_0034F508:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 208u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F520u);  if (depth < kMaxDepth) unit_0094(c, 101u, depth + 1u); else { c.pc = 0x00351540u; return; } if (c.pc != 0x0034F520u) [[unlikely]] return; }
L_0034F520:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034F4F8u | kUnwind; return; } goto L_0034F4F8; } }
L_0034F530:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034F550:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034F5A4; } }
    c.budget -= 1;
L_0034F580:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F590u);  if (depth < kMaxDepth) unit_0094(c, 81u, depth + 1u); else { c.pc = 0x003510C8u; return; } if (c.pc != 0x0034F590u) [[unlikely]] return; }
L_0034F590:
    set32(c.r[16], c.r[16].w[0] + 208u);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034F580u | kUnwind; return; } goto L_0034F580; } }
L_0034F5A4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034F5C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[17], 0u + 208u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], c.r[7].w[0] + 1648u);
    set32(c.r[8], c.r[8].w[0] + 1696u);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 176u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F610u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0034F610u) [[unlikely]] return; }
L_0034F610:
    set32(c.r[6], ld32((c.r[16].w[0] + 44u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[6].w[0], c.r[17].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.r[6].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F648u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0034F648u) [[unlikely]] return; }
L_0034F648:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034F668:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 208u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    set32(c.r[7], c.r[7].w[0] + 1648u);
    set32(c.r[20], ld32((c.r[19].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1696u);
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[9], 0u + 176u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[17].w[0] + 40u), 0u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F6D8u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0034F6D8u) [[unlikely]] return; }
L_0034F6D8:
    set32(c.r[6], ld32((c.r[17].w[0] + 44u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 56u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[6].w[0], c.r[16].w[0]);
    st32((c.r[17].w[0] + 60u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0]), 0u);
    c.r[6].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F710u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0034F710u) [[unlikely]] return; }
L_0034F710:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034F780; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 1;
L_0034F728:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[5], c.r[19].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[21].w[0] + 6376u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034F75C; } }
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
L_0034F75C:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F76Cu);  if (depth < kMaxDepth) unit_0094(c, 43u, depth + 1u); else { c.pc = 0x003506F8u; return; } if (c.pc != 0x0034F76Cu) [[unlikely]] return; }
L_0034F76C:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034F728u | kUnwind; return; } goto L_0034F728; } }
L_0034F780:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034F7B8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[16], 0u + 208u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    mmi::mult(c, 0, c.r[19].w[0], c.r[16].w[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 40u), 0u);
    set32(c.r[7], c.r[7].w[0] + 1648u);
    st32((c.r[17].w[0] + 44u), c.r[19].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1696u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[9], 0u + 176u);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F828u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0034F828u) [[unlikely]] return; }
L_0034F828:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 44u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 56u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[6].w[0], c.r[16].w[0]);
    st32((c.r[17].w[0] + 60u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0]), 0u);
    c.r[6].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F868u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0034F868u) [[unlikely]] return; }
L_0034F868:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_0034F8CC; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[20], 0u + 208u);
    c.budget -= 2;
L_0034F878:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[5], c.r[22].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[21].w[0] + 6376u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034F8AC; } }
    mmi::mult(c, 0, c.r[3].w[0], c.r[20].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
L_0034F8AC:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F8BCu);  if (depth < kMaxDepth) unit_0094(c, 43u, depth + 1u); else { c.pc = 0x003506F8u; return; } if (c.pc != 0x0034F8BCu) [[unlikely]] return; }
L_0034F8BC:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034F878u | kUnwind; return; } goto L_0034F878; } }
L_0034F8CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034F900:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034F910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] + 26848u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F930u);  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034EA18u; return; } if (c.pc != 0x0034F930u) [[unlikely]] return; }
L_0034F930:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034F948:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[20] = c.f[12];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034F9A8; } }
    c.budget -= 1;
L_0034F980:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F990u);  if (depth < kMaxDepth) unit_0094(c, 78u, depth + 1u); else { c.pc = 0x00351060u; return; } if (c.pc != 0x0034F990u) [[unlikely]] return; }
L_0034F990:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[16], c.r[16].w[0] + 208u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034F980u | kUnwind; return; } goto L_0034F980; } }
L_0034F9A8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034F9C8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034FA88; } }
    c.f[20] = 0u;
    c.budget -= 1;
L_0034FA00:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0034FA70; } }
    set32(c.r[16], ld32((c.r[3].w[0] + 16u)));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.f[15] = c.f[20];
    c.f[12] = ld32((c.r[16].w[0] + 48u));
    c.f[13] = ld32((c.r[16].w[0] + 52u));
    c.f[14] = ld32((c.r[16].w[0] + 56u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FA2Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0034FA2Cu) [[unlikely]] return; }
L_0034FA2C:
    c.f[12] = ld32((c.r[16].w[0] + 60u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = ld32((c.r[16].w[0] + 64u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[16].w[0] + 68u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FA48u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0034FA48u) [[unlikely]] return; }
L_0034FA48:
    c.f[14] = ld32((c.r[16].w[0] + 80u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 72u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 76u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FA64u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0034FA64u) [[unlikely]] return; }
L_0034FA64:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034FA8C; } }
L_0034FA70:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 208u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FA00u | kUnwind; return; } goto L_0034FA00; } }
L_0034FA88:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034FA8C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034FAB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034FB04; } }
    c.budget -= 1;
L_0034FAE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FAF0u);  if (depth < kMaxDepth) unit_0094(c, 98u, depth + 1u); else { c.pc = 0x00351440u; return; } if (c.pc != 0x0034FAF0u) [[unlikely]] return; }
L_0034FAF0:
    set32(c.r[16], c.r[16].w[0] + 208u);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FAE0u | kUnwind; return; } goto L_0034FAE0; } }
L_0034FB04:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034FB20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 9488u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FB48u);  if (depth < kMaxDepth) unit_0094(c, 170u, depth + 1u); else { c.pc = 0x00351E08u; return; } if (c.pc != 0x0034FB48u) [[unlikely]] return; }
L_0034FB48:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0034FB70; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 9488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FB64u);  if (depth < kMaxDepth) unit_0094(c, 168u, depth + 1u); else { c.pc = 0x00351DD0u; return; } if (c.pc != 0x0034FB64u) [[unlikely]] return; }
L_0034FB64:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034FB74; } }
L_0034FB70:
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 1;
L_0034FB74:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034FB90:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034FBC4; } }
    c.budget -= 1;
L_0034FBA8:
    st32((c.r[3].w[0] + 160u), c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 208u);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FBA8u | kUnwind; return; } goto L_0034FBA8; } }
L_0034FBC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034FBD0:
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034FBE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C080000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034FC08:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    st32((c.r[16].w[0] + 32u), c.f[1]);
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034FC8C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034FC7C; } }
L_0034FC58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC68u);  if (depth < kMaxDepth) unit_0094(c, 81u, depth + 1u); else { c.pc = 0x003510C8u; return; } if (c.pc != 0x0034FC68u) [[unlikely]] return; }
L_0034FC68:
    set32(c.r[17], c.r[17].w[0] + 208u);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FC58u | kUnwind; return; } goto L_0034FC58; } }
L_0034FC7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.budget -= 4;
L_0034FC8C:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034FCC8; } }
L_0034FCA0:
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 208u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FCB8u);  if (depth < kMaxDepth) unit_0094(c, 101u, depth + 1u); else { c.pc = 0x00351540u; return; } if (c.pc != 0x0034FCB8u) [[unlikely]] return; }
L_0034FCB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FCA0u | kUnwind; return; } goto L_0034FCA0; } }
L_0034FCC8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034FCE8:
    set32(c.r[6], ld32((c.r[4].w[0] + 40u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_0034FD2C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 2;
L_0034FD00:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0034FD18; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034FD18:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 208u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FD00u | kUnwind; return; } goto L_0034FD00; } }
L_0034FD2C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034FD38:
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034FD50; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034FD50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034FD60:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034FDA4; } }
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0034FD80:
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 192u), c.f[0]);
    set32(c.r[5], c.r[5].w[0] + 208u);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FD80u | kUnwind; return; } goto L_0034FD80; } }
L_0034FDA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034FDB0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    set32(c.r[9], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    set32(c.r[7], c.r[18].w[0] + 224u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    set32(c.r[8], c.r[29].w[0] + 52u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 200u), c.f[21]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 52u), 0u);
    c.budget -= 21;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0034FE74; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034FE74; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
L_0034FE30:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034FE74; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[4].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0034FE74; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    st32((c.r[9].w[0]), c.r[6].w[0]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FE30u | kUnwind; return; } goto L_0034FE30; } }
L_0034FE74:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034FE94; } }
    set32(c.r[2], ld32((c.r[9].w[0])));
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0034FE94:
    set32(c.r[21], c.r[18].w[0] + 224u);
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 12u)));
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[8].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.f[21] = 0u;
    set32(c.r[19], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[17], c.r[6].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034FF0C; } }
    set32(c.r[2], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 21u, c.f[1], c.f[0]);
    c.budget -= 9;
L_0034FF0C:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034FFA4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[17], c.r[17].w[0] + 12u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF48u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0034FF48u) [[unlikely]] return; }
L_0034FF48:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.f[12] = ld32((c.r[19].w[0]));
    c.f[13] = ld32((c.r[19].w[0] + 4u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[19].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 12u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF6Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0034FF6Cu) [[unlikely]] return; }
L_0034FF6C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF84u);  if (depth < kMaxDepth) unit_008B(c, 93u, depth + 1u); else { c.pc = 0x0032CB98u; return; } if (c.pc != 0x0034FF84u) [[unlikely]] return; }
L_0034FF84:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[2] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[18].w[0] + 12u), c.f[0]);
    st32((c.r[18].w[0] + 16u), c.f[1]);
    st32((c.r[18].w[0] + 20u), c.f[2]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034FFB0; } }
L_0034FFA4:
    st32((c.r[18].w[0] + 12u), 0u);
    st32((c.r[18].w[0] + 16u), 0u);
    st32((c.r[18].w[0] + 20u), 0u);
    c.budget -= 3;
L_0034FFB0:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0094(c, 14u, depth); } }
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[3] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    st32((c.r[29].w[0] + 8u), c.f[1]);
    st32((c.r[29].w[0] + 12u), c.f[2]);
    st32((c.r[29].w[0]), c.f[3]);
    c.budget -= 8;
L_0034FFE4:
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[2] = ld32((c.r[19].w[0] + 8u));
    c.f[3] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[29].w[0] + 20u), c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    st32((c.r[29].w[0] + 28u), c.f[2]);
    c.budget -= 7;
    [[clang::musttail]] return unit_0094(c, 1u, depth);
}

}
