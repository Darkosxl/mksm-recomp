#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0,
    0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0,
    0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0,
    0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0,
    0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0,
    0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0,
    0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0,
    0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0,
    0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0,
    0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251,
    0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 270, 0,
    0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0,
    0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0,
    0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324,
    0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0,
    329, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0,
    339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0,
    0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0,
    0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0,
    0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0,
    0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0,
    378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0,
};

void unit_000B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0012C000;
    case 2u: goto L_0012C020;
    case 3u: goto L_0012C048;
    case 4u: goto L_0012C074;
    case 5u: goto L_0012C0A0;
    case 6u: goto L_0012C0CC;
    case 7u: goto L_0012C0F8;
    case 8u: goto L_0012C124;
    case 9u: goto L_0012C150;
    case 10u: goto L_0012C17C;
    case 11u: goto L_0012C1A8;
    case 12u: goto L_0012C1D4;
    case 13u: goto L_0012C200;
    case 14u: goto L_0012C22C;
    case 15u: goto L_0012C258;
    case 16u: goto L_0012C284;
    case 17u: goto L_0012C2B0;
    case 18u: goto L_0012C2DC;
    case 19u: goto L_0012C304;
    case 20u: goto L_0012C330;
    case 21u: goto L_0012C360;
    case 22u: goto L_0012C390;
    case 23u: goto L_0012C3BC;
    case 24u: goto L_0012C3E8;
    case 25u: goto L_0012C414;
    case 26u: goto L_0012C440;
    case 27u: goto L_0012C470;
    case 28u: goto L_0012C4A0;
    case 29u: goto L_0012C4D0;
    case 30u: goto L_0012C500;
    case 31u: goto L_0012C530;
    case 32u: goto L_0012C560;
    case 33u: goto L_0012C590;
    case 34u: goto L_0012C5C0;
    case 35u: goto L_0012C5F0;
    case 36u: goto L_0012C620;
    case 37u: goto L_0012C64C;
    case 38u: goto L_0012C67C;
    case 39u: goto L_0012C6AC;
    case 40u: goto L_0012C6D8;
    case 41u: goto L_0012C708;
    case 42u: goto L_0012C738;
    case 43u: goto L_0012C764;
    case 44u: goto L_0012C790;
    case 45u: goto L_0012C7C4;
    case 46u: goto L_0012C7F8;
    case 47u: goto L_0012C82C;
    case 48u: goto L_0012C85C;
    case 49u: goto L_0012C89C;
    case 50u: goto L_0012C8D0;
    case 51u: goto L_0012C908;
    case 52u: goto L_0012C93C;
    case 53u: goto L_0012C970;
    case 54u: goto L_0012C9A4;
    case 55u: goto L_0012C9D8;
    case 56u: goto L_0012CA04;
    case 57u: goto L_0012CA30;
    case 58u: goto L_0012CA58;
    case 59u: goto L_0012CA84;
    case 60u: goto L_0012CAAC;
    case 61u: goto L_0012CAD8;
    case 62u: goto L_0012CB04;
    case 63u: goto L_0012CB30;
    case 64u: goto L_0012CB5C;
    case 65u: goto L_0012CB84;
    case 66u: goto L_0012CBAC;
    case 67u: goto L_0012CBD4;
    case 68u: goto L_0012CBFC;
    case 69u: goto L_0012CC24;
    case 70u: goto L_0012CC4C;
    case 71u: goto L_0012CC78;
    case 72u: goto L_0012CC9C;
    case 73u: goto L_0012CCC8;
    case 74u: goto L_0012CCF4;
    case 75u: goto L_0012CD20;
    case 76u: goto L_0012CD4C;
    case 77u: goto L_0012CD78;
    case 78u: goto L_0012CDA0;
    case 79u: goto L_0012CDCC;
    case 80u: goto L_0012CDF4;
    case 81u: goto L_0012CE1C;
    case 82u: goto L_0012CE44;
    case 83u: goto L_0012CE6C;
    case 84u: goto L_0012CE98;
    case 85u: goto L_0012CEC4;
    case 86u: goto L_0012CEF0;
    case 87u: goto L_0012CF18;
    case 88u: goto L_0012CF40;
    case 89u: goto L_0012CF6C;
    case 90u: goto L_0012CF98;
    case 91u: goto L_0012CFC4;
    case 92u: goto L_0012CFF0;
    case 93u: goto L_0012D0A0;
    case 94u: goto L_0012D0D4;
    case 95u: goto L_0012D0FC;
    case 96u: goto L_0012D128;
    case 97u: goto L_0012D154;
    case 98u: goto L_0012D180;
    case 99u: goto L_0012D1AC;
    case 100u: goto L_0012D1D8;
    case 101u: goto L_0012D200;
    case 102u: goto L_0012D248;
    case 103u: goto L_0012D428;
    case 104u: goto L_0012D510;
    case 105u: goto L_0012D580;
    case 106u: goto L_0012D5C0;
    case 107u: goto L_0012D5F0;
    case 108u: goto L_0012D650;
    case 109u: goto L_0012D688;
    case 110u: goto L_0012D6C8;
    case 111u: goto L_0012D708;
    case 112u: goto L_0012D748;
    case 113u: goto L_0012D788;
    case 114u: goto L_0012D7C8;
    case 115u: goto L_0012D808;
    case 116u: goto L_0012D850;
    case 117u: goto L_0012D898;
    case 118u: goto L_0012D8E0;
    case 119u: goto L_0012D928;
    case 120u: goto L_0012D970;
    case 121u: goto L_0012D9B8;
    case 122u: goto L_0012DA00;
    case 123u: goto L_0012DA48;
    case 124u: goto L_0012DA90;
    case 125u: goto L_0012DAD8;
    case 126u: goto L_0012DB20;
    case 127u: goto L_0012DB68;
    case 128u: goto L_0012DBB0;
    case 129u: goto L_0012DBF8;
    case 130u: goto L_0012DC40;
    case 131u: goto L_0012DC88;
    case 132u: goto L_0012DCD0;
    case 133u: goto L_0012DD18;
    case 134u: goto L_0012DD60;
    case 135u: goto L_0012DDA8;
    case 136u: goto L_0012DDF0;
    case 137u: goto L_0012DE30;
    case 138u: goto L_0012DE60;
    case 139u: goto L_0012DE78;
    case 140u: goto L_0012DEF0;
    case 141u: goto L_0012DF08;
    case 142u: goto L_0012DF24;
    case 143u: goto L_0012DF38;
    case 144u: goto L_0012DF4C;
    case 145u: goto L_0012DF60;
    case 146u: goto L_0012DF74;
    case 147u: goto L_0012DF88;
    case 148u: goto L_0012DF9C;
    case 149u: goto L_0012DFB0;
    case 150u: goto L_0012DFC4;
    case 151u: goto L_0012DFD8;
    case 152u: goto L_0012DFEC;
    case 153u: goto L_0012E000;
    case 154u: goto L_0012E014;
    case 155u: goto L_0012E028;
    case 156u: goto L_0012E03C;
    case 157u: goto L_0012E050;
    case 158u: goto L_0012E064;
    case 159u: goto L_0012E078;
    case 160u: goto L_0012E08C;
    case 161u: goto L_0012E0A0;
    case 162u: goto L_0012E0B4;
    case 163u: goto L_0012E0C8;
    case 164u: goto L_0012E0D8;
    case 165u: goto L_0012E0E8;
    case 166u: goto L_0012E0F8;
    case 167u: goto L_0012E108;
    case 168u: goto L_0012E118;
    case 169u: goto L_0012E128;
    case 170u: goto L_0012E138;
    case 171u: goto L_0012E170;
    case 172u: goto L_0012E190;
    case 173u: goto L_0012E1A0;
    case 174u: goto L_0012E1BC;
    case 175u: goto L_0012E1C8;
    case 176u: goto L_0012E1E8;
    case 177u: goto L_0012E200;
    case 178u: goto L_0012E210;
    case 179u: goto L_0012E220;
    case 180u: goto L_0012E230;
    case 181u: goto L_0012E240;
    case 182u: goto L_0012E250;
    case 183u: goto L_0012E260;
    case 184u: goto L_0012E278;
    case 185u: goto L_0012E288;
    case 186u: goto L_0012E298;
    case 187u: goto L_0012E2A8;
    case 188u: goto L_0012E2B8;
    case 189u: goto L_0012E2C8;
    case 190u: goto L_0012E2D8;
    case 191u: goto L_0012E2E8;
    case 192u: goto L_0012E308;
    case 193u: goto L_0012E314;
    case 194u: goto L_0012E340;
    case 195u: goto L_0012E358;
    case 196u: goto L_0012E368;
    case 197u: goto L_0012E378;
    case 198u: goto L_0012E388;
    case 199u: goto L_0012E3A0;
    case 200u: goto L_0012E3B0;
    case 201u: goto L_0012E3C0;
    case 202u: goto L_0012E3D0;
    case 203u: goto L_0012E3F0;
    case 204u: goto L_0012E3FC;
    case 205u: goto L_0012E428;
    case 206u: goto L_0012E440;
    case 207u: goto L_0012E450;
    case 208u: goto L_0012E460;
    case 209u: goto L_0012E470;
    case 210u: goto L_0012E488;
    case 211u: goto L_0012E498;
    case 212u: goto L_0012E4A8;
    case 213u: goto L_0012E4B8;
    case 214u: goto L_0012E4C8;
    case 215u: goto L_0012E4E8;
    case 216u: goto L_0012E4F8;
    case 217u: goto L_0012E514;
    case 218u: goto L_0012E528;
    case 219u: goto L_0012E540;
    case 220u: goto L_0012E550;
    case 221u: goto L_0012E568;
    case 222u: goto L_0012E578;
    case 223u: goto L_0012E66C;
    case 224u: goto L_0012E680;
    case 225u: goto L_0012E734;
    case 226u: goto L_0012E744;
    case 227u: goto L_0012E754;
    case 228u: goto L_0012E764;
    case 229u: goto L_0012E774;
    case 230u: goto L_0012E784;
    case 231u: goto L_0012E794;
    case 232u: goto L_0012E7A4;
    case 233u: goto L_0012E7B0;
    case 234u: goto L_0012E7E4;
    case 235u: goto L_0012E800;
    case 236u: goto L_0012E80C;
    case 237u: goto L_0012E830;
    case 238u: goto L_0012E83C;
    case 239u: goto L_0012E860;
    case 240u: goto L_0012E86C;
    case 241u: goto L_0012E888;
    case 242u: goto L_0012E894;
    case 243u: goto L_0012E8B8;
    case 244u: goto L_0012E8D8;
    case 245u: goto L_0012E8F4;
    case 246u: goto L_0012E900;
    case 247u: goto L_0012E924;
    case 248u: goto L_0012E930;
    case 249u: goto L_0012E954;
    case 250u: goto L_0012E960;
    case 251u: goto L_0012E97C;
    case 252u: goto L_0012E988;
    case 253u: goto L_0012E9AC;
    case 254u: goto L_0012E9C0;
    case 255u: goto L_0012EA18;
    case 256u: goto L_0012EA3C;
    case 257u: goto L_0012EA60;
    case 258u: goto L_0012EA70;
    case 259u: goto L_0012EA80;
    case 260u: goto L_0012EAA8;
    case 261u: goto L_0012EAB8;
    case 262u: goto L_0012EAE0;
    case 263u: goto L_0012EAF8;
    case 264u: goto L_0012EB10;
    case 265u: goto L_0012EB24;
    case 266u: goto L_0012EB38;
    case 267u: goto L_0012EB4C;
    case 268u: goto L_0012EB60;
    case 269u: goto L_0012EB74;
    case 270u: goto L_0012EB78;
    case 271u: goto L_0012EB90;
    case 272u: goto L_0012EBA0;
    case 273u: goto L_0012EBB8;
    case 274u: goto L_0012EBF0;
    case 275u: goto L_0012EC28;
    case 276u: goto L_0012ECA8;
    case 277u: goto L_0012ECCC;
    case 278u: goto L_0012ECF4;
    case 279u: goto L_0012ED24;
    case 280u: goto L_0012ED38;
    case 281u: goto L_0012ED68;
    case 282u: goto L_0012ED84;
    case 283u: goto L_0012EE40;
    case 284u: goto L_0012EE4C;
    case 285u: goto L_0012EE74;
    case 286u: goto L_0012EE9C;
    case 287u: goto L_0012EEAC;
    case 288u: goto L_0012EEC8;
    case 289u: goto L_0012EF04;
    case 290u: goto L_0012EF20;
    case 291u: goto L_0012EFC0;
    case 292u: goto L_0012F000;
    case 293u: goto L_0012F034;
    case 294u: goto L_0012F098;
    case 295u: goto L_0012F100;
    case 296u: goto L_0012F16C;
    case 297u: goto L_0012F1AC;
    case 298u: goto L_0012F1E0;
    case 299u: goto L_0012F240;
    case 300u: goto L_0012F2A4;
    case 301u: goto L_0012F300;
    case 302u: goto L_0012F340;
    case 303u: goto L_0012F364;
    case 304u: goto L_0012F3B4;
    case 305u: goto L_0012F408;
    case 306u: goto L_0012F488;
    case 307u: goto L_0012F4BC;
    case 308u: goto L_0012F504;
    case 309u: goto L_0012F528;
    case 310u: goto L_0012F570;
    case 311u: goto L_0012F594;
    case 312u: goto L_0012F750;
    case 313u: goto L_0012F788;
    case 314u: goto L_0012F7A8;
    case 315u: goto L_0012F7E4;
    case 316u: goto L_0012F808;
    case 317u: goto L_0012F848;
    case 318u: goto L_0012F870;
    case 319u: goto L_0012F890;
    case 320u: goto L_0012F8A4;
    case 321u: goto L_0012F8C0;
    case 322u: goto L_0012F8D0;
    case 323u: goto L_0012F8E8;
    case 324u: goto L_0012F8FC;
    case 325u: goto L_0012F90C;
    case 326u: goto L_0012F934;
    case 327u: goto L_0012F94C;
    case 328u: goto L_0012F968;
    case 329u: goto L_0012F980;
    case 330u: goto L_0012F994;
    case 331u: goto L_0012F9A0;
    case 332u: goto L_0012F9C0;
    case 333u: goto L_0012F9C8;
    case 334u: goto L_0012F9D4;
    case 335u: goto L_0012F9F8;
    case 336u: goto L_0012FA2C;
    case 337u: goto L_0012FA5C;
    case 338u: goto L_0012FA70;
    case 339u: goto L_0012FA80;
    case 340u: goto L_0012FA90;
    case 341u: goto L_0012FAA8;
    case 342u: goto L_0012FAB8;
    case 343u: goto L_0012FAC8;
    case 344u: goto L_0012FAE0;
    case 345u: goto L_0012FAF8;
    case 346u: goto L_0012FB10;
    case 347u: goto L_0012FB28;
    case 348u: goto L_0012FB40;
    case 349u: goto L_0012FB58;
    case 350u: goto L_0012FB70;
    case 351u: goto L_0012FBE8;
    case 352u: goto L_0012FC48;
    case 353u: goto L_0012FC50;
    case 354u: goto L_0012FC70;
    case 355u: goto L_0012FC88;
    case 356u: goto L_0012FCB8;
    case 357u: goto L_0012FCE0;
    case 358u: goto L_0012FD00;
    case 359u: goto L_0012FD24;
    case 360u: goto L_0012FD40;
    case 361u: goto L_0012FD5C;
    case 362u: goto L_0012FD74;
    case 363u: goto L_0012FD88;
    case 364u: goto L_0012FD98;
    case 365u: goto L_0012FDC8;
    case 366u: goto L_0012FDE0;
    case 367u: goto L_0012FDF0;
    case 368u: goto L_0012FE08;
    case 369u: goto L_0012FE18;
    case 370u: goto L_0012FE38;
    case 371u: goto L_0012FE60;
    case 372u: goto L_0012FE80;
    case 373u: goto L_0012FEA8;
    case 374u: goto L_0012FEB8;
    case 375u: goto L_0012FEC4;
    case 376u: goto L_0012FED4;
    case 377u: goto L_0012FEE0;
    case 378u: goto L_0012FF00;
    case 379u: goto L_0012FF28;
    case 380u: goto L_0012FF50;
    case 381u: goto L_0012FF70;
    case 382u: goto L_0012FF80;
    case 383u: goto L_0012FF9C;
    case 384u: goto L_0012FFAC;
    case 385u: goto L_0012FFB8;
    case 386u: goto L_0012FFC8;
    case 387u: goto L_0012FFD4;
    case 388u: goto L_0012FFF8;
    default: bad_entry(c, 0x0012C000u); return;
    }
