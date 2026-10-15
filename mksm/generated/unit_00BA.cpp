#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BA[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5,
    0, 0, 0, 6, 0, 0, 7, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18,
    0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0,
    0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0,
    0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73,
    0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0,
    0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0,
    0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 141, 0, 0, 0, 142, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0,
    0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0,
    0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0,
    0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0,
    0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0,
    0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0,
    221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 248, 0, 249,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253,
    0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257,
    0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 268, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0,
    0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 288,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295,
    0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301,
    0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308,
    0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0,
    0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0,
    0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0,
    0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 337, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341,
    0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0,
    0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0,
    0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 367,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0,
    0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0,
    0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00BA(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003E8000;
    case 2u: goto L_003E802C;
    case 3u: goto L_003E8048;
    case 4u: goto L_003E806C;
    case 5u: goto L_003E807C;
    case 6u: goto L_003E808C;
    case 7u: goto L_003E8098;
    case 8u: goto L_003E809C;
    case 9u: goto L_003E80C8;
    case 10u: goto L_003E80EC;
    case 11u: goto L_003E8108;
    case 12u: goto L_003E812C;
    case 13u: goto L_003E813C;
    case 14u: goto L_003E8188;
    case 15u: goto L_003E81AC;
    case 16u: goto L_003E81C8;
    case 17u: goto L_003E81EC;
    case 18u: goto L_003E81FC;
    case 19u: goto L_003E821C;
    case 20u: goto L_003E8268;
    case 21u: goto L_003E82A0;
    case 22u: goto L_003E82B0;
    case 23u: goto L_003E82C4;
    case 24u: goto L_003E82F0;
    case 25u: goto L_003E8314;
    case 26u: goto L_003E8330;
    case 27u: goto L_003E8354;
    case 28u: goto L_003E8364;
    case 29u: goto L_003E83C0;
    case 30u: goto L_003E8414;
    case 31u: goto L_003E8420;
    case 32u: goto L_003E8440;
    case 33u: goto L_003E8470;
    case 34u: goto L_003E84B8;
    case 35u: goto L_003E84E0;
    case 36u: goto L_003E84F4;
    case 37u: goto L_003E850C;
    case 38u: goto L_003E8520;
    case 39u: goto L_003E8538;
    case 40u: goto L_003E8560;
    case 41u: goto L_003E8588;
    case 42u: goto L_003E85E0;
    case 43u: goto L_003E8634;
    case 44u: goto L_003E8660;
    case 45u: goto L_003E8684;
    case 46u: goto L_003E8694;
    case 47u: goto L_003E8724;
    case 48u: goto L_003E8758;
    case 49u: goto L_003E877C;
    case 50u: goto L_003E8790;
    case 51u: goto L_003E87B8;
    case 52u: goto L_003E87E8;
    case 53u: goto L_003E8818;
    case 54u: goto L_003E8850;
    case 55u: goto L_003E88D0;
    case 56u: goto L_003E8918;
    case 57u: goto L_003E8968;
    case 58u: goto L_003E89A8;
    case 59u: goto L_003E89B0;
    case 60u: goto L_003E8A40;
    case 61u: goto L_003E8A6C;
    case 62u: goto L_003E8A98;
    case 63u: goto L_003E8ABC;
    case 64u: goto L_003E8AE0;
    case 65u: goto L_003E8AFC;
    case 66u: goto L_003E8B40;
    case 67u: goto L_003E8B60;
    case 68u: goto L_003E8B74;
    case 69u: goto L_003E8B84;
    case 70u: goto L_003E8B8C;
    case 71u: goto L_003E8BB0;
    case 72u: goto L_003E8BE8;
    case 73u: goto L_003E8BFC;
    case 74u: goto L_003E8C18;
    case 75u: goto L_003E8C20;
    case 76u: goto L_003E8C38;
    case 77u: goto L_003E8C4C;
    case 78u: goto L_003E8C58;
    case 79u: goto L_003E8C78;
    case 80u: goto L_003E8C98;
    case 81u: goto L_003E8CB0;
    case 82u: goto L_003E8D60;
    case 83u: goto L_003E8D80;
    case 84u: goto L_003E8DA8;
    case 85u: goto L_003E8DF8;
    case 86u: goto L_003E8E08;
    case 87u: goto L_003E8E6C;
    case 88u: goto L_003E8EA4;
    case 89u: goto L_003E8ED4;
    case 90u: goto L_003E8F08;
    case 91u: goto L_003E8F60;
    case 92u: goto L_003E8F88;
    case 93u: goto L_003E9028;
    case 94u: goto L_003E9038;
    case 95u: goto L_003E9064;
    case 96u: goto L_003E90B0;
    case 97u: goto L_003E9110;
    case 98u: goto L_003E9128;
    case 99u: goto L_003E913C;
    case 100u: goto L_003E918C;
    case 101u: goto L_003E91EC;
    case 102u: goto L_003E91F8;
    case 103u: goto L_003E9228;
    case 104u: goto L_003E9270;
    case 105u: goto L_003E9288;
    case 106u: goto L_003E92AC;
    case 107u: goto L_003E92BC;
    case 108u: goto L_003E92DC;
    case 109u: goto L_003E92F0;
    case 110u: goto L_003E9318;
    case 111u: goto L_003E9328;
    case 112u: goto L_003E9338;
    case 113u: goto L_003E9348;
    case 114u: goto L_003E9370;
    case 115u: goto L_003E937C;
    case 116u: goto L_003E93B0;
    case 117u: goto L_003E9410;
    case 118u: goto L_003E9438;
    case 119u: goto L_003E9454;
    case 120u: goto L_003E9464;
    case 121u: goto L_003E94B8;
    case 122u: goto L_003E94E0;
    case 123u: goto L_003E9520;
    case 124u: goto L_003E9564;
    case 125u: goto L_003E956C;
    case 126u: goto L_003E9578;
    case 127u: goto L_003E9598;
    case 128u: goto L_003E95A8;
    case 129u: goto L_003E95B4;
    case 130u: goto L_003E95C8;
    case 131u: goto L_003E95D0;
    case 132u: goto L_003E9628;
    case 133u: goto L_003E9654;
    case 134u: goto L_003E9698;
    case 135u: goto L_003E96B8;
    case 136u: goto L_003E96C8;
    case 137u: goto L_003E96D0;
    case 138u: goto L_003E9718;
    case 139u: goto L_003E9744;
    case 140u: goto L_003E974C;
    case 141u: goto L_003E9758;
    case 142u: goto L_003E9768;
    case 143u: goto L_003E9770;
    case 144u: goto L_003E97A0;
    case 145u: goto L_003E97EC;
    case 146u: goto L_003E97FC;
    case 147u: goto L_003E9810;
    case 148u: goto L_003E9860;
    case 149u: goto L_003E9870;
    case 150u: goto L_003E98B0;
    case 151u: goto L_003E98BC;
    case 152u: goto L_003E98F8;
    case 153u: goto L_003E991C;
    case 154u: goto L_003E992C;
    case 155u: goto L_003E9940;
    case 156u: goto L_003E9958;
    case 157u: goto L_003E996C;
    case 158u: goto L_003E9980;
    case 159u: goto L_003E99B0;
    case 160u: goto L_003E99F0;
    case 161u: goto L_003E9A08;
    case 162u: goto L_003E9A20;
    case 163u: goto L_003E9A60;
    case 164u: goto L_003E9A74;
    case 165u: goto L_003E9AA0;
    case 166u: goto L_003E9AB0;
    case 167u: goto L_003E9B08;
    case 168u: goto L_003E9B38;
    case 169u: goto L_003E9B78;
    case 170u: goto L_003E9B88;
    case 171u: goto L_003E9BDC;
    case 172u: goto L_003E9C10;
    case 173u: goto L_003E9C58;
    case 174u: goto L_003E9C7C;
    case 175u: goto L_003E9CA8;
    case 176u: goto L_003E9CB8;
    case 177u: goto L_003E9CE8;
    case 178u: goto L_003E9D50;
    case 179u: goto L_003E9D88;
    case 180u: goto L_003E9D98;
    case 181u: goto L_003E9DB8;
    case 182u: goto L_003E9DC8;
    case 183u: goto L_003E9DF4;
    case 184u: goto L_003E9E04;
    case 185u: goto L_003E9E14;
    case 186u: goto L_003E9E24;
    case 187u: goto L_003E9E30;
    case 188u: goto L_003E9E50;
    case 189u: goto L_003E9E6C;
    case 190u: goto L_003E9E78;
    case 191u: goto L_003E9E84;
    case 192u: goto L_003E9E98;
    case 193u: goto L_003E9ECC;
    case 194u: goto L_003E9EF0;
    case 195u: goto L_003E9F08;
    case 196u: goto L_003E9F68;
    case 197u: goto L_003E9F70;
    case 198u: goto L_003E9F8C;
    case 199u: goto L_003E9FC8;
    case 200u: goto L_003E9FD8;
    case 201u: goto L_003E9FE0;
    case 202u: goto L_003EA01C;
    case 203u: goto L_003EA094;
    case 204u: goto L_003EA0C8;
    case 205u: goto L_003EA0F0;
    case 206u: goto L_003EA118;
    case 207u: goto L_003EA120;
    case 208u: goto L_003EA12C;
    case 209u: goto L_003EA150;
    case 210u: goto L_003EA160;
    case 211u: goto L_003EA168;
    case 212u: goto L_003EA18C;
    case 213u: goto L_003EA19C;
    case 214u: goto L_003EA1B4;
    case 215u: goto L_003EA1C4;
    case 216u: goto L_003EA1D4;
    case 217u: goto L_003EA1DC;
    case 218u: goto L_003EA210;
    case 219u: goto L_003EA258;
    case 220u: goto L_003EA26C;
    case 221u: goto L_003EA280;
    case 222u: goto L_003EA290;
    case 223u: goto L_003EA2B8;
    case 224u: goto L_003EA30C;
    case 225u: goto L_003EA320;
    case 226u: goto L_003EA350;
    case 227u: goto L_003EA3D4;
    case 228u: goto L_003EA3DC;
    case 229u: goto L_003EA454;
    case 230u: goto L_003EA470;
    case 231u: goto L_003EA478;
    case 232u: goto L_003EA498;
    case 233u: goto L_003EA4A4;
    case 234u: goto L_003EA4E0;
    case 235u: goto L_003EA4E8;
    case 236u: goto L_003EA4F0;
    case 237u: goto L_003EA550;
    case 238u: goto L_003EA598;
    case 239u: goto L_003EA5E8;
    case 240u: goto L_003EA660;
    case 241u: goto L_003EA69C;
    case 242u: goto L_003EA6AC;
    case 243u: goto L_003EA6D8;
    case 244u: goto L_003EA6E8;
    case 245u: goto L_003EA71C;
    case 246u: goto L_003EA748;
    case 247u: goto L_003EA770;
    case 248u: goto L_003EA774;
    case 249u: goto L_003EA77C;
    case 250u: goto L_003EA80C;
    case 251u: goto L_003EA820;
    case 252u: goto L_003EA830;
    case 253u: goto L_003EA87C;
    case 254u: goto L_003EA898;
    case 255u: goto L_003EA8CC;
    case 256u: goto L_003EA974;
    case 257u: goto L_003EA97C;
    case 258u: goto L_003EA984;
    case 259u: goto L_003EA9B0;
    case 260u: goto L_003EA9E0;
    case 261u: goto L_003EAA30;
    case 262u: goto L_003EAA4C;
    case 263u: goto L_003EAA5C;
    case 264u: goto L_003EAAB0;
    case 265u: goto L_003EAAC8;
    case 266u: goto L_003EAAE0;
    case 267u: goto L_003EAAF0;
    case 268u: goto L_003EAAF8;
    case 269u: goto L_003EAB68;
    case 270u: goto L_003EAB70;
    case 271u: goto L_003EAB94;
    case 272u: goto L_003EABB4;
    case 273u: goto L_003EABD8;
    case 274u: goto L_003EABE8;
    case 275u: goto L_003EAC10;
    case 276u: goto L_003EAC70;
    case 277u: goto L_003EAC88;
    case 278u: goto L_003EAC9C;
    case 279u: goto L_003EACA8;
    case 280u: goto L_003EACBC;
    case 281u: goto L_003EACD0;
    case 282u: goto L_003EAD0C;
    case 283u: goto L_003EAD34;
    case 284u: goto L_003EAD44;
    case 285u: goto L_003EADC4;
    case 286u: goto L_003EADDC;
    case 287u: goto L_003EADF0;
    case 288u: goto L_003EADFC;
    case 289u: goto L_003EAE10;
    case 290u: goto L_003EAE24;
    case 291u: goto L_003EAE70;
    case 292u: goto L_003EAE80;
    case 293u: goto L_003EAEA8;
    case 294u: goto L_003EAEE4;
    case 295u: goto L_003EAEFC;
    case 296u: goto L_003EAF14;
    case 297u: goto L_003EAF28;
    case 298u: goto L_003EAF34;
    case 299u: goto L_003EAF48;
    case 300u: goto L_003EAF5C;
    case 301u: goto L_003EAF7C;
    case 302u: goto L_003EAF94;
    case 303u: goto L_003EAFB4;
    case 304u: goto L_003EAFE4;
    case 305u: goto L_003EB000;
    case 306u: goto L_003EB038;
    case 307u: goto L_003EB098;
    case 308u: goto L_003EB0FC;
    case 309u: goto L_003EB104;
    case 310u: goto L_003EB174;
    case 311u: goto L_003EB188;
    case 312u: goto L_003EB1B0;
    case 313u: goto L_003EB1C0;
    case 314u: goto L_003EB1F8;
    case 315u: goto L_003EB22C;
    case 316u: goto L_003EB254;
    case 317u: goto L_003EB25C;
    case 318u: goto L_003EB2C0;
    case 319u: goto L_003EB304;
    case 320u: goto L_003EB400;
    case 321u: goto L_003EB448;
    case 322u: goto L_003EB458;
    case 323u: goto L_003EB468;
    case 324u: goto L_003EB478;
    case 325u: goto L_003EB488;
    case 326u: goto L_003EB4B8;
    case 327u: goto L_003EB4E8;
    case 328u: goto L_003EB538;
    case 329u: goto L_003EB56C;
    case 330u: goto L_003EB59C;
    case 331u: goto L_003EB5A4;
    case 332u: goto L_003EB5F8;
    case 333u: goto L_003EB608;
    case 334u: goto L_003EB620;
    case 335u: goto L_003EB630;
    case 336u: goto L_003EB660;
    case 337u: goto L_003EB694;
    case 338u: goto L_003EB69C;
    case 339u: goto L_003EB6A4;
    case 340u: goto L_003EB6C8;
    case 341u: goto L_003EB6FC;
    case 342u: goto L_003EB718;
    case 343u: goto L_003EB748;
    case 344u: goto L_003EB760;
    case 345u: goto L_003EB770;
    case 346u: goto L_003EB784;
    case 347u: goto L_003EB7A0;
    case 348u: goto L_003EB7A8;
    case 349u: goto L_003EB7B4;
    case 350u: goto L_003EB800;
    case 351u: goto L_003EB850;
    case 352u: goto L_003EB878;
    case 353u: goto L_003EB8A0;
    case 354u: goto L_003EB8B8;
    case 355u: goto L_003EB8C0;
    case 356u: goto L_003EB8F4;
    case 357u: goto L_003EB960;
    case 358u: goto L_003EBA48;
    case 359u: goto L_003EBA6C;
    case 360u: goto L_003EBA84;
    case 361u: goto L_003EBA98;
    case 362u: goto L_003EBAC0;
    case 363u: goto L_003EBB1C;
    case 364u: goto L_003EBB34;
    case 365u: goto L_003EBB60;
    case 366u: goto L_003EBB70;
    case 367u: goto L_003EBB7C;
    case 368u: goto L_003EBBE0;
    case 369u: goto L_003EBBF0;
    case 370u: goto L_003EBC04;
    case 371u: goto L_003EBC50;
    case 372u: goto L_003EBC78;
    case 373u: goto L_003EBCB0;
    case 374u: goto L_003EBD18;
    case 375u: goto L_003EBD44;
    case 376u: goto L_003EBE10;
    case 377u: goto L_003EBE44;
    case 378u: goto L_003EBE78;
    case 379u: goto L_003EBE84;
    case 380u: goto L_003EBEA4;
    case 381u: goto L_003EBEC0;
    case 382u: goto L_003EBEE8;
    case 383u: goto L_003EBF10;
    case 384u: goto L_003EBF34;
    case 385u: goto L_003EBF44;
    case 386u: goto L_003EBF70;
    case 387u: goto L_003EBFB8;
    case 388u: goto L_003EBFE0;
    default: bad_entry(c, 0x003E8000u); return;
    }
L_003E8000:
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E802Cu); if (c.r[5].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003E802Cu) [[unlikely]] return; }
L_003E802C:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] >= 0; c.r[2].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_003E8050; } }
    set32(c.r[4], ld32((c.r[22].w[0] + 2192u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8048u); set32(c.r[5], c.r[30].w[0] - 19656u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E8048u) [[unlikely]] return; }
L_003E8048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0])));  if (t) { goto L_003E8090; } }
L_003E8050:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { goto L_003E8084; } }
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[22].w[0] + 2192u)));
    set32(c.r[5], c.r[23].w[0] - 19592u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E806Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E806Cu) [[unlikely]] return; }
L_003E806C:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E807Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E807Cu) [[unlikely]] return; }
L_003E807C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0])));  if (t) { goto L_003E8090; } }
L_003E8084:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[20].w[0]);
    c.budget -= 2;
L_003E808C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_003E8090:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7FF0u | kUnwind; return; } [[clang::musttail]] return unit_00B9(c, 385u, depth); } }
L_003E8098:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.budget -= 1;
L_003E809C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 44u)));  goto L_003E815C; }
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 8u);  if (t) { goto L_003E8158; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[19], c.r[21].w[0] + 4u);
    set32(c.r[22], c.r[2].w[0] - 22720u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 6;
L_003E80C8:
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E80ECu); if (c.r[5].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003E80ECu) [[unlikely]] return; }
L_003E80EC:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] >= 0; c.r[2].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_003E8110; } }
    set32(c.r[4], ld32((c.r[22].w[0] + 2192u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8108u); set32(c.r[5], c.r[30].w[0] - 19656u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E8108u) [[unlikely]] return; }
L_003E8108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0])));  if (t) { goto L_003E8150; } }
L_003E8110:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { goto L_003E8144; } }
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[22].w[0] + 2192u)));
    set32(c.r[5], c.r[23].w[0] - 19592u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E812Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E812Cu) [[unlikely]] return; }
L_003E812C:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E813Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E813Cu) [[unlikely]] return; }
L_003E813C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0])));  if (t) { goto L_003E8150; } }
L_003E8144:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[20].w[0]);
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 3;
L_003E8150:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E80C8u | kUnwind; return; } goto L_003E80C8; } }
L_003E8158:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 1;
L_003E815C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], ld32((c.r[20].w[0] + 28u)));  goto L_003E821C; }
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 8u);  if (t) { goto L_003E8218; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[19], c.r[21].w[0] + 4u);
    set32(c.r[22], c.r[2].w[0] - 22720u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 6;
L_003E8188:
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E81ACu); if (c.r[5].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003E81ACu) [[unlikely]] return; }
L_003E81AC:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] >= 0; c.r[2].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_003E81D0; } }
    set32(c.r[4], ld32((c.r[22].w[0] + 2192u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E81C8u); set32(c.r[5], c.r[30].w[0] - 19656u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E81C8u) [[unlikely]] return; }
L_003E81C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0])));  if (t) { goto L_003E8210; } }
L_003E81D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { goto L_003E8204; } }
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[22].w[0] + 2192u)));
    set32(c.r[5], c.r[23].w[0] - 19592u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E81ECu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E81ECu) [[unlikely]] return; }
L_003E81EC:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E81FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E81FCu) [[unlikely]] return; }
L_003E81FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0])));  if (t) { goto L_003E8210; } }
L_003E8204:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[20].w[0]);
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 3;
L_003E8210:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8188u | kUnwind; return; } goto L_003E8188; } }
L_003E8218:
    set32(c.r[20], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 1;
L_003E821C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003E8234; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7FC8u | kUnwind; return; } [[clang::musttail]] return unit_00B9(c, 384u, depth); }
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_003E8234:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003E8268:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[18], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E82A0u); set32(c.r[4], ld32((c.r[18].w[0] + 2420u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E82A0u) [[unlikely]] return; }
L_003E82A0:
    set32(c.r[16], ld32((c.r[18].w[0] + 512u)));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E82B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003E82B0u) [[unlikely]] return; }
L_003E82B0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E82C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 170u, depth + 1u); else { c.pc = 0x003EDCD8u; return; } if (c.pc != 0x003E82C4u) [[unlikely]] return; }
L_003E82C4:
    set32(c.r[17], ld32((c.r[18].w[0] + 2252u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003E8390; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003E838C; } }
    set32(c.r[19], c.r[20].w[0] + 4u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 5;
L_003E82F0:
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8314u); if (c.r[5].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003E8314u) [[unlikely]] return; }
L_003E8314:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] >= 0; c.r[2].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_003E8338; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 2192u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8330u); set32(c.r[5], c.r[23].w[0] - 19656u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E8330u) [[unlikely]] return; }
L_003E8330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[17].w[0])));  if (t) { goto L_003E8378; } }
L_003E8338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { goto L_003E836C; } }
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 2192u)));
    set32(c.r[5], c.r[22].w[0] - 19592u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8354u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E8354u) [[unlikely]] return; }
L_003E8354:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8364u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E8364u) [[unlikely]] return; }
L_003E8364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[17].w[0])));  if (t) { goto L_003E8378; } }
L_003E836C:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 3;
L_003E8378:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003E8390; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E82F0u | kUnwind; return; } goto L_003E82F0; }
L_003E838C:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003E8390:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003E83C0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 2416u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_003E85B0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8414u); set32(c.r[18], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E8414u) [[unlikely]] return; }
L_003E8414:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_003E85B0; } }
L_003E8420:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003E8588; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003E8498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8440u); set32(c.r[16], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E8440u) [[unlikely]] return; }
L_003E8440:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003E8498; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_003E8498; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[5].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003E8498; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003E8498; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 3;
L_003E8470:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[3].w[0])));  if (t) { goto L_003E8498; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E8498; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[5].d[0];  if (t) { goto L_003E8498; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[4].d[0]; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8470u | kUnwind; return; } goto L_003E8470; } }
L_003E8498:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[22].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E8588; } }
    set32(c.r[7], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[5], c.r[2].w[0] - 19520u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E84B8u); c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E84B8u) [[unlikely]] return; }
L_003E84B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[30].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E8500; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { goto L_003E8500; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[16].d[0] | 65535ull;
    c.budget -= 4;
L_003E84E0:
    set32(c.r[6], ld32((c.r[3].w[0] + 20u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] - 19504u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E84F4u); c.r[6].d[0] = c.r[6].d[0] & c.r[16].d[0];  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E84F4u) [[unlikely]] return; }
L_003E84F4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E84E0u | kUnwind; return; } goto L_003E84E0; } }
L_003E8500:
    set32(c.r[5], c.r[23].w[0] - 19496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E850Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E850Cu) [[unlikely]] return; }
L_003E850C:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003E857C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8520u); set32(c.r[16], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E8520u) [[unlikely]] return; }
L_003E8520:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003E857C; } }
    set32(c.r[23], 0u + 2u);
    set32(c.r[20], 0u + 1u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
L_003E8538:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[23].d[0]; set32(c.r[6], 0u - 3u);  if (t) { goto L_003E8554; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[20].d[0]; set32(c.r[6], 0u - 2u);  if (t) { goto L_003E8554; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[6], 0u - 1u);  if (t) { goto L_003E8554; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_003E8554:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8560u); set32(c.r[5], c.r[17].w[0] - 19480u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E8560u) [[unlikely]] return; }
L_003E8560:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[3], c.r[19].w[0] << 2);
    c.r[4].d[0] = c.r[19].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8538u | kUnwind; return; } goto L_003E8538; } }
L_003E857C:
    set32(c.r[5], c.r[30].w[0] - 19472u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8588u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E8588u) [[unlikely]] return; }
L_003E8588:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[17], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 2416u)));
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8420u | kUnwind; return; } goto L_003E8420; } }
L_003E85B0:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003E85E0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[5].w[0] - 19464u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    set32(c.r[18], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8634u); set32(c.r[4], ld32((c.r[18].w[0] + 2192u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E8634u) [[unlikely]] return; }
L_003E8634:
    set32(c.r[16], ld32((c.r[18].w[0] + 2212u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[23].w[0] - 22720u);  goto L_003E86B0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[23].w[0] - 22720u);  goto L_003E86B0; }
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[18], 0u + 100u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 5;
L_003E8660:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { breakpoint(c, 0x003E8664u);  goto L_003E8668; }
L_003E8668:
    mmi::div(c, 0, c.r[17].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 56u)));  goto L_003E8688; }
    set32(c.r[4], ld32((c.r[19].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8684u); set32(c.r[5], c.r[21].w[0] - 19440u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E8684u) [[unlikely]] return; }
L_003E8684:
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_003E8688:
    set32(c.r[5], c.r[20].w[0] - 19480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8694u); set32(c.r[4], ld32((c.r[19].w[0] + 2192u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E8694u) [[unlikely]] return; }
L_003E8694:
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[23].w[0] - 22720u);  goto L_003E86B0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8660u | kUnwind; return; } goto L_003E8660; }
    set32(c.r[4], c.r[23].w[0] - 22720u);
    c.budget -= 1;
L_003E86B0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 2224u)));
    set32(c.r[5], c.r[22].w[0] - 19432u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[6].d[0] | 65535ull;  if (t) { goto L_003E86C8; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 1;
L_003E86C8:
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 2228u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[7].d[0] | 65535ull;  if (t) { goto L_003E86DC; } }
    set32(c.r[7], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 1;
L_003E86DC:
    c.r[8].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 2220u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = c.r[8].d[0] | 65535ull;  if (t) { goto L_003E86F0; } }
    set32(c.r[8], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 1;
L_003E86F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 2260u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E8710; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[3].d[0] & c.r[2].d[0];  if (t) { goto L_003E8718; } }
L_003E8710:
    c.r[9].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[9].d[0] = c.r[9].d[0] | 65535ull;
    c.budget -= 2;
L_003E8718:
    set32(c.r[4], ld32((c.r[4].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8724u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E8724u) [[unlikely]] return; }
L_003E8724:
    set32(c.r[3], c.r[23].w[0] - 22720u);
    set32(c.r[16], ld32((c.r[3].w[0] + 2252u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], c.r[23].w[0] - 22720u);  if (t) { goto L_003E87AC; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_003E87A8; } }
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[19], 0u + 100u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[18].d[0] | 65535ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 6;
L_003E8758:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { breakpoint(c, 0x003E875Cu);  goto L_003E8760; }
L_003E8760:
    mmi::div(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 20u)));  goto L_003E8780; }
    set32(c.r[4], ld32((c.r[20].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E877Cu); set32(c.r[5], c.r[22].w[0] - 19440u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E877Cu) [[unlikely]] return; }
L_003E877C:
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_003E8780:
    set32(c.r[5], c.r[21].w[0] - 19480u);
    set32(c.r[4], ld32((c.r[20].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8790u); c.r[6].d[0] = c.r[6].d[0] & c.r[18].d[0];  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E8790u) [[unlikely]] return; }
L_003E8790:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], c.r[23].w[0] - 22720u);  if (t) { goto L_003E87AC; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8758u | kUnwind; return; } goto L_003E8758; } }
L_003E87A8:
    set32(c.r[2], c.r[23].w[0] - 22720u);
    c.budget -= 1;
L_003E87AC:
    set32(c.r[5], c.r[30].w[0] - 19472u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E87B8u); set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E87B8u) [[unlikely]] return; }
L_003E87B8:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003E87E8:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[8].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E88A8; } }
    set32(c.r[2], c.r[8].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[2].w[0] + 2260u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E8838; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 2224u)));  goto L_003E883C; }
    c.budget -= 1;
L_003E8818:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_003E8834; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8818u | kUnwind; return; } goto L_003E8818; } }
L_003E8834:
    set32(c.r[2], c.r[8].w[0] - 22720u);
    c.budget -= 1;
L_003E8838:
    set32(c.r[3], ld32((c.r[2].w[0] + 2224u)));
    c.budget -= 1;
L_003E883C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] - 20104u);  goto L_003E8870; }
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] - 20104u);  goto L_003E8870; }
L_003E8850:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003E886C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8850u | kUnwind; return; } goto L_003E8850; } }
L_003E886C:
    set32(c.r[4], c.r[4].w[0] - 20104u);
    c.budget -= 1;
L_003E8870:
    set32(c.r[2], ld32((c.r[4].w[0] + 860u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 864u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 860u), c.r[2].w[0]);  if (t) { goto L_003E888C; } }
    st32((c.r[4].w[0] + 864u), c.r[6].w[0]);
    c.budget -= 1;
L_003E888C:
    set32(c.r[2], ld32((c.r[4].w[0] + 548u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 552u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 548u), c.r[2].w[0]);  if (t) { goto L_003E88A8; } }
    st32((c.r[4].w[0] + 552u), c.r[7].w[0]);
    c.budget -= 1;
L_003E88A8:
    set32(c.r[2], c.r[8].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[2].w[0] + 2260u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 2224u)));  goto L_003E88F8; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[8].w[0] - 22720u);  if (t) { goto L_003E88F4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
L_003E88D0:
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[8].w[0] - 22720u);  if (t) { goto L_003E88F4; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E88D0u | kUnwind; return; } goto L_003E88D0; }
    set32(c.r[2], c.r[8].w[0] - 22720u);
    c.budget -= 1;
L_003E88F4:
    set32(c.r[3], ld32((c.r[2].w[0] + 2224u)));
    c.budget -= 1;
L_003E88F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[2].w[0] + 2260u), 0u);  if (t) { goto L_003E8938; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[8].w[0] - 22720u);  if (t) { goto L_003E893C; } }
    set32(c.r[4], 0u - 1025u);
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 3;
L_003E8918:
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[8].w[0] - 22720u);  if (t) { goto L_003E893C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8918u | kUnwind; return; } goto L_003E8918; }
L_003E8938:
    set32(c.r[2], c.r[8].w[0] - 22720u);
    c.budget -= 1;
L_003E893C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[2].w[0] + 2224u), 0u);  if (t) { goto L_003E8994; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 2228u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[8].w[0] - 22720u);  if (t) { goto L_003E8990; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 60u)));
    c.r[2].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u - 2049u);  if (t) { goto L_003E898C; } }
    c.r[2].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 2;
L_003E8968:
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[8].w[0] - 22720u);  if (t) { goto L_003E8990; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 60u)));
    c.r[2].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] & c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8968u | kUnwind; return; } goto L_003E8968; } }
L_003E898C:
    set32(c.r[2], c.r[8].w[0] - 22720u);
    c.budget -= 1;
L_003E8990:
    st32((c.r[2].w[0] + 2232u), 0u);
    c.budget -= 1;
L_003E8994:
    set32(c.r[2], c.r[8].w[0] - 22720u);
    st32((c.r[2].w[0] + 2344u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 2228u), 0u);  c.pc = t; return; }
L_003E89A8:
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 2;
L_003E89B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[4], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 156u)));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[4].w[0] + 504u)));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[29].w[0]), 0u);  if (t) { goto L_003E8ED4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 476u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_003E8A98; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 2312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_003E8A90; } }
    set32(c.r[16], ld32((c.r[4].w[0] + 2212u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], c.r[30].w[0] - 22720u);  if (t) { goto L_003E8A8C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003E8A88; } }
    set32(c.r[18], 0u + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 2312u)));
    c.budget -= 2;
L_003E8A40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_003E8A58; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_003E8A74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 2204u)));  if (t) { goto L_003E8A64; } }
L_003E8A58:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_003E8A74; }
    set32(c.r[5], ld32((c.r[17].w[0] + 2200u)));
    c.budget -= 1;
L_003E8A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8A6Cu);  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003E8A6Cu) [[unlikely]] return; }
L_003E8A6C:
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 2;
L_003E8A74:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], c.r[30].w[0] - 22720u);  if (t) { goto L_003E8A8C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 2312u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8A40u | kUnwind; return; } goto L_003E8A40; }
L_003E8A88:
    set32(c.r[2], c.r[30].w[0] - 22720u);
    c.budget -= 1;