L_0012C000:
    set32(c.r[5], c.r[29].w[0] + 1056u);
    set32(c.r[6], c.r[29].w[0] + 1060u);
    set32(c.r[7], c.r[29].w[0] + 1064u);
    st32((c.r[29].w[0] + 1060u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 1064u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C020u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C020u) [[unlikely]] return; }
L_0012C020:
    set32(c.r[3], 0u + 14u);
    set32(c.r[5], c.r[29].w[0] + 1068u);
    set32(c.r[6], c.r[29].w[0] + 1072u);
    set32(c.r[7], c.r[29].w[0] + 1076u);
    st32((c.r[29].w[0] + 1072u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 1068u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 1076u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C048u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C048u) [[unlikely]] return; }
L_0012C048:
    set32(c.r[2], 0u + 19u);
    set32(c.r[3], 0u + 25u);
    set32(c.r[5], c.r[29].w[0] + 1080u);
    set32(c.r[6], c.r[29].w[0] + 1084u);
    set32(c.r[7], c.r[29].w[0] + 1088u);
    st32((c.r[29].w[0] + 1080u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1084u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 1088u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C074u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C074u) [[unlikely]] return; }
L_0012C074:
    set32(c.r[2], 0u + 30u);
    set32(c.r[3], 0u + 36u);
    set32(c.r[5], c.r[29].w[0] + 1092u);
    set32(c.r[6], c.r[29].w[0] + 1096u);
    set32(c.r[7], c.r[29].w[0] + 1100u);
    st32((c.r[29].w[0] + 1092u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1096u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 1100u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C0A0u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C0A0u) [[unlikely]] return; }
L_0012C0A0:
    set32(c.r[2], 0u + 41u);
    set32(c.r[3], 0u + 47u);
    set32(c.r[5], c.r[29].w[0] + 1104u);
    set32(c.r[6], c.r[29].w[0] + 1108u);
    set32(c.r[7], c.r[29].w[0] + 1112u);
    st32((c.r[29].w[0] + 1104u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1108u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 1112u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C0CCu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C0CCu) [[unlikely]] return; }
L_0012C0CC:
    set32(c.r[3], 0u + 58u);
    set32(c.r[2], 0u + 52u);
    set32(c.r[5], c.r[29].w[0] + 1116u);
    set32(c.r[6], c.r[29].w[0] + 1120u);
    set32(c.r[7], c.r[29].w[0] + 1124u);
    st32((c.r[29].w[0] + 1116u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1120u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 1124u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C0F8u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C0F8u) [[unlikely]] return; }