L_003E8A8C:
    st32((c.r[2].w[0] + 2312u), c.r[19].w[0]);
    c.budget -= 1;
L_003E8A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8A98u);  if (depth < kMaxDepth) unit_00BA(c, 116u, depth + 1u); else { c.pc = 0x003E93B0u; return; } if (c.pc != 0x003E8A98u) [[unlikely]] return; }
L_003E8A98:
    set32(c.r[16], c.r[30].w[0] - 22720u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 2392u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 2208u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 2344u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 2392u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8ABCu); st32((c.r[16].w[0] + 156u), 0u);  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003E8ABCu) [[unlikely]] return; }
L_003E8ABC:
    set32(c.r[3], ld32((c.r[16].w[0] + 2256u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 2212u)));
    st32((c.r[16].w[0] + 2412u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 2260u), c.r[3].w[0]);  if (t) { goto L_003E8B10; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = c.r[20].d[0] + 0ull;  goto L_003E8B14; }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_003E8AE0:
    c.r[2].d[0] = c.r[2].d[0] & 10240ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_003E8AFC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    if (c.r[20].d[0] == 0) c.r[20].d[0] = c.r[17].d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8AFCu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 90u, depth + 1u); else { c.pc = 0x003E8F08u; return; } if (c.pc != 0x003E8AFCu) [[unlikely]] return; }
L_003E8AFC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003E8B10; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8AE0u | kUnwind; return; } goto L_003E8AE0; }
L_003E8B10:
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003E8B14:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], c.r[30].w[0] - 22720u);  if (t) { goto L_003E8BC8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E8BC4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[22], c.r[2].w[0] - 22720u);
    set32(c.r[16], c.r[3].w[0] - 20104u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 6;
L_003E8B40:
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_003E8BB0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 32u)));  goto L_003E8B90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8B60u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E8B60u) [[unlikely]] return; }
L_003E8B60:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[5], c.r[19].w[0] - 19344u);  if (t) { goto L_003E8B84; } }
    set32(c.r[4], ld32((c.r[22].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8B74u); set32(c.r[6], ld32((c.r[17].w[0] + 56u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E8B74u) [[unlikely]] return; }
L_003E8B74:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8B84u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E8B84u) [[unlikely]] return; }
L_003E8B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8B8Cu); set32(c.r[4], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003E8B8Cu) [[unlikely]] return; }
L_003E8B8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_003E8B90:
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E8BB0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 824u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8BB0u); st32((c.r[16].w[0] + 824u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 178u, depth + 1u); else { c.pc = 0x003E9D50u; return; } if (c.pc != 0x003E8BB0u) [[unlikely]] return; }
L_003E8BB0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003E8BC4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8B40u | kUnwind; return; } goto L_003E8B40; }
L_003E8BC4:
    set32(c.r[2], c.r[30].w[0] - 22720u);
    c.budget -= 1;
L_003E8BC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 2216u)));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[19], c.r[3].w[0] - 20104u);
    set32(c.r[22], 0u + 8u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 2228u), c.r[4].w[0]);  if (t) { goto L_003E8C18; } }
    c.budget -= 1;
L_003E8BE8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[5], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8BFCu); set32(c.r[17], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003E8BFCu) [[unlikely]] return; }
L_003E8BFC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[22].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003E8C18; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 820u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C18u); st32((c.r[19].w[0] + 820u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 103u, depth + 1u); else { c.pc = 0x003E9228u; return; } if (c.pc != 0x003E8C18u) [[unlikely]] return; }
L_003E8C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C20u); set32(c.r[4], ld32((c.r[23].w[0] + 2412u)));  if (depth < kMaxDepth) unit_00BB(c, 208u, depth + 1u); else { c.pc = 0x003EE4C0u; return; } if (c.pc != 0x003E8C20u) [[unlikely]] return; }
L_003E8C20:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[2].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8BE8u | kUnwind; return; } goto L_003E8BE8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[16], c.r[4].w[0] - 20308u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003E8C38u) [[unlikely]] return; }
L_003E8C38:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[16], c.r[16].w[0] - 2412u);
    st32((c.r[16].w[0] + 2228u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C4Cu); st32((c.r[16].w[0] + 2260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 258u, depth + 1u); else { c.pc = 0x003E2F78u; return; } if (c.pc != 0x003E8C4Cu) [[unlikely]] return; }
L_003E8C4C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 52u, depth + 1u); else { c.pc = 0x003E87E8u; return; } if (c.pc != 0x003E8C58u) [[unlikely]] return; }
L_003E8C58:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[17].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003E8D34; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E8D38; } }
    set32(c.r[22], 0u + 512u);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
L_003E8C78:
    c.r[2].d[0] = c.r[2].d[0] & 2560ull;
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[22].d[0]) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003E8D20; }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003E8D1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C98u); set32(c.r[16], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E8C98u) [[unlikely]] return; }
L_003E8C98:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E8D1C; } }
    set32(c.r[6], c.r[19].w[0] - 20104u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 3;
L_003E8CB0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  if (t) { goto L_003E8CCC; } }
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E8D00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_003E8D00; } }
L_003E8CCC:
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E8CDC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_003E8CDC:
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[3].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_003E8D04; }
    set32(c.r[2], ld32((c.r[6].w[0] + 816u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[6].w[0] + 816u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_003E8D1C; } }
L_003E8D00:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003E8D04:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    c.r[4].d[0] = c.r[18].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8CB0u | kUnwind; return; } goto L_003E8CB0; } }
L_003E8D1C:
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_003E8D20:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = c.r[20].d[0] + 0ull;  goto L_003E8D38; }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8C78u | kUnwind; return; } goto L_003E8C78; }
L_003E8D34:
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003E8D38:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003E8E8C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E8E8C; } }
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[20], c.r[2].w[0] - 22720u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 4;
L_003E8D60:
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_003E8DC0; } }
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E8D90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8D80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 160u, depth + 1u); else { c.pc = 0x003E1C48u; return; } if (c.pc != 0x003E8D80u) [[unlikely]] return; }
L_003E8D80:
    set32(c.r[2], ld32((c.r[20].w[0] + 2232u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 2232u), c.r[2].w[0]);  if (t) { goto L_003E8E78; } }
L_003E8D90:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = c.r[17].d[0] + 0ull;  goto L_003E8DB8; }
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[16].d[0] = c.r[17].d[0] + 0ull;  goto L_003E8DB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8DA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 160u, depth + 1u); else { c.pc = 0x003E1C48u; return; } if (c.pc != 0x003E8DA8u) [[unlikely]] return; }
L_003E8DA8:
    set32(c.r[2], ld32((c.r[20].w[0] + 2232u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[20].w[0] + 2232u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_003E8DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003E8E78; } }
L_003E8DC0:
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E8E78; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; set32(c.r[2], c.r[30].w[0] - 22720u);  if (t) { goto L_003E8E08; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[5], c.r[22].w[0] - 19280u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[7].d[0] = c.r[7].d[0] | 65535ull;  if (t) { goto L_003E8DEC; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_003E8DEC:
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8DF8u); set32(c.r[6], ld32((c.r[17].w[0] + 56u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E8DF8u) [[unlikely]] return; }
L_003E8DF8:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8E08u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 104u, depth + 1u); else { c.pc = 0x003ED100u; return; } if (c.pc != 0x003E8E08u) [[unlikely]] return; }
L_003E8E08:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 60u)));  goto L_003E8E18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[19].w[0]);  if (t) { goto L_003E8E78; } }
L_003E8E18:
    c.r[2].d[0] = c.r[3].d[0] & c.r[21].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_003E8E78; } }
    c.r[19].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[18], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[17], c.r[30].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[19].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[19].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 460u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E8E64; } }
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 2;
L_003E8E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8E6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 160u, depth + 1u); else { c.pc = 0x003E1C48u; return; } if (c.pc != 0x003E8E6Cu) [[unlikely]] return; }
L_003E8E6C:
    set32(c.r[2], ld32((c.r[17].w[0] + 2232u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 2232u), c.r[2].w[0]);
    c.budget -= 3;
L_003E8E78:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003E8E8C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8D60u | kUnwind; return; } goto L_003E8D60; }
L_003E8E8C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], c.r[30].w[0] - 22720u);  if (t) { goto L_003E8EB8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003E8EBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8EA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 160u, depth + 1u); else { c.pc = 0x003E1C48u; return; } if (c.pc != 0x003E8EA4u) [[unlikely]] return; }
L_003E8EA4:
    set32(c.r[3], c.r[30].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 2232u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 2232u), c.r[2].w[0]);
    set32(c.r[3], c.r[30].w[0] - 22720u);
    c.budget -= 5;
L_003E8EB8:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_003E8EBC:
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    st32((c.r[3].w[0] + 156u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0] + 2344u), 0u);  if (t) { goto L_003E8ED4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8ED4u); set32(c.r[4], ld32((c.r[3].w[0] + 2212u)));  if (depth < kMaxDepth) unit_00B9(c, 133u, depth + 1u); else { c.pc = 0x003E5628u; return; } if (c.pc != 0x003E8ED4u) [[unlikely]] return; }
L_003E8ED4:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003E8F08:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] - 22720u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0]), 0u);  if (t) { goto L_003E8F60; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8F60u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 323u, depth + 1u); else { c.pc = 0x004026C0u; return; } if (c.pc != 0x003E8F60u) [[unlikely]] return; }
L_003E8F60:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  goto L_003E8FA8; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 8u);  if (t) { goto L_003E8FA4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    set32(c.r[6], 0u - 16385u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.budget -= 4;
L_003E8F88:
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8F88u | kUnwind; return; } goto L_003E8F88; } }
L_003E8FA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003E8FA8:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[4].w[0] + 2312u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003E9030; }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003E9030; }
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.f[1] = 0u;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 1588u));
    c.f[2] = ld32((c.r[2].w[0] - 4u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[3] = fp::add(c.f[0], c.f[0]);  if (t) { goto L_003E9010; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E9020; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E9030; } }
L_003E9010:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E9030; } }
L_003E9020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9028u); set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  if (depth < kMaxDepth) unit_00BE(c, 119u, depth + 1u); else { c.pc = 0x003F9700u; return; } if (c.pc != 0x003E9028u) [[unlikely]] return; }
L_003E9028:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003E9030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9038u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 135u, depth + 1u); else { c.pc = 0x004096D8u; return; } if (c.pc != 0x003E9038u) [[unlikely]] return; }
L_003E9038:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[18], c.r[4].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[18].w[0] + 2216u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 2392u)));
    st32((c.r[18].w[0] + 2224u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9064u); set32(c.r[5], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_00B8(c, 196u, depth + 1u); else { c.pc = 0x003E23E0u; return; } if (c.pc != 0x003E9064u) [[unlikely]] return; }
L_003E9064:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[16], ld32((c.r[18].w[0] + 2224u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E9184; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E9184; } }
    c.r[22].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0xFFFD0000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[22].d[0] = c.r[22].d[0] | 65535ull;
    c.r[21].d[0] = c.r[21].d[0] | 65535ull;
    c.r[20].d[0] = c.r[20].d[0] | 65535ull;
    c.r[30].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[23], 0u + 2u);
    c.r[19].d[0] = c.r[19].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 11;
L_003E90B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st32((c.r[16].w[0] + 16u), c.r[17].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[22].d[0];
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[21].d[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[20].d[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 460u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] | c.r[30].d[0];  if (t) { goto L_003E9144; } }
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9110u); set32(c.r[6], ld32((c.r[18].w[0] + 504u)));  if (depth < kMaxDepth) unit_00BE(c, 100u, depth + 1u); else { c.pc = 0x003F9378u; return; } if (c.pc != 0x003E9110u) [[unlikely]] return; }
L_003E9110:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 2312u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[23].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_003E9130; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9128u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 7u, depth + 1u); else { c.pc = 0x003F40F8u; return; } if (c.pc != 0x003E9128u) [[unlikely]] return; }
L_003E9128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_003E915C; } }
L_003E9130:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E913Cu); set32(c.r[6], ld32((c.r[18].w[0] + 504u)));  if (depth < kMaxDepth) unit_00BE(c, 100u, depth + 1u); else { c.pc = 0x003F9378u; return; } if (c.pc != 0x003E913Cu) [[unlikely]] return; }
L_003E913C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_003E915C; } }
L_003E9144:
    c.r[2].d[0] = c.r[3].d[0] & c.r[19].d[0];
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 6;
L_003E915C:
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[16].w[0] + 4u), c.f[1]);
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E9184; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E90B0u | kUnwind; return; } goto L_003E90B0; }
L_003E9184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E918Cu);  if (depth < kMaxDepth) unit_00B8(c, 229u, depth + 1u); else { c.pc = 0x003E2A20u; return; } if (c.pc != 0x003E918Cu) [[unlikely]] return; }
L_003E918C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[6], c.r[2].w[0] - 20104u);
    set32(c.r[2], ld32((c.r[6].w[0] + 804u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 812u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 808u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[6].w[0] + 804u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[6].w[0] + 812u), c.r[3].w[0]);  if (t) { goto L_003E91C0; } }
    st32((c.r[6].w[0] + 808u), c.r[5].w[0]);
    c.budget -= 1;
L_003E91C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], c.r[4].w[0] - 22720u);
    st32((c.r[3].w[0] + 2228u), 0u);
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E91E4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 2260u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003E91E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E91ECu); st32((c.r[3].w[0] + 2260u), 0u);  if (depth < kMaxDepth) unit_00B8(c, 258u, depth + 1u); else { c.pc = 0x003E2F78u; return; } if (c.pc != 0x003E91ECu) [[unlikely]] return; }
L_003E91EC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E91F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 52u, depth + 1u); else { c.pc = 0x003E87E8u; return; } if (c.pc != 0x003E91F8u) [[unlikely]] return; }
L_003E91F8:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003E9228:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 16;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E9364; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9270u); set32(c.r[17], ld32((c.r[5].w[0] + 4u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E9270u) [[unlikely]] return; }
L_003E9270:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003E9364; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[30], c.r[2].w[0] - 22720u);
    c.budget -= 3;
L_003E9288:
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == c.r[16].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E9348; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E92ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 238u, depth + 1u); else { c.pc = 0x003EEA80u; return; } if (c.pc != 0x003E92ACu) [[unlikely]] return; }
L_003E92AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_003E92E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E92BCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 238u, depth + 1u); else { c.pc = 0x003EEA80u; return; } if (c.pc != 0x003E92BCu) [[unlikely]] return; }
L_003E92BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E92CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_003E92F4; } }
L_003E92CC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E92DCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 492u, depth + 1u); else { c.pc = 0x00403DC0u; return; } if (c.pc != 0x003E92DCu) [[unlikely]] return; }
L_003E92DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E92F4; } }
L_003E92E4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E92F0u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_00BB(c, 238u, depth + 1u); else { c.pc = 0x003EEA80u; return; } if (c.pc != 0x003E92F0u) [[unlikely]] return; }
L_003E92F0:
    if (c.r[2].d[0] == 0) c.r[18].d[0] = 0ull;
    c.budget -= 1;
L_003E92F4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  goto L_003E932C; }
    set32(c.r[4], ld32((c.r[30].w[0] + 2192u)));
    set32(c.r[5], c.r[23].w[0] - 19176u);
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[8], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9318u); set32(c.r[9], ld32((c.r[21].w[0] + 56u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E9318u) [[unlikely]] return; }
L_003E9318:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9328u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 104u, depth + 1u); else { c.pc = 0x003ED100u; return; } if (c.pc != 0x003E9328u) [[unlikely]] return; }
L_003E9328:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_003E932C:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9338u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 254u, depth + 1u); else { c.pc = 0x003EEC60u; return; } if (c.pc != 0x003E9338u) [[unlikely]] return; }
L_003E9338:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9348u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 254u, depth + 1u); else { c.pc = 0x003EEC60u; return; } if (c.pc != 0x003E9348u) [[unlikely]] return; }
L_003E9348:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[3], c.r[19].w[0] << 2);
    c.r[4].d[0] = c.r[19].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9288u | kUnwind; return; } goto L_003E9288; } }
L_003E9364:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9370u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 135u, depth + 1u); else { c.pc = 0x004096D8u; return; } if (c.pc != 0x003E9370u) [[unlikely]] return; }
L_003E9370:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E937Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 135u, depth + 1u); else { c.pc = 0x004096D8u; return; } if (c.pc != 0x003E937Cu) [[unlikely]] return; }
L_003E937C:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003E93B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] - 22720u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 1564u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);  if (t) { goto L_003E9498; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 2396u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 2212u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[3].w[0] + 2396u), c.r[2].w[0]);  if (t) { goto L_003E9488; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003E9488; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 2;
L_003E9410:
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003E9474; }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003E9474; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 8u);  if (t) { goto L_003E9470; } }
    set32(c.r[19], c.r[20].w[0] - 22720u);
    c.budget -= 1;
L_003E9438:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 2396u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[16].w[0] + 12u);  if (t) { goto L_003E945C; } }
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9454u); set32(c.r[4], ld32((c.r[19].w[0] + 504u)));  if (depth < kMaxDepth) unit_00BB(c, 116u, depth + 1u); else { c.pc = 0x003ED338u; return; } if (c.pc != 0x003E9454u) [[unlikely]] return; }
L_003E9454:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 2;
L_003E945C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9464u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E9464u) [[unlikely]] return; }
L_003E9464:
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9438u | kUnwind; return; } goto L_003E9438; } }
L_003E9470:
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_003E9474:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], c.r[21].w[0] - 22720u);  if (t) { goto L_003E948C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9410u | kUnwind; return; } goto L_003E9410; }
L_003E9488:
    set32(c.r[3], c.r[21].w[0] - 22720u);
    c.budget -= 1;
L_003E948C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 1564u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.budget -= 3;
L_003E9498:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E94B8:
    set32(c.r[3], c.r[5].w[0] + 4u);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[7].w[0] << 2);  goto L_003E950C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_003E9504; } }
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_003E94E0:
    c.r[3].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[7].d[0] = 0ull;
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[7].w[0] << 2);  goto L_003E950C; }
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E94E0u | kUnwind; return; } goto L_003E94E0; }
L_003E9504:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { goto L_003E9514; } }
L_003E950C:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 2;
L_003E9514:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E9520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[16].w[0] + 424u)));
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  goto L_003E95B8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 468u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 124u)));  goto L_003E9580; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9564u); set32(c.r[4], ld32((c.r[16].w[0] + 2212u)));  if (depth < kMaxDepth) unit_00B9(c, 133u, depth + 1u); else { c.pc = 0x003E5628u; return; } if (c.pc != 0x003E9564u) [[unlikely]] return; }
L_003E9564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E956Cu); set32(c.r[4], ld32((c.r[16].w[0] + 2212u)));  if (depth < kMaxDepth) unit_00B9(c, 124u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x003E956Cu) [[unlikely]] return; }
L_003E956C:
    set32(c.r[4], ld32((c.r[16].w[0] + 2212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9578u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 31u, depth + 1u); else { c.pc = 0x003E44A8u; return; } if (c.pc != 0x003E9578u) [[unlikely]] return; }
L_003E9578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  if (t) { goto L_003E95B8; } }
L_003E9580:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  goto L_003E95B8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9598u); set32(c.r[4], ld32((c.r[2].w[0] - 17204u)));  if (depth < kMaxDepth) unit_00BC(c, 87u, depth + 1u); else { c.pc = 0x003F2398u; return; } if (c.pc != 0x003E9598u) [[unlikely]] return; }
L_003E9598:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  goto L_003E95B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E95A8u); set32(c.r[4], ld32((c.r[16].w[0] + 2212u)));  if (depth < kMaxDepth) unit_00B9(c, 124u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x003E95A8u) [[unlikely]] return; }
L_003E95A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 2212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E95B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 31u, depth + 1u); else { c.pc = 0x003E44A8u; return; } if (c.pc != 0x003E95B4u) [[unlikely]] return; }
L_003E95B4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003E95B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E95C8:
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 2;
L_003E95D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 22720u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 2312u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == c.r[18].d[0]; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);  if (t) { goto L_003E967C; } }
    set32(c.r[16], ld32((c.r[3].w[0] + 2212u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], c.r[20].w[0] - 22720u);  if (t) { goto L_003E9674; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003E9670; } }
    set32(c.r[19], 0u + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 2312u)));
    c.budget -= 2;
L_003E9628:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_003E9640; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_003E965C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 2204u)));  if (t) { goto L_003E964C; } }
L_003E9640:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_003E965C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 2200u)));
    c.budget -= 1;
L_003E964C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9654u);  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003E9654u) [[unlikely]] return; }
L_003E9654:
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 2;
L_003E965C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], c.r[20].w[0] - 22720u);  if (t) { goto L_003E9674; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 2312u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9628u | kUnwind; return; } goto L_003E9628; }
L_003E9670:
    set32(c.r[2], c.r[20].w[0] - 22720u);
    c.budget -= 1;
L_003E9674:
    st32((c.r[2].w[0] + 2312u), c.r[18].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.budget -= 2;
L_003E967C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003E9698:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E96B8u); set32(c.r[4], ld32((c.r[2].w[0] + 36u)));  if (depth < kMaxDepth) unit_00BB(c, 204u, depth + 1u); else { c.pc = 0x003EE420u; return; } if (c.pc != 0x003E96B8u) [[unlikely]] return; }
L_003E96B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E96C8u); set32(c.r[4], ld32((c.r[3].w[0] + 36u)));  if (depth < kMaxDepth) unit_00BB(c, 204u, depth + 1u); else { c.pc = 0x003EE420u; return; } if (c.pc != 0x003E96C8u) [[unlikely]] return; }
L_003E96C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E96D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003E96D0u) [[unlikely]] return; }
L_003E96D0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E9708; } }
    set32(c.r[3], c.r[3].w[0] - 20208u);
    set32(c.r[4], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    st32((c.r[3].w[0] + 76u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[16].w[0]);
    c.budget -= 12;
L_003E9708:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E9718:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 22720u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 2248u)));
    c.budget -= 9;
    if (c.r[16].d[0] == c.r[2].d[0]) { st32((c.r[3].w[0] + 2248u), 0u);  goto L_003E973C; }
L_003E973C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9744u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 293u, depth + 1u); else { c.pc = 0x003E3798u; return; } if (c.pc != 0x003E9744u) [[unlikely]] return; }
L_003E9744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E974Cu); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003E974Cu) [[unlikely]] return; }
L_003E974C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9758u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003E9758u) [[unlikely]] return; }
L_003E9758:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E9768:
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 2;
L_003E9770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20508u)));
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.f[1] = ld32((c.r[3].w[0] - 19072u));  if (t) { goto L_003E97DC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E97DC; } }
L_003E97A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E97C8; } }
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003E97C8; } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = c.f[0];
    c.budget -= 2;
L_003E97C8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003E97DC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E97A0u | kUnwind; return; } goto L_003E97A0; } }
L_003E97DC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);  goto L_003E9800; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E97ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 292u, depth + 1u); else { c.pc = 0x003E3730u; return; } if (c.pc != 0x003E97ECu) [[unlikely]] return; }
L_003E97EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E97FCu); set32(c.r[5], c.r[5].w[0] - 20500u);  if (depth < kMaxDepth) unit_00BA(c, 177u, depth + 1u); else { c.pc = 0x003E9CE8u; return; } if (c.pc != 0x003E97FCu) [[unlikely]] return; }
L_003E97FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003E9800:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E9810:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = ld32((c.r[2].w[0] - 19068u));  if (t) { goto L_003E989C; } }
    set32(c.r[16], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 8u);  if (t) { goto L_003E989C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[19], c.r[2].w[0] - 20104u);
    c.budget -= 2;
L_003E9860:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9870u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003E9870u) [[unlikely]] return; }
L_003E9870:
    c.f[0] = ld32((c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 76u)));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[19].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_003E9890; } }
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.budget -= 2;
L_003E9890:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9860u | kUnwind; return; } goto L_003E9860; } }
L_003E989C:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 60u)));  goto L_003E98C4; }
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E98B0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 204u, depth + 1u); else { c.pc = 0x003EE420u; return; } if (c.pc != 0x003E98B0u) [[unlikely]] return; }
L_003E98B0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E98BCu); set32(c.r[4], c.r[18].w[0] + 44u);  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E98BCu) [[unlikely]] return; }
L_003E98BC:
    st32((c.r[18].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 2;
L_003E98C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003E98F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E991Cu); set32(c.r[5], c.r[5].w[0] - 21320u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E991Cu) [[unlikely]] return; }
L_003E991C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E992Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E992Cu) [[unlikely]] return; }
L_003E992C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E9940:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003E9974; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { goto L_003E9974; } }
    c.budget -= 1;
L_003E9958:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[3], ld32((c.r[5].w[0])));  goto L_003E996C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; return; }
L_003E996C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9958u | kUnwind; return; } goto L_003E9958; } }
L_003E9974:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003E9980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[2], 0u + 3u);
    c.r[16].d[0] = c.r[4].d[0] | 1ull;
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E99B8; } }
    c.budget -= 1;
L_003E99B0:
    set32(c.r[16], c.r[16].w[0] + 2u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.budget -= 2;
L_003E99B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003E99BCu);  goto L_003E99C0; }
L_003E99C0:
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E99B0u | kUnwind; return; } goto L_003E99B0; } }
    set32(c.r[2], 0u + 5u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003E99D8u);  goto L_003E99DC; }
L_003E99DC:
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E99B0u | kUnwind; return; } goto L_003E99B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E99F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 116u, depth + 1u); else { c.pc = 0x003ED338u; return; } if (c.pc != 0x003E99F0u) [[unlikely]] return; }
L_003E99F0:
    set32(c.r[3], c.r[17].w[0] - 22720u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[3].w[0] + 2416u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9A08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 170u, depth + 1u); else { c.pc = 0x003EDCD8u; return; } if (c.pc != 0x003E9A08u) [[unlikely]] return; }
L_003E9A08:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E9A20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 20104u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 24u);
    c.r[18].d[0] = c.r[18].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 796u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9A60u); st32((c.r[3].w[0] + 796u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 87u, depth + 1u); else { c.pc = 0x003E0EB8u; return; } if (c.pc != 0x003E9A60u) [[unlikely]] return; }
L_003E9A60:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9A74u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x003E9A74u) [[unlikely]] return; }
L_003E9A74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[16], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[16].w[0] + 2288u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 2288u)));  goto L_003E9AB4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[5], c.r[5].w[0] - 19800u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9AA0u); c.r[6].d[0] = c.r[6].d[0] | 65535ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E9AA0u) [[unlikely]] return; }
L_003E9AA0:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9AB0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E9AB0u) [[unlikely]] return; }
L_003E9AB0:
    set32(c.r[3], ld32((c.r[16].w[0] + 2288u)));
    c.budget -= 1;
L_003E9AB4:
    set32(c.r[2], ld32((c.r[16].w[0] + 2244u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st32((c.r[16].w[0] + 2248u), c.r[17].w[0]);  goto L_003E9AC0; }
L_003E9AC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 2288u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] & c.r[18].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 2288u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[19].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E9B08:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], ld32((c.r[4].w[0])));  if (t) { goto L_003E9B1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_003E9B20; } }
L_003E9B1C:
    set32(c.r[10], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_003E9B20:
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E9B80; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[9], c.r[2].w[0] + 8u);  if (t) { goto L_003E9B80; } }
L_003E9B38:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[3], ld32((c.r[9].w[0])));  goto L_003E9B78; }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], ld32((c.r[3].w[0])));  if (t) { goto L_003E9B58; } }
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_003E9B60; } }
L_003E9B58:
    set32(c.r[8], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 2;
L_003E9B60:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[10].d[0]) { set32(c.r[3], ld32((c.r[9].w[0])));  goto L_003E9B78; }
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { st32((c.r[6].w[0]), c.r[8].w[0]);  goto L_003E9B70; }
L_003E9B70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; return; }
L_003E9B78:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9B38u | kUnwind; return; } goto L_003E9B38; } }
L_003E9B80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003E9B88:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E9BFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[17], c.r[2].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[17].w[0] + 512u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 2420u)));  goto L_003E9BD4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 504u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 516u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_003E9BFC; } }
L_003E9BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9BDCu); set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E9BDCu) [[unlikely]] return; }
L_003E9BDC:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 2420u)));  goto L_003E9BF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E9BFC; } }
L_003E9BF0:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
L_003E9BFC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E9C10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[4].w[0] + 4u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9C58u); if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[5].d[0];  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003E9C58u) [[unlikely]] return; }
L_003E9C58:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] >= 0; c.r[2].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_003E9C84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    set32(c.r[5], c.r[5].w[0] - 19656u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9C7Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E9C7Cu) [[unlikely]] return; }
L_003E9C7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);  if (t) { goto L_003E9CCC; } }
L_003E9C84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { goto L_003E9CC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 19592u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9CA8u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E9CA8u) [[unlikely]] return; }
L_003E9CA8:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9CB8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E9CB8u) [[unlikely]] return; }
L_003E9CB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);  if (t) { goto L_003E9CCC; } }
L_003E9CC0:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 3;
L_003E9CCC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E9CE8:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E9D00; } }
    set32(c.r[2], c.r[7].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[2].w[0] + 2216u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003E9D00:
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_003E9D14; } }
    st32((c.r[2].w[0] + 28u), c.r[4].w[0]);
    c.budget -= 1;
L_003E9D14:
    st32((c.r[6].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 2212u)));
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[6].d[0]) { st32((c.r[7].w[0] + 2212u), c.r[4].w[0]);  goto L_003E9D30; }
L_003E9D30:
    set32(c.r[2], ld32((c.r[7].w[0] + 2220u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[6].d[0]) { st32((c.r[7].w[0] + 2220u), c.r[4].w[0]);  goto L_003E9D3C; }
L_003E9D3C:
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 2264u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0] + 2264u), c.r[2].w[0]);  c.pc = t; return; }
L_003E9D50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9D88u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 238u, depth + 1u); else { c.pc = 0x003EEA80u; return; } if (c.pc != 0x003E9D88u) [[unlikely]] return; }
L_003E9D88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 40u)));  if (t) { goto L_003E9DC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9D98u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 238u, depth + 1u); else { c.pc = 0x003EEA80u; return; } if (c.pc != 0x003E9D98u) [[unlikely]] return; }
L_003E9D98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E9DA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_003E9DCC; } }
L_003E9DA8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9DB8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 492u, depth + 1u); else { c.pc = 0x00403DC0u; return; } if (c.pc != 0x003E9DB8u) [[unlikely]] return; }
L_003E9DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E9DCC; } }
L_003E9DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9DC8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 238u, depth + 1u); else { c.pc = 0x003EEA80u; return; } if (c.pc != 0x003E9DC8u) [[unlikely]] return; }
L_003E9DC8:
    c.r[19].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003E9DCC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E9E04; } }
    set32(c.r[8], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[5], c.r[5].w[0] - 19176u);
    set32(c.r[7], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9DF4u); c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E9DF4u) [[unlikely]] return; }
L_003E9DF4:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9E04u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 104u, depth + 1u); else { c.pc = 0x003ED100u; return; } if (c.pc != 0x003E9E04u) [[unlikely]] return; }
L_003E9E04:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9E14u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 254u, depth + 1u); else { c.pc = 0x003EEC60u; return; } if (c.pc != 0x003E9E14u) [[unlikely]] return; }
L_003E9E14:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9E24u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 254u, depth + 1u); else { c.pc = 0x003EEC60u; return; } if (c.pc != 0x003E9E24u) [[unlikely]] return; }
L_003E9E24:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9E30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 135u, depth + 1u); else { c.pc = 0x004096D8u; return; } if (c.pc != 0x003E9E30u) [[unlikely]] return; }
L_003E9E30:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E9E50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9E6Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00BA(c, 192u, depth + 1u); else { c.pc = 0x003E9E98u; return; } if (c.pc != 0x003E9E6Cu) [[unlikely]] return; }
L_003E9E6C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9E78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003E9E78u) [[unlikely]] return; }
L_003E9E78:
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9E84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 268u, depth + 1u); else { c.pc = 0x003EEEA8u; return; } if (c.pc != 0x003E9E84u) [[unlikely]] return; }
L_003E9E84:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E9E98:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[4], ld32((c.r[2].w[0] - 22216u)));
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9ECCu); set32(c.r[18], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_00BB(c, 116u, depth + 1u); else { c.pc = 0x003ED338u; return; } if (c.pc != 0x003E9ECCu) [[unlikely]] return; }
L_003E9ECC:
    set32(c.r[17], c.r[19].w[0] + 4u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_003E9F44; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_003E9F44; } }
    c.r[16].d[0] = c.r[16].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 2;