L_0012C0F8:
    set32(c.r[2], 0u + 69u);
    set32(c.r[5], c.r[29].w[0] + 1128u);
    st32((c.r[29].w[0] + 1132u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1132u);
    set32(c.r[2], 0u + 63u);
    set32(c.r[7], c.r[29].w[0] + 1136u);
    st32((c.r[29].w[0] + 1128u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 1136u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C124u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C124u) [[unlikely]] return; }
L_0012C124:
    set32(c.r[2], 0u + 74u);
    set32(c.r[3], 0u + 80u);
    st32((c.r[29].w[0] + 1140u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1140u);
    st32((c.r[29].w[0] + 1144u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1144u);
    set32(c.r[7], c.r[29].w[0] + 1148u);
    st32((c.r[29].w[0] + 1148u), 0u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C150u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C150u) [[unlikely]] return; }
L_0012C150:
    set32(c.r[2], 0u + 85u);
    set32(c.r[3], 0u + 91u);
    st32((c.r[29].w[0] + 1156u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1152u);
    st32((c.r[29].w[0] + 1152u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1156u);
    set32(c.r[7], c.r[29].w[0] + 1160u);
    st32((c.r[29].w[0] + 1160u), 0u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C17Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C17Cu) [[unlikely]] return; }
L_0012C17C:
    set32(c.r[2], 0u + 96u);
    set32(c.r[3], 0u + 102u);
    st32((c.r[29].w[0] + 1164u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1164u);
    st32((c.r[29].w[0] + 1168u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1168u);
    set32(c.r[7], c.r[29].w[0] + 1172u);
    st32((c.r[29].w[0] + 1172u), 0u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C1A8u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C1A8u) [[unlikely]] return; }
L_0012C1A8:
    set32(c.r[2], 0u + 107u);
    set32(c.r[3], 0u + 113u);
    st32((c.r[29].w[0] + 1176u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1176u);
    st32((c.r[29].w[0] + 1180u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1180u);
    set32(c.r[7], c.r[29].w[0] + 1184u);
    st32((c.r[29].w[0] + 1184u), 0u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C1D4u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C1D4u) [[unlikely]] return; }
L_0012C1D4:
    set32(c.r[3], 0u + 128u);
    set32(c.r[2], 0u + 118u);
    set32(c.r[5], c.r[29].w[0] + 1188u);
    st32((c.r[29].w[0] + 1188u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1192u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1192u);
    set32(c.r[7], c.r[29].w[0] + 1196u);
    st32((c.r[29].w[0] + 1196u), 0u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C200u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C200u) [[unlikely]] return; }
L_0012C200:
    set32(c.r[5], 0u + 14u);
    set32(c.r[2], 0u + 11u);
    st32((c.r[29].w[0] + 1204u), c.r[5].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1204u);
    set32(c.r[5], c.r[29].w[0] + 1200u);
    set32(c.r[7], c.r[29].w[0] + 1208u);
    st32((c.r[29].w[0] + 1200u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[29].w[0] + 1208u), c.r[22].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C22Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C22Cu) [[unlikely]] return; }
L_0012C22C:
    set32(c.r[6], 0u + 25u);
    set32(c.r[3], 0u + 19u);
    st32((c.r[29].w[0] + 1216u), c.r[6].w[0]);
    set32(c.r[7], c.r[29].w[0] + 1220u);
    st32((c.r[29].w[0] + 1212u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1212u);
    set32(c.r[6], c.r[29].w[0] + 1216u);
    st32((c.r[29].w[0] + 1220u), c.r[22].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C258u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C258u) [[unlikely]] return; }
L_0012C258:
    set32(c.r[7], 0u + 30u);
    set32(c.r[2], 0u + 36u);
    st32((c.r[29].w[0] + 1224u), c.r[7].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1228u);
    set32(c.r[5], c.r[29].w[0] + 1224u);
    st32((c.r[29].w[0] + 1228u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 1232u);
    st32((c.r[29].w[0] + 1232u), c.r[22].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C284u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C284u) [[unlikely]] return; }
L_0012C284:
    set32(c.r[6], 0u + 47u);
    set32(c.r[3], 0u + 41u);
    st32((c.r[29].w[0] + 1240u), c.r[6].w[0]);
    set32(c.r[7], c.r[29].w[0] + 1244u);
    st32((c.r[29].w[0] + 1236u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1236u);
    set32(c.r[6], c.r[29].w[0] + 1240u);
    st32((c.r[29].w[0] + 1244u), c.r[22].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C2B0u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C2B0u) [[unlikely]] return; }
L_0012C2B0:
    set32(c.r[7], 0u + 52u);
    set32(c.r[2], 0u + 58u);
    st32((c.r[29].w[0] + 1248u), c.r[7].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1248u);
    st32((c.r[29].w[0] + 1252u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1252u);
    set32(c.r[7], c.r[29].w[0] + 1256u);
    st32((c.r[29].w[0] + 1256u), c.r[22].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C2DCu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C2DCu) [[unlikely]] return; }
L_0012C2DC:
    set32(c.r[3], 0u + 63u);
    set32(c.r[5], c.r[29].w[0] + 1260u);
    set32(c.r[6], c.r[29].w[0] + 1264u);
    set32(c.r[7], c.r[29].w[0] + 1268u);
    st32((c.r[29].w[0] + 1260u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[29].w[0] + 1264u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 1268u), c.r[22].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C304u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C304u) [[unlikely]] return; }
L_0012C304:
    set32(c.r[2], 0u + 119u);
    set32(c.r[3], 0u + 129u);
    set32(c.r[5], c.r[29].w[0] + 1272u);
    set32(c.r[6], c.r[29].w[0] + 1276u);
    set32(c.r[7], c.r[29].w[0] + 1280u);
    st32((c.r[29].w[0] + 1272u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1276u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[29].w[0] + 1280u), c.r[23].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C330u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C330u) [[unlikely]] return; }
L_0012C330:
    set32(c.r[2], 0u + 134u);
    set32(c.r[3], 0u + 141u);
    st32((c.r[29].w[0] + 1284u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1284u);
    set32(c.r[2], 0u + 6u);
    set32(c.r[6], c.r[29].w[0] + 1288u);
    set32(c.r[7], c.r[29].w[0] + 1292u);
    st32((c.r[29].w[0] + 1288u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 1292u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C360u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C360u) [[unlikely]] return; }
L_0012C360:
    set32(c.r[3], 0u + 179u);
    set32(c.r[2], 0u + 186u);
    st32((c.r[29].w[0] + 1296u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1296u);
    set32(c.r[3], 0u + 7u);
    set32(c.r[6], c.r[29].w[0] + 1300u);
    set32(c.r[7], c.r[29].w[0] + 1304u);
    st32((c.r[29].w[0] + 1300u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C390u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C390u) [[unlikely]] return; }
L_0012C390:
    set32(c.r[5], 0u + 63u);
    set32(c.r[2], 0u + 70u);
    st32((c.r[29].w[0] + 1312u), c.r[5].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1312u);
    set32(c.r[7], c.r[29].w[0] + 1316u);
    st32((c.r[29].w[0] + 1308u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1308u);
    st32((c.r[29].w[0] + 1316u), c.r[22].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C3BCu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C3BCu) [[unlikely]] return; }
L_0012C3BC:
    set32(c.r[6], 0u + 129u);
    set32(c.r[7], 0u + 119u);
    st32((c.r[29].w[0] + 1320u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1320u);
    st32((c.r[29].w[0] + 1324u), c.r[7].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1324u);
    set32(c.r[7], c.r[29].w[0] + 1328u);
    st32((c.r[29].w[0] + 1328u), c.r[22].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C3E8u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C3E8u) [[unlikely]] return; }
L_0012C3E8:
    set32(c.r[3], 0u + 134u);
    set32(c.r[2], 0u + 141u);
    set32(c.r[5], c.r[29].w[0] + 1332u);
    set32(c.r[6], c.r[29].w[0] + 1336u);
    st32((c.r[29].w[0] + 1332u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 1340u);
    st32((c.r[29].w[0] + 1336u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[29].w[0] + 1340u), c.r[22].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C414u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C414u) [[unlikely]] return; }
L_0012C414:
    set32(c.r[5], 0u + 186u);
    set32(c.r[6], 0u + 179u);
    st32((c.r[29].w[0] + 1344u), c.r[5].w[0]);
    set32(c.r[7], c.r[29].w[0] + 1352u);
    st32((c.r[29].w[0] + 1348u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1344u);
    set32(c.r[6], c.r[29].w[0] + 1348u);
    st32((c.r[29].w[0] + 1352u), c.r[22].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C440u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C440u) [[unlikely]] return; }
L_0012C440:
    set32(c.r[2], 0u + 75u);
    set32(c.r[7], 0u + 81u);
    st32((c.r[29].w[0] + 1356u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1356u);
    st32((c.r[29].w[0] + 1360u), c.r[7].w[0]);
    set32(c.r[2], 0u + 4u);
    set32(c.r[6], c.r[29].w[0] + 1360u);
    set32(c.r[7], c.r[29].w[0] + 1364u);
    st32((c.r[29].w[0] + 1364u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C470u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C470u) [[unlikely]] return; }
L_0012C470:
    set32(c.r[3], 0u + 92u);
    set32(c.r[2], 0u + 86u);
    st32((c.r[29].w[0] + 1372u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1368u);
    set32(c.r[3], 0u + 4u);
    st32((c.r[29].w[0] + 1368u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1372u);
    set32(c.r[7], c.r[29].w[0] + 1376u);
    st32((c.r[29].w[0] + 1376u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C4A0u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C4A0u) [[unlikely]] return; }
L_0012C4A0:
    set32(c.r[2], 0u + 97u);
    set32(c.r[3], 0u + 103u);
    st32((c.r[29].w[0] + 1380u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1380u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 1384u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1384u);
    set32(c.r[7], c.r[29].w[0] + 1388u);
    st32((c.r[29].w[0] + 1388u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C4D0u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C4D0u) [[unlikely]] return; }
L_0012C4D0:
    set32(c.r[3], 0u + 152u);
    set32(c.r[2], 0u + 146u);
    st32((c.r[29].w[0] + 1396u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1392u);
    set32(c.r[3], 0u + 6u);
    st32((c.r[29].w[0] + 1392u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1396u);
    set32(c.r[7], c.r[29].w[0] + 1400u);
    st32((c.r[29].w[0] + 1400u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C500u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C500u) [[unlikely]] return; }
L_0012C500:
    set32(c.r[2], 0u + 157u);
    set32(c.r[3], 0u + 163u);
    st32((c.r[29].w[0] + 1404u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1404u);
    set32(c.r[2], 0u + 6u);
    st32((c.r[29].w[0] + 1408u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1408u);
    set32(c.r[7], c.r[29].w[0] + 1412u);
    st32((c.r[29].w[0] + 1412u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C530u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C530u) [[unlikely]] return; }
L_0012C530:
    set32(c.r[3], 0u + 174u);
    set32(c.r[2], 0u + 168u);
    st32((c.r[29].w[0] + 1420u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1416u);
    set32(c.r[3], 0u + 6u);
    st32((c.r[29].w[0] + 1416u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1420u);
    set32(c.r[7], c.r[29].w[0] + 1424u);
    st32((c.r[29].w[0] + 1424u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C560u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C560u) [[unlikely]] return; }
L_0012C560:
    set32(c.r[2], 0u + 275u);
    set32(c.r[3], 0u + 281u);
    st32((c.r[29].w[0] + 1428u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1428u);
    set32(c.r[2], 0u + 6u);
    st32((c.r[29].w[0] + 1432u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1432u);
    set32(c.r[7], c.r[29].w[0] + 1436u);
    st32((c.r[29].w[0] + 1436u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C590u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C590u) [[unlikely]] return; }
L_0012C590:
    set32(c.r[3], 0u + 197u);
    set32(c.r[2], 0u + 191u);
    st32((c.r[29].w[0] + 1444u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1440u);
    set32(c.r[3], 0u + 7u);
    st32((c.r[29].w[0] + 1440u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1444u);
    set32(c.r[7], c.r[29].w[0] + 1448u);
    st32((c.r[29].w[0] + 1448u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C5C0u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C5C0u) [[unlikely]] return; }
L_0012C5C0:
    set32(c.r[2], 0u + 202u);
    set32(c.r[3], 0u + 208u);
    st32((c.r[29].w[0] + 1452u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1452u);
    set32(c.r[2], 0u + 7u);
    st32((c.r[29].w[0] + 1456u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1456u);
    set32(c.r[7], c.r[29].w[0] + 1460u);
    st32((c.r[29].w[0] + 1460u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C5F0u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C5F0u) [[unlikely]] return; }
L_0012C5F0:
    set32(c.r[3], 0u + 219u);
    set32(c.r[2], 0u + 213u);
    st32((c.r[29].w[0] + 1468u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1464u);
    set32(c.r[3], 0u + 7u);
    st32((c.r[29].w[0] + 1464u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1468u);
    st32((c.r[29].w[0] + 1472u), c.r[3].w[0]);
    set32(c.r[7], c.r[29].w[0] + 1472u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C620u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C620u) [[unlikely]] return; }
L_0012C620:
    set32(c.r[5], 0u + 11u);
    set32(c.r[2], 0u + 13u);
    st32((c.r[29].w[0] + 1480u), c.r[5].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1480u);
    st32((c.r[29].w[0] + 1476u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1476u);
    set32(c.r[7], c.r[29].w[0] + 1484u);
    st32((c.r[29].w[0] + 1484u), c.r[22].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C64Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C64Cu) [[unlikely]] return; }
L_0012C64C:
    set32(c.r[2], 0u + 285u);
    set32(c.r[3], 0u + 292u);
    st32((c.r[29].w[0] + 1488u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1488u);
    set32(c.r[2], 0u + 6u);
    set32(c.r[6], c.r[29].w[0] + 1492u);
    set32(c.r[7], c.r[29].w[0] + 1496u);
    st32((c.r[29].w[0] + 1492u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 1496u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C67Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C67Cu) [[unlikely]] return; }
L_0012C67C:
    set32(c.r[3], 0u + 240u);
    set32(c.r[2], 0u + 247u);
    st32((c.r[29].w[0] + 1500u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1500u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[6], c.r[29].w[0] + 1504u);
    set32(c.r[7], c.r[29].w[0] + 1508u);
    st32((c.r[29].w[0] + 1504u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1508u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C6ACu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C6ACu) [[unlikely]] return; }
L_0012C6AC:
    set32(c.r[5], 0u + 247u);
    set32(c.r[6], 0u + 240u);
    st32((c.r[29].w[0] + 1512u), c.r[5].w[0]);
    set32(c.r[7], c.r[29].w[0] + 1520u);
    st32((c.r[29].w[0] + 1516u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1512u);
    set32(c.r[6], c.r[29].w[0] + 1516u);
    st32((c.r[29].w[0] + 1520u), c.r[22].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C6D8u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C6D8u) [[unlikely]] return; }
L_0012C6D8:
    set32(c.r[2], 0u + 252u);
    set32(c.r[3], 0u + 258u);
    st32((c.r[29].w[0] + 1524u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1524u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 1528u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1528u);
    set32(c.r[7], c.r[29].w[0] + 1532u);
    st32((c.r[29].w[0] + 1532u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C708u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C708u) [[unlikely]] return; }
L_0012C708:
    set32(c.r[3], 0u + 269u);
    set32(c.r[2], 0u + 263u);
    st32((c.r[29].w[0] + 1540u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1536u);
    set32(c.r[3], 0u + 4u);
    st32((c.r[29].w[0] + 1536u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1540u);
    st32((c.r[29].w[0] + 1544u), c.r[3].w[0]);
    set32(c.r[7], c.r[29].w[0] + 1544u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C738u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C738u) [[unlikely]] return; }
L_0012C738:
    set32(c.r[2], 0u + 106u);
    set32(c.r[3], 0u + 116u);
    set32(c.r[5], c.r[29].w[0] + 1548u);
    set32(c.r[6], c.r[29].w[0] + 1552u);
    set32(c.r[7], c.r[29].w[0] + 1556u);
    st32((c.r[29].w[0] + 1548u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1552u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[29].w[0] + 1556u), c.r[23].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C764u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C764u) [[unlikely]] return; }
L_0012C764:
    set32(c.r[5], 0u + 116u);
    set32(c.r[6], 0u + 106u);
    st32((c.r[29].w[0] + 1560u), c.r[5].w[0]);
    set32(c.r[7], c.r[29].w[0] + 1568u);
    st32((c.r[29].w[0] + 1564u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1560u);
    set32(c.r[6], c.r[29].w[0] + 1564u);
    st32((c.r[29].w[0] + 1568u), c.r[22].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C790u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C790u) [[unlikely]] return; }
L_0012C790:
    set32(c.r[2], 0u + 297u);
    set32(c.r[3], 0u + 303u);
    st32((c.r[29].w[0] + 1572u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1572u);
    set32(c.r[2], 0u + 6u);
    st32((c.r[29].w[0] + 1576u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1576u);
    set32(c.r[7], c.r[29].w[0] + 1580u);
    st32((c.r[29].w[0] + 1580u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 28784u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C7C4u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C7C4u) [[unlikely]] return; }
L_0012C7C4:
    set32(c.r[3], 0u + 314u);
    set32(c.r[2], 0u + 308u);
    st32((c.r[29].w[0] + 1588u), c.r[3].w[0]);
    set32(c.r[7], c.r[29].w[0] + 1592u);
    set32(c.r[3], 0u + 6u);
    st32((c.r[29].w[0] + 1584u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1584u);
    set32(c.r[6], c.r[29].w[0] + 1588u);
    st32((c.r[29].w[0] + 1592u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 28784u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C7F8u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C7F8u) [[unlikely]] return; }
L_0012C7F8:
    set32(c.r[7], 0u + 6u);
    set32(c.r[2], 0u + 319u);
    set32(c.r[3], 0u + 325u);
    st32((c.r[29].w[0] + 1604u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 1596u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1596u);
    st32((c.r[29].w[0] + 1600u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1600u);
    set32(c.r[7], c.r[29].w[0] + 1604u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 28784u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C82Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C82Cu) [[unlikely]] return; }
L_0012C82C:
    set32(c.r[2], 0u + 292u);
    set32(c.r[3], 0u + 285u);
    st32((c.r[29].w[0] + 1608u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1608u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 28784u);
    st32((c.r[29].w[0] + 1612u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 1616u), c.r[22].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1612u);
    set32(c.r[7], c.r[29].w[0] + 1616u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C85Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C85Cu) [[unlikely]] return; }
L_0012C85C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[5].w[0] + 23004u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012C8A4; } }
    set32(c.r[3], 0u + 230u);
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 1624u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 28784u);
    st32((c.r[29].w[0] + 1628u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1620u);
    st32((c.r[29].w[0] + 1620u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1624u);
    set32(c.r[7], c.r[29].w[0] + 1628u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C89Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C89Cu) [[unlikely]] return; }
L_0012C89C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012C8D0; } }
L_0012C8A4:
    set32(c.r[3], 0u + 234u);
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 1636u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[29].w[0] + 1640u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1632u);
    st32((c.r[29].w[0] + 1632u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1636u);
    set32(c.r[7], c.r[29].w[0] + 1640u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C8D0u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C8D0u) [[unlikely]] return; }
L_0012C8D0:
    set32(c.r[2], 0u + 4u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 1652u), c.r[2].w[0]);
    set32(c.r[3], 0u + 92u);
    set32(c.r[4], c.r[6].w[0] + 28784u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 1648u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1644u);
    set32(c.r[6], c.r[29].w[0] + 1648u);
    set32(c.r[7], c.r[29].w[0] + 1652u);
    st32((c.r[29].w[0] + 1644u), c.r[3].w[0]);
    set32(c.r[16], c.r[2].w[0] + 29432u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C908u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C908u) [[unlikely]] return; }
L_0012C908:
    set32(c.r[17], 0u + 9u);
    set32(c.r[3], 0u + 20u);
    set32(c.r[2], 0u + 29u);
    set32(c.r[5], c.r[29].w[0] + 1656u);
    set32(c.r[6], c.r[29].w[0] + 1660u);
    set32(c.r[7], c.r[29].w[0] + 1664u);
    st32((c.r[29].w[0] + 1656u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 1660u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 1664u), c.r[17].w[0]);
    set32(c.r[23], 0u + 95u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C93Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C93Cu) [[unlikely]] return; }
L_0012C93C:
    set32(c.r[22], 0u + 133u);
    set32(c.r[3], 0u + 34u);
    set32(c.r[2], 0u + 40u);
    set32(c.r[5], c.r[29].w[0] + 1668u);
    set32(c.r[6], c.r[29].w[0] + 1672u);
    set32(c.r[7], c.r[29].w[0] + 1676u);
    st32((c.r[29].w[0] + 1668u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 1672u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 1676u), c.r[17].w[0]);
    set32(c.r[21], 0u + 171u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C970u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C970u) [[unlikely]] return; }
L_0012C970:
    set32(c.r[20], 0u + 209u);
    set32(c.r[3], 0u + 45u);
    set32(c.r[2], 0u + 51u);
    set32(c.r[5], c.r[29].w[0] + 1680u);
    set32(c.r[6], c.r[29].w[0] + 1684u);
    set32(c.r[7], c.r[29].w[0] + 1688u);
    st32((c.r[29].w[0] + 1680u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 1684u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 1688u), c.r[17].w[0]);
    set32(c.r[19], 0u + 247u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C9A4u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C9A4u) [[unlikely]] return; }
L_0012C9A4:
    set32(c.r[18], 0u + 1u);
    set32(c.r[3], 0u + 56u);
    set32(c.r[2], 0u + 62u);
    set32(c.r[5], c.r[29].w[0] + 1692u);
    set32(c.r[6], c.r[29].w[0] + 1696u);
    set32(c.r[7], c.r[29].w[0] + 1700u);
    st32((c.r[29].w[0] + 1692u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 1696u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 1700u), c.r[17].w[0]);
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C9D8u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012C9D8u) [[unlikely]] return; }
L_0012C9D8:
    set32(c.r[3], 0u + 67u);
    set32(c.r[2], 0u + 73u);
    set32(c.r[5], c.r[29].w[0] + 1704u);
    set32(c.r[6], c.r[29].w[0] + 1708u);
    set32(c.r[7], c.r[29].w[0] + 1712u);
    st32((c.r[29].w[0] + 1704u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 1708u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 1712u), c.r[17].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CA04u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CA04u) [[unlikely]] return; }
L_0012CA04:
    set32(c.r[2], 0u + 84u);
    set32(c.r[3], 0u + 78u);
    set32(c.r[5], c.r[29].w[0] + 1716u);
    set32(c.r[6], c.r[29].w[0] + 1720u);
    set32(c.r[7], c.r[29].w[0] + 1724u);
    st32((c.r[29].w[0] + 1716u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 1720u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 1724u), c.r[17].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CA30u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CA30u) [[unlikely]] return; }
L_0012CA30:
    set32(c.r[3], 0u + 89u);
    set32(c.r[5], c.r[29].w[0] + 1728u);
    set32(c.r[6], c.r[29].w[0] + 1732u);
    set32(c.r[7], c.r[29].w[0] + 1736u);
    st32((c.r[29].w[0] + 1728u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 1732u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 1736u), c.r[17].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CA58u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CA58u) [[unlikely]] return; }
L_0012CA58:
    set32(c.r[2], 0u + 290u);
    set32(c.r[5], c.r[29].w[0] + 1740u);
    st32((c.r[29].w[0] + 1740u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1744u);
    set32(c.r[2], 0u + 296u);
    set32(c.r[7], c.r[29].w[0] + 1748u);
    st32((c.r[29].w[0] + 1744u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 1748u), c.r[17].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CA84u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CA84u) [[unlikely]] return; }
L_0012CA84:
    set32(c.r[3], 0u + 16u);
    set32(c.r[5], c.r[29].w[0] + 1752u);
    set32(c.r[6], c.r[29].w[0] + 1756u);
    set32(c.r[7], c.r[29].w[0] + 1760u);
    st32((c.r[29].w[0] + 1760u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 1752u), 0u);
    st32((c.r[29].w[0] + 1756u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CAACu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CAACu) [[unlikely]] return; }
L_0012CAAC:
    set32(c.r[2], 0u + 100u);
    set32(c.r[3], 0u + 10u);
    set32(c.r[5], c.r[29].w[0] + 1764u);
    set32(c.r[6], c.r[29].w[0] + 1768u);
    set32(c.r[7], c.r[29].w[0] + 1772u);
    st32((c.r[29].w[0] + 1764u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1768u), c.r[22].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 1772u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CAD8u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CAD8u) [[unlikely]] return; }
L_0012CAD8:
    set32(c.r[2], 0u + 138u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[5], c.r[29].w[0] + 1776u);
    set32(c.r[6], c.r[29].w[0] + 1780u);
    set32(c.r[7], c.r[29].w[0] + 1784u);
    st32((c.r[29].w[0] + 1776u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1780u), c.r[21].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 1784u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB04u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CB04u) [[unlikely]] return; }
L_0012CB04:
    set32(c.r[2], 0u + 176u);
    set32(c.r[3], 0u + 12u);
    set32(c.r[5], c.r[29].w[0] + 1788u);
    set32(c.r[6], c.r[29].w[0] + 1792u);
    set32(c.r[7], c.r[29].w[0] + 1796u);
    st32((c.r[29].w[0] + 1788u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1792u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 1796u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB30u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CB30u) [[unlikely]] return; }
L_0012CB30:
    set32(c.r[3], 0u + 13u);
    set32(c.r[2], 0u + 214u);
    set32(c.r[5], c.r[29].w[0] + 1800u);
    set32(c.r[6], c.r[29].w[0] + 1804u);
    set32(c.r[7], c.r[29].w[0] + 1808u);
    st32((c.r[29].w[0] + 1800u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1804u), c.r[19].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 1808u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB5Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CB5Cu) [[unlikely]] return; }
L_0012CB5C:
    set32(c.r[2], 0u + 14u);
    set32(c.r[5], c.r[29].w[0] + 1812u);
    set32(c.r[6], c.r[29].w[0] + 1816u);
    set32(c.r[7], c.r[29].w[0] + 1820u);
    st32((c.r[29].w[0] + 1820u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 1812u), 0u);
    st32((c.r[29].w[0] + 1816u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB84u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CB84u) [[unlikely]] return; }
L_0012CB84:
    set32(c.r[2], 0u + 15u);
    set32(c.r[5], c.r[29].w[0] + 1824u);
    st32((c.r[29].w[0] + 1832u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1828u);
    set32(c.r[7], c.r[29].w[0] + 1832u);
    st32((c.r[29].w[0] + 1824u), 0u);
    st32((c.r[29].w[0] + 1828u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CBACu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CBACu) [[unlikely]] return; }
L_0012CBAC:
    set32(c.r[3], 0u + 100u);
    set32(c.r[5], c.r[29].w[0] + 1836u);
    st32((c.r[29].w[0] + 1840u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1840u);
    set32(c.r[7], c.r[29].w[0] + 1844u);
    st32((c.r[29].w[0] + 1836u), c.r[22].w[0]);
    st32((c.r[29].w[0] + 1844u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CBD4u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CBD4u) [[unlikely]] return; }
L_0012CBD4:
    set32(c.r[5], 0u + 138u);
    set32(c.r[6], c.r[29].w[0] + 1852u);
    st32((c.r[29].w[0] + 1852u), c.r[5].w[0]);
    set32(c.r[7], c.r[29].w[0] + 1856u);
    set32(c.r[5], c.r[29].w[0] + 1848u);
    st32((c.r[29].w[0] + 1848u), c.r[21].w[0]);
    st32((c.r[29].w[0] + 1856u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CBFCu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CBFCu) [[unlikely]] return; }
L_0012CBFC:
    set32(c.r[6], 0u + 176u);
    set32(c.r[7], c.r[29].w[0] + 1868u);
    st32((c.r[29].w[0] + 1864u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1860u);
    set32(c.r[6], c.r[29].w[0] + 1864u);
    st32((c.r[29].w[0] + 1860u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 1868u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CC24u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CC24u) [[unlikely]] return; }
L_0012CC24:
    set32(c.r[7], 0u + 214u);
    set32(c.r[5], c.r[29].w[0] + 1872u);
    st32((c.r[29].w[0] + 1876u), c.r[7].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1876u);
    set32(c.r[7], c.r[29].w[0] + 1880u);
    st32((c.r[29].w[0] + 1872u), c.r[19].w[0]);
    st32((c.r[29].w[0] + 1880u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CC4Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CC4Cu) [[unlikely]] return; }
L_0012CC4C:
    set32(c.r[2], 0u + 252u);
    set32(c.r[5], c.r[29].w[0] + 1884u);
    st32((c.r[29].w[0] + 1888u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1888u);
    set32(c.r[2], 0u + 285u);
    set32(c.r[7], c.r[29].w[0] + 1892u);
    st32((c.r[29].w[0] + 1884u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 1892u), c.r[17].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CC78u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CC78u) [[unlikely]] return; }
L_0012CC78:
    set32(c.r[6], c.r[29].w[0] + 1900u);
    set32(c.r[5], c.r[29].w[0] + 1896u);
    set32(c.r[7], c.r[29].w[0] + 1904u);
    st32((c.r[29].w[0] + 1896u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 1900u), c.r[23].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 1904u), c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CC9Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CC9Cu) [[unlikely]] return; }
L_0012CC9C:
    set32(c.r[6], 0u + 34u);
    set32(c.r[3], 0u + 40u);
    st32((c.r[29].w[0] + 1912u), c.r[6].w[0]);
    set32(c.r[7], c.r[29].w[0] + 1916u);
    st32((c.r[29].w[0] + 1908u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1908u);
    set32(c.r[6], c.r[29].w[0] + 1912u);
    st32((c.r[29].w[0] + 1916u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CCC8u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CCC8u) [[unlikely]] return; }
L_0012CCC8:
    set32(c.r[7], 0u + 51u);
    set32(c.r[2], 0u + 45u);
    st32((c.r[29].w[0] + 1920u), c.r[7].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1924u);
    set32(c.r[5], c.r[29].w[0] + 1920u);
    st32((c.r[29].w[0] + 1924u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 1928u);
    st32((c.r[29].w[0] + 1928u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CCF4u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CCF4u) [[unlikely]] return; }
L_0012CCF4:
    set32(c.r[6], 0u + 56u);
    set32(c.r[3], 0u + 62u);
    st32((c.r[29].w[0] + 1936u), c.r[6].w[0]);
    set32(c.r[7], c.r[29].w[0] + 1940u);
    st32((c.r[29].w[0] + 1932u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1932u);
    set32(c.r[6], c.r[29].w[0] + 1936u);
    st32((c.r[29].w[0] + 1940u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD20u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CD20u) [[unlikely]] return; }
L_0012CD20:
    set32(c.r[7], 0u + 73u);
    set32(c.r[2], 0u + 67u);
    st32((c.r[29].w[0] + 1944u), c.r[7].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1948u);
    set32(c.r[5], c.r[29].w[0] + 1944u);
    st32((c.r[29].w[0] + 1948u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 1952u);
    st32((c.r[29].w[0] + 1952u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD4Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CD4Cu) [[unlikely]] return; }
L_0012CD4C:
    set32(c.r[6], 0u + 78u);
    set32(c.r[3], 0u + 84u);
    st32((c.r[29].w[0] + 1960u), c.r[6].w[0]);
    set32(c.r[7], c.r[29].w[0] + 1964u);
    st32((c.r[29].w[0] + 1956u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1956u);
    set32(c.r[6], c.r[29].w[0] + 1960u);
    st32((c.r[29].w[0] + 1964u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD78u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CD78u) [[unlikely]] return; }
L_0012CD78:
    set32(c.r[7], 0u + 89u);
    st32((c.r[29].w[0] + 1968u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 1972u), c.r[7].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1968u);
    set32(c.r[6], c.r[29].w[0] + 1972u);
    set32(c.r[7], c.r[29].w[0] + 1976u);
    st32((c.r[29].w[0] + 1976u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CDA0u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CDA0u) [[unlikely]] return; }
L_0012CDA0:
    set32(c.r[3], 0u + 20u);
    set32(c.r[2], 0u + 29u);
    st32((c.r[29].w[0] + 1980u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1980u);
    st32((c.r[29].w[0] + 1984u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 1984u);
    set32(c.r[7], c.r[29].w[0] + 1988u);
    st32((c.r[29].w[0] + 1988u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CDCCu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CDCCu) [[unlikely]] return; }
L_0012CDCC:
    set32(c.r[2], 0u + 10u);
    st32((c.r[29].w[0] + 1996u), c.r[22].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1992u);
    set32(c.r[6], c.r[29].w[0] + 1996u);
    set32(c.r[7], c.r[29].w[0] + 2000u);
    st32((c.r[29].w[0] + 1992u), c.r[22].w[0]);
    st32((c.r[29].w[0] + 2000u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CDF4u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CDF4u) [[unlikely]] return; }
L_0012CDF4:
    set32(c.r[3], 0u + 11u);
    set32(c.r[6], c.r[29].w[0] + 2008u);
    st32((c.r[29].w[0] + 2008u), c.r[21].w[0]);
    set32(c.r[5], c.r[29].w[0] + 2004u);
    st32((c.r[29].w[0] + 2012u), c.r[3].w[0]);
    set32(c.r[7], c.r[29].w[0] + 2012u);
    st32((c.r[29].w[0] + 2004u), c.r[21].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CE1Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CE1Cu) [[unlikely]] return; }
L_0012CE1C:
    set32(c.r[6], 0u + 12u);
    set32(c.r[7], c.r[29].w[0] + 2024u);
    st32((c.r[29].w[0] + 2024u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 2016u);
    st32((c.r[29].w[0] + 2020u), c.r[20].w[0]);
    set32(c.r[6], c.r[29].w[0] + 2020u);
    st32((c.r[29].w[0] + 2016u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CE44u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CE44u) [[unlikely]] return; }
L_0012CE44:
    set32(c.r[7], 0u + 13u);
    st32((c.r[29].w[0] + 2032u), c.r[19].w[0]);
    st32((c.r[29].w[0] + 2036u), c.r[7].w[0]);
    set32(c.r[5], c.r[29].w[0] + 2028u);
    set32(c.r[6], c.r[29].w[0] + 2032u);
    set32(c.r[7], c.r[29].w[0] + 2036u);
    st32((c.r[29].w[0] + 2028u), c.r[19].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CE6Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CE6Cu) [[unlikely]] return; }
L_0012CE6C:
    set32(c.r[2], 0u + 285u);
    set32(c.r[3], 0u + 14u);
    set32(c.r[5], c.r[29].w[0] + 2040u);
    st32((c.r[29].w[0] + 2044u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 2048u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 2044u);
    set32(c.r[7], c.r[29].w[0] + 2048u);
    st32((c.r[29].w[0] + 2040u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CE98u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CE98u) [[unlikely]] return; }
L_0012CE98:
    set32(c.r[5], 0u + 296u);
    set32(c.r[2], 0u + 296u);
    st32((c.r[29].w[0] + 2056u), c.r[5].w[0]);
    set32(c.r[6], c.r[29].w[0] + 2056u);
    st32((c.r[29].w[0] + 2060u), c.r[17].w[0]);
    set32(c.r[5], c.r[29].w[0] + 2052u);
    set32(c.r[7], c.r[29].w[0] + 2060u);
    st32((c.r[29].w[0] + 2052u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CEC4u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CEC4u) [[unlikely]] return; }
L_0012CEC4:
    set32(c.r[3], 0u + 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 2068u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 2064u);
    set32(c.r[6], c.r[29].w[0] + 2068u);
    set32(c.r[7], c.r[29].w[0] + 2072u);
    st32((c.r[29].w[0] + 2064u), c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20360u);
    st32((c.r[29].w[0] + 2072u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CEF0u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CEF0u) [[unlikely]] return; }
L_0012CEF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 2076u);
    set32(c.r[6], c.r[29].w[0] + 2080u);
    set32(c.r[7], c.r[29].w[0] + 2084u);
    st32((c.r[29].w[0] + 2076u), c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] + 21008u);
    st32((c.r[29].w[0] + 2080u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 2084u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CF18u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CF18u) [[unlikely]] return; }
L_0012CF18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 2088u);
    set32(c.r[6], c.r[29].w[0] + 2092u);
    set32(c.r[7], c.r[29].w[0] + 2096u);
    st32((c.r[29].w[0] + 2088u), c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] + 21656u);
    st32((c.r[29].w[0] + 2092u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 2096u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CF40u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CF40u) [[unlikely]] return; }
L_0012CF40:
    set32(c.r[2], 0u + 50u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 2104u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 2100u);
    set32(c.r[6], c.r[29].w[0] + 2104u);
    set32(c.r[7], c.r[29].w[0] + 2108u);
    st32((c.r[29].w[0] + 2100u), c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] + 22304u);
    st32((c.r[29].w[0] + 2108u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CF6Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CF6Cu) [[unlikely]] return; }
L_0012CF6C:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[29].w[0] + 2112u);
    set32(c.r[6], c.r[29].w[0] + 2116u);
    set32(c.r[7], c.r[29].w[0] + 2120u);
    st32((c.r[29].w[0] + 2112u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 2116u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 31568u);
    st32((c.r[29].w[0] + 2120u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CF98u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CF98u) [[unlikely]] return; }
L_0012CF98:
    set32(c.r[3], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[29].w[0] + 2124u);
    set32(c.r[4], c.r[4].w[0] - 30920u);
    set32(c.r[6], c.r[29].w[0] + 2128u);
    set32(c.r[7], c.r[29].w[0] + 2132u);
    st32((c.r[29].w[0] + 2124u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 2128u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 2132u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CFC4u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CFC4u) [[unlikely]] return; }
L_0012CFC4:
    set32(c.r[5], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0] + 2140u), c.r[5].w[0]);
    set32(c.r[6], c.r[29].w[0] + 2140u);
    st32((c.r[29].w[0] + 2136u), c.r[18].w[0]);
    set32(c.r[5], c.r[29].w[0] + 2136u);
    set32(c.r[7], c.r[29].w[0] + 2144u);
    set32(c.r[4], c.r[4].w[0] - 30272u);
    st32((c.r[29].w[0] + 2144u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CFF0u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012CFF0u) [[unlikely]] return; }
L_0012CFF0:
    set32(c.r[6], c.r[29].w[0] + 2148u);
    set32(c.r[7], c.r[29].w[0] + 2152u);
    set32(c.r[2], c.r[29].w[0] + 2156u);
    st32((c.r[29].w[0] + 2296u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 2300u), c.r[7].w[0]);
    set32(c.r[3], c.r[29].w[0] + 2160u);
    set32(c.r[5], c.r[29].w[0] + 2164u);
    set32(c.r[6], c.r[29].w[0] + 2168u);
    set32(c.r[7], c.r[29].w[0] + 2172u);
    st32((c.r[29].w[0] + 2304u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 2176u);
    st32((c.r[29].w[0] + 2308u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 2244u), c.r[5].w[0]);
    set32(c.r[3], c.r[29].w[0] + 2180u);
    st32((c.r[29].w[0] + 2248u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 2184u);
    st32((c.r[29].w[0] + 2252u), c.r[7].w[0]);
    set32(c.r[6], c.r[29].w[0] + 2188u);
    set32(c.r[7], c.r[29].w[0] + 2192u);
    st32((c.r[29].w[0] + 2256u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 2196u);
    st32((c.r[29].w[0] + 2260u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 2264u), c.r[5].w[0]);
    set32(c.r[3], c.r[29].w[0] + 2200u);
    st32((c.r[29].w[0] + 2268u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 2204u);
    st32((c.r[29].w[0] + 2272u), c.r[7].w[0]);
    set32(c.r[6], c.r[29].w[0] + 2208u);
    st32((c.r[29].w[0] + 2276u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 2212u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0] + 2280u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 2284u), c.r[5].w[0]);
    set32(c.r[23], c.r[29].w[0] + 2216u);
    st32((c.r[29].w[0] + 2288u), c.r[6].w[0]);
    set32(c.r[22], c.r[29].w[0] + 2220u);
    st32((c.r[29].w[0] + 2292u), c.r[7].w[0]);
    set32(c.r[21], c.r[29].w[0] + 2224u);
    set32(c.r[20], c.r[29].w[0] + 2228u);
    set32(c.r[19], c.r[29].w[0] + 2232u);
    set32(c.r[18], c.r[29].w[0] + 2236u);
    set32(c.r[17], c.r[29].w[0] + 2240u);
    set32(c.r[16], c.r[2].w[0] - 29624u);
    c.budget -= 44;
L_0012D0A0:
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], c.r[30].w[0] + 71u);
    st32((c.r[29].w[0] + 2148u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[30], c.r[30].w[0] + 1u);
    st32((c.r[29].w[0] + 2152u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 2296u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 2300u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 2304u)));
    st32((c.r[29].w[0] + 2156u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D0D4u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012D0D4u) [[unlikely]] return; }
L_0012D0D4:
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], ld32((c.r[29].w[0] + 2244u)));
    st32((c.r[29].w[0] + 2160u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 2164u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 2248u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 2308u)));
    st32((c.r[29].w[0] + 2168u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D0FCu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012D0FCu) [[unlikely]] return; }
L_0012D0FC:
    set32(c.r[6], 0u + 15u);
    set32(c.r[7], 0u + 24u);
    st32((c.r[29].w[0] + 2172u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 2176u), c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 2252u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 2256u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 2260u)));
    st32((c.r[29].w[0] + 2180u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D128u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012D128u) [[unlikely]] return; }
L_0012D128:
    set32(c.r[5], ld32((c.r[29].w[0] + 2264u)));
    set32(c.r[2], 0u + 34u);
    set32(c.r[6], ld32((c.r[29].w[0] + 2268u)));
    set32(c.r[3], 0u + 25u);
    set32(c.r[7], ld32((c.r[29].w[0] + 2272u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 2184u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 2188u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 2192u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D154u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012D154u) [[unlikely]] return; }
L_0012D154:
    set32(c.r[5], ld32((c.r[29].w[0] + 2276u)));
    set32(c.r[3], 0u + 50u);
    set32(c.r[6], ld32((c.r[29].w[0] + 2280u)));
    set32(c.r[2], 0u + 40u);
    set32(c.r[7], ld32((c.r[29].w[0] + 2284u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 2196u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 2200u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 2204u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D180u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012D180u) [[unlikely]] return; }
L_0012D180:
    set32(c.r[5], 0u + 82u);
    set32(c.r[6], ld32((c.r[29].w[0] + 2292u)));
    st32((c.r[29].w[0] + 2212u), c.r[5].w[0]);
    set32(c.r[2], 0u + 70u);
    set32(c.r[5], ld32((c.r[29].w[0] + 2288u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 2208u), c.r[2].w[0]);
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[29].w[0] + 2216u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D1ACu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012D1ACu) [[unlikely]] return; }
L_0012D1AC:
    set32(c.r[2], 0u + 55u);
    set32(c.r[3], 0u + 67u);
    st32((c.r[29].w[0] + 2220u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 2224u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0] + 2228u), 0u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D1D8u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012D1D8u) [[unlikely]] return; }
L_0012D1D8:
    set32(c.r[6], 0u + 82u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 2232u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 2236u), c.r[6].w[0]);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 2240u), 0u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D200u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012D200u) [[unlikely]] return; }
L_0012D200:
    set32(c.r[16], c.r[16].w[0] + 648u);
    c.r[2].d[0] = c.r[30].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D0A0u | kUnwind; return; } goto L_0012D0A0; } }
    ld128((c.r[29].w[0] + 2464u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 2448u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 2432u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 2416u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 2400u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 2384u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 2368u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 2352u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 2336u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 2320u));
    set32(c.r[29], c.r[29].w[0] + 2480u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012D248:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[15].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[14].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[12], ld32((c.r[2].w[0] - 4976u)));
    c.r[13].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.f[5] = c.f[12];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[6] = c.f[13];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[20], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 21;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { goto L_0012D330; } }
    c.f[0] = c.r[20].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[3] = c.r[9].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[2] = c.r[10].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[1] = c.r[11].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    fpu_div(c, 3u, c.f[3], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    fpu_div(c, 2u, c.f[2], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    fpu_div(c, 4u, c.f[15], c.f[0]);
    fpu_div(c, 0u, c.f[14], c.f[0]);
    st32((c.r[6].w[0] + 15464u), c.f[3]);
    st32((c.r[5].w[0] + 15468u), c.f[2]);
    st32((c.r[3].w[0] + 15472u), c.f[1]);
    st32((c.r[2].w[0] + 15480u), c.f[4]);
    st32((c.r[4].w[0] + 15476u), c.f[0]);
    c.budget -= 37;
L_0012D330:
    c.r[3].d[0] = c.r[12].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012D540; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0012D430; } }
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[4].w[0] + 15468u));
    c.f[1] = ld32((c.r[3].w[0] + 15464u));
    c.f[2] = c.r[14].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    c.f[4] = c.r[13].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.f[2] = fp::add(c.f[2], c.f[1]);
    c.f[3] = fp::add(c.f[4], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[4], c.f[0]);
    c.f[0] = 0u;
    c.budget -= 27;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012D3BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_0012D3BC:
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] - 4976u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[18].w[0] + 15472u));
    c.f[2] = c.r[7].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[12] = ld32((c.r[16].w[0] + 15476u));
    c.f[13] = ld32((c.r[17].w[0] + 15480u));
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.r[8].d[0] = c.r[15].d[0] + 0ull;
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.f[13] = fp::mul(c.f[13], c.f[1]);
    c.f[12] = fp::add(c.f[5], c.f[12]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[6], c.f[0]);
    c.f[13] = fp::add(c.f[6], c.f[13]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D428u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0012D428u) [[unlikely]] return; }