L_003E9EF0:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[2].w[0] + 20u)));  goto L_003E9F10; }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9F08u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E9F08u) [[unlikely]] return; }
L_003E9F08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_003E9F2C; } }
L_003E9F10:
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[16].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 4u);  goto L_003E9F2C; }
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 1;
L_003E9F2C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003E9F48; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9EF0u | kUnwind; return; } goto L_003E9EF0; }
L_003E9F44:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003E9F48:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003E9F68:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003E9F70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9F8Cu);  if (depth < kMaxDepth) unit_00C4(c, 81u, depth + 1u); else { c.pc = 0x00410B58u; return; } if (c.pc != 0x003E9F8Cu) [[unlikely]] return; }
L_003E9F8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 22720u);
    set32(c.r[4], ld32((c.r[3].w[0] + 392u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[3].w[0] + 2296u), c.r[2].d[0]);  if (t) { goto L_003E9FC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 2324u));
    c.f[0] = ld32((c.r[2].w[0] - 18888u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003E9FD0; } }
L_003E9FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9FC8u);  if (depth < kMaxDepth) unit_00BA(c, 246u, depth + 1u); else { c.pc = 0x003EA748u; return; } if (c.pc != 0x003E9FC8u) [[unlikely]] return; }
L_003E9FC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[18].w[0] - 22720u);  if (t) { goto L_003E9FE4; } }
L_003E9FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9FD8u);  if (depth < kMaxDepth) unit_00B9(c, 211u, depth + 1u); else { c.pc = 0x003E6670u; return; } if (c.pc != 0x003E9FD8u) [[unlikely]] return; }
L_003E9FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9FE0u);  if (depth < kMaxDepth) unit_00BA(c, 260u, depth + 1u); else { c.pc = 0x003EA9E0u; return; } if (c.pc != 0x003E9FE0u) [[unlikely]] return; }
L_003E9FE0:
    set32(c.r[3], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003E9FE4:
    c.r[2].d[0] = ld64((c.r[3].w[0] + 424u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EA190; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 2400u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[18].w[0] - 22720u);  if (t) { goto L_003EA04C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 432u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003EA020; }
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] - 22720u);  if (t) { goto L_003EA020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA01Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00C1(c, 3u, depth + 1u); else { c.pc = 0x00404010u; return; } if (c.pc != 0x003EA01Cu) [[unlikely]] return; }
L_003EA01C:
    set32(c.r[3], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003EA020:
    set32(c.r[2], ld32((c.r[3].w[0] + 2400u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[18].w[0] - 22720u);  if (t) { goto L_003EA04C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 432u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 116u)));  goto L_003EA050; }
    set32(c.r[2], ld32((c.r[3].w[0] + 2404u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 116u)));  goto L_003EA050; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 484u), 0u);  if (t) { goto L_003EA12C; } }
L_003EA04C:
    set32(c.r[2], ld32((c.r[6].w[0] + 116u)));
    c.budget -= 1;
L_003EA050:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003EA074; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 504u)));
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] - 22720u);  if (t) { goto L_003EA09C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003EA09C; } }
L_003EA074:
    set32(c.r[3], ld32((c.r[6].w[0] + 168u)));
    set32(c.r[4], c.r[2].w[0] - 19064u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003EA088; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 432u)));
    c.budget -= 1;
L_003EA088:
    c.f[13] = ld32((c.r[6].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA094u); c.f[12] = ld32((c.r[6].w[0] + 128u));  if (depth < kMaxDepth) unit_00C0(c, 459u, depth + 1u); else { c.pc = 0x00403850u; return; } if (c.pc != 0x003EA094u) [[unlikely]] return; }
L_003EA094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003EA0CC; } }
L_003EA09C:
    set32(c.r[2], ld32((c.r[3].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003EA0D8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 432u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003EA0C8; } }
    c.f[13] = ld32((c.r[3].w[0] + 40u));
    c.f[12] = ld32((c.r[3].w[0] + 128u));
    set32(c.r[4], c.r[4].w[0] - 19040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA0C8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 459u, depth + 1u); else { c.pc = 0x00403850u; return; } if (c.pc != 0x003EA0C8u) [[unlikely]] return; }
L_003EA0C8:
    set32(c.r[2], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003EA0CC:
    set32(c.r[3], ld32((c.r[2].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003EA0F0; } }
L_003EA0D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 432u)));
    set32(c.r[4], c.r[4].w[0] - 19008u);
    c.f[12] = ld32((c.r[2].w[0] + 132u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA0F0u); c.f[13] = ld32((c.r[2].w[0] + 44u));  if (depth < kMaxDepth) unit_00C0(c, 459u, depth + 1u); else { c.pc = 0x00403850u; return; } if (c.pc != 0x003EA0F0u) [[unlikely]] return; }
L_003EA0F0:
    set32(c.r[16], c.r[18].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[16].w[0] + 2228u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 2212u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 484u)));  goto L_003EA134; }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA118u); st32((c.r[16].w[0] + 2348u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 13u, depth + 1u); else { c.pc = 0x003EC238u; return; } if (c.pc != 0x003EA118u) [[unlikely]] return; }
L_003EA118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA120u); st32((c.r[16].w[0] + 2348u), 0u);  if (depth < kMaxDepth) unit_00B8(c, 167u, depth + 1u); else { c.pc = 0x003E1DF8u; return; } if (c.pc != 0x003EA120u) [[unlikely]] return; }
L_003EA120:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA12Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BA(c, 52u, depth + 1u); else { c.pc = 0x003E87E8u; return; } if (c.pc != 0x003EA12Cu) [[unlikely]] return; }
L_003EA12C:
    set32(c.r[16], c.r[18].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 2;
L_003EA134:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] - 22720u);  if (t) { goto L_003EA16C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 384u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003EA160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA150u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 275u, depth + 1u); else { c.pc = 0x003EAC10u; return; } if (c.pc != 0x003EA150u) [[unlikely]] return; }
L_003EA150:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA160u); set32(c.r[5], c.r[5].w[0] - 18984u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EA160u) [[unlikely]] return; }
L_003EA160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA168u);  if (depth < kMaxDepth) unit_00B8(c, 316u, depth + 1u); else { c.pc = 0x003E3B50u; return; } if (c.pc != 0x003EA168u) [[unlikely]] return; }
L_003EA168:
    set32(c.r[3], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003EA16C:
    set32(c.r[2], ld32((c.r[3].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EA190; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 2328u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EA190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA18Cu);  if (depth < kMaxDepth) unit_00B9(c, 346u, depth + 1u); else { c.pc = 0x003E7A60u; return; } if (c.pc != 0x003EA18Cu) [[unlikely]] return; }
L_003EA18C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003EA190:
    set32(c.r[16], c.r[2].w[0] - 20208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA19Cu); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003EA19Cu) [[unlikely]] return; }
L_003EA19C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[18].w[0] - 22720u);  if (t) { goto L_003EA1D4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA1B4u); set32(c.r[16], c.r[16].w[0] - 18952u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003EA1B4u) [[unlikely]] return; }
L_003EA1B4:
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA1C4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EA1C4u) [[unlikely]] return; }
L_003EA1C4:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA1D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003EA1D4u) [[unlikely]] return; }
L_003EA1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA1DCu);  if (depth < kMaxDepth) unit_00C4(c, 81u, depth + 1u); else { c.pc = 0x00410B58u; return; } if (c.pc != 0x003EA1DCu) [[unlikely]] return; }
L_003EA1DC:
    set32(c.r[3], c.r[18].w[0] - 22720u);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = ld64((c.r[3].w[0] + 2296u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] - c.r[5].d[0];
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[3].w[0] + 2380u), c.r[4].w[0]);
    st64((c.r[3].w[0] + 2296u), c.r[2].d[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EA210:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA258u); st32((c.r[16].w[0] + 2328u), 0u);  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003EA258u) [[unlikely]] return; }
L_003EA258:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[16].w[0] + 2420u);  if (t) { goto L_003EA26C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA26Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003EA26Cu) [[unlikely]] return; }
L_003EA26C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003EA290; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA280u); set32(c.r[5], c.r[5].w[0] - 18880u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EA280u) [[unlikely]] return; }
L_003EA280:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA290u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003EA290u) [[unlikely]] return; }
L_003EA290:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003EA314; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[29].d[0] + 0ull;
    c.r[10].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA2B8u); c.r[11].d[0] = c.r[29].d[0] | 8ull;  if (depth < kMaxDepth) unit_00BC(c, 148u, depth + 1u); else { c.pc = 0x003F2EA0u; return; } if (c.pc != 0x003EA2B8u) [[unlikely]] return; }
L_003EA2B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[8], c.r[3].w[0] - 20104u);
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 648u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    swl(c.r[3], (c.r[8].w[0] + 651u));
    swr(c.r[3], (c.r[8].w[0] + 648u));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EA314; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 588u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[8].w[0] + 588u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA30Cu); st32((c.r[18].w[0] + 60u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 373u, depth + 1u); else { c.pc = 0x003EBCB0u; return; } if (c.pc != 0x003EA30Cu) [[unlikely]] return; }
L_003EA30C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003EA720; } }
L_003EA314:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA320u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 275u, depth + 1u); else { c.pc = 0x003EAC10u; return; } if (c.pc != 0x003EA320u) [[unlikely]] return; }
L_003EA320:
    set32(c.r[3], c.r[20].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 428u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003EA340; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 2316u)));
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 60u)));  goto L_003EA510; }
L_003EA340:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] | 12ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA350u); set32(c.r[7], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00BA(c, 307u, depth + 1u); else { c.pc = 0x003EB098u; return; } if (c.pc != 0x003EA350u) [[unlikely]] return; }
L_003EA350:
    set32(c.r[4], c.r[20].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 12u)));  if (t) { goto L_003EA3AC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EA3B0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 2320u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[20].w[0] - 22720u);  if (t) { goto L_003EA3B4; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[6], c.r[6].w[0] - 20104u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 580u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[6].w[0] + 580u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_003EA714; } }
L_003EA3AC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003EA3B0:
    set32(c.r[19], c.r[20].w[0] - 22720u);
    c.budget -= 1;
L_003EA3B4:
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 20104u);
    set32(c.r[17], ld32((c.r[19].w[0] + 2280u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 680u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA3D4u); st32((c.r[16].w[0] + 680u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B9(c, 322u, depth + 1u); else { c.pc = 0x003E7408u; return; } if (c.pc != 0x003EA3D4u) [[unlikely]] return; }
L_003EA3D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA3DCu); c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 278u, depth + 1u); else { c.pc = 0x003E33C0u; return; } if (c.pc != 0x003EA3DCu) [[unlikely]] return; }
L_003EA3DC:
    set32(c.r[3], ld32((c.r[19].w[0] + 2264u)));
    c.f[5] = ld32((c.r[19].w[0] + 504u));
    c.f[5] = fp::cvt_s_w(c.f[5]);
    set32(c.r[4], ld32((c.r[19].w[0] + 2232u)));
    c.f[2] = ld32((c.r[19].w[0] + 2268u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[2], ld32((c.r[19].w[0] + 2280u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.f[4] = ld32((c.r[16].w[0] + 540u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[3] = ld32((c.r[16].w[0] + 544u));
    set32(c.r[2], ld32((c.r[19].w[0] + 156u)));
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[1], c.f[1]);
    c.f[4] = fp::add(c.f[4], c.f[1]);
    c.f[3] = fp::add(c.f[3], c.f[2]);
    st32((c.r[16].w[0] + 540u), c.f[4]);
    c.budget -= 27;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 544u), c.f[3]);  if (t) { goto L_003EA4E0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 2224u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA454u); set32(c.r[5], ld32((c.r[29].w[0] + 16u)));  if (depth < kMaxDepth) unit_00B9(c, 191u, depth + 1u); else { c.pc = 0x003E5F88u; return; } if (c.pc != 0x003EA454u) [[unlikely]] return; }
L_003EA454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] - 22720u);  if (t) { goto L_003EA4CC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 2320u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] - 22720u);  if (t) { goto L_003EA4CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[19].w[0] + 2224u)));  if (t) { goto L_003EA47C; } }
L_003EA470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA478u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 160u, depth + 1u); else { c.pc = 0x003E1C48u; return; } if (c.pc != 0x003EA478u) [[unlikely]] return; }
L_003EA478:
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_003EA47C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003EA490; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA470u | kUnwind; return; } goto L_003EA470; } }
L_003EA490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA498u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 138u, depth + 1u); else { c.pc = 0x003E9718u; return; } if (c.pc != 0x003EA498u) [[unlikely]] return; }
L_003EA498:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA4A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BA(c, 52u, depth + 1u); else { c.pc = 0x003E87E8u; return; } if (c.pc != 0x003EA4A4u) [[unlikely]] return; }
L_003EA4A4:
    set32(c.r[5], c.r[22].w[0] - 20104u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 584u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 584u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_003EA720; } }
L_003EA4CC:
    set32(c.r[3], ld32((c.r[2].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EA4E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA4E0u);  if (depth < kMaxDepth) unit_00B8(c, 143u, depth + 1u); else { c.pc = 0x003E1918u; return; } if (c.pc != 0x003EA4E0u) [[unlikely]] return; }
L_003EA4E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA4E8u);  if (depth < kMaxDepth) unit_00B8(c, 229u, depth + 1u); else { c.pc = 0x003E2A20u; return; } if (c.pc != 0x003EA4E8u) [[unlikely]] return; }
L_003EA4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA4F0u);  if (depth < kMaxDepth) unit_00B8(c, 258u, depth + 1u); else { c.pc = 0x003E2F78u; return; } if (c.pc != 0x003EA4F0u) [[unlikely]] return; }
L_003EA4F0:
    set32(c.r[3], c.r[20].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 424u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_003EA524; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 2316u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], c.r[20].w[0] - 22720u);  if (t) { goto L_003EA528; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 1;
L_003EA510:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_003EA720; } }
L_003EA524:
    set32(c.r[17], c.r[20].w[0] - 22720u);
    c.budget -= 1;
L_003EA528:
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 2348u), 0u);  if (t) { goto L_003EA540; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  goto L_003EA5CC; }
L_003EA540:
    c.f[12] = ld32((c.r[17].w[0] + 128u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA550u); c.f[13] = ld32((c.r[17].w[0] + 40u));  if (depth < kMaxDepth) unit_00C0(c, 442u, depth + 1u); else { c.pc = 0x00403678u; return; } if (c.pc != 0x003EA550u) [[unlikely]] return; }
L_003EA550:
    set32(c.r[3], c.r[22].w[0] - 20104u);
    set32(c.r[2], ld32((c.r[3].w[0] + 780u)));
    c.r[2].d[0] = c.r[2].sd[0] < 51ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 2224u)));  goto L_003EA570; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 20u);  if (t) { goto L_003EA5D8; } }
L_003EA570:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 20u);  if (t) { goto L_003EA5DC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003EA5E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003EA5D8; } }
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_003EA598:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003EA5E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EA5E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA598u | kUnwind; return; } goto L_003EA598; } }
    set32(c.r[3], c.r[20].w[0] - 22720u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 2348u), c.r[2].w[0]);  if (t) { goto L_003EA5E0; } }
L_003EA5CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 20u);  if (t) { goto L_003EA5DC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003EA5D8:
    st32((c.r[17].w[0] + 2348u), c.r[2].w[0]);
    c.budget -= 1;
L_003EA5DC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EA5E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA5E8u); set32(c.r[17], c.r[20].w[0] - 22720u);  if (depth < kMaxDepth) unit_00BB(c, 13u, depth + 1u); else { c.pc = 0x003EC238u; return; } if (c.pc != 0x003EA5E8u) [[unlikely]] return; }
L_003EA5E8:
    set32(c.r[16], c.r[22].w[0] - 20104u);
    set32(c.r[3], ld32((c.r[17].w[0] + 2268u)));
    c.f[1] = ld32((c.r[17].w[0] + 504u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], ld32((c.r[17].w[0] + 512u)));
    c.f[2] = ld32((c.r[29].w[0] + 20u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[5] = c.r[3].w[0];
    c.f[5] = fp::cvt_s_w(c.f[5]);
    c.f[4] = ld32((c.r[16].w[0] + 664u));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 668u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 660u)));
    st32((c.r[17].w[0] + 2348u), 0u);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 660u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 2352u), 0u);
    fpu_div(c, 1u, c.f[1], c.f[5]);
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[2]);
    c.f[4] = fp::add(c.f[4], c.f[2]);
    c.f[3] = fp::add(c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 664u), c.f[4]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA660u); st32((c.r[16].w[0] + 668u), c.f[3]);  if (depth < kMaxDepth) unit_00B8(c, 167u, depth + 1u); else { c.pc = 0x003E1DF8u; return; } if (c.pc != 0x003EA660u) [[unlikely]] return; }
L_003EA660:
    set32(c.r[3], ld32((c.r[17].w[0] + 2268u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 440u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 440u), c.r[3].w[0]);  goto L_003EA674; }
L_003EA674:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 2344u), 0u);  if (t) { goto L_003EA6B4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 2264u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2000ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 2224u)));  goto L_003EA6A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA69Cu);  if (depth < kMaxDepth) unit_00BA(c, 42u, depth + 1u); else { c.pc = 0x003E85E0u; return; } if (c.pc != 0x003EA69Cu) [[unlikely]] return; }
L_003EA69C:
    set32(c.r[4], ld32((c.r[17].w[0] + 2224u)));
    c.budget -= 1;
L_003EA6A0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA6ACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BC(c, 120u, depth + 1u); else { c.pc = 0x003F27E8u; return; } if (c.pc != 0x003EA6ACu) [[unlikely]] return; }
L_003EA6AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EA6D0; } }
L_003EA6B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] - 22720u);  if (t) { goto L_003EA6EC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 2264u)));
    c.r[2].d[0] = c.r[2].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EA6E0; } }
L_003EA6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA6D8u); set32(c.r[4], ld32((c.r[17].w[0] + 2212u)));  if (depth < kMaxDepth) unit_00B9(c, 133u, depth + 1u); else { c.pc = 0x003E5628u; return; } if (c.pc != 0x003EA6D8u) [[unlikely]] return; }
L_003EA6D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[20].w[0] - 22720u);  if (t) { goto L_003EA6EC; } }
L_003EA6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA6E8u); set32(c.r[4], ld32((c.r[17].w[0] + 2224u)));  if (depth < kMaxDepth) unit_00B9(c, 133u, depth + 1u); else { c.pc = 0x003E5628u; return; } if (c.pc != 0x003EA6E8u) [[unlikely]] return; }
L_003EA6E8:
    set32(c.r[3], c.r[20].w[0] - 22720u);
    c.budget -= 1;
L_003EA6EC:
    set32(c.r[2], ld32((c.r[3].w[0] + 428u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_003EA70C; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 2316u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003EA710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EA720; } }
L_003EA70C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_003EA710:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_003EA714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA71Cu);  if (depth < kMaxDepth) unit_00BA(c, 52u, depth + 1u); else { c.pc = 0x003E87E8u; return; } if (c.pc != 0x003EA71Cu) [[unlikely]] return; }
L_003EA71C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003EA720:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003EA748:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    st32((c.r[3].w[0] - 20416u), c.r[2].w[0]);
    c.budget -= 10;
L_003EA770:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003EA774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA77Cu); set32(c.r[4], c.r[4].w[0] - 20784u);  if (depth < kMaxDepth) unit_00DD(c, 54u, depth + 1u); else { c.pc = 0x004748CCu; return; } if (c.pc != 0x003EA77Cu) [[unlikely]] return; }
L_003EA77C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EA7C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], c.r[2].w[0] - 20104u);
    set32(c.r[3], c.r[3].w[0] - 22720u);
    c.f[1] = ld32((c.r[3].w[0] + 2324u));
    c.f[0] = ld32((c.r[4].w[0] + 708u));
    set32(c.r[2], ld32((c.r[4].w[0] + 704u)));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 704u), c.r[2].w[0]);  if (t) { goto L_003EA7B4; } }
    st32((c.r[4].w[0] + 708u), c.f[1]);
    c.budget -= 1;
L_003EA7B4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 2452u), 0u);
    st32((c.r[3].w[0] + 424u), c.r[2].w[0]);
    c.budget -= 3;
L_003EA7C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[17], c.r[2].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[17].w[0] + 392u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] - 22720u);  if (t) { goto L_003EA850; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[12] = ld32((c.r[17].w[0] + 2324u));
    c.f[0] = ld32((c.r[2].w[0] - 18624u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EA84C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 2308u)));
    c.r[2].d[0] = c.r[2].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 2308u)));  goto L_003EA834; }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA80Cu); set32(c.r[16], c.r[16].w[0] - 18808u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003EA80Cu) [[unlikely]] return; }
L_003EA80C:
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 2308u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA820u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EA820u) [[unlikely]] return; }
L_003EA820:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA830u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003EA830u) [[unlikely]] return; }
L_003EA830:
    set32(c.r[2], ld32((c.r[17].w[0] + 2308u)));
    c.budget -= 1;
L_003EA834:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EA86C; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  goto L_003EA9BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003EA870; } }
L_003EA84C:
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.budget -= 1;
L_003EA850:
    set32(c.r[3], ld32((c.r[2].w[0] + 2308u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  goto L_003EA86C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 392u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EA9B8; } }
L_003EA86C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_003EA870:
    set32(c.r[16], c.r[2].w[0] - 22720u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA87Cu); st32((c.r[16].w[0] + 424u), 0u);  if (depth < kMaxDepth) unit_00B7(c, 32u, depth + 1u); else { c.pc = 0x003DC498u; return; } if (c.pc != 0x003EA87Cu) [[unlikely]] return; }
L_003EA87C:
    set32(c.r[2], ld32((c.r[16].w[0] + 2308u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 1560u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 2308u), c.r[2].w[0]);  if (t) { goto L_003EA8A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA898u); set32(c.r[4], c.r[16].w[0] + 1044u);  if (depth < kMaxDepth) unit_0042(c, 174u, depth + 1u); else { c.pc = 0x0020B398u; return; } if (c.pc != 0x003EA898u) [[unlikely]] return; }
L_003EA898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1560u), c.r[2].w[0]);  if (t) { goto L_003EA8B0; } }
L_003EA8A0:
    set32(c.r[2], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], 0u + 80u);
    st8((c.r[2].w[0] + 1044u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1556u), c.r[3].w[0]);
    c.budget -= 4;
L_003EA8B0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[16].w[0] - 20412u);
    set32(c.r[4], c.r[4].w[0] - 18632u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA8CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003EA8CCu) [[unlikely]] return; }
L_003EA8CC:
    set32(c.r[16], c.r[16].w[0] - 2308u);
    set32(c.r[3], ld32((c.r[16].w[0] + 2308u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 392u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EA94C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 440u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 444u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_003EA91C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[16].w[0] + 448u));
    c.f[0] = ld32((c.r[2].w[0] - 18624u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EA920; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 452u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EA93C; } }
L_003EA91C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003EA920:
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[2].w[0] + 88u)));
    st32((c.r[2].w[0] + 88u), 0u);
    if (c.r[3].d[0] == 0) c.r[3].d[0] = c.r[4].d[0];
    st32((c.r[2].w[0] + 436u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 7;
L_003EA93C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 22632u)));
    st32((c.r[4].w[0] - 20152u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 4;
L_003EA94C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[2].w[0] - 22720u);
    c.f[20] = ld32((c.r[3].w[0] - 18624u));
    c.f[0] = ld32((c.r[16].w[0] + 2324u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EA974; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA974u);  if (depth < kMaxDepth) unit_00BD(c, 160u, depth + 1u); else { c.pc = 0x003F6D88u; return; } if (c.pc != 0x003EA974u) [[unlikely]] return; }
L_003EA974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA97Cu);  if (depth < kMaxDepth) unit_00B9(c, 211u, depth + 1u); else { c.pc = 0x003E6670u; return; } if (c.pc != 0x003EA97Cu) [[unlikely]] return; }
L_003EA97C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA984u);  if (depth < kMaxDepth) unit_00BA(c, 260u, depth + 1u); else { c.pc = 0x003EA9E0u; return; } if (c.pc != 0x003EA984u) [[unlikely]] return; }
L_003EA984:
    c.f[0] = ld32((c.r[16].w[0] + 2324u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA774u | kUnwind; return; } goto L_003EA774; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA770u | kUnwind; return; } goto L_003EA770; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA9B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 31u, depth + 1u); else { c.pc = 0x003E44A8u; return; } if (c.pc != 0x003EA9B0u) [[unlikely]] return; }
L_003EA9B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA774u | kUnwind; return; } goto L_003EA774; } }
L_003EA9B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003EA9BC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[2].w[0] - 20416u), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EA9E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 2212u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_003EAA78; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003EAA78; } }
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 2;
L_003EAA30:
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 3072ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] - 18616u);  if (t) { goto L_003EAA5C; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAA4Cu); set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EAA4Cu) [[unlikely]] return; }
L_003EAA4C:
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAA5Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003EAA5Cu) [[unlikely]] return; }
L_003EAA5C:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_003EAA78; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EAA30u | kUnwind; return; } goto L_003EAA30; } }
L_003EAA78:
    set32(c.r[3], c.r[18].w[0] - 22720u);
    set32(c.r[16], ld32((c.r[3].w[0] + 2252u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003EAB58; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_003EAB54; } }
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    c.r[21].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[17].d[0] = c.r[17].d[0] | 65535ull;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 7;
L_003EAAB0:
    c.r[2].d[0] = c.r[6].d[0] & c.r[21].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[6].d[0] & c.r[17].d[0];  if (t) { goto L_003EAAF0; } }
    set32(c.r[4], ld32((c.r[22].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAAC8u); set32(c.r[5], c.r[20].w[0] - 18536u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EAAC8u) [[unlikely]] return; }
L_003EAAC8:
    set32(c.r[4], c.r[19].w[0] - 18464u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAAE0u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 119u, depth + 1u); else { c.pc = 0x003F27E0u; return; } if (c.pc != 0x003EAAE0u) [[unlikely]] return; }
L_003EAAE0:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAAF0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003EAAF0u) [[unlikely]] return; }
L_003EAAF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAAF8u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003EAAF8u) [[unlikely]] return; }
L_003EAAF8:
    set32(c.r[5], c.r[18].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[5].w[0] + 428u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EAB14; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);  goto L_003EABEC; }
L_003EAB14:
    c.budget -= 2;
    if (c.r[3].sd[0] >= 0) { set32(c.r[2], ld32((c.r[5].w[0] + 424u)));  goto L_003EAB2C; }
    c.r[2].d[0] = ~(0ull | c.r[3].d[0]);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);  goto L_003EABEC; }
    set32(c.r[2], ld32((c.r[5].w[0] + 424u)));
    c.budget -= 1;
L_003EAB2C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_003EAB3C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[2].d[0]) { ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);  goto L_003EABEC; }
L_003EAB3C:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003EAB58; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EAAB0u | kUnwind; return; } goto L_003EAAB0; }
L_003EAB54:
    set32(c.r[2], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003EAB58:
    set32(c.r[3], ld32((c.r[2].w[0] + 2212u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 2220u), c.r[3].w[0]);
    c.budget -= 4;
L_003EAB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAB70u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 327u, depth + 1u); else { c.pc = 0x003EB4E8u; return; } if (c.pc != 0x003EAB70u) [[unlikely]] return; }
L_003EAB70:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EAB9C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 2272u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[6], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAB94u); st32((c.r[17].w[0] + 2272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 218u, depth + 1u); else { c.pc = 0x003EA210u; return; } if (c.pc != 0x003EAB94u) [[unlikely]] return; }
L_003EAB94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EAB68u | kUnwind; return; } goto L_003EAB68; } }
L_003EAB9C:
    set32(c.r[17], c.r[18].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[17].w[0] + 1640u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 2272u)));  goto L_003EABB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EABB4u);  if (depth < kMaxDepth) unit_00B9(c, 374u, depth + 1u); else { c.pc = 0x003E7E38u; return; } if (c.pc != 0x003EABB4u) [[unlikely]] return; }
L_003EABB4:
    set32(c.r[6], ld32((c.r[17].w[0] + 2272u)));
    c.budget -= 1;
L_003EABB8:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);  goto L_003EABEC; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);  if (t) { goto L_003EABEC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EABD8u); set32(c.r[5], c.r[5].w[0] - 18448u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EABD8u) [[unlikely]] return; }
L_003EABD8:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EABE8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003EABE8u) [[unlikely]] return; }
L_003EABE8:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003EABEC:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003EAC10:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 208u), c.f[20]);
    set32(c.r[3], ld32((c.r[16].w[0] + 364u)));
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 2480u), c.r[3].w[0]);
    c.budget -= 22;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[16].w[0] + 364u), 0u);  if (t) { goto L_003EAD3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAC70u);  if (depth < kMaxDepth) unit_00C4(c, 81u, depth + 1u); else { c.pc = 0x00410B58u; return; } if (c.pc != 0x003EAC70u) [[unlikely]] return; }
L_003EAC70:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 2296u));
    c.r[4].d[0] = c.r[2].d[0] - c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0; c.r[2].d[0] = c.r[4].d[0] >> 1;  if (t) { goto L_003EAC90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAC88u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x003EAC88u) [[unlikely]] return; }
L_003EAC88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_003EACA0; } }
L_003EAC90:
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAC9Cu); c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x003EAC9Cu) [[unlikely]] return; }
L_003EAC9C:
    c.f[20] = fp::add(c.f[0], c.f[0]);
    c.budget -= 1;
L_003EACA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EACA8u);  if (depth < kMaxDepth) unit_00C4(c, 83u, depth + 1u); else { c.pc = 0x00410B90u; return; } if (c.pc != 0x003EACA8u) [[unlikely]] return; }
L_003EACA8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; c.r[2].d[0] = c.r[4].d[0] >> 1;  if (t) { goto L_003EACC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EACBCu);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x003EACBCu) [[unlikely]] return; }
L_003EACBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EACD4; } }
L_003EACC4:
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EACD0u); c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x003EACD0u) [[unlikely]] return; }
L_003EACD0:
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 1;
L_003EACD4:
    fpu_div(c, 12u, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[2].w[0] - 20104u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[17], c.r[17].w[0] - 18368u);
    set32(c.r[3], ld32((c.r[2].w[0] + 780u)));
    set32(c.r[16], c.r[22].w[0] - 22720u);
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAD0Cu); set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003EAD0Cu) [[unlikely]] return; }
L_003EAD0C:
    set32(c.r[7], ld32((c.r[16].w[0] + 2280u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[11], ld32((c.r[16].w[0] + 2316u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 2264u)));
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAD34u); set32(c.r[10], ld32((c.r[16].w[0] + 2268u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EAD34u) [[unlikely]] return; }
L_003EAD34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);  if (t) { goto L_003EB068; } }
L_003EAD3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAD44u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003EAD44u) [[unlikely]] return; }
L_003EAD44:
    set32(c.r[3], ld32((c.r[16].w[0] + 444u)));
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[30].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_003EAD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 436u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st32((c.r[2].w[0] - 20152u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_003EAD90; } }
L_003EAD68:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003EAD90; } }
    c.f[1] = ld32((c.r[16].w[0] + 448u));
    c.f[0] = ld32((c.r[2].w[0] - 17904u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EAD90; } }
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[2].w[0] - 20152u), 0u);
    c.budget -= 2;
L_003EAD90:
    set32(c.r[16], c.r[22].w[0] - 22720u);
    set32(c.r[4], ld32((c.r[16].w[0] + 384u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  goto L_003EAEEC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 2280u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 2472u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  goto L_003EAEEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EADC4u); st32((c.r[16].w[0] + 2472u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C4(c, 81u, depth + 1u); else { c.pc = 0x00410B58u; return; } if (c.pc != 0x003EADC4u) [[unlikely]] return; }
L_003EADC4:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 2296u));
    c.r[4].d[0] = c.r[2].d[0] - c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0; c.r[2].d[0] = c.r[4].d[0] >> 1;  if (t) { goto L_003EADE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EADDCu);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x003EADDCu) [[unlikely]] return; }
L_003EADDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_003EADF4; } }
L_003EADE4:
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EADF0u); c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x003EADF0u) [[unlikely]] return; }
L_003EADF0:
    c.f[20] = fp::add(c.f[0], c.f[0]);
    c.budget -= 1;