L_0012D428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012D510; } }
L_0012D430:
    c.f[3] = c.r[12].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[1] = ld32((c.r[3].w[0] + 15464u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[4].w[0] + 15468u));
    c.f[2] = c.r[14].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    c.f[4] = c.r[13].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    c.f[2] = fp::add(c.f[2], c.f[1]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.f[3] = fp::add(c.f[4], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[4], c.f[0]);
    c.f[0] = 0u;
    c.budget -= 27;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012D4A4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_0012D4A4:
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] - 4976u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[18].w[0] + 15472u));
    c.f[2] = c.r[7].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[12] = ld32((c.r[16].w[0] + 15476u));
    c.f[13] = ld32((c.r[17].w[0] + 15480u));
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.r[8].d[0] = c.r[15].d[0] + 0ull;
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.f[13] = fp::mul(c.f[13], c.f[1]);
    c.f[12] = fp::add(c.f[5], c.f[12]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[6], c.f[0]);
    c.f[13] = fp::add(c.f[6], c.f[13]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D510u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0012D510u) [[unlikely]] return; }
L_0012D510:
    set32(c.r[2], ld32((c.r[19].w[0] - 4976u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] - 4976u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_0012D5C0; } }
    st32((c.r[22].w[0] + 15464u), 0u);
    st32((c.r[21].w[0] + 15468u), 0u);
    st32((c.r[18].w[0] + 15472u), 0u);
    st32((c.r[16].w[0] + 15476u), 0u);
    st32((c.r[17].w[0] + 15480u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012D5C0; } }