L_003EADF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EADFCu);  if (depth < kMaxDepth) unit_00C4(c, 83u, depth + 1u); else { c.pc = 0x00410B90u; return; } if (c.pc != 0x003EADFCu) [[unlikely]] return; }
L_003EADFC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; c.r[2].d[0] = c.r[4].d[0] >> 1;  if (t) { goto L_003EAE18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAE10u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x003EAE10u) [[unlikely]] return; }
L_003EAE10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EAE2C; } }
L_003EAE18:
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAE24u); c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x003EAE24u) [[unlikely]] return; }
L_003EAE24:
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 2;
L_003EAE2C:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 20104u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 148u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 204u)));
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[3], ld32((c.r[2].w[0] + 780u)));
    set32(c.r[16], c.r[22].w[0] - 22720u);
    set32(c.r[9], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    st32((c.r[2].w[0] + 204u), c.r[7].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAE70u); set32(c.r[18], c.r[3].w[0] + c.r[9].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003EAE70u) [[unlikely]] return; }
L_003EAE70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAE80u); set32(c.r[23], c.r[2].w[0] - 18224u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003EAE80u) [[unlikely]] return; }
L_003EAE80:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 2272u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 2280u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 2288u)));
    set32(c.r[21], c.r[3].w[0] + 1u);
    c.f[12] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[19], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAEA8u); st32((c.r[29].w[0]), c.r[30].w[0]);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003EAEA8u) [[unlikely]] return; }
L_003EAEA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; c.r[3].d[0] = c.r[3].d[0] | 65535ull;  if (t) { goto L_003EAEBC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_003EAEBC:
    set32(c.r[10], ld32((c.r[16].w[0] + 2268u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 2264u)));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAEE4u); c.r[11].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EAEE4u) [[unlikely]] return; }
L_003EAEE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[22].w[0] - 22720u);  if (t) { goto L_003EAFE8; } }
L_003EAEEC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[3], c.r[22].w[0] - 22720u);  if (t) { goto L_003EAFE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAEFCu);  if (depth < kMaxDepth) unit_00C4(c, 81u, depth + 1u); else { c.pc = 0x00410B58u; return; } if (c.pc != 0x003EAEFCu) [[unlikely]] return; }
L_003EAEFC:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 2296u));
    c.r[4].d[0] = c.r[2].d[0] - c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0; c.r[2].d[0] = c.r[4].d[0] >> 1;  if (t) { goto L_003EAF1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAF14u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x003EAF14u) [[unlikely]] return; }
L_003EAF14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_003EAF2C; } }
L_003EAF1C:
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAF28u); c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x003EAF28u) [[unlikely]] return; }
L_003EAF28:
    c.f[20] = fp::add(c.f[0], c.f[0]);
    c.budget -= 1;
L_003EAF2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAF34u);  if (depth < kMaxDepth) unit_00C4(c, 83u, depth + 1u); else { c.pc = 0x00410B90u; return; } if (c.pc != 0x003EAF34u) [[unlikely]] return; }
L_003EAF34:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; c.r[2].d[0] = c.r[4].d[0] >> 1;  if (t) { goto L_003EAF50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAF48u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x003EAF48u) [[unlikely]] return; }
L_003EAF48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003EAF64; } }
L_003EAF50:
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAF5Cu); c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x003EAF5Cu) [[unlikely]] return; }
L_003EAF5C:
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_003EAF64:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAF7Cu); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003EAF7Cu) [[unlikely]] return; }
L_003EAF7C:
    c.r[18].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[12] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[21], c.r[2].w[0] - 18024u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAF94u); set32(c.r[19], c.r[22].w[0] - 22720u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003EAF94u) [[unlikely]] return; }
L_003EAF94:
    c.r[18].d[0] = c.r[18].d[0] | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EAFA4; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_003EAFA4:
    set32(c.r[16], ld32((c.r[19].w[0] + 2272u)));
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAFB4u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003EAFB4u) [[unlikely]] return; }
L_003EAFB4:
    set32(c.r[3], ld32((c.r[19].w[0] + 2316u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[19].w[0] + 2264u)));
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 2192u)));
    c.r[10].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[19].w[0] + 2288u)));
    c.r[11].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAFE4u); st32((c.r[29].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EAFE4u) [[unlikely]] return; }
L_003EAFE4:
    set32(c.r[3], c.r[22].w[0] - 22720u);
    c.budget -= 1;
L_003EAFE8:
    set32(c.r[2], ld32((c.r[3].w[0] + 2392u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], c.r[22].w[0] - 22720u);  if (t) { goto L_003EB020; } }
    set32(c.r[17], ld32((c.r[3].w[0] + 2212u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 2392u), 0u);  if (t) { goto L_003EB008; } }
L_003EB000:
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 2;
L_003EB008:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], c.r[22].w[0] - 22720u);  if (t) { goto L_003EB020; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 2392u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB000u | kUnwind; return; } goto L_003EB000; }
    set32(c.r[4], c.r[22].w[0] - 22720u);
    c.budget -= 1;
L_003EB020:
    set32(c.r[2], ld32((c.r[4].w[0] + 2396u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], c.r[22].w[0] - 22720u);  if (t) { goto L_003EB058; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 2252u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 2396u), 0u);  if (t) { goto L_003EB040; } }
L_003EB038:
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_003EB040:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] - 22720u);  if (t) { goto L_003EB058; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 2396u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB038u | kUnwind; return; } goto L_003EB038; }
    set32(c.r[2], c.r[22].w[0] - 22720u);
    c.budget -= 1;
L_003EB058:
    set32(c.r[3], ld32((c.r[2].w[0] + 2480u)));
    st32((c.r[2].w[0] + 2316u), c.r[30].w[0]);
    st32((c.r[2].w[0] + 364u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    c.budget -= 4;
L_003EB068:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0] + 208u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003EB098:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    set32(c.r[3], c.r[3].w[0] - 20104u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[22].w[0]), 0u);
    st32((c.r[21].w[0]), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 800u)));
    st32((c.r[29].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[3].w[0] + 800u), c.r[2].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB0FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 292u, depth + 1u); else { c.pc = 0x003E3730u; return; } if (c.pc != 0x003EB0FCu) [[unlikely]] return; }
L_003EB0FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB104u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 273u, depth + 1u); else { c.pc = 0x003E31F0u; return; } if (c.pc != 0x003EB104u) [[unlikely]] return; }
L_003EB104:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[17], c.r[2].w[0] - 22720u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st32((c.r[17].w[0] + 2232u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 2228u), c.r[16].w[0]);  goto L_003EB138; }
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 2228u), c.r[16].w[0]);
    c.budget -= 4;
L_003EB138:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 2392u)));  goto L_003EB178; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 17896u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB174u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 119u, depth + 1u); else { c.pc = 0x003F27E0u; return; } if (c.pc != 0x003EB174u) [[unlikely]] return; }
L_003EB174:
    set32(c.r[2], ld32((c.r[17].w[0] + 2392u)));
    c.budget -= 1;
L_003EB178:
    set32(c.r[19], ld32((c.r[17].w[0] + 2228u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2392u), c.r[2].w[0]);  if (t) { goto L_003EB410; } }
L_003EB188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EB1C0; } }
    set32(c.r[3], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 460u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EB1C4; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB1B0u); set32(c.r[5], c.r[2].w[0] - 17888u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EB1B0u) [[unlikely]] return; }
L_003EB1B0:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB1C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003EB1C0u) [[unlikely]] return; }
L_003EB1C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003EB1C4:
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[4], c.r[5].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[4].w[0] + 2392u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[19].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003EB40C; } }
    set32(c.r[16], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[20], c.r[3].w[0] + 8u);  if (t) { goto L_003EB40C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[30], c.r[2].w[0] - 20104u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 5;
L_003EB1F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 2392u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EB400; } }
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[17], c.r[2].w[0] - 20104u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 616u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB22Cu); st32((c.r[17].w[0] + 616u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003EB22Cu) [[unlikely]] return; }
L_003EB22C:
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 140u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EB2C8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 800u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB254u); st32((c.r[17].w[0] + 800u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 292u, depth + 1u); else { c.pc = 0x003E3730u; return; } if (c.pc != 0x003EB254u) [[unlikely]] return; }
L_003EB254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB25Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 273u, depth + 1u); else { c.pc = 0x003E31F0u; return; } if (c.pc != 0x003EB25Cu) [[unlikely]] return; }
L_003EB25C:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[16].w[0] + 16u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 2232u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 2232u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[23].d[0];
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 88u)));  goto L_003EB298; }
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 4;
L_003EB298:
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[20].w[0])));  goto L_003EB404; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] - 17896u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB2C0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 119u, depth + 1u); else { c.pc = 0x003F27E0u; return; } if (c.pc != 0x003EB2C0u) [[unlikely]] return; }
L_003EB2C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[20].w[0])));  if (t) { goto L_003EB404; } }
L_003EB2C8:
    c.f[0] = ld32((c.r[18].w[0] + 112u));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);  if (t) { goto L_003EB38C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[5].w[0] - 17808u);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB304u); st32((c.r[17].w[0] + 120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 107u, depth + 1u); else { c.pc = 0x003ED148u; return; } if (c.pc != 0x003EB304u) [[unlikely]] return; }
L_003EB304:
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[1] = ld32((c.r[29].w[0]));  if (t) { goto L_003EB3A0; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[18].w[0] + 2340u));  goto L_003EB374; }
    c.f[0] = ld32((c.r[18].w[0] + 2332u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[18].w[0] + 2332u), c.f[1]);  goto L_003EB33C; }
L_003EB33C:
    c.f[0] = ld32((c.r[18].w[0] + 2336u));
    c.f[1] = ld32((c.r[29].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[18].w[0] + 2336u), c.f[1]);  goto L_003EB354; }
L_003EB354:
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[16].w[0] + 4u), c.f[1]);  goto L_003EB3A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003EB3A4; } }
L_003EB374:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[18].w[0] + 2340u), c.f[1]);  goto L_003EB3A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003EB3A4; } }
L_003EB38C:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 5;
L_003EB3A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 1;
L_003EB3A4:
    set32(c.r[3], ld32((c.r[30].w[0] + 776u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[30].w[0] + 776u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[23].d[0];
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 88u)));  goto L_003EB3D8; }
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 4;
L_003EB3D8:
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[20].w[0])));  goto L_003EB404; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] - 17784u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB400u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 119u, depth + 1u); else { c.pc = 0x003F27E0u; return; } if (c.pc != 0x003EB400u) [[unlikely]] return; }
L_003EB400:
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_003EB404:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB1F8u | kUnwind; return; } goto L_003EB1F8; } }
L_003EB40C:
    set32(c.r[19], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 1;
L_003EB410:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003EB42C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 512ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB188u | kUnwind; return; } goto L_003EB188; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 1;
L_003EB42C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EB48C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[17], c.r[2].w[0] - 22720u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB448u); set32(c.r[4], c.r[4].w[0] - 17776u);  if (depth < kMaxDepth) unit_00BB(c, 107u, depth + 1u); else { c.pc = 0x003ED148u; return; } if (c.pc != 0x003EB448u) [[unlikely]] return; }
L_003EB448:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB458u); set32(c.r[16], c.r[16].w[0] - 17760u);  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003EB458u) [[unlikely]] return; }
L_003EB458:
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB468u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EB468u) [[unlikely]] return; }
L_003EB468:
    set32(c.r[4], ld32((c.r[17].w[0] + 2212u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB478u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BC(c, 120u, depth + 1u); else { c.pc = 0x003F27E8u; return; } if (c.pc != 0x003EB478u) [[unlikely]] return; }
L_003EB478:
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB488u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003EB488u) [[unlikely]] return; }
L_003EB488:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003EB48C:
    set32(c.r[17], c.r[5].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);  if (t) { goto L_003EB4BC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 2264u)));
    c.r[2].d[0] = c.r[2].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);  if (t) { goto L_003EB4C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB4B8u);  if (depth < kMaxDepth) unit_00BA(c, 42u, depth + 1u); else { c.pc = 0x003E85E0u; return; } if (c.pc != 0x003EB4B8u) [[unlikely]] return; }
L_003EB4B8:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003EB4BC:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.budget -= 1;
L_003EB4C0:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003EB4E8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 128u), c.f[20]);
    set32(c.r[16], ld32((c.r[3].w[0] + 2220u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 2216u)));
    c.budget -= 17;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003EB7CC; } }
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
L_003EB538:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 28u)));  goto L_003EB570; }
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] - 1u);  if (t) { goto L_003EB55C; } }
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_003EB55C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[21].w[0] - 22720u);  if (t) { goto L_003EB578; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB56Cu); set32(c.r[4], c.r[16].w[0] + 44u);  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003EB56Cu) [[unlikely]] return; }
L_003EB56C:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_003EB570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 2220u), c.r[2].w[0]);  if (t) { goto L_003EB7BC; } }
L_003EB578:
    set32(c.r[2], ld32((c.r[17].w[0] + 1640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (t) { goto L_003EB5C8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EB59C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB59Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 147u, depth + 1u); else { c.pc = 0x003E9810u; return; } if (c.pc != 0x003EB59Cu) [[unlikely]] return; }
L_003EB59C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB5A4u); set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_00BB(c, 245u, depth + 1u); else { c.pc = 0x003EEB30u; return; } if (c.pc != 0x003EB5A4u) [[unlikely]] return; }
L_003EB5A4:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[17], c.r[21].w[0] - 22720u);  goto L_003EB5CC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2220u), c.r[2].w[0]);  if (t) { goto L_003EB7BC; } }
L_003EB5C8:
    set32(c.r[17], c.r[21].w[0] - 22720u);
    c.budget -= 1;
L_003EB5CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 380u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 1640u)));  goto L_003EB610; }
    set32(c.r[2], ld32((c.r[17].w[0] + 472u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 2216u)));  goto L_003EB778; }
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0]), c.r[16].w[0]);  goto L_003EB600; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB5F8u);  if (depth < kMaxDepth) unit_00BA(c, 143u, depth + 1u); else { c.pc = 0x003E9770u; return; } if (c.pc != 0x003EB5F8u) [[unlikely]] return; }
L_003EB5F8:
    set32(c.r[16], ld32((c.r[17].w[0] + 2220u)));
    st32((c.r[20].w[0]), c.r[16].w[0]);
    c.budget -= 2;
L_003EB600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB608u); set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_00BB(c, 208u, depth + 1u); else { c.pc = 0x003EE4C0u; return; } if (c.pc != 0x003EB608u) [[unlikely]] return; }
L_003EB608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);  if (t) { goto L_003EB7D4; } }
L_003EB610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003EB658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 2212u)));  if (t) { goto L_003EB638; } }
L_003EB620:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_003EB638; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB630u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003EB630u) [[unlikely]] return; }
L_003EB630:
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 2;
L_003EB638:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003EB658; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EB658; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 2220u)));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB620u | kUnwind; return; } goto L_003EB620; }
L_003EB658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB660u);  if (depth < kMaxDepth) unit_00BE(c, 157u, depth + 1u); else { c.pc = 0x003F9C80u; return; } if (c.pc != 0x003EB660u) [[unlikely]] return; }
L_003EB660:
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[19].w[0] + 2272u)));
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB694u); c.f[12] = fp::mul(c.f[12], c.f[20]);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003EB694u) [[unlikely]] return; }
L_003EB694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB69Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 208u, depth + 1u); else { c.pc = 0x0040A860u; return; } if (c.pc != 0x003EB69Cu) [[unlikely]] return; }
L_003EB69C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB6A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 249u, depth + 1u); else { c.pc = 0x00202C80u; return; } if (c.pc != 0x003EB6A4u) [[unlikely]] return; }
L_003EB6A4:
    set32(c.r[4], ld32((c.r[19].w[0] + 2220u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EB73C; } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.f[12] = c.f[20];  if (t) { goto L_003EB740; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 2;
L_003EB6C8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_003EB728; }
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] - 1u);  if (t) { goto L_003EB6EC; } }
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_003EB6EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_003EB704; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB6FCu); set32(c.r[4], c.r[16].w[0] + 44u);  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003EB6FCu) [[unlikely]] return; }
L_003EB6FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  if (t) { goto L_003EB728; } }
L_003EB704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003EB720; } }
    st32((c.r[20].w[0]), c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB718u); set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_00BB(c, 210u, depth + 1u); else { c.pc = 0x003EE538u; return; } if (c.pc != 0x003EB718u) [[unlikely]] return; }