L_0012D540:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0012D588; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[13].w[0] + c.r[10].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 23004u)));
    set32(c.r[5], c.r[6].w[0] + 22u);
    c.f[12] = fp::add(c.f[5], c.f[14]);
    set32(c.r[4], c.r[14].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.f[13] = fp::add(c.f[6], c.f[15]);
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[6].d[0];
    set32(c.r[6], c.r[7].w[0] + c.r[11].w[0]);
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.r[8].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D580u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0012D580u) [[unlikely]] return; }
L_0012D580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012D5C0; } }
L_0012D588:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[7].w[0] + c.r[11].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 23004u)));
    set32(c.r[6], c.r[5].w[0] + 22u);
    c.f[12] = fp::add(c.f[5], c.f[14]);
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.f[13] = fp::add(c.f[6], c.f[15]);
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[5].d[0];
    set32(c.r[4], c.r[14].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[13].w[0] + c.r[10].w[0]);
    c.r[8].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D5C0u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0012D5C0u) [[unlikely]] return; }
L_0012D5C0:
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
L_0012D5F0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 14;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0012E138; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012DEB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 15488u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 1628u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D650u);  if (depth < kMaxDepth) unit_000B(c, 171u, depth + 1u); else { c.pc = 0x0012E170u; return; } if (c.pc != 0x0012D650u) [[unlikely]] return; }
L_0012D650:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 93u);
    set32(c.r[3], c.r[2].w[0] + 17120u);
    st32((c.r[2].w[0] + 17120u), 0u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[2], 0u + 39u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 14;
L_0012D688:
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 8u), 0u);
    st32((c.r[3].w[0] + 12u), 0u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D688u | kUnwind; return; } goto L_0012D688; } }
    set32(c.r[2], c.r[19].w[0] + 17768u);
    set32(c.r[3], 0u + 64u);
    st32((c.r[19].w[0] + 17768u), 0u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 8;
L_0012D6C8:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D6C8u | kUnwind; return; } goto L_0012D6C8; } }
    set32(c.r[2], c.r[20].w[0] + 18416u);
    set32(c.r[3], 0u + 119u);
    st32((c.r[20].w[0] + 18416u), 0u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 8;
L_0012D708:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D708u | kUnwind; return; } goto L_0012D708; } }
    set32(c.r[2], c.r[22].w[0] + 19064u);
    set32(c.r[3], 0u + 79u);
    st32((c.r[22].w[0] + 19064u), 0u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 8;
L_0012D748:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D748u | kUnwind; return; } goto L_0012D748; } }
    set32(c.r[2], c.r[21].w[0] + 19712u);
    set32(c.r[3], 0u + 120u);
    st32((c.r[21].w[0] + 19712u), 0u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 8;
L_0012D788:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D788u | kUnwind; return; } goto L_0012D788; } }
    set32(c.r[2], c.r[23].w[0] + 20360u);
    set32(c.r[3], 0u + 66u);
    st32((c.r[23].w[0] + 20360u), 0u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 8;
L_0012D7C8:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D7C8u | kUnwind; return; } goto L_0012D7C8; } }
    set32(c.r[2], c.r[30].w[0] + 21008u);
    set32(c.r[3], 0u + 65u);
    st32((c.r[30].w[0] + 21008u), 0u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 8;
L_0012D808:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D808u | kUnwind; return; } goto L_0012D808; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[3].w[0] + 21656u);
    st32((c.r[4].w[0] + 21656u), 0u);
    set32(c.r[3], 0u + 68u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_0012D850:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D850u | kUnwind; return; } goto L_0012D850; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[3].w[0] + 22304u);
    st32((c.r[4].w[0] + 22304u), 0u);
    set32(c.r[3], 0u + 69u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_0012D898:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D898u | kUnwind; return; } goto L_0012D898; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[3].w[0] + 22952u);
    st32((c.r[4].w[0] + 22952u), 0u);
    set32(c.r[3], 0u + 67u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_0012D8E0:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D8E0u | kUnwind; return; } goto L_0012D8E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[3].w[0] + 23600u);
    st32((c.r[4].w[0] + 23600u), 0u);
    set32(c.r[3], 0u + 70u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_0012D928:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D928u | kUnwind; return; } goto L_0012D928; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[3].w[0] + 24248u);
    st32((c.r[4].w[0] + 24248u), 0u);
    set32(c.r[3], 0u + 80u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_0012D970:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D970u | kUnwind; return; } goto L_0012D970; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[3].w[0] + 24896u);
    st32((c.r[4].w[0] + 24896u), 0u);
    set32(c.r[3], 0u + 81u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_0012D9B8:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D9B8u | kUnwind; return; } goto L_0012D9B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[3].w[0] + 25544u);
    st32((c.r[4].w[0] + 25544u), 0u);
    set32(c.r[3], 0u + 83u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_0012DA00:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DA00u | kUnwind; return; } goto L_0012DA00; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[3].w[0] + 26192u);
    st32((c.r[4].w[0] + 26192u), 0u);
    set32(c.r[3], 0u + 88u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_0012DA48:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DA48u | kUnwind; return; } goto L_0012DA48; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[3].w[0] + 26840u);
    st32((c.r[4].w[0] + 26840u), 0u);
    set32(c.r[3], 0u + 94u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_0012DA90:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DA90u | kUnwind; return; } goto L_0012DA90; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[3].w[0] + 27488u);
    st32((c.r[4].w[0] + 27488u), 0u);
    set32(c.r[3], 0u + 99u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_0012DAD8:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DAD8u | kUnwind; return; } goto L_0012DAD8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[3].w[0] + 28136u);
    st32((c.r[4].w[0] + 28136u), 0u);
    set32(c.r[3], 0u + 114u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_0012DB20:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DB20u | kUnwind; return; } goto L_0012DB20; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[3].w[0] + 28784u);
    st32((c.r[4].w[0] + 28784u), 0u);
    set32(c.r[3], 0u + 104u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_0012DB68:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DB68u | kUnwind; return; } goto L_0012DB68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[3].w[0] + 29432u);
    st32((c.r[4].w[0] + 29432u), 0u);
    set32(c.r[3], 0u + 109u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_0012DBB0:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DBB0u | kUnwind; return; } goto L_0012DBB0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[3].w[0] + 30080u);
    st32((c.r[4].w[0] + 30080u), 0u);
    set32(c.r[3], 0u + 87u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_0012DBF8:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DBF8u | kUnwind; return; } goto L_0012DBF8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[3].w[0] + 30728u);
    st32((c.r[4].w[0] + 30728u), 0u);
    set32(c.r[3], 0u + 159u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_0012DC40:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DC40u | kUnwind; return; } goto L_0012DC40; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[3].w[0] + 31376u);
    st32((c.r[4].w[0] + 31376u), 0u);
    set32(c.r[3], 0u + 85u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_0012DC88:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DC88u | kUnwind; return; } goto L_0012DC88; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[3].w[0] + 32024u);
    st32((c.r[4].w[0] + 32024u), 0u);
    set32(c.r[3], 0u + 86u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_0012DCD0:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DCD0u | kUnwind; return; } goto L_0012DCD0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[3].w[0] + 32672u);
    st32((c.r[4].w[0] + 32672u), 0u);
    set32(c.r[3], 0u + 53u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_0012DD18:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DD18u | kUnwind; return; } goto L_0012DD18; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[3].w[0] - 32216u);
    st32((c.r[4].w[0] - 32216u), 0u);
    set32(c.r[3], 0u + 82u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_0012DD60:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DD60u | kUnwind; return; } goto L_0012DD60; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[3].w[0] - 31568u);
    st32((c.r[4].w[0] - 31568u), 0u);
    set32(c.r[3], 0u + 84u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_0012DDA8:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DDA8u | kUnwind; return; } goto L_0012DDA8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[3].w[0] - 30920u);
    st32((c.r[4].w[0] - 30920u), 0u);
    set32(c.r[3], 0u + 85u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_0012DDF0:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DDF0u | kUnwind; return; } goto L_0012DDF0; } }
    set32(c.r[2], c.r[6].w[0] - 30272u);
    set32(c.r[3], 0u + 86u);
    st32((c.r[6].w[0] - 30272u), 0u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 39u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 8;
L_0012DE30:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DE30u | kUnwind; return; } goto L_0012DE30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], c.r[2].w[0] - 29624u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
L_0012DE60:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[6], c.r[2].w[0] + 648u);
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[3], 0u + 39u);
    c.budget -= 6;
L_0012DE78:
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DE78u | kUnwind; return; } goto L_0012DE78; } }
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DE60u | kUnwind; return; } goto L_0012DE60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E138; } }
L_0012DEB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 29624u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012DF14; } }
    set32(c.r[16], c.r[2].w[0] + 5184u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0012DF14; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0012DEF0:
    set32(c.r[16], c.r[16].w[0] - 648u);
    st128((c.r[29].w[0]) & ~15u, c.r[6]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF08u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012DF08u) [[unlikely]] return; }
L_0012DF08:
    ld128((c.r[29].w[0]) & ~15u, c.r[6]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DEF0u | kUnwind; return; } goto L_0012DEF0; } }
L_0012DF14:
    set32(c.r[4], c.r[6].w[0] - 30272u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF24u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012DF24u) [[unlikely]] return; }