L_003EB718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);  if (t) { goto L_003EB7D4; } }
L_003EB720:
    set32(c.r[17], c.r[17].w[0] - c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 2;
L_003EB728:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.f[12] = c.f[20];  if (t) { goto L_003EB740; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB6C8u | kUnwind; return; } goto L_003EB6C8; }
L_003EB73C:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003EB740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB748u); set32(c.r[16], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003EB748u) [[unlikely]] return; }
L_003EB748:
    set32(c.r[4], ld32((c.r[19].w[0] + 2192u)));
    set32(c.r[5], c.r[22].w[0] - 17672u);
    set32(c.r[6], ld32((c.r[19].w[0] + 2272u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB760u); c.r[8].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EB760u) [[unlikely]] return; }
L_003EB760:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB770u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003EB770u) [[unlikely]] return; }
L_003EB770:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[19].w[0] + 2220u)));  if (t) { goto L_003EB7C0; } }
L_003EB778:
    set32(c.r[16], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB784u); set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_00BB(c, 208u, depth + 1u); else { c.pc = 0x003EE4C0u; return; } if (c.pc != 0x003EB784u) [[unlikely]] return; }
L_003EB784:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[20].w[0]), c.r[16].w[0]);  goto L_003EB7D0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EB7A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB7A0u); set32(c.r[4], c.r[16].w[0] + 44u);  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003EB7A0u) [[unlikely]] return; }
L_003EB7A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB7A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 292u, depth + 1u); else { c.pc = 0x003E3730u; return; } if (c.pc != 0x003EB7A8u) [[unlikely]] return; }
L_003EB7A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB7B4u); set32(c.r[5], c.r[17].w[0] + 2212u);  if (depth < kMaxDepth) unit_00BA(c, 177u, depth + 1u); else { c.pc = 0x003E9CE8u; return; } if (c.pc != 0x003EB7B4u) [[unlikely]] return; }
L_003EB7B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[19].w[0] + 2220u)));  if (t) { goto L_003EB7C0; } }
L_003EB7BC:
    set32(c.r[16], ld32((c.r[19].w[0] + 2220u)));
    c.budget -= 1;
L_003EB7C0:
    set32(c.r[2], ld32((c.r[19].w[0] + 2216u)));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB538u | kUnwind; return; } goto L_003EB538; }
L_003EB7CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EB7D0:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003EB7D4:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003EB800:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 184u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB850u); c.f[21] = ld32((c.r[2].w[0] - 17560u));  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003EB850u) [[unlikely]] return; }
L_003EB850:
    set32(c.r[3], c.r[29].w[0] + 4u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 4u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 22720u);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[3].w[0] + 2272u), 0u);  if (t) { goto L_003EB894; } }
    set32(c.r[6], 0u - 1u);
    c.budget -= 1;
L_003EB878:
    st32((c.r[5].w[0]), c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[2], ld32((c.r[3].w[0] + 504u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB878u | kUnwind; return; } goto L_003EB878; } }
L_003EB894:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB8A0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 162u, depth + 1u); else { c.pc = 0x003EDB50u; return; } if (c.pc != 0x003EB8A0u) [[unlikely]] return; }
L_003EB8A0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EB8E8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 8u);  if (t) { goto L_003EB8E4; } }
    c.budget -= 1;
L_003EB8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB8C0u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003EB8C0u) [[unlikely]] return; }
L_003EB8C0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003EB8D8; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 3;
L_003EB8D8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB8B8u | kUnwind; return; } goto L_003EB8B8; } }
L_003EB8E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003EB8E8:
    set32(c.r[16], c.r[2].w[0] - 22720u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB8F4u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003EB8F4u) [[unlikely]] return; }
L_003EB8F4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EB930; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 424u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EB930; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003EB92C; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 3;
L_003EB92C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003EB930:
    set32(c.r[3], c.r[2].w[0] - 22720u);
    set32(c.r[4], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  goto L_003EB97C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  goto L_003EB97C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EB97C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB960u);  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003EB960u) [[unlikely]] return; }
L_003EB960:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003EB978; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 3;
L_003EB978:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003EB97C:
    set32(c.r[4], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EBBC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[3], c.r[2].w[0] - 20104u);
    set32(c.r[2], ld32((c.r[3].w[0] + 780u)));
    c.r[2].d[0] = c.r[2].sd[0] < 51ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 124u)));  if (t) { goto L_003EB9B4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[1].w[0];
    c.budget -= 2;
L_003EB9B4:
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[1] = ld32((c.r[4].w[0] + 2332u));  if (t) { goto L_003EB9DC; } }
    c.f[0] = fp::add(c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EB9EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EB9FC; } }
L_003EB9DC:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EB9F8; } }
L_003EB9EC:
    set32(c.r[2], c.r[3].w[0] - 22720u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 2332u));  if (t) { goto L_003EBA10; } }
L_003EB9F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003EB9FC:
    set32(c.r[3], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = ld32((c.r[3].w[0] + 12u));  if (t) { goto L_003EBA10; } }
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 1;
L_003EBA10:
    c.f[20] = fp::mul(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] - 22720u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 504u)));
    set32(c.r[5], c.r[2].w[0] - 20104u);
    set32(c.r[18], ld32((c.r[3].w[0] + 2212u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 512u)));
    set32(c.r[23], ld32((c.r[3].w[0] + 2264u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 788u), c.r[2].w[0]);  if (t) { goto L_003EBB80; } }
L_003EBA48:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { breakpoint(c, 0x003EBA4Cu);  goto L_003EBA50; }
L_003EBA50:
    set32(c.r[23], c.r[23].w[0] - 1u);
    c.r[20].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[21], c.r[18].w[0] + 44u);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBA6Cu); set32(c.r[4], c.r[4].w[0] + 100u);  if (depth < kMaxDepth) unit_00BB(c, 116u, depth + 1u); else { c.pc = 0x003ED338u; return; } if (c.pc != 0x003EBA6Cu) [[unlikely]] return; }
L_003EBA6C:
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[18].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_003EBB50; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBA84u); set32(c.r[16], ld32((c.r[5].w[0] + 4u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003EBA84u) [[unlikely]] return; }
L_003EBA84:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003EBB50; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[30], c.r[3].w[0] - 22720u);
    c.budget -= 2;
L_003EBA98:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EBB34; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 20104u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 652u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBAC0u); st32((c.r[3].w[0] + 652u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003EBAC0u) [[unlikely]] return; }
L_003EBAC0:
    c.f[0] = ld32((c.r[29].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003EBAE8; } }
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_003EBB34; } }
L_003EBAE8:
    set32(c.r[2], ld32((c.r[30].w[0] + 2272u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != 0ull; st32((c.r[30].w[0] + 2272u), c.r[2].w[0]);  if (t) { goto L_003EBB04; } }
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0];  if (t) { goto L_003EBB34; } }
L_003EBB04:
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003EBB28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBB1Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003EBB1Cu) [[unlikely]] return; }
L_003EBB1C:
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[21] = ld32((c.r[29].w[0]));  if (t) { goto L_003EBB34; } }
L_003EBB28:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBB34u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003EBB34u) [[unlikely]] return; }
L_003EBB34:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[17].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EBA98u | kUnwind; return; } goto L_003EBA98; } }
L_003EBB50:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003EBB68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBB60u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003EBB60u) [[unlikely]] return; }
L_003EBB60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.f[21]);  if (t) { goto L_003EBB70; } }
L_003EBB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBB70u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003EBB70u) [[unlikely]] return; }
L_003EBB70:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBB7Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 162u, depth + 1u); else { c.pc = 0x003EDB50u; return; } if (c.pc != 0x003EBB7Cu) [[unlikely]] return; }
L_003EBB7C:
    set32(c.r[18], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_003EBB80:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EBB98; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { mmi::div(c, 0, c.r[19].w[0], c.r[23].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EBA48u | kUnwind; return; } goto L_003EBA48; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003EBB98:
    set32(c.r[3], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  goto L_003EBBC0; }
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  goto L_003EBBC0; }
    c.r[2].d[0] = ld64((c.r[3].w[0] + 96u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EBC2C; } }
L_003EBBC0:
    set32(c.r[2], 0u + 1u);
    set32(c.r[18], c.r[3].w[0] - 22720u);
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[18].w[0] + 2348u), c.r[2].w[0]);  if (t) { goto L_003EBC20; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBBE0u); set32(c.r[16], ld32((c.r[5].w[0] + 4u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003EBBE0u) [[unlikely]] return; }
L_003EBBE0:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003EBC20; } }
    c.budget -= 1;
L_003EBBF0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_003EBC08; }
    set32(c.r[5], ld32((c.r[18].w[0] + 2212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBC04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 386u, depth + 1u); else { c.pc = 0x003EBF70u; return; } if (c.pc != 0x003EBC04u) [[unlikely]] return; }
L_003EBC04:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003EBC08:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[17].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EBBF0u | kUnwind; return; } goto L_003EBBF0; } }
L_003EBC20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[3].w[0] - 22720u);
    st32((c.r[2].w[0] + 2348u), 0u);
    c.budget -= 3;
L_003EBC2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] - 20104u);
    set32(c.r[2], ld32((c.r[3].w[0] + 652u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 648u)));
    st32((c.r[3].w[0] + 648u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBC50u); st32((c.r[3].w[0] + 652u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003EBC50u) [[unlikely]] return; }
L_003EBC50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);  if (t) { goto L_003EBC7C; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 2212u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBC78u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BC(c, 120u, depth + 1u); else { c.pc = 0x003F27E8u; return; } if (c.pc != 0x003EBC78u) [[unlikely]] return; }
L_003EBC78:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003EBC7C:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[21] = ld32((c.r[29].w[0] + 184u));
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003EBCB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[7], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[7].w[0] + 2404u), c.r[3].w[0]);
    c.budget -= 19;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 8u), 0u);  if (t) { goto L_003EBDBC; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 2348u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003EBD20; } }
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBD18u); c.r[9].d[0] = c.r[29].d[0] | 8ull;  if (depth < kMaxDepth) unit_00BC(c, 173u, depth + 1u); else { c.pc = 0x003F3790u; return; } if (c.pc != 0x003EBD18u) [[unlikely]] return; }
L_003EBD18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EBD48; } }
L_003EBD20:
    set32(c.r[8], ld32((c.r[7].w[0] + 48u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[29].d[0] + 0ull;
    c.r[10].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBD44u); c.r[11].d[0] = c.r[29].d[0] | 8ull;  if (depth < kMaxDepth) unit_00BC(c, 148u, depth + 1u); else { c.pc = 0x003F2EA0u; return; } if (c.pc != 0x003EBD44u) [[unlikely]] return; }
L_003EBD44:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003EBD48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[6], c.r[2].w[0] - 20104u);
    set32(c.r[7], c.r[22].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[6].w[0] + 784u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 632u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[6].w[0] + 784u), c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[6].w[0] + 632u), c.r[3].w[0]);  if (t) { goto L_003EBDC8; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[22].w[0] - 22720u);  if (t) { goto L_003EBDCC; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 500u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[7].w[0] + 112u));  goto L_003EBD94; }
    c.f[0] = ld32((c.r[7].w[0] + 1648u));
    c.budget -= 1;
L_003EBD94:
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[19], c.r[22].w[0] - 22720u);  if (t) { goto L_003EBDD0; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 124u), c.r[2].w[0]);  if (t) { goto L_003EBF44; } }
L_003EBDBC:
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[0]);
    c.budget -= 3;
L_003EBDC8:
    set32(c.r[19], c.r[22].w[0] - 22720u);
    c.budget -= 1;
L_003EBDCC:
    c.f[1] = ld32((c.r[29].w[0]));
    c.budget -= 1;
L_003EBDD0:
    c.f[0] = ld32((c.r[19].w[0] + 2332u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[22].w[0] - 22720u);  if (t) { goto L_003EBEC4; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[19], c.r[22].w[0] - 22720u);  goto L_003EBE50; }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[18].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EBE4C; } }
    set32(c.r[17], c.r[2].w[0] - 20104u);
    set32(c.r[3], ld32((c.r[17].w[0] + 628u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 628u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBE10u); set32(c.r[5], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_00BD(c, 62u, depth + 1u); else { c.pc = 0x003F5398u; return; } if (c.pc != 0x003EBE10u) [[unlikely]] return; }
L_003EBE10:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003EBE4C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 636u)));
    set32(c.r[16], ld32((c.r[19].w[0] + 2348u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 2348u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBE44u); st32((c.r[17].w[0] + 636u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 386u, depth + 1u); else { c.pc = 0x003EBF70u; return; } if (c.pc != 0x003EBE44u) [[unlikely]] return; }
L_003EBE44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 2348u), c.r[16].w[0]);  if (t) { goto L_003EBF44; } }
L_003EBE4C:
    set32(c.r[19], c.r[22].w[0] - 22720u);
    c.budget -= 1;
L_003EBE50:
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 448u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[19].w[0] + 2332u), c.f[0]);  if (t) { goto L_003EBEC0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBE78u); set32(c.r[16], c.r[16].w[0] - 17552u);  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003EBE78u) [[unlikely]] return; }
L_003EBE78:
    c.f[12] = ld32((c.r[29].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBE84u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003EBE84u) [[unlikely]] return; }
L_003EBE84:
    set32(c.r[4], ld32((c.r[19].w[0] + 2192u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[20].w[0] + 56u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[19].w[0] + 2316u)));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBEA4u); set32(c.r[9], ld32((c.r[18].w[0] + 56u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EBEA4u) [[unlikely]] return; }
L_003EBEA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 17456u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBEC0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 119u, depth + 1u); else { c.pc = 0x003F27E0u; return; } if (c.pc != 0x003EBEC0u) [[unlikely]] return; }
L_003EBEC0:
    set32(c.r[2], c.r[22].w[0] - 22720u);
    c.budget -= 1;
L_003EBEC4:
    set32(c.r[3], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 500u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);  if (t) { goto L_003EBF48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBEE8u); set32(c.r[4], ld32((c.r[18].w[0] + 48u)));  if (depth < kMaxDepth) unit_00BB(c, 245u, depth + 1u); else { c.pc = 0x003EEB30u; return; } if (c.pc != 0x003EBEE8u) [[unlikely]] return; }
L_003EBEE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EBF28; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 20104u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 76u)));
    c.r[6].d[0] = c.r[29].d[0] | 12ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBF10u); st32((c.r[3].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003EBF10u) [[unlikely]] return; }
L_003EBF10:
    c.f[1] = ld32((c.r[29].w[0] + 12u));
    c.f[0] = ld32((c.r[29].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[18].w[0] + 48u);  if (t) { goto L_003EBF3C; } }
L_003EBF28:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBF34u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003EBF34u) [[unlikely]] return; }
L_003EBF34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);  if (t) { goto L_003EBF48; } }
L_003EBF3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBF44u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 192u, depth + 1u); else { c.pc = 0x003EE180u; return; } if (c.pc != 0x003EBF44u) [[unlikely]] return; }
L_003EBF44:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003EBF48:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003EBF70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 2348u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003EBFC0; } }
    set32(c.r[7], ld32((c.r[2].w[0] + 24u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[8].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBFB8u); c.r[9].d[0] = c.r[29].d[0] | 8ull;  if (depth < kMaxDepth) unit_00BC(c, 173u, depth + 1u); else { c.pc = 0x003F3790u; return; } if (c.pc != 0x003EBFB8u) [[unlikely]] return; }
L_003EBFB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EBFE4; } }
L_003EBFC0:
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[29].d[0] + 0ull;
    c.r[10].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBFE0u); c.r[11].d[0] = c.r[29].d[0] | 8ull;  if (depth < kMaxDepth) unit_00BC(c, 148u, depth + 1u); else { c.pc = 0x003F2EA0u; return; } if (c.pc != 0x003EBFE0u) [[unlikely]] return; }
L_003EBFE0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003EBFE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[20].w[0] - 22720u);
    set32(c.r[2], c.r[2].w[0] - 20104u);
    set32(c.r[5], ld32((c.r[7].w[0] + 1640u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 788u)));
    c.budget -= 7;
    [[clang::musttail]] return unit_00BB(c, 1u, depth);
}

}