L_0012DF24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] - 30920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF38u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012DF38u) [[unlikely]] return; }
L_0012DF38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[3].w[0] - 31568u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF4Cu);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012DF4Cu) [[unlikely]] return; }
L_0012DF4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] - 32216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF60u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012DF60u) [[unlikely]] return; }
L_0012DF60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[3].w[0] + 32672u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF74u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012DF74u) [[unlikely]] return; }
L_0012DF74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] + 32024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF88u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012DF88u) [[unlikely]] return; }
L_0012DF88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[3].w[0] + 31376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF9Cu);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012DF9Cu) [[unlikely]] return; }
L_0012DF9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] + 30728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DFB0u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012DFB0u) [[unlikely]] return; }
L_0012DFB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[3].w[0] + 30080u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DFC4u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012DFC4u) [[unlikely]] return; }
L_0012DFC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] + 29432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DFD8u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012DFD8u) [[unlikely]] return; }
L_0012DFD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[3].w[0] + 28784u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DFECu);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012DFECu) [[unlikely]] return; }
L_0012DFEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] + 28136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E000u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012E000u) [[unlikely]] return; }
L_0012E000:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[3].w[0] + 27488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E014u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012E014u) [[unlikely]] return; }
L_0012E014:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] + 26840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E028u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012E028u) [[unlikely]] return; }
L_0012E028:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[3].w[0] + 26192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E03Cu);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012E03Cu) [[unlikely]] return; }
L_0012E03C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] + 25544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E050u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012E050u) [[unlikely]] return; }
L_0012E050:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[3].w[0] + 24896u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E064u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012E064u) [[unlikely]] return; }
L_0012E064:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] + 24248u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E078u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012E078u) [[unlikely]] return; }
L_0012E078:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[3].w[0] + 23600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E08Cu);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012E08Cu) [[unlikely]] return; }
L_0012E08C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] + 22952u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0A0u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012E0A0u) [[unlikely]] return; }
L_0012E0A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[3].w[0] + 22304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0B4u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012E0B4u) [[unlikely]] return; }
L_0012E0B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] + 21656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0C8u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012E0C8u) [[unlikely]] return; }
L_0012E0C8:
    set32(c.r[4], c.r[30].w[0] + 21008u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0D8u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012E0D8u) [[unlikely]] return; }
L_0012E0D8:
    set32(c.r[4], c.r[23].w[0] + 20360u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0E8u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012E0E8u) [[unlikely]] return; }
L_0012E0E8:
    set32(c.r[4], c.r[21].w[0] + 19712u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0F8u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012E0F8u) [[unlikely]] return; }
L_0012E0F8:
    set32(c.r[4], c.r[22].w[0] + 19064u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E108u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012E108u) [[unlikely]] return; }
L_0012E108:
    set32(c.r[4], c.r[20].w[0] + 18416u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E118u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012E118u) [[unlikely]] return; }
L_0012E118:
    set32(c.r[4], c.r[19].w[0] + 17768u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E128u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012E128u) [[unlikely]] return; }
L_0012E128:
    set32(c.r[4], c.r[18].w[0] + 17120u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E138u);  if (depth < kMaxDepth) unit_009C(c, 334u, depth + 1u); else { c.pc = 0x00373F38u; return; } if (c.pc != 0x0012E138u) [[unlikely]] return; }
L_0012E138:
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
L_0012E170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E190u);  if (depth < kMaxDepth) unit_000B(c, 213u, depth + 1u); else { c.pc = 0x0012E4B8u; return; } if (c.pc != 0x0012E190u) [[unlikely]] return; }
L_0012E190:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E1A0u);  if (depth < kMaxDepth) unit_000B(c, 214u, depth + 1u); else { c.pc = 0x0012E4C8u; return; } if (c.pc != 0x0012E1A0u) [[unlikely]] return; }
L_0012E1A0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E190u | kUnwind; return; } goto L_0012E190; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E1BCu);  if (depth < kMaxDepth) unit_000B(c, 215u, depth + 1u); else { c.pc = 0x0012E4E8u; return; } if (c.pc != 0x0012E1BCu) [[unlikely]] return; }
L_0012E1BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E1C8u);  if (depth < kMaxDepth) unit_000B(c, 216u, depth + 1u); else { c.pc = 0x0012E4F8u; return; } if (c.pc != 0x0012E1C8u) [[unlikely]] return; }
L_0012E1C8:
    st32((c.r[16].w[0] + 1628u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E1E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 7224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E200u);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0012E200u) [[unlikely]] return; }
L_0012E200:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 6384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E210u);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0012E210u) [[unlikely]] return; }
L_0012E210:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 4704u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E220u);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0012E220u) [[unlikely]] return; }
L_0012E220:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 7896u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E230u);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0012E230u) [[unlikely]] return; }
L_0012E230:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 5544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E240u);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0012E240u) [[unlikely]] return; }
L_0012E240:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 3864u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E250u);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0012E250u) [[unlikely]] return; }
L_0012E250:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 9576u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E278u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x0012E278u) [[unlikely]] return; }
L_0012E278:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 7224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E288u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x0012E288u) [[unlikely]] return; }
L_0012E288:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 6384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E298u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x0012E298u) [[unlikely]] return; }
L_0012E298:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 4704u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E2A8u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x0012E2A8u) [[unlikely]] return; }
L_0012E2A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 7896u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E2B8u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x0012E2B8u) [[unlikely]] return; }
L_0012E2B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 5544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E2C8u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x0012E2C8u) [[unlikely]] return; }
L_0012E2C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 3864u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E2D8u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x0012E2D8u) [[unlikely]] return; }
L_0012E2D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E2E8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] + 1176u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], c.r[16].w[0] + 6720u);
    c.budget -= 8;
L_0012E308:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E314u);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0012E314u) [[unlikely]] return; }
L_0012E314:
    set32(c.r[16], c.r[16].w[0] + 840u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E308u | kUnwind; return; } goto L_0012E308; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 3024u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E358u);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0012E358u) [[unlikely]] return; }
L_0012E358:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 7224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E368u);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0012E368u) [[unlikely]] return; }
L_0012E368:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 6384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E378u);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0012E378u) [[unlikely]] return; }
L_0012E378:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E388:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 3024u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E3A0u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x0012E3A0u) [[unlikely]] return; }
L_0012E3A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 7224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E3B0u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x0012E3B0u) [[unlikely]] return; }
L_0012E3B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 6384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E3C0u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x0012E3C0u) [[unlikely]] return; }
L_0012E3C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E3D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] + 1176u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], c.r[16].w[0] + 6720u);
    c.budget -= 8;
L_0012E3F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E3FCu);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x0012E3FCu) [[unlikely]] return; }
L_0012E3FC:
    set32(c.r[16], c.r[16].w[0] + 840u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E3F0u | kUnwind; return; } goto L_0012E3F0; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E428:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 7224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E440u);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0012E440u) [[unlikely]] return; }
L_0012E440:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 3024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E450u);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0012E450u) [[unlikely]] return; }
L_0012E450:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 6384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E460u);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0012E460u) [[unlikely]] return; }
L_0012E460:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 7224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E488u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x0012E488u) [[unlikely]] return; }
L_0012E488:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 3024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E498u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x0012E498u) [[unlikely]] return; }
L_0012E498:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 6384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E4A8u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x0012E4A8u) [[unlikely]] return; }
L_0012E4A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E4B8:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E4C8:
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E4E8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E4F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 17u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E514u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0012E514u) [[unlikely]] return; }
L_0012E514:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E528:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E540u);  if (depth < kMaxDepth) unit_000B(c, 107u, depth + 1u); else { c.pc = 0x0012D5F0u; return; } if (c.pc != 0x0012E540u) [[unlikely]] return; }
L_0012E540:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E568u);  if (depth < kMaxDepth) unit_000B(c, 107u, depth + 1u); else { c.pc = 0x0012D5F0u; return; } if (c.pc != 0x0012E568u) [[unlikely]] return; }
L_0012E568:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E578:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(31ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012E59C; } }
    set32(c.r[4], 0u + 370u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E664; } }
L_0012E59C:
    set32(c.r[2], c.r[4].w[0] - 32u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012E5B8; } }
    set32(c.r[4], 0u + 57u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E664; } }
L_0012E5B8:
    set32(c.r[2], c.r[4].w[0] - 64u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012E5D4; } }
    set32(c.r[4], 0u + 59u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E664; } }
L_0012E5D4:
    set32(c.r[2], c.r[4].w[0] - 96u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012E5F0; } }
    set32(c.r[4], 0u + 52u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E664; } }
L_0012E5F0:
    set32(c.r[2], c.r[4].w[0] - 103u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012E60C; } }
    set32(c.r[4], 0u + 373u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E664; } }
L_0012E60C:
    set32(c.r[2], c.r[4].w[0] - 128u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012E628; } }
    set32(c.r[4], 0u + 374u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E664; } }
L_0012E628:
    set32(c.r[2], c.r[4].w[0] - 160u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012E644; } }
    set32(c.r[4], 0u + 56u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E664; } }
L_0012E644:
    set32(c.r[2], c.r[4].w[0] - 192u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012E660; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E66C; } }
L_0012E660:
    set32(c.r[4], 0u + 54u);
    c.budget -= 1;
L_0012E664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E66Cu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0012E66Cu) [[unlikely]] return; }
L_0012E66C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E680:
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u + 83u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0012E724; } }
    c.r[2].d[0] = c.r[4].sd[0] < 84ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012E6D8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0012E754; } }
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012E6C4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012E764; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E7A4; } }
L_0012E6C4:
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0012E774; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E7A4; } }
L_0012E6D8:
    set32(c.r[2], 0u + 88u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0012E744; } }
    c.r[2].d[0] = c.r[4].sd[0] < 89ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012E704; } }
    set32(c.r[2], 0u + 84u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0012E794; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E7A4; } }
L_0012E704:
    set32(c.r[2], 0u + 89u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0012E734; } }
    set32(c.r[2], 0u + 90u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0012E784; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E7A4; } }
L_0012E724:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 12920u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E734:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 12928u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E744:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 12936u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E754:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 12944u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E764:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 12952u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E774:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 12960u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E784:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 12968u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E794:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 12976u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E7A4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E7B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0012E8C0; } }
    set32(c.r[4], 0u + 1459u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[20] = c.r[1].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E7E4u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0012E7E4u) [[unlikely]] return; }
L_0012E7E4:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 410u);
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], 0u + 95u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E800u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x0012E800u) [[unlikely]] return; }
L_0012E800:
    set32(c.r[4], 0u + 1454u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E80Cu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0012E80Cu) [[unlikely]] return; }
L_0012E80C:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 410u);
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    set32(c.r[4], 0u + 117u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E830u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0012E830u) [[unlikely]] return; }
L_0012E830:
    set32(c.r[4], 0u + 1480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E83Cu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0012E83Cu) [[unlikely]] return; }
L_0012E83C:
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 410u);
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], 0u + 320u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E860u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0012E860u) [[unlikely]] return; }
L_0012E860:
    set32(c.r[4], 0u + 1458u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E86Cu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0012E86Cu) [[unlikely]] return; }
L_0012E86C:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 410u);
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], 0u + 450u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E888u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x0012E888u) [[unlikely]] return; }
L_0012E888:
    set32(c.r[4], 0u + 1453u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E894u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0012E894u) [[unlikely]] return; }
L_0012E894:
    c.f[12] = c.f[20];
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 472u);
    set32(c.r[5], 0u + 410u);
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E8B8u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0012E8B8u) [[unlikely]] return; }
L_0012E8B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E9AC; } }
L_0012E8C0:
    set32(c.r[4], 0u + 1459u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[20] = c.r[1].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E8D8u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0012E8D8u) [[unlikely]] return; }
L_0012E8D8:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 445u);
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], 0u + 95u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E8F4u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x0012E8F4u) [[unlikely]] return; }
L_0012E8F4:
    set32(c.r[4], 0u + 1454u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E900u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0012E900u) [[unlikely]] return; }
L_0012E900:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 445u);
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    set32(c.r[4], 0u + 117u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E924u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0012E924u) [[unlikely]] return; }
L_0012E924:
    set32(c.r[4], 0u + 1480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E930u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0012E930u) [[unlikely]] return; }
L_0012E930:
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 445u);
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], 0u + 320u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E954u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0012E954u) [[unlikely]] return; }
L_0012E954:
    set32(c.r[4], 0u + 1458u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E960u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0012E960u) [[unlikely]] return; }
L_0012E960:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 445u);
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], 0u + 450u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E97Cu);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x0012E97Cu) [[unlikely]] return; }
L_0012E97C:
    set32(c.r[4], 0u + 1453u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E988u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0012E988u) [[unlikely]] return; }
L_0012E988:
    c.f[12] = c.f[20];
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 472u);
    set32(c.r[5], 0u + 445u);
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E9ACu);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0012E9ACu) [[unlikely]] return; }
L_0012E9AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E9C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 60u)));
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0012EA00; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[21].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_0012EA00:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 672u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0012EA18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EA18u);  if (depth < kMaxDepth) unit_000B(c, 205u, depth + 1u); else { c.pc = 0x0012E428u; return; } if (c.pc != 0x0012EA18u) [[unlikely]] return; }
L_0012EA18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], 0u + 24u);
    set32(c.r[4], ld32((c.r[2].w[0] - 28016u)));
    set32(c.r[2], c.r[2].w[0] - 28016u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 20u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EA3Cu);  if (depth < kMaxDepth) unit_0047(c, 139u, depth + 1u); else { c.pc = 0x0021E618u; return; } if (c.pc != 0x0012EA3Cu) [[unlikely]] return; }
L_0012EA3C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012EBF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] - 4188u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EA60u);  if (depth < kMaxDepth) unit_0029(c, 411u, depth + 1u); else { c.pc = 0x001A78B8u; return; } if (c.pc != 0x0012EA60u) [[unlikely]] return; }
L_0012EA60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012EBF0; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[22], 0u - 1u);
    c.budget -= 2;
L_0012EA70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[20], c.r[16].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EA80u);  if (depth < kMaxDepth) unit_0036(c, 266u, depth + 1u); else { c.pc = 0x001DA4E0u; return; } if (c.pc != 0x0012EA80u) [[unlikely]] return; }
L_0012EA80:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 132u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 212u), 0u);
    st32((c.r[17].w[0] + 216u), c.r[22].w[0]);
    st32((c.r[17].w[0] + 220u), 0u);
    st32((c.r[17].w[0] + 224u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EAA8u);  if (depth < kMaxDepth) unit_000B(c, 342u, depth + 1u); else { c.pc = 0x0012FAB8u; return; } if (c.pc != 0x0012EAA8u) [[unlikely]] return; }
L_0012EAA8:
    st32((c.r[17].w[0] + 164u), 0u);
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], c.r[17].w[0] + 196u);
    c.budget -= 4;
L_0012EAB8:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012EAB8u | kUnwind; return; } goto L_0012EAB8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EAE0u);  if (depth < kMaxDepth) unit_000B(c, 352u, depth + 1u); else { c.pc = 0x0012FC48u; return; } if (c.pc != 0x0012EAE0u) [[unlikely]] return; }
L_0012EAE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EAF8u);  if (depth < kMaxDepth) unit_000B(c, 343u, depth + 1u); else { c.pc = 0x0012FAC8u; return; } if (c.pc != 0x0012EAF8u) [[unlikely]] return; }
L_0012EAF8:
    set32(c.r[19], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB10u);  if (depth < kMaxDepth) unit_000B(c, 344u, depth + 1u); else { c.pc = 0x0012FAE0u; return; } if (c.pc != 0x0012EB10u) [[unlikely]] return; }
L_0012EB10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB24u);  if (depth < kMaxDepth) unit_000B(c, 345u, depth + 1u); else { c.pc = 0x0012FAF8u; return; } if (c.pc != 0x0012EB24u) [[unlikely]] return; }
L_0012EB24:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB38u);  if (depth < kMaxDepth) unit_000B(c, 346u, depth + 1u); else { c.pc = 0x0012FB10u; return; } if (c.pc != 0x0012EB38u) [[unlikely]] return; }
L_0012EB38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB4Cu);  if (depth < kMaxDepth) unit_000B(c, 347u, depth + 1u); else { c.pc = 0x0012FB28u; return; } if (c.pc != 0x0012EB4Cu) [[unlikely]] return; }
L_0012EB4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB60u);  if (depth < kMaxDepth) unit_000B(c, 348u, depth + 1u); else { c.pc = 0x0012FB40u; return; } if (c.pc != 0x0012EB60u) [[unlikely]] return; }
L_0012EB60:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB74u);  if (depth < kMaxDepth) unit_000B(c, 349u, depth + 1u); else { c.pc = 0x0012FB58u; return; } if (c.pc != 0x0012EB74u) [[unlikely]] return; }
L_0012EB74:
    c.budget -= 1;
L_0012EB78:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB90u);  if (depth < kMaxDepth) unit_000B(c, 351u, depth + 1u); else { c.pc = 0x0012FBE8u; return; } if (c.pc != 0x0012EB90u) [[unlikely]] return; }
L_0012EB90:
    c.r[2].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012EB78u | kUnwind; return; } goto L_0012EB78; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012EBA0:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EBB8u);  if (depth < kMaxDepth) unit_000B(c, 350u, depth + 1u); else { c.pc = 0x0012FB70u; return; } if (c.pc != 0x0012EBB8u) [[unlikely]] return; }
L_0012EBB8:
    c.r[2].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012EBA0u | kUnwind; return; } goto L_0012EBA0; } }
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012EAE0u | kUnwind; return; } goto L_0012EAE0; } }
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012EA70u | kUnwind; return; } goto L_0012EA70; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EBF0u);  if (depth < kMaxDepth) unit_000B(c, 358u, depth + 1u); else { c.pc = 0x0012FD00u; return; } if (c.pc != 0x0012EBF0u) [[unlikely]] return; }
L_0012EBF0:
    st32((c.r[23].w[0] - 4188u), 0u);
    c.budget -= 1;
L_0012EBF4:
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
L_0012EC28:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[16]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 368u), c.f[20]);
    set32(c.r[2], ld32((c.r[30].w[0] + 60u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012F718; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] - 4192u)));
    c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012EC8C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] - 4192u), c.r[2].w[0]);
    c.budget -= 2;
L_0012EC8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 4188u)));
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012ED68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ECA8u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x0012ECA8u) [[unlikely]] return; }
L_0012ECA8:
    set32(c.r[16], 0u + 116u);
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0012ECC4; } }
    set32(c.r[16], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012ECD8; } }
L_0012ECC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ECCCu);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x0012ECCCu) [[unlikely]] return; }
L_0012ECCC:
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    set32(c.r[3], 0u + 108u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_0012ECD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0012ED2C; } }
    set32(c.r[4], 0u + 1513u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ECF4u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0012ECF4u) [[unlikely]] return; }
L_0012ECF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[12] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 124u);
    c.r[6].d[0] = c.r[6].d[0] | 256ull;
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ED24u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0012ED24u) [[unlikely]] return; }
L_0012ED24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012ED68; } }
L_0012ED2C:
    set32(c.r[4], 0u + 1513u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ED38u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0012ED38u) [[unlikely]] return; }
L_0012ED38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[12] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 136u);
    c.r[6].d[0] = c.r[6].d[0] | 256ull;
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ED68u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0012ED68u) [[unlikely]] return; }
L_0012ED68:
    set32(c.r[2], ld32((c.r[30].w[0] + 8u)));
    set32(c.r[4], 0u + 10u);
    set32(c.r[3], ld32((c.r[2].w[0] + 672u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0012ED84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ED84u);  if (depth < kMaxDepth) unit_000B(c, 233u, depth + 1u); else { c.pc = 0x0012E7B0u; return; } if (c.pc != 0x0012ED84u) [[unlikely]] return; }
L_0012ED84:
    set32(c.r[2], ld32((c.r[17].w[0] - 4188u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012F718; } }
    set32(c.r[4], 0u + 26u);
    set32(c.r[7], 0u + 28u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[20] = c.r[1].w[0];
    c.r[21].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[19], 0u + 1u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    c.r[23].d[0] = c.r[23].d[0] | 19392ull;
    st32((c.r[29].w[0] + 76u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 112u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 116u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 120u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 124u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 136u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 148u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 152u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 156u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 164u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 172u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 180u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 184u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[7].w[0]);
    c.budget -= 44;
L_0012EE40:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EE4Cu);  if (depth < kMaxDepth) unit_0036(c, 266u, depth + 1u); else { c.pc = 0x001DA4E0u; return; } if (c.pc != 0x0012EE4Cu) [[unlikely]] return; }
L_0012EE4C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_0012F410; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012EE80; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EE74u);  if (depth < kMaxDepth) unit_0039(c, 347u, depth + 1u); else { c.pc = 0x001E6EC8u; return; } if (c.pc != 0x0012EE74u) [[unlikely]] return; }
L_0012EE74:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012EEC8; } }
L_0012EE80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_0012EEC8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[4], c.r[18].w[0] + 204u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EE9Cu);  if (depth < kMaxDepth) unit_000B(c, 224u, depth + 1u); else { c.pc = 0x0012E680u; return; } if (c.pc != 0x0012EE9Cu) [[unlikely]] return; }
L_0012EE9C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EEACu);  if (depth < kMaxDepth) unit_000B(c, 224u, depth + 1u); else { c.pc = 0x0012E680u; return; } if (c.pc != 0x0012EEACu) [[unlikely]] return; }
L_0012EEAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + 12984u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EEC8u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0012EEC8u) [[unlikely]] return; }
L_0012EEC8:
    set32(c.r[17], ld32((c.r[18].w[0])));
    set32(c.r[16], 0u + 3600u);
    c.budget -= 4;
    if (c.r[23].d[0] == 0ull) { breakpoint(c, 0x0012EED4u);  goto L_0012EED8; }
L_0012EED8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    mmi::div(c, 0, c.r[17].w[0], c.r[23].w[0]);
    set32(c.r[5], c.r[5].w[0] + 12992u);
    set32(c.r[6], ld32((c.r[18].w[0] + 220u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[17].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EF04u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0012EF04u) [[unlikely]] return; }
L_0012EF04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EF20u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0012EF20u) [[unlikely]] return; }
L_0012EF20:
    set32(c.r[2], ld32((c.r[30].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0012F2AC; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 672u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 828u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.r[5].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0012F108; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[6], ld32((c.r[20].w[0] - 4192u)));
    set32(c.r[4], c.r[7].w[0] + 129u);
    set32(c.r[2], ld32((c.r[22].w[0] + 23004u)));
    set32(c.r[5], c.r[3].w[0] + 129u);
    set32(c.r[7], 0u + 6u);
    set32(c.r[3], ld32((c.r[21].w[0] + 23004u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[19].d[0];
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[5], c.r[4].w[0] + 10u);
    set32(c.r[8], ld32((c.r[29].w[0] + 64u)));
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[13] = c.r[1].w[0];
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], 0u + 105u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EFC0u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0012EFC0u) [[unlikely]] return; }
L_0012EFC0:
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[5], ld32((c.r[21].w[0] + 23004u)));
    set32(c.r[3], c.r[2].w[0] + 129u);
    set32(c.r[4], c.r[7].w[0] + 129u);
    set32(c.r[17], ld32((c.r[20].w[0] - 4192u)));
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[19].d[0];
    if (c.r[2].d[0] == 0) c.r[3].d[0] = c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    set32(c.r[2], 0u + 6u);
    set32(c.r[16], c.r[3].w[0] + 10u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    if (c.r[5].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    set32(c.r[4], c.r[18].w[0] + 200u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F000u);  if (depth < kMaxDepth) unit_000B(c, 222u, depth + 1u); else { c.pc = 0x0012E578u; return; } if (c.pc != 0x0012F000u) [[unlikely]] return; }
L_0012F000:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[13] = c.r[1].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 310u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F034u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0012F034u) [[unlikely]] return; }
L_0012F034:
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 23004u)));
    set32(c.r[7], c.r[4].w[0] + 129u);
    set32(c.r[6], ld32((c.r[20].w[0] - 4192u)));
    set32(c.r[5], c.r[3].w[0] + 129u);
    set32(c.r[4], 0u + 6u);
    c.r[3].d[0] = c.r[2].d[0] ^ c.r[19].d[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[4], c.r[5].w[0] + 10u);
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[13] = c.r[1].w[0];
    set32(c.r[4], 0u + 440u);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[7], 0u + 2u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F098u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0012F098u) [[unlikely]] return; }
L_0012F098:
    set32(c.r[7], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[8], c.r[29].w[0] + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[4], c.r[7].w[0] + 129u);
    set32(c.r[6], ld32((c.r[20].w[0] - 4192u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 23004u)));
    set32(c.r[5], c.r[2].w[0] + 129u);
    set32(c.r[7], 0u + 6u);
    set32(c.r[2], ld32((c.r[22].w[0] + 23004u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[19].d[0];
    if (c.r[3].d[0] == 0) c.r[4].d[0] = c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[5], c.r[4].w[0] + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[13] = c.r[1].w[0];
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 540u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F100u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0012F100u) [[unlikely]] return; }
L_0012F100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012F594; } }
L_0012F108:
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[22].w[0] + 23004u)));
    set32(c.r[4], c.r[3].w[0] + 129u);
    set32(c.r[7], ld32((c.r[20].w[0] - 4192u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[19].d[0];
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[8], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[5], c.r[3].w[0] + 129u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 23004u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[5].d[0];
    set32(c.r[5], c.r[4].w[0] + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[13] = c.r[1].w[0];
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], 0u + 105u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F16Cu);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0012F16Cu) [[unlikely]] return; }
L_0012F16C:
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 23004u)));
    set32(c.r[5], c.r[2].w[0] + 129u);
    set32(c.r[3], c.r[7].w[0] + 129u);
    set32(c.r[6], ld32((c.r[20].w[0] - 4192u)));
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[19].d[0];
    if (c.r[2].d[0] == 0) c.r[3].d[0] = c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[16], c.r[3].w[0] + 10u);
    set32(c.r[17], c.r[6].w[0] << 2);
    if (c.r[4].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    set32(c.r[17], c.r[17].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[18].w[0] + 200u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F1ACu);  if (depth < kMaxDepth) unit_000B(c, 222u, depth + 1u); else { c.pc = 0x0012E578u; return; } if (c.pc != 0x0012F1ACu) [[unlikely]] return; }
L_0012F1AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[13] = c.r[1].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 310u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F1E0u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0012F1E0u) [[unlikely]] return; }
L_0012F1E0:
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 23004u)));
    set32(c.r[5], c.r[4].w[0] + 129u);
    set32(c.r[7], ld32((c.r[20].w[0] - 4192u)));
    set32(c.r[4], c.r[2].w[0] + 129u);
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[19].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[4].d[0];
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[2], c.r[5].w[0] + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[13] = c.r[1].w[0];
    if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    set32(c.r[4], 0u + 440u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F240u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0012F240u) [[unlikely]] return; }
L_0012F240:
    set32(c.r[3], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[8], c.r[29].w[0] + 16u);
    set32(c.r[2], ld32((c.r[21].w[0] + 23004u)));
    set32(c.r[4], c.r[3].w[0] + 129u);
    set32(c.r[7], ld32((c.r[20].w[0] - 4192u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[19].d[0];
    set32(c.r[6], c.r[7].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[5], c.r[3].w[0] + 129u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[22].w[0] + 23004u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[5].d[0];
    set32(c.r[5], c.r[4].w[0] + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[13] = c.r[1].w[0];
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[7], 0u + 2u);
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    set32(c.r[4], 0u + 540u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F2A4u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0012F2A4u) [[unlikely]] return; }
L_0012F2A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012F594; } }
L_0012F2AC:
    set32(c.r[7], ld32((c.r[29].w[0] + 124u)));
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.f[13] = c.f[20];
    set32(c.r[3], ld32((c.r[22].w[0] + 23004u)));
    set32(c.r[4], c.r[7].w[0] + 129u);
    set32(c.r[5], c.r[2].w[0] + 129u);
    set32(c.r[7], ld32((c.r[20].w[0] - 4192u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[19].d[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 23004u)));
    if (c.r[3].d[0] == 0) c.r[4].d[0] = c.r[5].d[0];
    set32(c.r[6], c.r[7].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[5], c.r[4].w[0] + 10u);
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], 0u + 105u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F300u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0012F300u) [[unlikely]] return; }
L_0012F300:
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 23004u)));
    set32(c.r[5], c.r[2].w[0] + 129u);
    set32(c.r[3], c.r[7].w[0] + 129u);
    set32(c.r[6], ld32((c.r[20].w[0] - 4192u)));
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[19].d[0];
    if (c.r[2].d[0] == 0) c.r[3].d[0] = c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[16], c.r[3].w[0] + 10u);
    set32(c.r[17], c.r[6].w[0] << 1);
    if (c.r[4].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    set32(c.r[17], c.r[17].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[18].w[0] + 200u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F340u);  if (depth < kMaxDepth) unit_000B(c, 222u, depth + 1u); else { c.pc = 0x0012E578u; return; } if (c.pc != 0x0012F340u) [[unlikely]] return; }
L_0012F340:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 310u);
    set32(c.r[7], 0u + 2u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F364u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0012F364u) [[unlikely]] return; }
L_0012F364:
    set32(c.r[7], ld32((c.r[29].w[0] + 108u)));
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.f[12] = c.f[20];
    set32(c.r[4], ld32((c.r[21].w[0] + 23004u)));
    set32(c.r[3], c.r[7].w[0] + 129u);
    set32(c.r[5], c.r[2].w[0] + 129u);
    set32(c.r[7], ld32((c.r[20].w[0] - 4192u)));
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[19].d[0];
    c.f[13] = c.f[20];
    if (c.r[2].d[0] == 0) c.r[3].d[0] = c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + 10u);
    if (c.r[4].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], 0u + 440u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F3B4u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0012F3B4u) [[unlikely]] return; }
L_0012F3B4:
    set32(c.r[7], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[8], c.r[29].w[0] + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    c.f[12] = c.f[20];
    set32(c.r[3], ld32((c.r[21].w[0] + 23004u)));
    set32(c.r[4], c.r[7].w[0] + 129u);
    set32(c.r[5], c.r[2].w[0] + 129u);
    set32(c.r[7], ld32((c.r[20].w[0] - 4192u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[19].d[0];
    set32(c.r[2], ld32((c.r[22].w[0] + 23004u)));
    if (c.r[3].d[0] == 0) c.r[4].d[0] = c.r[5].d[0];
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + 10u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], 0u + 540u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[20];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F408u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0012F408u) [[unlikely]] return; }
L_0012F408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012F594; } }
L_0012F410:
    set32(c.r[2], ld32((c.r[30].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0012F530; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 672u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 828u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.r[5].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0012F4C4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[5], ld32((c.r[22].w[0] + 23004u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[3], c.r[4].w[0] + 129u);
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[19].d[0];
    set32(c.r[17], ld32((c.r[20].w[0] - 4192u)));
    set32(c.r[4], c.r[7].w[0] + 129u);
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = c.r[4].d[0];
    set32(c.r[2], 0u + 6u);
    set32(c.r[16], c.r[3].w[0] + 10u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 1514u);
    if (c.r[5].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F488u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0012F488u) [[unlikely]] return; }
L_0012F488:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[13] = c.r[1].w[0];
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 105u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F4BCu);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0012F4BCu) [[unlikely]] return; }
L_0012F4BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012F594; } }
L_0012F4C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], ld32((c.r[22].w[0] + 23004u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[5], c.r[2].w[0] + 129u);
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[19].d[0];
    set32(c.r[6], ld32((c.r[20].w[0] - 4192u)));
    set32(c.r[3], c.r[7].w[0] + 129u);
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = c.r[5].d[0];
    set32(c.r[17], c.r[6].w[0] << 1);
    set32(c.r[16], c.r[3].w[0] + 10u);
    set32(c.r[17], c.r[17].w[0] + c.r[6].w[0]);
    if (c.r[4].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    set32(c.r[4], 0u + 1514u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F504u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0012F504u) [[unlikely]] return; }
L_0012F504:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 105u);
    set32(c.r[7], 0u + 2u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F528u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0012F528u) [[unlikely]] return; }
L_0012F528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012F594; } }
L_0012F530:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[22].w[0] + 23004u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[5], c.r[2].w[0] + 129u);
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[19].d[0];
    set32(c.r[6], ld32((c.r[20].w[0] - 4192u)));
    set32(c.r[3], c.r[7].w[0] + 129u);
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = c.r[5].d[0];
    set32(c.r[17], c.r[6].w[0] << 1);
    set32(c.r[16], c.r[3].w[0] + 10u);
    set32(c.r[17], c.r[17].w[0] + c.r[6].w[0]);
    if (c.r[4].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    set32(c.r[4], 0u + 1514u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F570u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0012F570u) [[unlikely]] return; }
L_0012F570:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 105u);
    set32(c.r[7], 0u + 2u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F594u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0012F594u) [[unlikely]] return; }
L_0012F594:
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[7], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] + 26u);
    st32((c.r[29].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 28u);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 26u);
    st32((c.r[29].w[0] + 76u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + 28u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[4], c.r[4].w[0] + 26u);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 28u);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] + 26u);
    st32((c.r[29].w[0] + 92u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + 28u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[4], c.r[4].w[0] + 26u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 28u);
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], c.r[2].w[0] + 26u);
    st32((c.r[29].w[0] + 108u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 112u), c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + 28u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[4], c.r[4].w[0] + 26u);
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 28u);
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] + 26u);
    st32((c.r[29].w[0] + 124u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + 28u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[4], c.r[4].w[0] + 26u);
    set32(c.r[7], c.r[7].w[0] + 28u);
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[3], c.r[3].w[0] + 28u);
    st32((c.r[29].w[0] + 140u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + 26u);
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 26u);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[7], c.r[7].w[0] + 28u);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 28u);
    st32((c.r[29].w[0] + 156u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + 26u);
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 26u);
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[7], c.r[7].w[0] + 28u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[3], c.r[3].w[0] + 28u);
    st32((c.r[29].w[0] + 172u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + 26u);
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 192u)));
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 26u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[7], c.r[7].w[0] + 28u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 192u), c.r[7].w[0]);
    c.budget -= 97;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012EE40u | kUnwind; return; } goto L_0012EE40; } }
L_0012F718:
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.f[20] = ld32((c.r[29].w[0] + 368u));
    set32(c.r[29], c.r[29].w[0] + 384u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012F750:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] + 8736u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F788u);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0012F788u) [[unlikely]] return; }
L_0012F788:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[16].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012F7EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21968u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F7A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F7A8u) [[unlikely]] return; }
L_0012F7A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0012F7C0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012F7C4; } }
L_0012F7C0:
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_0012F7C4:
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F7E4u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0012F7E4u) [[unlikely]] return; }
L_0012F7E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012F9D4; } }
L_0012F7EC:
    c.r[2].d[0] = c.r[16].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012F850; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21968u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F808u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F808u) [[unlikely]] return; }
L_0012F808:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012F828; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012F82C; } }
L_0012F828:
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 1;
L_0012F82C:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.r[5].d[0] = c.r[29].d[0] | 4ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F848u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0012F848u) [[unlikely]] return; }
L_0012F848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012F9D4; } }
L_0012F850:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012F914; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F870u);  if (depth < kMaxDepth) unit_0036(c, 266u, depth + 1u); else { c.pc = 0x001DA4E0u; return; } if (c.pc != 0x0012F870u) [[unlikely]] return; }
L_0012F870:
    set32(c.r[3], ld32((c.r[2].w[0] + 132u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012F9D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21976u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F890u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F890u) [[unlikely]] return; }
L_0012F890:
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F8A4u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x0012F8A4u) [[unlikely]] return; }
L_0012F8A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] - 24376u);
    set32(c.r[6], 0u + 2u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F8C0u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x0012F8C0u) [[unlikely]] return; }
L_0012F8C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F8D0u);  if (depth < kMaxDepth) unit_0036(c, 266u, depth + 1u); else { c.pc = 0x001DA4E0u; return; } if (c.pc != 0x0012F8D0u) [[unlikely]] return; }
L_0012F8D0:
    set32(c.r[3], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0012F8F0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F8E8u);  if (depth < kMaxDepth) unit_000C(c, 145u, depth + 1u); else { c.pc = 0x00131170u; return; } if (c.pc != 0x0012F8E8u) [[unlikely]] return; }
L_0012F8E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012F9D4; } }
L_0012F8F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F8FCu);  if (depth < kMaxDepth) unit_000C(c, 164u, depth + 1u); else { c.pc = 0x001314C0u; return; } if (c.pc != 0x0012F8FCu) [[unlikely]] return; }
L_0012F8FC:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F90Cu);  if (depth < kMaxDepth) unit_009E(c, 37u, depth + 1u); else { c.pc = 0x003784A0u; return; } if (c.pc != 0x0012F90Cu) [[unlikely]] return; }
L_0012F90C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012F9D4; } }
L_0012F914:
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012F9D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[17].w[0] + 52u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] - 21972u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F934u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F934u) [[unlikely]] return; }
L_0012F934:
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[29].d[0] | 8ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F94Cu);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0012F94Cu) [[unlikely]] return; }
L_0012F94C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 23944u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F968u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x0012F968u) [[unlikely]] return; }
L_0012F968:
    set32(c.r[2], 0u + 14u);
    c.r[5].d[0] = c.r[29].d[0] | 12ull;
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F980u);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00377CA8u; return; } if (c.pc != 0x0012F980u) [[unlikely]] return; }
L_0012F980:
    set32(c.r[5], 0u + 160u);
    set32(c.r[6], 0u + 28u);
    set32(c.r[4], 0u + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F994u);  if (depth < kMaxDepth) unit_000A(c, 355u, depth + 1u); else { c.pc = 0x0012AA20u; return; } if (c.pc != 0x0012F994u) [[unlikely]] return; }
L_0012F994:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F9A0u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x0012F9A0u) [[unlikely]] return; }
L_0012F9A0:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[4].w[0] - 4192u), 0u);
    st32((c.r[3].w[0] - 996u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F9C0u);  if (depth < kMaxDepth) unit_000A(c, 372u, depth + 1u); else { c.pc = 0x0012AD00u; return; } if (c.pc != 0x0012F9C0u) [[unlikely]] return; }
L_0012F9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F9C8u);  if (depth < kMaxDepth) unit_0029(c, 337u, depth + 1u); else { c.pc = 0x001A7018u; return; } if (c.pc != 0x0012F9C8u) [[unlikely]] return; }
L_0012F9C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F9D4u);  if (depth < kMaxDepth) unit_0029(c, 349u, depth + 1u); else { c.pc = 0x001A7148u; return; } if (c.pc != 0x0012F9D4u) [[unlikely]] return; }
L_0012F9D4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012F9F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0012FA5C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012FA48; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] - 24440u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FA2Cu);  if (depth < kMaxDepth) unit_009D(c, 253u, depth + 1u); else { c.pc = 0x00377988u; return; } if (c.pc != 0x0012FA2Cu) [[unlikely]] return; }
L_0012FA2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], 0u + 15u);
    set32(c.r[3], c.r[3].w[0] + 13008u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012FA5C; } }
L_0012FA48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 24440u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FA5Cu);  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x00377A18u; return; } if (c.pc != 0x0012FA5Cu) [[unlikely]] return; }
L_0012FA5C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FA70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FA80u);  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x00377A18u; return; } if (c.pc != 0x0012FA80u) [[unlikely]] return; }
L_0012FA80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FA90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 15u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FAA8u);  if (depth < kMaxDepth) unit_009D(c, 260u, depth + 1u); else { c.pc = 0x00377A78u; return; } if (c.pc != 0x0012FAA8u) [[unlikely]] return; }
L_0012FAA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FAB8:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FAC8:
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 19360u), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FAE0:
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 19364u), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FAF8:
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 19368u), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FB10:
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 19372u), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FB28:
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 19376u), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FB40:
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 19380u), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FB58:
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 19384u), c.f[12]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FB70:
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[7], 0u + 96u);
    set32(c.r[3], 0u - 1u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[6].w[0] + 31u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    set32(c.r[7], c.r[6].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.r[7].d[0] = c.r[7].d[0] & 31ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].d[0] = c.r[6].d[0] & 31ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 26584u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 19436u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = ~(c.r[2].d[0] | c.r[5].d[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FBE8:
    set32(c.r[7], 0u + 96u);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[6].w[0] + 31u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    set32(c.r[7], c.r[7].w[0] - 26584u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.r[6].d[0] = c.r[6].d[0] & 31ull;
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19428u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].d[0] = ~(0ull | c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FC48:
    set32(c.r[4], c.r[4].w[0] + 21548u);
    set32(c.r[2], 0u + 499u);
    c.budget -= 2;
L_0012FC50:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012FC50u | kUnwind; return; } goto L_0012FC50; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FC70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FC88u);  if (depth < kMaxDepth) unit_009D(c, 253u, depth + 1u); else { c.pc = 0x00377988u; return; } if (c.pc != 0x0012FC88u) [[unlikely]] return; }
L_0012FC88:
    set32(c.r[2], 0u + 15u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 13008u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FCB8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] - 5136u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FCE0u);  if (depth < kMaxDepth) unit_009D(c, 264u, depth + 1u); else { c.pc = 0x00377AE8u; return; } if (c.pc != 0x0012FCE0u) [[unlikely]] return; }
L_0012FCE0:
    set32(c.r[2], 0u + 15u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FD00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], ld32((c.r[3].w[0] - 21972u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012FD24u) [[unlikely]] return; }
L_0012FD24:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 10u);
    st32((c.r[17].w[0] + 52u), 0u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD40u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0012FD40u) [[unlikely]] return; }
L_0012FD40:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 23944u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD5Cu);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x0012FD5Cu) [[unlikely]] return; }
L_0012FD5C:
    set32(c.r[2], 0u + 14u);
    c.r[5].d[0] = c.r[29].d[0] | 4ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD74u);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00377CA8u; return; } if (c.pc != 0x0012FD74u) [[unlikely]] return; }
L_0012FD74:
    set32(c.r[4], 0u + 48u);
    set32(c.r[5], 0u + 160u);
    set32(c.r[6], 0u + 28u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD88u);  if (depth < kMaxDepth) unit_000A(c, 355u, depth + 1u); else { c.pc = 0x0012AA20u; return; } if (c.pc != 0x0012FD88u) [[unlikely]] return; }
L_0012FD88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 8736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD98u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x0012FD98u) [[unlikely]] return; }
L_0012FD98:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[4].w[0] - 4192u), 0u);
    st32((c.r[3].w[0] - 996u), 0u);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FDC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FDE0u);  if (depth < kMaxDepth) unit_000B(c, 335u, depth + 1u); else { c.pc = 0x0012F9F8u; return; } if (c.pc != 0x0012FDE0u) [[unlikely]] return; }
L_0012FDE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FDF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FE08u);  if (depth < kMaxDepth) unit_000B(c, 335u, depth + 1u); else { c.pc = 0x0012F9F8u; return; } if (c.pc != 0x0012FE08u) [[unlikely]] return; }
L_0012FE08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FE18:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], 0u + 12u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FE38u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x0012FE38u) [[unlikely]] return; }
L_0012FE38:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] - 14864u);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[17], c.r[16].w[0] + 84u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 204u), c.r[4].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FE60u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x0012FE60u) [[unlikely]] return; }
L_0012FE60:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], 0u + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 208u), c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FE80u);  if (depth < kMaxDepth) unit_0019(c, 203u, depth + 1u); else { c.pc = 0x001663E0u; return; } if (c.pc != 0x0012FE80u) [[unlikely]] return; }
L_0012FE80:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 96u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] + 10160u), c.r[5].w[0]);
    st32((c.r[4].w[0] - 29688u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 12228u), c.r[5].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FEA8u);  if (depth < kMaxDepth) unit_003B(c, 173u, depth + 1u); else { c.pc = 0x001EE858u; return; } if (c.pc != 0x0012FEA8u) [[unlikely]] return; }
L_0012FEA8:
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FEB8u);  if (depth < kMaxDepth) unit_0071(c, 259u, depth + 1u); else { c.pc = 0x002C6D70u; return; } if (c.pc != 0x0012FEB8u) [[unlikely]] return; }
L_0012FEB8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FEC4u);  if (depth < kMaxDepth) unit_0071(c, 260u, depth + 1u); else { c.pc = 0x002C6D90u; return; } if (c.pc != 0x0012FEC4u) [[unlikely]] return; }
L_0012FEC4:
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FED4u);  if (depth < kMaxDepth) unit_0071(c, 259u, depth + 1u); else { c.pc = 0x002C6D70u; return; } if (c.pc != 0x0012FED4u) [[unlikely]] return; }
L_0012FED4:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FEE0u);  if (depth < kMaxDepth) unit_0071(c, 260u, depth + 1u); else { c.pc = 0x002C6D90u; return; } if (c.pc != 0x0012FEE0u) [[unlikely]] return; }
L_0012FEE0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FF00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 12u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[19], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FF28u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x0012FF28u) [[unlikely]] return; }
L_0012FF28:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] - 14864u);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[17], c.r[16].w[0] + 84u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 204u), c.r[4].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FF50u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x0012FF50u) [[unlikely]] return; }
L_0012FF50:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], 0u + 2u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 208u), c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FF70u);  if (depth < kMaxDepth) unit_0019(c, 203u, depth + 1u); else { c.pc = 0x001663E0u; return; } if (c.pc != 0x0012FF70u) [[unlikely]] return; }
L_0012FF70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] - 29688u), c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FF80u);  if (depth < kMaxDepth) unit_003B(c, 173u, depth + 1u); else { c.pc = 0x001EE858u; return; } if (c.pc != 0x0012FF80u) [[unlikely]] return; }
L_0012FF80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7648u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 108u), c.r[19].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FF9Cu);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x0012FF9Cu) [[unlikely]] return; }
L_0012FF9C:
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FFACu);  if (depth < kMaxDepth) unit_0071(c, 259u, depth + 1u); else { c.pc = 0x002C6D70u; return; } if (c.pc != 0x0012FFACu) [[unlikely]] return; }
L_0012FFAC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FFB8u);  if (depth < kMaxDepth) unit_0071(c, 260u, depth + 1u); else { c.pc = 0x002C6D90u; return; } if (c.pc != 0x0012FFB8u) [[unlikely]] return; }
L_0012FFB8:
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FFC8u);  if (depth < kMaxDepth) unit_0071(c, 259u, depth + 1u); else { c.pc = 0x002C6D70u; return; } if (c.pc != 0x0012FFC8u) [[unlikely]] return; }
L_0012FFC8:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FFD4u);  if (depth < kMaxDepth) unit_0071(c, 260u, depth + 1u); else { c.pc = 0x002C6D90u; return; } if (c.pc != 0x0012FFD4u) [[unlikely]] return; }
L_0012FFD4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FFF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 2;
    [[clang::musttail]] return unit_000C(c, 1u, depth);
}

}
