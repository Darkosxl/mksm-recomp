#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0071[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0,
    4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0,
    0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0,
    0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0,
    0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0,
    0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0,
    0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81,
    0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0,
    0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0,
    0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0,
    0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 149, 0, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 163, 0, 164, 0, 165, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0,
    172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190,
    0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 0, 0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0,
    0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0,
    0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0,
    0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0,
    0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0,
    294, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 298, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0,
    326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0,
    0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0,
    0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0,
    369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374,
    0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0,
    0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0,
    0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0,
    0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0071(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002C4000;
    case 2u: goto L_002C4014;
    case 3u: goto L_002C4078;
    case 4u: goto L_002C4080;
    case 5u: goto L_002C4098;
    case 6u: goto L_002C40A8;
    case 7u: goto L_002C4140;
    case 8u: goto L_002C4160;
    case 9u: goto L_002C4174;
    case 10u: goto L_002C4184;
    case 11u: goto L_002C41A4;
    case 12u: goto L_002C41C8;
    case 13u: goto L_002C41DC;
    case 14u: goto L_002C41F0;
    case 15u: goto L_002C4208;
    case 16u: goto L_002C4230;
    case 17u: goto L_002C4240;
    case 18u: goto L_002C4254;
    case 19u: goto L_002C426C;
    case 20u: goto L_002C4280;
    case 21u: goto L_002C4294;
    case 22u: goto L_002C42A8;
    case 23u: goto L_002C42C4;
    case 24u: goto L_002C4300;
    case 25u: goto L_002C4394;
    case 26u: goto L_002C43B0;
    case 27u: goto L_002C43C8;
    case 28u: goto L_002C4420;
    case 29u: goto L_002C4438;
    case 30u: goto L_002C4458;
    case 31u: goto L_002C4470;
    case 32u: goto L_002C4490;
    case 33u: goto L_002C44EC;
    case 34u: goto L_002C4538;
    case 35u: goto L_002C4548;
    case 36u: goto L_002C4568;
    case 37u: goto L_002C4590;
    case 38u: goto L_002C45D0;
    case 39u: goto L_002C4608;
    case 40u: goto L_002C4650;
    case 41u: goto L_002C4660;
    case 42u: goto L_002C4684;
    case 43u: goto L_002C46A8;
    case 44u: goto L_002C46BC;
    case 45u: goto L_002C46D0;
    case 46u: goto L_002C46E8;
    case 47u: goto L_002C46FC;
    case 48u: goto L_002C4744;
    case 49u: goto L_002C4754;
    case 50u: goto L_002C4778;
    case 51u: goto L_002C479C;
    case 52u: goto L_002C47B0;
    case 53u: goto L_002C47C4;
    case 54u: goto L_002C47DC;
    case 55u: goto L_002C47F0;
    case 56u: goto L_002C481C;
    case 57u: goto L_002C482C;
    case 58u: goto L_002C4850;
    case 59u: goto L_002C4874;
    case 60u: goto L_002C4888;
    case 61u: goto L_002C489C;
    case 62u: goto L_002C48B4;
    case 63u: goto L_002C48C8;
    case 64u: goto L_002C48F4;
    case 65u: goto L_002C4904;
    case 66u: goto L_002C4928;
    case 67u: goto L_002C494C;
    case 68u: goto L_002C4960;
    case 69u: goto L_002C4974;
    case 70u: goto L_002C498C;
    case 71u: goto L_002C49A4;
    case 72u: goto L_002C49F0;
    case 73u: goto L_002C4A80;
    case 74u: goto L_002C4AA0;
    case 75u: goto L_002C4AB4;
    case 76u: goto L_002C4AE0;
    case 77u: goto L_002C4AF0;
    case 78u: goto L_002C4B04;
    case 79u: goto L_002C4B34;
    case 80u: goto L_002C4B64;
    case 81u: goto L_002C4B7C;
    case 82u: goto L_002C4B8C;
    case 83u: goto L_002C4BA0;
    case 84u: goto L_002C4BB0;
    case 85u: goto L_002C4BF0;
    case 86u: goto L_002C4D88;
    case 87u: goto L_002C4DB8;
    case 88u: goto L_002C4DCC;
    case 89u: goto L_002C4DE0;
    case 90u: goto L_002C4E40;
    case 91u: goto L_002C4E6C;
    case 92u: goto L_002C4F10;
    case 93u: goto L_002C4F20;
    case 94u: goto L_002C4F50;
    case 95u: goto L_002C4F6C;
    case 96u: goto L_002C4F80;
    case 97u: goto L_002C4FE0;
    case 98u: goto L_002C4FE8;
    case 99u: goto L_002C5000;
    case 100u: goto L_002C5020;
    case 101u: goto L_002C5048;
    case 102u: goto L_002C506C;
    case 103u: goto L_002C5088;
    case 104u: goto L_002C50A0;
    case 105u: goto L_002C5100;
    case 106u: goto L_002C512C;
    case 107u: goto L_002C513C;
    case 108u: goto L_002C5184;
    case 109u: goto L_002C51E0;
    case 110u: goto L_002C5214;
    case 111u: goto L_002C5224;
    case 112u: goto L_002C526C;
    case 113u: goto L_002C53B8;
    case 114u: goto L_002C53E8;
    case 115u: goto L_002C53F8;
    case 116u: goto L_002C5408;
    case 117u: goto L_002C5418;
    case 118u: goto L_002C5428;
    case 119u: goto L_002C5438;
    case 120u: goto L_002C5448;
    case 121u: goto L_002C5458;
    case 122u: goto L_002C5468;
    case 123u: goto L_002C5478;
    case 124u: goto L_002C5488;
    case 125u: goto L_002C5498;
    case 126u: goto L_002C54A8;
    case 127u: goto L_002C54B8;
    case 128u: goto L_002C54C8;
    case 129u: goto L_002C54D8;
    case 130u: goto L_002C54E8;
    case 131u: goto L_002C54F8;
    case 132u: goto L_002C5508;
    case 133u: goto L_002C5520;
    case 134u: goto L_002C5538;
    case 135u: goto L_002C5558;
    case 136u: goto L_002C5580;
    case 137u: goto L_002C55A4;
    case 138u: goto L_002C55C4;
    case 139u: goto L_002C55E0;
    case 140u: goto L_002C55F4;
    case 141u: goto L_002C5610;
    case 142u: goto L_002C5638;
    case 143u: goto L_002C565C;
    case 144u: goto L_002C567C;
    case 145u: goto L_002C5690;
    case 146u: goto L_002C56C8;
    case 147u: goto L_002C56E0;
    case 148u: goto L_002C56F8;
    case 149u: goto L_002C5708;
    case 150u: goto L_002C5718;
    case 151u: goto L_002C5720;
    case 152u: goto L_002C5728;
    case 153u: goto L_002C5788;
    case 154u: goto L_002C57D0;
    case 155u: goto L_002C57E4;
    case 156u: goto L_002C57F4;
    case 157u: goto L_002C5800;
    case 158u: goto L_002C5888;
    case 159u: goto L_002C5890;
    case 160u: goto L_002C58AC;
    case 161u: goto L_002C58C0;
    case 162u: goto L_002C58C8;
    case 163u: goto L_002C58D8;
    case 164u: goto L_002C58E0;
    case 165u: goto L_002C58E8;
    case 166u: goto L_002C5900;
    case 167u: goto L_002C5938;
    case 168u: goto L_002C5950;
    case 169u: goto L_002C5960;
    case 170u: goto L_002C5A28;
    case 171u: goto L_002C5A78;
    case 172u: goto L_002C5A80;
    case 173u: goto L_002C5A8C;
    case 174u: goto L_002C5AD0;
    case 175u: goto L_002C5AE0;
    case 176u: goto L_002C5AE8;
    case 177u: goto L_002C5B08;
    case 178u: goto L_002C5B10;
    case 179u: goto L_002C5B1C;
    case 180u: goto L_002C5B7C;
    case 181u: goto L_002C5BA4;
    case 182u: goto L_002C5BE0;
    case 183u: goto L_002C5C08;
    case 184u: goto L_002C5C98;
    case 185u: goto L_002C5CAC;
    case 186u: goto L_002C5CB4;
    case 187u: goto L_002C5CD8;
    case 188u: goto L_002C5D08;
    case 189u: goto L_002C5D70;
    case 190u: goto L_002C5D7C;
    case 191u: goto L_002C5D98;
    case 192u: goto L_002C5DB0;
    case 193u: goto L_002C5DC4;
    case 194u: goto L_002C5DE4;
    case 195u: goto L_002C5E04;
    case 196u: goto L_002C5E20;
    case 197u: goto L_002C5E30;
    case 198u: goto L_002C5E44;
    case 199u: goto L_002C5E5C;
    case 200u: goto L_002C5E90;
    case 201u: goto L_002C5F10;
    case 202u: goto L_002C5F90;
    case 203u: goto L_002C5FAC;
    case 204u: goto L_002C5FC8;
    case 205u: goto L_002C6000;
    case 206u: goto L_002C6028;
    case 207u: goto L_002C60C8;
    case 208u: goto L_002C60F0;
    case 209u: goto L_002C61C8;
    case 210u: goto L_002C6238;
    case 211u: goto L_002C624C;
    case 212u: goto L_002C625C;
    case 213u: goto L_002C6274;
    case 214u: goto L_002C6290;
    case 215u: goto L_002C6298;
    case 216u: goto L_002C62A0;
    case 217u: goto L_002C62B0;
    case 218u: goto L_002C62F8;
    case 219u: goto L_002C6364;
    case 220u: goto L_002C6370;
    case 221u: goto L_002C6380;
    case 222u: goto L_002C6398;
    case 223u: goto L_002C63B0;
    case 224u: goto L_002C63E8;
    case 225u: goto L_002C6404;
    case 226u: goto L_002C641C;
    case 227u: goto L_002C6434;
    case 228u: goto L_002C6520;
    case 229u: goto L_002C6568;
    case 230u: goto L_002C6588;
    case 231u: goto L_002C6598;
    case 232u: goto L_002C6668;
    case 233u: goto L_002C66E8;
    case 234u: goto L_002C6830;
    case 235u: goto L_002C6878;
    case 236u: goto L_002C68B8;
    case 237u: goto L_002C68D0;
    case 238u: goto L_002C68F8;
    case 239u: goto L_002C6908;
    case 240u: goto L_002C6938;
    case 241u: goto L_002C6970;
    case 242u: goto L_002C6980;
    case 243u: goto L_002C69C4;
    case 244u: goto L_002C69D0;
    case 245u: goto L_002C6A30;
    case 246u: goto L_002C6A7C;
    case 247u: goto L_002C6BC8;
    case 248u: goto L_002C6C00;
    case 249u: goto L_002C6C1C;
    case 250u: goto L_002C6C30;
    case 251u: goto L_002C6C40;
    case 252u: goto L_002C6C60;
    case 253u: goto L_002C6C80;
    case 254u: goto L_002C6CD8;
    case 255u: goto L_002C6CE8;
    case 256u: goto L_002C6CF8;
    case 257u: goto L_002C6D10;
    case 258u: goto L_002C6D28;
    case 259u: goto L_002C6D70;
    case 260u: goto L_002C6D90;
    case 261u: goto L_002C6DB0;
    case 262u: goto L_002C6DD0;
    case 263u: goto L_002C6DF0;
    case 264u: goto L_002C6E08;
    case 265u: goto L_002C6E2C;
    case 266u: goto L_002C6E44;
    case 267u: goto L_002C6E70;
    case 268u: goto L_002C6E80;
    case 269u: goto L_002C6EB0;
    case 270u: goto L_002C6EE8;
    case 271u: goto L_002C6F10;
    case 272u: goto L_002C6F30;
    case 273u: goto L_002C6FC0;
    case 274u: goto L_002C6FD8;
    case 275u: goto L_002C6FF8;
    case 276u: goto L_002C7018;
    case 277u: goto L_002C7090;
    case 278u: goto L_002C70A4;
    case 279u: goto L_002C70D0;
    case 280u: goto L_002C70E4;
    case 281u: goto L_002C7128;
    case 282u: goto L_002C713C;
    case 283u: goto L_002C7168;
    case 284u: goto L_002C7188;
    case 285u: goto L_002C7194;
    case 286u: goto L_002C71A0;
    case 287u: goto L_002C71AC;
    case 288u: goto L_002C71B8;
    case 289u: goto L_002C71C4;
    case 290u: goto L_002C71D0;
    case 291u: goto L_002C71DC;
    case 292u: goto L_002C71E8;
    case 293u: goto L_002C71F4;
    case 294u: goto L_002C7200;
    case 295u: goto L_002C720C;
    case 296u: goto L_002C7218;
    case 297u: goto L_002C7224;
    case 298u: goto L_002C7230;
    case 299u: goto L_002C723C;
    case 300u: goto L_002C7248;
    case 301u: goto L_002C7260;
    case 302u: goto L_002C7280;
    case 303u: goto L_002C7298;
    case 304u: goto L_002C72A8;
    case 305u: goto L_002C72F8;
    case 306u: goto L_002C7320;
    case 307u: goto L_002C7360;
    case 308u: goto L_002C73B0;
    case 309u: goto L_002C73D8;
    case 310u: goto L_002C7418;
    case 311u: goto L_002C7468;
    case 312u: goto L_002C74B8;
    case 313u: goto L_002C7508;
    case 314u: goto L_002C7544;
    case 315u: goto L_002C7578;
    case 316u: goto L_002C75C0;
    case 317u: goto L_002C75F0;
    case 318u: goto L_002C75FC;
    case 319u: goto L_002C7658;
    case 320u: goto L_002C7668;
    case 321u: goto L_002C7680;
    case 322u: goto L_002C76D8;
    case 323u: goto L_002C7730;
    case 324u: goto L_002C7740;
    case 325u: goto L_002C7768;
    case 326u: goto L_002C7780;
    case 327u: goto L_002C7790;
    case 328u: goto L_002C77A0;
    case 329u: goto L_002C77A8;
    case 330u: goto L_002C780C;
    case 331u: goto L_002C7824;
    case 332u: goto L_002C7864;
    case 333u: goto L_002C7888;
    case 334u: goto L_002C7890;
    case 335u: goto L_002C78D4;
    case 336u: goto L_002C78F0;
    case 337u: goto L_002C7918;
    case 338u: goto L_002C792C;
    case 339u: goto L_002C7940;
    case 340u: goto L_002C7958;
    case 341u: goto L_002C7964;
    case 342u: goto L_002C798C;
    case 343u: goto L_002C79A4;
    case 344u: goto L_002C79B8;
    case 345u: goto L_002C79D0;
    case 346u: goto L_002C79F0;
    case 347u: goto L_002C7A10;
    case 348u: goto L_002C7A24;
    case 349u: goto L_002C7A38;
    case 350u: goto L_002C7A4C;
    case 351u: goto L_002C7A60;
    case 352u: goto L_002C7A74;
    case 353u: goto L_002C7A8C;
    case 354u: goto L_002C7AB8;
    case 355u: goto L_002C7B08;
    case 356u: goto L_002C7B28;
    case 357u: goto L_002C7B9C;
    case 358u: goto L_002C7C08;
    case 359u: goto L_002C7C70;
    case 360u: goto L_002C7CA8;
    case 361u: goto L_002C7CC0;
    case 362u: goto L_002C7CD0;
    case 363u: goto L_002C7D08;
    case 364u: goto L_002C7D1C;
    case 365u: goto L_002C7D2C;
    case 366u: goto L_002C7D3C;
    case 367u: goto L_002C7D58;
    case 368u: goto L_002C7D6C;
    case 369u: goto L_002C7D80;
    case 370u: goto L_002C7D9C;
    case 371u: goto L_002C7DB8;
    case 372u: goto L_002C7DD4;
    case 373u: goto L_002C7DE8;
    case 374u: goto L_002C7DFC;
    case 375u: goto L_002C7E20;
    case 376u: goto L_002C7E78;
    case 377u: goto L_002C7E9C;
    case 378u: goto L_002C7EB0;
    case 379u: goto L_002C7EC4;
    case 380u: goto L_002C7EE4;
    case 381u: goto L_002C7F08;
    case 382u: goto L_002C7F28;
    case 383u: goto L_002C7F50;
    case 384u: goto L_002C7F74;
    case 385u: goto L_002C7F8C;
    case 386u: goto L_002C7F9C;
    case 387u: goto L_002C7FC8;
    case 388u: goto L_002C7FD4;
    default: bad_entry(c, 0x002C4000u); return;
    }
L_002C4000:
    st32((c.r[29].w[0] + 8u), c.f[4]);
    st32((c.r[29].w[0]), c.f[2]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4014u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002C4014u) [[unlikely]] return; }
L_002C4014:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[3] = ld32((c.r[3].w[0] - 20020u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] - 20024u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] - 20020u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C4078:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C4080:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4098u);  if (depth < kMaxDepth) unit_0070(c, 285u, depth + 1u); else { c.pc = 0x002C3C40u; return; } if (c.pc != 0x002C4098u) [[unlikely]] return; }
L_002C4098:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C40A8:
    set32(c.r[29], c.r[29].w[0] - 864u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 800u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    st128((c.r[29].w[0] + 784u) & ~15u, c.r[17]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 768u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 752u) & ~15u, c.r[19]);
    set32(c.r[4], 0u + 268u);
    st128((c.r[29].w[0] + 736u) & ~15u, c.r[20]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 720u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 840u), c.f[23]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 832u), c.f[22]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 824u), c.f[21]);
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 816u), c.f[20]);
    set32(c.r[10], 0u + 1u);
    st64((c.r[29].w[0] + 704u), c.r[31].d[0]);
    c.f[22] = c.f[12];
    st32((c.r[29].w[0] + 848u), c.f[24]);
    c.f[23] = c.f[13];
    c.f[24] = ld32((c.r[20].w[0] + 4u));
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[20] = 0u;
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4140u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002C4140u) [[unlikely]] return; }
L_002C4140:
    set32(c.r[18], c.r[29].w[0] + 32u);
    c.f[13] = ld32((c.r[29].w[0] + 308u));
    c.f[12] = ld32((c.r[20].w[0]));
    c.f[15] = c.f[21];
    c.f[14] = ld32((c.r[20].w[0] + 8u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4160u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C4160u) [[unlikely]] return; }
L_002C4160:
    set32(c.r[16], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 336u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4174u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x002C4174u) [[unlikely]] return; }
L_002C4174:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4184u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x002C4184u) [[unlikely]] return; }
L_002C4184:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[14] = c.r[1].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[15] = c.f[21];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C41A4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C41A4u) [[unlikely]] return; }
L_002C41A4:
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.f[12] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.f[14] = c.r[1].w[0];
    c.f[15] = c.f[21];
    c.f[13] = c.f[12];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C41C8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C41C8u) [[unlikely]] return; }
L_002C41C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C41DCu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002C41DCu) [[unlikely]] return; }
L_002C41DC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C41F0u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002C41F0u) [[unlikely]] return; }
L_002C41F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4208u);  if (depth < kMaxDepth) unit_0070(c, 51u, depth + 1u); else { c.pc = 0x002C0AA8u; return; } if (c.pc != 0x002C4208u) [[unlikely]] return; }
L_002C4208:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C42B4; } }
    set32(c.r[16], c.r[29].w[0] + 144u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4230u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002C4230u) [[unlikely]] return; }
L_002C4230:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4240u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002C4240u) [[unlikely]] return; }
L_002C4240:
    c.f[12] = c.f[22];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4254u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002C4254u) [[unlikely]] return; }
L_002C4254:
    set32(c.r[17], c.r[29].w[0] + 160u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C426Cu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002C426Cu) [[unlikely]] return; }
L_002C426C:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4280u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002C4280u) [[unlikely]] return; }
L_002C4280:
    c.f[12] = c.f[23];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4294u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002C4294u) [[unlikely]] return; }
L_002C4294:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C42A8u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002C42A8u) [[unlikely]] return; }
L_002C42A8:
    st32((c.r[21].w[0] + 4u), c.f[24]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C42C4; } }
L_002C42B4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C42C4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C42C4u) [[unlikely]] return; }
L_002C42C4:
    ld128((c.r[29].w[0] + 800u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 784u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 768u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 752u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 736u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 720u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 704u));
    c.f[24] = ld32((c.r[29].w[0] + 848u));
    c.f[23] = ld32((c.r[29].w[0] + 840u));
    c.f[22] = ld32((c.r[29].w[0] + 832u));
    c.f[21] = ld32((c.r[29].w[0] + 824u));
    c.f[20] = ld32((c.r[29].w[0] + 816u));
    set32(c.r[29], c.r[29].w[0] + 864u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C4300:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[17].w[0] + 11504u);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    set32(c.r[2], ld32((c.r[17].w[0] + 11504u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4408; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 113u)));
    set32(c.r[2], c.r[2].w[0] - 9376u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C4348; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C434C; } }
L_002C4348:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_002C434C:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C4408; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = ld32((c.r[2].w[0] - 23032u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBA030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C4408; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4394u);  if (depth < kMaxDepth) unit_0019(c, 20u, depth + 1u); else { c.pc = 0x00164460u; return; } if (c.pc != 0x002C4394u) [[unlikely]] return; }
L_002C4394:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[13] = c.r[1].w[0];
    c.f[12] = ld32((c.r[17].w[0] + 148u));
    st32((c.r[17].w[0] + 13080u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 13136u), c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C43B0u);  if (depth < kMaxDepth) unit_008A(c, 180u, depth + 1u); else { c.pc = 0x0032A770u; return; } if (c.pc != 0x002C43B0u) [[unlikely]] return; }
L_002C43B0:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] | 4ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C43C8u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002C43C8u) [[unlikely]] return; }
L_002C43C8:
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBB200000u);
    c.f[2] = c.r[1].w[0];
    st32((c.r[17].w[0] + 13144u), c.f[20]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 13132u), c.r[16].w[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 212u), 0u);
    st32((c.r[17].w[0] + 13128u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 208u), c.f[0]);
    st32((c.r[17].w[0] + 216u), c.f[1]);
    st32((c.r[17].w[0] + 13092u), 0u);
    st32((c.r[17].w[0] + 12932u), 0u);
    st32((c.r[17].w[0] + 13124u), 0u);
    st16((c.r[17].w[0] + 11354u), static_cast<std::uint16_t>(0u));
    c.budget -= 16;
L_002C4408:
    set32(c.r[2], ld32((c.r[17].w[0] + 11824u)));
    set32(c.r[4], c.r[17].w[0] + 11824u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4438; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4420u);  if (depth < kMaxDepth) unit_0089(c, 55u, depth + 1u); else { c.pc = 0x00324D40u; return; } if (c.pc != 0x002C4420u) [[unlikely]] return; }
L_002C4420:
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4438; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4438u);  if (depth < kMaxDepth) unit_003A(c, 216u, depth + 1u); else { c.pc = 0x001EA1D8u; return; } if (c.pc != 0x002C4438u) [[unlikely]] return; }
L_002C4438:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C4458:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4470u);  if (depth < kMaxDepth) unit_006E(c, 177u, depth + 1u); else { c.pc = 0x002BA720u; return; } if (c.pc != 0x002C4470u) [[unlikely]] return; }
L_002C4470:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C449C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4490u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002C4490u) [[unlikely]] return; }
L_002C4490:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C44A0; } }
L_002C449C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C44A0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C4574; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C4574; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[5], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 572u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C44ECu);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x002C44ECu) [[unlikely]] return; }
L_002C44EC:
    c.f[0] = 0u;
    set32(c.r[2], 0u + 143u);
    set32(c.r[3], 0u + 21u);
    st16((c.r[16].w[0] + 8940u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 9020u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 7676u), static_cast<std::uint16_t>(0u));
    st64((c.r[16].w[0] + 560u), 0ull);
    st32((c.r[16].w[0] + 13128u), 0u);
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 9924u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 216u), c.f[0]);
    st32((c.r[16].w[0] + 13024u), c.f[0]);
    st32((c.r[16].w[0] + 208u), c.f[0]);
    st32((c.r[16].w[0] + 13028u), c.f[0]);
    st32((c.r[16].w[0] + 212u), c.f[0]);
    st32((c.r[16].w[0] + 13032u), c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4538u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002C4538u) [[unlikely]] return; }
L_002C4538:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 143u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4548u);  if (depth < kMaxDepth) unit_0033(c, 115u, depth + 1u); else { c.pc = 0x001CD5D0u; return; } if (c.pc != 0x002C4548u) [[unlikely]] return; }
L_002C4548:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    set32(c.r[4], c.r[16].w[0] + 12992u);
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4568u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C4568u) [[unlikely]] return; }
L_002C4568:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4578; } }
L_002C4574:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C4578:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C4590:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[18].w[0] + 336u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 256u), c.f[22]);
    st32((c.r[29].w[0] + 248u), c.f[21]);
    st32((c.r[29].w[0] + 240u), c.f[20]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C45D0u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x002C45D0u) [[unlikely]] return; }
L_002C45D0:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9926u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C49BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 27552u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002C4000u < 16384u) { entry = entries_0071[(t - 0x002C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C4608:
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.f[13] = ld32((c.r[18].w[0] + 11860u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[13] = fp::add(c.f[13], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[15] = c.f[20];
    c.f[13] = fp::mul(c.f[13], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3960000u);
    c.f[21] = c.r[1].w[0];
    c.f[22] = 0u;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4650u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C4650u) [[unlikely]] return; }
L_002C4650:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4660u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x002C4660u) [[unlikely]] return; }
L_002C4660:
    set32(c.r[17], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[14] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.f[13] = c.f[22];
    c.f[15] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4684u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C4684u) [[unlikely]] return; }
L_002C4684:
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.f[14] = c.r[1].w[0];
    c.f[12] = c.f[21];
    c.f[13] = c.f[22];
    c.f[15] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C46A8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C46A8u) [[unlikely]] return; }
L_002C46A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C46BCu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002C46BCu) [[unlikely]] return; }
L_002C46BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C46D0u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002C46D0u) [[unlikely]] return; }
L_002C46D0:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C46E8u);  if (depth < kMaxDepth) unit_0070(c, 51u, depth + 1u); else { c.pc = 0x002C0AA8u; return; } if (c.pc != 0x002C46E8u) [[unlikely]] return; }
L_002C46E8:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C4998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C49B0; } }
L_002C46FC:
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.f[13] = ld32((c.r[18].w[0] + 11860u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[13] = fp::add(c.f[13], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[15] = c.f[20];
    c.f[13] = fp::mul(c.f[13], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[21] = c.r[1].w[0];
    c.f[22] = 0u;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4744u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C4744u) [[unlikely]] return; }
L_002C4744:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4754u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x002C4754u) [[unlikely]] return; }
L_002C4754:
    set32(c.r[17], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[14] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.f[13] = c.f[22];
    c.f[15] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4778u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C4778u) [[unlikely]] return; }
L_002C4778:
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.f[14] = c.r[1].w[0];
    c.f[12] = c.f[21];
    c.f[13] = c.f[22];
    c.f[15] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C479Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C479Cu) [[unlikely]] return; }
L_002C479C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C47B0u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002C47B0u) [[unlikely]] return; }
L_002C47B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C47C4u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002C47C4u) [[unlikely]] return; }
L_002C47C4:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C47DCu);  if (depth < kMaxDepth) unit_0070(c, 51u, depth + 1u); else { c.pc = 0x002C0AA8u; return; } if (c.pc != 0x002C47DCu) [[unlikely]] return; }
L_002C47DC:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C4998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C49B0; } }
L_002C47F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[15] = c.f[21];
    c.f[13] = ld32((c.r[18].w[0] + 11860u));
    c.f[20] = 0u;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C481Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C481Cu) [[unlikely]] return; }
L_002C481C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C482Cu);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x002C482Cu) [[unlikely]] return; }
L_002C482C:
    set32(c.r[17], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[14] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[15] = c.f[21];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4850u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C4850u) [[unlikely]] return; }
L_002C4850:
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.f[12] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.f[14] = c.r[1].w[0];
    c.f[15] = c.f[21];
    c.f[13] = c.f[12];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4874u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C4874u) [[unlikely]] return; }
L_002C4874:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4888u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002C4888u) [[unlikely]] return; }
L_002C4888:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C489Cu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002C489Cu) [[unlikely]] return; }
L_002C489C:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C48B4u);  if (depth < kMaxDepth) unit_0070(c, 51u, depth + 1u); else { c.pc = 0x002C0AA8u; return; } if (c.pc != 0x002C48B4u) [[unlikely]] return; }
L_002C48B4:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C4998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C49B0; } }
L_002C48C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.f[12] = ld32((c.r[18].w[0] + 128u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = ld32((c.r[18].w[0] + 132u));
    c.f[15] = c.f[21];
    c.f[14] = ld32((c.r[18].w[0] + 136u));
    c.f[20] = 0u;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C48F4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C48F4u) [[unlikely]] return; }
L_002C48F4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4904u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x002C4904u) [[unlikely]] return; }
L_002C4904:
    set32(c.r[17], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[14] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[15] = c.f[21];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4928u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C4928u) [[unlikely]] return; }
L_002C4928:
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.f[12] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.f[14] = c.r[1].w[0];
    c.f[15] = c.f[21];
    c.f[13] = c.f[12];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C494Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C494Cu) [[unlikely]] return; }
L_002C494C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4960u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002C4960u) [[unlikely]] return; }
L_002C4960:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4974u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002C4974u) [[unlikely]] return; }
L_002C4974:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C498Cu);  if (depth < kMaxDepth) unit_0070(c, 51u, depth + 1u); else { c.pc = 0x002C0AA8u; return; } if (c.pc != 0x002C498Cu) [[unlikely]] return; }
L_002C498C:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C49B0; } }
L_002C4998:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C49A4u);  if (depth < kMaxDepth) unit_0089(c, 55u, depth + 1u); else { c.pc = 0x00324D40u; return; } if (c.pc != 0x002C49A4u) [[unlikely]] return; }
L_002C49A4:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C49BC; } }
L_002C49B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C49C0; } }
L_002C49BC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C49C0:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[22] = ld32((c.r[29].w[0] + 256u));
    c.f[21] = ld32((c.r[29].w[0] + 248u));
    c.f[20] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[29], c.r[29].w[0] + 272u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C49F0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    st32((c.r[29].w[0] + 280u), c.f[21]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 288u), c.f[22]);
    st32((c.r[29].w[0] + 272u), c.f[20]);
    c.f[21] = 0u;
    set32(c.r[2], ld32((c.r[17].w[0] + 7700u)));
    st32((c.r[29].w[0] + 128u), c.f[21]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002C4A48; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C4ED4; } }
L_002C4A48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[22] = c.r[1].w[0];
    c.f[12] = ld32((c.r[2].w[0] - 9376u));
    set32(c.r[5], c.r[17].w[0] + 13008u);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 12992u);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = c.f[22];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4A80u);  if (depth < kMaxDepth) unit_0071(c, 6u, depth + 1u); else { c.pc = 0x002C40A8u; return; } if (c.pc != 0x002C4A80u) [[unlikely]] return; }
L_002C4A80:
    set32(c.r[19], 0u + 1u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.f[13] = c.f[21];
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4AA0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C4AA0u) [[unlikely]] return; }
L_002C4AA0:
    set32(c.r[16], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 11888u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4AB4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C4AB4u) [[unlikely]] return; }
L_002C4AB4:
    c.f[12] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.f[13] = ld32((c.r[29].w[0] + 36u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[14] = ld32((c.r[29].w[0] + 40u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[13] = c.f[13] ^ fp::kSign;
    c.f[15] = c.f[20];
    c.f[14] = c.f[14] ^ fp::kSign;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4AE0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C4AE0u) [[unlikely]] return; }
L_002C4AE0:
    c.f[12] = ld32((c.r[17].w[0] + 148u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4AF0u);  if (depth < kMaxDepth) unit_0070(c, 30u, depth + 1u); else { c.pc = 0x002C0608u; return; } if (c.pc != 0x002C4AF0u) [[unlikely]] return; }
L_002C4AF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_002C4B08; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4B04u);  if (depth < kMaxDepth) unit_0070(c, 24u, depth + 1u); else { c.pc = 0x002C0530u; return; } if (c.pc != 0x002C4B04u) [[unlikely]] return; }
L_002C4B04:
    st32((c.r[17].w[0] + 12920u), c.f[0]);
    c.budget -= 1;
L_002C4B08:
    set32(c.r[2], ld32((c.r[17].w[0] + 11824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_002C4B1C; } }
    c.f[0] = ld32((c.r[17].w[0] + 12920u));
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.budget -= 2;
L_002C4B1C:
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4B34u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002C4B34u) [[unlikely]] return; }
L_002C4B34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0] + 148u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4B64u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x002C4B64u) [[unlikely]] return; }
L_002C4B64:
    set32(c.r[4], c.r[17].w[0] + 336u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = c.f[22];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4B7Cu);  if (depth < kMaxDepth) unit_008A(c, 201u, depth + 1u); else { c.pc = 0x0032AC98u; return; } if (c.pc != 0x002C4B7Cu) [[unlikely]] return; }
L_002C4B7C:
    st32((c.r[17].w[0] + 324u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4B8Cu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002C4B8Cu) [[unlikely]] return; }
L_002C4B8C:
    set32(c.r[16], c.r[29].w[0] + 128u);
    set32(c.r[19], c.r[29].w[0] + 132u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4BA0u);  if (depth < kMaxDepth) unit_007C(c, 67u, depth + 1u); else { c.pc = 0x002F0EC0u; return; } if (c.pc != 0x002C4BA0u) [[unlikely]] return; }
L_002C4BA0:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4BB0u);  if (depth < kMaxDepth) unit_007C(c, 68u, depth + 1u); else { c.pc = 0x002F0F68u; return; } if (c.pc != 0x002C4BB0u) [[unlikely]] return; }
L_002C4BB0:
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[21]));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C4BD0; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C4BD4; } }
L_002C4BD0:
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_002C4BD4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002C4C00; } }
    c.f[12] = c.f[0] ^ fp::kSign;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4BF0u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x002C4BF0u) [[unlikely]] return; }
L_002C4BF0:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 4;
L_002C4C00:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_002C4C1C; } }
    c.f[0] = c.r[18].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4C2C; } }
L_002C4C1C:
    c.f[0] = c.r[18].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 4;
L_002C4C2C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C4C50; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4D18; } }
L_002C4C50:
    c.f[2] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C4C7C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4C9C; } }
L_002C4C7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C4C9C; } }
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 1;
L_002C4C9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = 0u;
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C4CD4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4CF4; } }
L_002C4CD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C4CF4; } }
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 1;
L_002C4CF4:
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[4].w[0] + 511u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 9));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 9;
L_002C4D18:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002C4E48; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[4], 0u + 260u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 132u));
    set32(c.r[18], c.r[22].w[0] - 9376u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    st8((c.r[17].w[0] + 9926u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 72u));
    c.f[20] = ld32((c.r[4].w[0] + 68u));
    st32((c.r[3].w[0] - 18908u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 140u);
    c.f[20] = fp::mul(c.f[20], c.f[1]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4D88u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002C4D88u) [[unlikely]] return; }
L_002C4D88:
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.f[12] = c.f[20] ^ fp::kSign;
    c.f[13] = ld32((c.r[29].w[0] + 136u));
    c.f[14] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = fp::mul(c.f[20], c.f[13]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4DB8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C4DB8u) [[unlikely]] return; }
L_002C4DB8:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4DCCu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002C4DCCu) [[unlikely]] return; }
L_002C4DCC:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4DE0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002C4DE0u) [[unlikely]] return; }
L_002C4DE0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 113u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4E04; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4E10; } }
L_002C4E04:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
L_002C4E10:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002C4E4C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C4E4C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4E40u);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x002C4E40u) [[unlikely]] return; }
L_002C4E40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4E4C; } }
L_002C4E48:
    st8((c.r[17].w[0] + 9926u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002C4E4C:
    set32(c.r[16], ld32((c.r[17].w[0] + 11824u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002C4E7C; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4E6Cu);  if (depth < kMaxDepth) unit_0071(c, 37u, depth + 1u); else { c.pc = 0x002C4590u; return; } if (c.pc != 0x002C4E6Cu) [[unlikely]] return; }
L_002C4E6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_002C4E8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4EB8; } }
L_002C4E7C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9926u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C4EB8; } }
L_002C4E8C:
    c.f[0] = ld32((c.r[17].w[0] + 13008u));
    c.f[1] = ld32((c.r[17].w[0] + 13012u));
    c.f[2] = ld32((c.r[17].w[0] + 13016u));
    st32((c.r[17].w[0] + 128u), c.f[0]);
    st32((c.r[17].w[0] + 136u), c.f[2]);
    st32((c.r[17].w[0] + 132u), c.f[1]);
    st32((c.r[17].w[0] + 12992u), c.f[0]);
    st32((c.r[17].w[0] + 12996u), c.f[1]);
    st32((c.r[17].w[0] + 13000u), c.f[2]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4ED4; } }
L_002C4EB8:
    c.f[0] = ld32((c.r[17].w[0] + 12992u));
    c.f[1] = ld32((c.r[17].w[0] + 12996u));
    c.f[2] = ld32((c.r[17].w[0] + 13000u));
    st32((c.r[17].w[0] + 128u), c.f[0]);
    st32((c.r[17].w[0] + 132u), c.f[1]);
    st32((c.r[17].w[0] + 136u), c.f[2]);
    st8((c.r[17].w[0] + 9926u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_002C4ED4:
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[22] = ld32((c.r[29].w[0] + 288u));
    c.f[21] = ld32((c.r[29].w[0] + 280u));
    c.f[20] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[29], c.r[29].w[0] + 304u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C4F10:
    c.f[0] = ld32((c.r[4].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C4F20:
    set32(c.r[2], 0u + 260u);
    set32(c.r[6], c.r[6].w[0] << 2);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 68u));
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C4F50:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002C4F6C; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C4F6C:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C4F80:
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[3]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[5], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    st32((c.r[4].w[0]), c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C4FE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C4FE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5000u);  if (depth < kMaxDepth) unit_006E(c, 177u, depth + 1u); else { c.pc = 0x002BA720u; return; } if (c.pc != 0x002C5000u) [[unlikely]] return; }
L_002C5000:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C5030; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5020u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002C5020u) [[unlikely]] return; }
L_002C5020:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5034; } }
L_002C5030:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C5034:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5048:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    set32(c.r[17], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C506Cu);  if (depth < kMaxDepth) unit_0019(c, 20u, depth + 1u); else { c.pc = 0x00164460u; return; } if (c.pc != 0x002C506Cu) [[unlikely]] return; }
L_002C506C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[13] = c.r[1].w[0];
    c.f[12] = ld32((c.r[16].w[0] + 148u));
    st32((c.r[16].w[0] + 13080u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 13136u), c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5088u);  if (depth < kMaxDepth) unit_008A(c, 180u, depth + 1u); else { c.pc = 0x0032A770u; return; } if (c.pc != 0x002C5088u) [[unlikely]] return; }
L_002C5088:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C50A0u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002C50A0u) [[unlikely]] return; }
L_002C50A0:
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBB200000u);
    c.f[2] = c.r[1].w[0];
    st32((c.r[16].w[0] + 13144u), c.f[20]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 13132u), c.r[17].w[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 13128u), c.r[17].w[0]);
    st16((c.r[16].w[0] + 11354u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 208u), c.f[0]);
    st32((c.r[16].w[0] + 216u), c.f[1]);
    st32((c.r[16].w[0] + 212u), 0u);
    st32((c.r[16].w[0] + 13092u), 0u);
    st32((c.r[16].w[0] + 12932u), 0u);
    st32((c.r[16].w[0] + 13124u), 0u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5100:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C512Cu);  if (depth < kMaxDepth) unit_007C(c, 67u, depth + 1u); else { c.pc = 0x002F0EC0u; return; } if (c.pc != 0x002C512Cu) [[unlikely]] return; }
L_002C512C:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C513Cu);  if (depth < kMaxDepth) unit_007C(c, 68u, depth + 1u); else { c.pc = 0x002F0F68u; return; } if (c.pc != 0x002C513Cu) [[unlikely]] return; }
L_002C513C:
    c.f[1] = 0u;
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C5164; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C5168; } }
L_002C5164:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_002C5168:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002C5194; } }
    c.f[12] = c.f[0] ^ fp::kSign;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5184u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x002C5184u) [[unlikely]] return; }
L_002C5184:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 4;
L_002C5194:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_002C51B0; } }
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C51C0; } }
L_002C51B0:
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 4;
L_002C51C0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C51E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.f[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5214u);  if (depth < kMaxDepth) unit_007C(c, 67u, depth + 1u); else { c.pc = 0x002F0EC0u; return; } if (c.pc != 0x002C5214u) [[unlikely]] return; }
L_002C5214:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5224u);  if (depth < kMaxDepth) unit_007C(c, 68u, depth + 1u); else { c.pc = 0x002F0F68u; return; } if (c.pc != 0x002C5224u) [[unlikely]] return; }
L_002C5224:
    c.f[1] = 0u;
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C524C; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C5250; } }
L_002C524C:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_002C5250:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002C527C; } }
    c.f[12] = c.f[0] ^ fp::kSign;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C526Cu);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x002C526Cu) [[unlikely]] return; }
L_002C526C:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 4;
L_002C527C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_002C5298; } }
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C52A8; } }
L_002C5298:
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 4;
L_002C52A8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C52CC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C5394; } }
L_002C52CC:
    c.f[2] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C52F8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C5318; } }
L_002C52F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C5318; } }
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 1;
L_002C5318:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = 0u;
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C5350; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C5370; } }
L_002C5350:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C5370; } }
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 1;
L_002C5370:
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[5], c.f[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[5].w[0] + 511u);
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[5].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 9));
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.budget -= 9;
L_002C5394:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C53B8:
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002C53DC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C53DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] - 27040u);
    st32((c.r[3].w[0] + 17196u), c.r[2].w[0]);
    c.budget -= 4;
L_002C53DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C53E8:
    c.f[0] = ld32((c.r[4].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C53F8:
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5408:
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5418:
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5428:
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5438:
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5448:
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5458:
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5468:
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5478:
    st32((c.r[4].w[0]), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5488:
    st32((c.r[4].w[0] + 4u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5498:
    st32((c.r[4].w[0] + 8u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C54A8:
    st32((c.r[4].w[0] + 12u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C54B8:
    st32((c.r[4].w[0] + 16u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C54C8:
    st32((c.r[4].w[0] + 20u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C54D8:
    st32((c.r[4].w[0] + 24u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C54E8:
    st32((c.r[4].w[0] + 28u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C54F8:
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5508:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5520:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[6].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5538:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 17144u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5558:
    set32(c.r[29], c.r[29].w[0] - 608u);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[17], c.r[29].w[0] + 32u);
    st64((c.r[29].w[0] + 560u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5580u);  if (depth < kMaxDepth) unit_006F(c, 190u, depth + 1u); else { c.pc = 0x002BFD40u; return; } if (c.pc != 0x002C5580u) [[unlikely]] return; }
L_002C5580:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C55A4u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002C55A4u) [[unlikely]] return; }
L_002C55A4:
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 164u));
    c.f[14] = ld32((c.r[29].w[0] + 168u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C55C4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C55C4u) [[unlikely]] return; }
L_002C55C4:
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[5], c.r[16].w[0] + 13024u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C55E0u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002C55E0u) [[unlikely]] return; }
L_002C55E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C55F4u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002C55F4u) [[unlikely]] return; }
L_002C55F4:
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 560u));
    set32(c.r[29], c.r[29].w[0] + 608u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5610:
    set32(c.r[29], c.r[29].w[0] - 624u);
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[17], c.r[29].w[0] + 32u);
    st64((c.r[29].w[0] + 576u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5638u);  if (depth < kMaxDepth) unit_006F(c, 190u, depth + 1u); else { c.pc = 0x002BFD40u; return; } if (c.pc != 0x002C5638u) [[unlikely]] return; }
L_002C5638:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C565Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002C565Cu) [[unlikely]] return; }
L_002C565C:
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 164u));
    c.f[14] = ld32((c.r[29].w[0] + 168u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C567Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C567Cu) [[unlikely]] return; }
L_002C567C:
    c.f[12] = ld32((c.r[16].w[0] + 12920u));
    set32(c.r[4], c.r[29].w[0] + 560u);
    set32(c.r[5], c.r[29].w[0] + 564u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5690u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002C5690u) [[unlikely]] return; }
L_002C5690:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBE7A0000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[1] = ld32((c.r[29].w[0] + 560u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 564u));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 20u), 0u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 16u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C56C8u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002C56C8u) [[unlikely]] return; }
L_002C56C8:
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 576u));
    set32(c.r[29], c.r[29].w[0] + 624u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C56E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 27040u);
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C56F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5708:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5718:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5720:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5728:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[1] = ld32((c.r[5].w[0] + 12892u));
    set32(c.r[2], c.r[2].w[0] + 17144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 12892u), c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C577C; } }
    c.f[2] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C5780; } }
L_002C577C:
    st32((c.r[5].w[0] + 12892u), c.f[2]);
    c.budget -= 1;
L_002C5780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5788:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] - 17692u));
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[13] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[14] = c.f[12];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C57D0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002C57D0u) [[unlikely]] return; }
L_002C57D0:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C57E4u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002C57E4u) [[unlikely]] return; }
L_002C57E4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C57F4u);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x002C57F4u) [[unlikely]] return; }
L_002C57F4:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5800u);  if (depth < kMaxDepth) unit_00C2(c, 223u, depth + 1u); else { c.pc = 0x0040AB48u; return; } if (c.pc != 0x002C5800u) [[unlikely]] return; }
L_002C5800:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42650000u);
    c.r[1].d[0] = c.r[1].d[0] | 12000ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C5840; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C586C; } }
L_002C5840:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C586C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
L_002C586C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.f[0] = c.f[1];
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5888:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5890:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[4].w[0] + 12992u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 13008u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C58ACu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002C58ACu) [[unlikely]] return; }
L_002C58AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C58C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C58C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C58D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C58E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C58E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[5].w[0] + 64u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[6].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5900u);  if (depth < kMaxDepth) unit_008B(c, 106u, depth + 1u); else { c.pc = 0x0032CD08u; return; } if (c.pc != 0x002C5900u) [[unlikely]] return; }
L_002C5900:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[1] = c.r[1].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C5924; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C5924:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5938:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5950u);  if (depth < kMaxDepth) unit_0071(c, 113u, depth + 1u); else { c.pc = 0x002C53B8u; return; } if (c.pc != 0x002C5950u) [[unlikely]] return; }
L_002C5950:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5960:
    set32(c.r[29], c.r[29].w[0] - 1008u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[29].w[0] + 336u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 776u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 636u);
    st32((c.r[29].w[0] + 752u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 728u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 640u);
    set32(c.r[2], c.r[29].w[0] + 644u);
    st32((c.r[29].w[0] + 732u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 736u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 652u);
    set32(c.r[2], c.r[29].w[0] + 656u);
    st32((c.r[29].w[0] + 740u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 744u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 660u);
    set32(c.r[2], c.r[29].w[0] + 704u);
    st32((c.r[29].w[0] + 748u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 760u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 708u);
    set32(c.r[2], c.r[29].w[0] + 712u);
    st32((c.r[29].w[0] + 764u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 768u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 716u);
    set32(c.r[2], c.r[29].w[0] + 688u);
    st128((c.r[29].w[0] + 976u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 960u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[29].w[0] + 672u);
    st128((c.r[29].w[0] + 944u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[29].w[0] + 676u);
    st128((c.r[29].w[0] + 912u) & ~15u, c.r[21]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 896u) & ~15u, c.r[22]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 880u) & ~15u, c.r[23]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 864u) & ~15u, c.r[30]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[29].w[0] + 772u), c.r[4].w[0]);
    set32(c.r[30], c.r[29].w[0] + 664u);
    st32((c.r[29].w[0] + 756u), c.r[2].w[0]);
    set32(c.r[4], 0u - 1u);
    st128((c.r[29].w[0] + 992u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[29].w[0] + 648u);
    st128((c.r[29].w[0] + 928u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 848u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 720u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 724u), 0u);
    c.budget -= 50;
L_002C5A28:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 332u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C5A28u | kUnwind; return; } goto L_002C5A28; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[2].w[0] + 15804u), c.r[3].w[0]);
    set32(c.r[4], 0u + 4u);
    set32(c.r[2], ld32((c.r[29].w[0] + 720u)));
    set32(c.r[16], 0u + 3u);
    set32(c.r[20], c.r[2].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 14664u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[3].w[0] + 19624u), c.r[4].w[0]);
    c.budget -= 12;
L_002C5A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5A80u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x002C5A80u) [[unlikely]] return; }
L_002C5A80:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5A8Cu);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x002C5A8Cu) [[unlikely]] return; }
L_002C5A8C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C5A78u | kUnwind; return; } goto L_002C5A78; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 24640u)));
    set32(c.r[6], c.r[19].w[0] + 24640u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5AD0; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 23004u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 12u)));
    st32((c.r[19].w[0] + 24640u), 0u);
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    st32((c.r[22].w[0] + 19772u), c.r[3].w[0]);
    st32((c.r[23].w[0] + 19776u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5AD0u);  if (depth < kMaxDepth) unit_0049(c, 45u, depth + 1u); else { c.pc = 0x00224E98u; return; } if (c.pc != 0x002C5AD0u) [[unlikely]] return; }
L_002C5AD0:
    set32(c.r[4], ld32((c.r[22].w[0] + 19772u)));
    set32(c.r[5], ld32((c.r[23].w[0] + 19776u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5AE0u);  if (depth < kMaxDepth) unit_0049(c, 221u, depth + 1u); else { c.pc = 0x00226BF8u; return; } if (c.pc != 0x002C5AE0u) [[unlikely]] return; }
L_002C5AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5AE8u);  if (depth < kMaxDepth) unit_0081(c, 76u, depth + 1u); else { c.pc = 0x003051B8u; return; } if (c.pc != 0x002C5AE8u) [[unlikely]] return; }
L_002C5AE8:
    set32(c.r[2], ld32((c.r[21].w[0] + 23004u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C5B24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21184u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5B24; } }
    set32(c.r[16], 0u + 3u);
    c.budget -= 1;
L_002C5B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5B10u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x002C5B10u) [[unlikely]] return; }
L_002C5B10:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5B1Cu);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x002C5B1Cu) [[unlikely]] return; }
L_002C5B1C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C5B08u | kUnwind; return; } goto L_002C5B08; } }
L_002C5B24:
    set32(c.r[4], 0u + 16u);
    set32(c.r[2], 0u + 127u);
    st8((c.r[29].w[0] + 672u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 64u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0] + 23004u)));
    st8((c.r[29].w[0] + 676u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C5B84; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 14636u)));
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5B7Cu);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x002C5B7Cu) [[unlikely]] return; }
L_002C5B7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C5BA4; } }
L_002C5B84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 14636u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5BA4u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x002C5BA4u) [[unlikely]] return; }
L_002C5BA4:
    set32(c.r[2], ld32((c.r[29].w[0] + 752u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[30], ld32((c.r[29].w[0] + 748u)));
    set32(c.r[9], 0u + 1u);
    set32(c.r[23], ld32((c.r[29].w[0] + 744u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[22], ld32((c.r[29].w[0] + 740u)));
    set32(c.r[16], c.r[2].w[0] + 616u);
    set32(c.r[21], ld32((c.r[29].w[0] + 736u)));
    set32(c.r[8], 0u + 30u);
    set32(c.r[20], ld32((c.r[29].w[0] + 732u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[19], ld32((c.r[29].w[0] + 728u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 776u)));
    c.budget -= 15;
L_002C5BE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 784u) & ~15u, c.r[6]);
    set32(c.r[18], c.r[18].w[0] + 300u);
    st128((c.r[29].w[0] + 800u) & ~15u, c.r[7]);
    set32(c.r[17], c.r[17].w[0] + 332u);
    st128((c.r[29].w[0] + 816u) & ~15u, c.r[8]);
    st128((c.r[29].w[0] + 832u) & ~15u, c.r[9]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5C08u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x002C5C08u) [[unlikely]] return; }
L_002C5C08:
    set32(c.r[4], 0u + 1000u);
    set32(c.r[2], 0u + 50u);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 332u);
    set32(c.r[20], c.r[20].w[0] + 332u);
    ld128((c.r[29].w[0] + 816u) & ~15u, c.r[8]);
    st32((c.r[21].w[0]), c.r[8].w[0]);
    set32(c.r[21], c.r[21].w[0] + 332u);
    set32(c.r[8], c.r[8].w[0] + 30u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 676u));
    ld128((c.r[29].w[0] + 800u) & ~15u, c.r[7]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 677u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 678u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 679u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[22].w[0]), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 332u);
    st32((c.r[23].w[0]), 0u);
    set32(c.r[22], c.r[22].w[0] + 332u);
    set32(c.r[23], c.r[23].w[0] + 332u);
    ld128((c.r[29].w[0] + 832u) & ~15u, c.r[9]);
    st32((c.r[30].w[0]), c.r[9].w[0]);
    set32(c.r[30], c.r[30].w[0] + 332u);
    ld128((c.r[29].w[0] + 784u) & ~15u, c.r[6]);
    st32((c.r[6].w[0]), c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] + 332u);
    c.budget -= 34;
    { const bool t = c.r[7].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C5BE0u | kUnwind; return; } goto L_002C5BE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5C98u);  if (depth < kMaxDepth) unit_0028(c, 204u, depth + 1u); else { c.pc = 0x001A2A70u; return; } if (c.pc != 0x002C5C98u) [[unlikely]] return; }
L_002C5C98:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002C5CAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5CACu);  if (depth < kMaxDepth) unit_0028(c, 196u, depth + 1u); else { c.pc = 0x001A29D0u; return; } if (c.pc != 0x002C5CACu) [[unlikely]] return; }
L_002C5CAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5CB4u);  if (depth < kMaxDepth) unit_0044(c, 133u, depth + 1u); else { c.pc = 0x00212860u; return; } if (c.pc != 0x002C5CB4u) [[unlikely]] return; }
L_002C5CB4:
    set32(c.r[30], 0u + 130u);
    set32(c.r[4], ld32((c.r[29].w[0] + 644u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[23], 0u + 360u);
    st32((c.r[3].w[0] + 19624u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 130u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5CD8u);  if (depth < kMaxDepth) unit_009E(c, 19u, depth + 1u); else { c.pc = 0x00378258u; return; } if (c.pc != 0x002C5CD8u) [[unlikely]] return; }
L_002C5CD8:
    set32(c.r[22], 0u + 300u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00380000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] - 32408u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st32((c.r[4].w[0] + 14948u), c.r[2].w[0]);
    set32(c.r[21], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[16], c.r[3].w[0] + 17200u);
    set32(c.r[20], 0u + 1u);
    set32(c.r[19], c.r[2].w[0] + 19264u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 12;
L_002C5D08:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 676u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[10].d[0] = ld8((c.r[29].w[0] + 678u));
    c.r[11].d[0] = ld8((c.r[29].w[0] + 679u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 677u));
    st8((c.r[29].w[0] + 688u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 690u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[2], 0u + 150u);
    set32(c.r[4], ld32((c.r[29].w[0] + 760u)));
    st8((c.r[29].w[0] + 691u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 764u)));
    set32(c.r[11], 0u + 1u);
    set32(c.r[6], ld32((c.r[29].w[0] + 768u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 772u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 756u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 776u)));
    st8((c.r[29].w[0] + 689u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 704u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 708u), c.r[30].w[0]);
    st32((c.r[29].w[0] + 712u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 716u), c.r[22].w[0]);
    st32((c.r[29].w[0]), c.r[21].w[0]);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 16u), c.r[20].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5D70u);  if (depth < kMaxDepth) unit_007E(c, 107u, depth + 1u); else { c.pc = 0x002F8CC0u; return; } if (c.pc != 0x002C5D70u) [[unlikely]] return; }
L_002C5D70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5D7Cu);  if (depth < kMaxDepth) unit_0071(c, 235u, depth + 1u); else { c.pc = 0x002C6878u; return; } if (c.pc != 0x002C5D7Cu) [[unlikely]] return; }
L_002C5D7C:
    set32(c.r[3], ld32((c.r[29].w[0] + 724u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5DCC; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 720u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5D98u);  if (depth < kMaxDepth) unit_0071(c, 271u, depth + 1u); else { c.pc = 0x002C6F10u; return; } if (c.pc != 0x002C5D98u) [[unlikely]] return; }
L_002C5D98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5DCC; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 720u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5DB0u);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x002C5DB0u) [[unlikely]] return; }
L_002C5DB0:
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5DCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5DC4u);  if (depth < kMaxDepth) unit_000A(c, 362u, depth + 1u); else { c.pc = 0x0012AB48u; return; } if (c.pc != 0x002C5DC4u) [[unlikely]] return; }
L_002C5DC4:
    set32(c.r[4], 0u + 1u);
    st32((c.r[29].w[0] + 724u), c.r[4].w[0]);
    c.budget -= 2;
L_002C5DCC:
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C5DE4; } }
    set32(c.r[4], c.r[18].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5DE4u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x002C5DE4u) [[unlikely]] return; }
L_002C5DE4:
    set32(c.r[2], ld32((c.r[29].w[0] + 724u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C5D08u | kUnwind; return; } goto L_002C5D08; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 720u)));
    set32(c.r[4], c.r[3].w[0] + 17200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5E04u);  if (depth < kMaxDepth) unit_0071(c, 307u, depth + 1u); else { c.pc = 0x002C7360u; return; } if (c.pc != 0x002C5E04u) [[unlikely]] return; }
L_002C5E04:
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C5D08u | kUnwind; return; } goto L_002C5D08; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] + 14948u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5E20u);  if (depth < kMaxDepth) unit_009E(c, 15u, depth + 1u); else { c.pc = 0x003781F8u; return; } if (c.pc != 0x002C5E20u) [[unlikely]] return; }
L_002C5E20:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002C5E30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5E30u);  if (depth < kMaxDepth) unit_0028(c, 202u, depth + 1u); else { c.pc = 0x001A2A40u; return; } if (c.pc != 0x002C5E30u) [[unlikely]] return; }
L_002C5E30:
    set32(c.r[5], ld32((c.r[29].w[0] + 720u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[2].w[0] + 17200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5E44u);  if (depth < kMaxDepth) unit_0071(c, 320u, depth + 1u); else { c.pc = 0x002C7668u; return; } if (c.pc != 0x002C5E44u) [[unlikely]] return; }
L_002C5E44:
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5E5Cu);  if (depth < kMaxDepth) unit_0081(c, 196u, depth + 1u); else { c.pc = 0x00306628u; return; } if (c.pc != 0x002C5E5Cu) [[unlikely]] return; }
L_002C5E5C:
    ld128((c.r[29].w[0] + 992u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 976u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 960u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 944u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 928u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 912u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 896u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 880u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 864u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 848u));
    set32(c.r[29], c.r[29].w[0] + 1008u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5E90:
    set32(c.r[29], c.r[29].w[0] - 1008u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[29].w[0] + 336u);
    st128((c.r[29].w[0] + 992u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 768u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 672u);
    set32(c.r[2], c.r[29].w[0] + 636u);
    st128((c.r[29].w[0] + 976u) & ~15u, c.r[17]);
    st32((c.r[29].w[0] + 756u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 676u);
    set32(c.r[2], c.r[29].w[0] + 640u);
    st128((c.r[29].w[0] + 960u) & ~15u, c.r[18]);
    st32((c.r[29].w[0] + 760u), c.r[2].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[29].w[0] + 688u);
    st128((c.r[29].w[0] + 944u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 928u) & ~15u, c.r[20]);
    set32(c.r[19], c.r[29].w[0] + 652u);
    st128((c.r[29].w[0] + 912u) & ~15u, c.r[21]);
    set32(c.r[20], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 752u), c.r[4].w[0]);
    set32(c.r[21], c.r[29].w[0] + 644u);
    st32((c.r[29].w[0] + 764u), c.r[2].w[0]);
    set32(c.r[18], c.r[29].w[0] + 656u);
    st128((c.r[29].w[0] + 896u) & ~15u, c.r[22]);
    set32(c.r[17], c.r[29].w[0] + 660u);
    st128((c.r[29].w[0] + 880u) & ~15u, c.r[23]);
    set32(c.r[16], c.r[29].w[0] + 664u);
    st128((c.r[29].w[0] + 864u) & ~15u, c.r[30]);
    set32(c.r[4], 0u - 1u);
    st64((c.r[29].w[0] + 848u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 648u);
    c.budget -= 32;
L_002C5F10:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 332u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C5F10u | kUnwind; return; } goto L_002C5F10; } }
    set32(c.r[3], 0u + 16u);
    set32(c.r[5], 0u + 128u);
    st8((c.r[29].w[0] + 672u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 64u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 255u);
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 676u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 752u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C5FB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C5F98; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 14636u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5F90u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x002C5F90u) [[unlikely]] return; }
L_002C5F90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C5FC8; } }
L_002C5F98:
    set32(c.r[2], ld32((c.r[8].w[0] + 14636u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5FACu);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x002C5FACu) [[unlikely]] return; }
L_002C5FAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C5FC8; } }
L_002C5FB4:
    set32(c.r[2], ld32((c.r[8].w[0] + 14636u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5FC8u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x002C5FC8u) [[unlikely]] return; }
L_002C5FC8:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[30].d[0] = c.r[17].d[0] + 0ull;
    c.r[22].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[23].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[29].w[0] + 760u)));
    set32(c.r[19], ld32((c.r[29].w[0] + 756u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[29].w[0] + 768u)));
    set32(c.r[9], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] + 616u);
    set32(c.r[8], 0u + 30u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 14;
L_002C6000:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 784u) & ~15u, c.r[6]);
    set32(c.r[18], c.r[18].w[0] + 300u);
    st128((c.r[29].w[0] + 800u) & ~15u, c.r[7]);
    set32(c.r[17], c.r[17].w[0] + 332u);
    st128((c.r[29].w[0] + 816u) & ~15u, c.r[8]);
    st128((c.r[29].w[0] + 832u) & ~15u, c.r[9]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6028u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x002C6028u) [[unlikely]] return; }
L_002C6028:
    set32(c.r[2], 0u + 1000u);
    set32(c.r[3], 0u + 25u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 332u);
    set32(c.r[20], c.r[20].w[0] + 332u);
    ld128((c.r[29].w[0] + 816u) & ~15u, c.r[8]);
    st32((c.r[21].w[0]), c.r[8].w[0]);
    set32(c.r[21], c.r[21].w[0] + 332u);
    set32(c.r[8], c.r[8].w[0] + 30u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 676u));
    ld128((c.r[29].w[0] + 800u) & ~15u, c.r[7]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 677u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 678u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 679u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    set32(c.r[16], c.r[16].w[0] + 332u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st32((c.r[23].w[0]), 0u);
    set32(c.r[22], c.r[22].w[0] + 332u);
    set32(c.r[23], c.r[23].w[0] + 332u);
    ld128((c.r[29].w[0] + 832u) & ~15u, c.r[9]);
    st32((c.r[30].w[0]), c.r[9].w[0]);
    set32(c.r[30], c.r[30].w[0] + 332u);
    ld128((c.r[29].w[0] + 784u) & ~15u, c.r[6]);
    st32((c.r[6].w[0]), c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] + 332u);
    c.budget -= 34;
    { const bool t = c.r[7].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6000u | kUnwind; return; } goto L_002C6000; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[2].w[0] + 19624u), c.r[3].w[0]);
    set32(c.r[20], 0u + 70u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C60C8u);  if (depth < kMaxDepth) unit_0081(c, 76u, depth + 1u); else { c.pc = 0x003051B8u; return; } if (c.pc != 0x002C60C8u) [[unlikely]] return; }
L_002C60C8:
    set32(c.r[22], 0u + 150u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00380000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] - 32408u);
    set32(c.r[19], 0u + 500u);
    st32((c.r[3].w[0] + 14948u), c.r[2].w[0]);
    set32(c.r[18], 0u - 1u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[21], 0u + 100u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 10;
L_002C60F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 752u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C61D0; } }
    set32(c.r[2], ld32((c.r[23].w[0] + 23004u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6164; } }
    c.r[9].d[0] = ld8((c.r[29].w[0] + 678u));
    set32(c.r[11], 0u + 140u);
    c.r[10].d[0] = ld8((c.r[29].w[0] + 679u));
    set32(c.r[4], c.r[29].w[0] + 704u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 676u));
    set32(c.r[5], c.r[29].w[0] + 708u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 677u));
    set32(c.r[6], c.r[29].w[0] + 712u);
    st8((c.r[29].w[0] + 690u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[7], c.r[29].w[0] + 716u);
    st8((c.r[29].w[0] + 691u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 716u), c.r[11].w[0]);
    set32(c.r[9], ld32((c.r[29].w[0] + 764u)));
    set32(c.r[11], 0u + 1u);
    set32(c.r[10], ld32((c.r[29].w[0] + 768u)));
    st8((c.r[29].w[0] + 688u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 689u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 704u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 708u), c.r[22].w[0]);
    st32((c.r[29].w[0] + 712u), c.r[19].w[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C61B4; } }
L_002C6164:
    c.r[10].d[0] = ld8((c.r[29].w[0] + 678u));
    set32(c.r[4], c.r[29].w[0] + 720u);
    c.r[11].d[0] = ld8((c.r[29].w[0] + 679u));
    set32(c.r[5], c.r[29].w[0] + 724u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 676u));
    set32(c.r[6], c.r[29].w[0] + 728u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 677u));
    set32(c.r[7], c.r[29].w[0] + 732u);
    st8((c.r[29].w[0] + 690u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    st8((c.r[29].w[0] + 691u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[9], ld32((c.r[29].w[0] + 764u)));
    set32(c.r[11], 0u + 1u);
    set32(c.r[10], ld32((c.r[29].w[0] + 768u)));
    st8((c.r[29].w[0] + 688u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 689u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 720u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 724u), c.r[22].w[0]);
    st32((c.r[29].w[0] + 728u), c.r[19].w[0]);
    st32((c.r[29].w[0] + 732u), c.r[21].w[0]);
    c.budget -= 20;
L_002C61B4:
    st32((c.r[29].w[0]), c.r[18].w[0]);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C61C8u);  if (depth < kMaxDepth) unit_007E(c, 107u, depth + 1u); else { c.pc = 0x002F8CC0u; return; } if (c.pc != 0x002C61C8u) [[unlikely]] return; }
L_002C61C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6238; } }
L_002C61D0:
    c.r[9].d[0] = ld8((c.r[29].w[0] + 678u));
    set32(c.r[11], 0u + 160u);
    c.r[10].d[0] = ld8((c.r[29].w[0] + 679u));
    set32(c.r[4], c.r[29].w[0] + 736u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 676u));
    set32(c.r[5], c.r[29].w[0] + 740u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 677u));
    set32(c.r[6], c.r[29].w[0] + 744u);
    st8((c.r[29].w[0] + 690u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[7], c.r[29].w[0] + 748u);
    st8((c.r[29].w[0] + 691u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 740u), c.r[11].w[0]);
    set32(c.r[9], ld32((c.r[29].w[0] + 764u)));
    set32(c.r[11], 0u + 1u);
    set32(c.r[10], ld32((c.r[29].w[0] + 768u)));
    st8((c.r[29].w[0] + 688u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 689u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 736u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 744u), c.r[19].w[0]);
    st32((c.r[29].w[0] + 748u), c.r[21].w[0]);
    st32((c.r[29].w[0]), c.r[18].w[0]);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6238u);  if (depth < kMaxDepth) unit_007E(c, 107u, depth + 1u); else { c.pc = 0x002F8CC0u; return; } if (c.pc != 0x002C6238u) [[unlikely]] return; }
L_002C6238:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[16], c.r[3].w[0] + 17200u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C624Cu);  if (depth < kMaxDepth) unit_0071(c, 235u, depth + 1u); else { c.pc = 0x002C6878u; return; } if (c.pc != 0x002C624Cu) [[unlikely]] return; }
L_002C624C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C625Cu);  if (depth < kMaxDepth) unit_0071(c, 271u, depth + 1u); else { c.pc = 0x002C6F10u; return; } if (c.pc != 0x002C625Cu) [[unlikely]] return; }
L_002C625C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C60F0u | kUnwind; return; } goto L_002C60F0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6274u);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x002C6274u) [[unlikely]] return; }
L_002C6274:
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C60F0u | kUnwind; return; } goto L_002C60F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 14948u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6290u);  if (depth < kMaxDepth) unit_009E(c, 15u, depth + 1u); else { c.pc = 0x003781F8u; return; } if (c.pc != 0x002C6290u) [[unlikely]] return; }
L_002C6290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C62A0; } }
L_002C6298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C62A0u);  if (depth < kMaxDepth) unit_0071(c, 235u, depth + 1u); else { c.pc = 0x002C6878u; return; } if (c.pc != 0x002C62A0u) [[unlikely]] return; }
L_002C62A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C62B0u);  if (depth < kMaxDepth) unit_0071(c, 307u, depth + 1u); else { c.pc = 0x002C7360u; return; } if (c.pc != 0x002C62B0u) [[unlikely]] return; }
L_002C62B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6298u | kUnwind; return; } goto L_002C6298; } }
    ld128((c.r[29].w[0] + 992u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 976u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 960u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 944u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 928u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 912u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 896u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 880u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 864u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 848u));
    set32(c.r[29], c.r[29].w[0] + 1008u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C62F8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    set32(c.r[2], ld32((c.r[3].w[0] - 17368u)));
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C64F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[19], ld32((c.r[2].w[0] - 17392u)));
    set32(c.r[2], c.r[2].w[0] - 17392u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C63B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 17200u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6364u);  if (depth < kMaxDepth) unit_0071(c, 271u, depth + 1u); else { c.pc = 0x002C6F10u; return; } if (c.pc != 0x002C6364u) [[unlikely]] return; }
L_002C6364:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C63B8; } }
    set32(c.r[16], 0u + 4999u);
    c.budget -= 1;
L_002C6370:
    set32(c.r[4], c.r[17].w[0] + 17200u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6380u);  if (depth < kMaxDepth) unit_0071(c, 235u, depth + 1u); else { c.pc = 0x002C6878u; return; } if (c.pc != 0x002C6380u) [[unlikely]] return; }
L_002C6380:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6370u | kUnwind; return; } goto L_002C6370; } }
    set32(c.r[4], c.r[17].w[0] + 17200u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6398u);  if (depth < kMaxDepth) unit_0071(c, 271u, depth + 1u); else { c.pc = 0x002C6F10u; return; } if (c.pc != 0x002C6398u) [[unlikely]] return; }
L_002C6398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C63D0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C63B0u);  if (depth < kMaxDepth) unit_0071(c, 169u, depth + 1u); else { c.pc = 0x002C5960u; return; } if (c.pc != 0x002C63B0u) [[unlikely]] return; }
L_002C63B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C63D0; } }
L_002C63B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 17376u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_002C63D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[2].w[0] - 17392u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[22], 0u + 1u);
    c.budget -= 6;
L_002C63E8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[19].d[0];  if (t) { goto L_002C64E0; } }
    set32(c.r[17], c.r[21].w[0] + 17200u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6404u);  if (depth < kMaxDepth) unit_0071(c, 271u, depth + 1u); else { c.pc = 0x002C6F10u; return; } if (c.pc != 0x002C6404u) [[unlikely]] return; }
L_002C6404:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C64E0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C641Cu);  if (depth < kMaxDepth) unit_0071(c, 307u, depth + 1u); else { c.pc = 0x002C7360u; return; } if (c.pc != 0x002C641Cu) [[unlikely]] return; }
L_002C641C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6434u);  if (depth < kMaxDepth) unit_0071(c, 315u, depth + 1u); else { c.pc = 0x002C7578u; return; } if (c.pc != 0x002C6434u) [[unlikely]] return; }
L_002C6434:
    c.r[2].d[0] = ld8((c.r[29].w[0]));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 1u));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 3u));
    set32(c.r[4], c.r[4].w[0] - 128u);
    set32(c.r[5], c.r[5].w[0] - 128u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[3].w[0] - 128u);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.budget -= 22;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002C64CC; } }
    c.f[1] = c.f[1] & fp::kAbs;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[4] = c.r[1].w[0];
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[1] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C64CC; } }
    c.f[0] = c.f[2] & fp::kAbs;
    c.f[1] = c.f[3] & fp::kAbs;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C64E0; } }
L_002C64CC:
    st32((c.r[20].w[0] + 12u), c.r[22].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[23].w[0] - 17368u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C64F0; } }
L_002C64E0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C63E8u | kUnwind; return; } goto L_002C63E8; } }
L_002C64F0:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6520:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002C66B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6568u);  if (depth < kMaxDepth) unit_0044(c, 139u, depth + 1u); else { c.pc = 0x00212990u; return; } if (c.pc != 0x002C6568u) [[unlikely]] return; }
L_002C6568:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[20], 0u + 1u);
    set32(c.r[21], 0u + 1u);
    set32(c.r[16], c.r[19].w[0] + 64u);
    set32(c.r[18], c.r[19].w[0] + 168u);
    set32(c.r[30], 0u + 1024u);
    set32(c.r[23], 0u + 2048u);
    set32(c.r[22], 0u + 256u);
    c.budget -= 8;
L_002C6588:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6598u);  if (depth < kMaxDepth) unit_0044(c, 145u, depth + 1u); else { c.pc = 0x00212A20u; return; } if (c.pc != 0x002C6598u) [[unlikely]] return; }
L_002C6598:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], 0u + 10u);
    c.r[2].d[0] = 0ull | 65535ull;
    st8((c.r[16].w[0] - 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[18], c.r[18].w[0] + 152u);
    set32(c.r[3], 0u + 4096u);
    st16((c.r[16].w[0] + 104u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[3], 0u + 16384u);
    st8((c.r[16].w[0] + 106u), static_cast<std::uint8_t>(c.r[20].w[0]));
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = 0ull | 32768ull;
    st8((c.r[16].w[0] + 107u), static_cast<std::uint8_t>(c.r[20].w[0]));
    st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 8192u);
    st8((c.r[16].w[0] - 18u), static_cast<std::uint8_t>(c.r[20].w[0]));
    st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 16u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[21].w[0]));
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 64u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[30].w[0]));
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 128u);
    st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(c.r[23].w[0]));
    st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 32u);
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[22].w[0]));
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 512u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 8u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 32u), static_cast<std::uint8_t>(c.r[21].w[0]));
    set32(c.r[16], c.r[16].w[0] + 152u);
    c.budget -= 45;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6588u | kUnwind; return; } goto L_002C6588; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st32((c.r[2].w[0] + 7880u), 0u);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0] + 7876u), 0u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
L_002C6668:
    set32(c.r[2], ld32((c.r[5].w[0] + 7876u)));
    set32(c.r[3], c.r[6].w[0] << (c.r[17].w[0] & 31u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    st32((c.r[5].w[0] + 7876u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6668u | kUnwind; return; } goto L_002C6668; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    st32((c.r[2].w[0] + 7872u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[4].w[0] + 11568u);
    set32(c.r[3], c.r[3].w[0] + 11584u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 10;
L_002C66B0:
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
L_002C66E8:
    set32(c.r[2], 0u + 152u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + 36u);
    set32(c.r[8], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[8].w[0] + 138u));
    set32(c.r[10], c.r[8].w[0] + 36u);
    c.r[5].d[0] = ld8((c.r[8].w[0] + 139u));
    st8((c.r[8].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 140u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = ld8((c.r[8].w[0] + 141u));
    set32(c.r[9], c.r[2].w[0] - 128u);
    c.r[11].d[0] = ld16((c.r[8].w[0] + 136u));
    st8((c.r[8].w[0] + 15u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = c.r[9].sd[0] < 97ll ? 1ull : 0ull;
    st8((c.r[8].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[8].w[0] + 17u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[8].w[0] + 18u), static_cast<std::uint16_t>(0u));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6744; } }
    set32(c.r[2], 0u + 8192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6754; } }
L_002C6744:
    c.r[2].d[0] = c.r[9].sd[0] < -96ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6758; } }
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_002C6754:
    st16((c.r[8].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002C6758:
    c.r[2].d[0] = ld8((c.r[8].w[0] + 15u));
    set32(c.r[9], c.r[2].w[0] - 128u);
    c.r[3].d[0] = c.r[9].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C677C; } }
    c.r[2].d[0] = ld16((c.r[8].w[0] + 18u));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6790; } }
L_002C677C:
    c.r[2].d[0] = c.r[9].sd[0] < -96ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6794; } }
    c.r[2].d[0] = ld16((c.r[8].w[0] + 18u));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 2;
L_002C6790:
    st16((c.r[8].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002C6794:
    c.r[3].d[0] = ld8((c.r[8].w[0] + 16u));
    st16((c.r[8].w[0] + 20u), static_cast<std::uint16_t>(0u));
    set32(c.r[9], c.r[3].w[0] - 128u);
    c.r[2].d[0] = c.r[9].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C67B8; } }
    set32(c.r[2], 0u + 8192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C67C8; } }
L_002C67B8:
    c.r[2].d[0] = c.r[9].sd[0] < -96ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C67CC; } }
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_002C67C8:
    st16((c.r[8].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002C67CC:
    c.r[2].d[0] = ld8((c.r[8].w[0] + 17u));
    set32(c.r[9], c.r[2].w[0] - 128u);
    c.r[3].d[0] = c.r[9].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C67F0; } }
    c.r[2].d[0] = ld16((c.r[8].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6804; } }
L_002C67F0:
    c.r[2].d[0] = c.r[9].sd[0] < -96ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6808; } }
    c.r[2].d[0] = ld16((c.r[8].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 2;
L_002C6804:
    st16((c.r[8].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002C6808:
    c.r[2].d[0] = ld8((c.r[8].w[0] + 134u));
    c.r[9].d[0] = c.r[10].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[8].w[0] + 135u));
    set32(c.r[4], c.r[8].w[0] + 68u);
    st8((c.r[8].w[0] + 22u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[10].d[0] = 0ull + 0ull;
    st8((c.r[8].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.budget -= 10;
L_002C6830:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> (c.r[5].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6854; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].d[0] = ld16((c.r[9].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[10].d[0] = c.r[10].d[0] | c.r[3].d[0];
    c.budget -= 5;
L_002C6854:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] + 2u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6830u | kUnwind; return; } goto L_002C6830; } }
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6878:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[23].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C68B8u);  if (depth < kMaxDepth) unit_0071(c, 319u, depth + 1u); else { c.pc = 0x002C7658u; return; } if (c.pc != 0x002C68B8u) [[unlikely]] return; }
L_002C68B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C68DC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C68D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C68D0u) [[unlikely]] return; }
L_002C68D0:
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C68E0; } }
L_002C68DC:
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002C68E0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6968; } }
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[19], 0u + 1u);
    c.budget -= 3;
L_002C68F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6908u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6908u) [[unlikely]] return; }
L_002C6908:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6920; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    set32(c.r[3], c.r[19].w[0] << (c.r[17].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002C6920:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6950; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6938u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6938u) [[unlikely]] return; }
L_002C6938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6950; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    set32(c.r[3], c.r[19].w[0] << (c.r[17].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002C6950:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C68F8u | kUnwind; return; } goto L_002C68F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6974; } }
L_002C6968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6970u);  if (depth < kMaxDepth) unit_0044(c, 147u, depth + 1u); else { c.pc = 0x00212A70u; return; } if (c.pc != 0x002C6970u) [[unlikely]] return; }
L_002C6970:
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002C6974:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6980u);  if (depth < kMaxDepth) unit_0071(c, 319u, depth + 1u); else { c.pc = 0x002C7658u; return; } if (c.pc != 0x002C6980u) [[unlikely]] return; }
L_002C6980:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C69B0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 10u));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C69B4; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C69B4; } }
L_002C69B0:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002C69B4:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C69C4u);  if (depth < kMaxDepth) unit_0071(c, 320u, depth + 1u); else { c.pc = 0x002C7668u; return; } if (c.pc != 0x002C69C4u) [[unlikely]] return; }
L_002C69C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002C69D0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[5].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6A0C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 11u));
    set32(c.r[20], c.r[5].w[0] + 1u);
    set32(c.r[19], c.r[16].w[0] + 152u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6B5C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6B5C; } }
L_002C6A0C:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 4u));
    set32(c.r[20], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(0u));
    set32(c.r[19], c.r[16].w[0] + 152u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6A5C; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] + 68u);
    c.budget -= 3;
L_002C6A30:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 4u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[4].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6A48; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_002C6A48:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6A30u | kUnwind; return; } goto L_002C6A30; } }
L_002C6A5C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 10u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6AAC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6A7Cu);  if (depth < kMaxDepth) unit_0071(c, 233u, depth + 1u); else { c.pc = 0x002C66E8u; return; } if (c.pc != 0x002C6A7Cu) [[unlikely]] return; }
L_002C6A7C:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 32u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6AB4; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 18u));
    c.r[3].d[0] = ld16((c.r[29].w[0]));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 2u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    st16((c.r[29].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6AB4; } }
L_002C6AAC:
    st16((c.r[29].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[29].w[0] + 2u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_002C6AB4:
    c.r[7].d[0] = ld16((c.r[29].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.r[5].d[0] = ld16((c.r[29].w[0] + 2u));
    c.r[3].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[4].d[0] = c.r[2].d[0] ^ c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C6B00; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6B44; } }
L_002C6B00:
    c.r[2].d[0] = c.r[7].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6B40; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 13u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6B2C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6B44; } }
L_002C6B2C:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6B44; } }
L_002C6B40:
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002C6B44:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    c.r[3].d[0] = ld16((c.r[29].w[0]));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 2u));
    c.r[23].d[0] = c.r[23].d[0] | c.r[2].d[0];
    c.r[21].d[0] = c.r[21].d[0] | c.r[3].d[0];
    c.r[22].d[0] = c.r[22].d[0] | c.r[4].d[0];
    c.budget -= 6;
L_002C6B5C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C69D0u | kUnwind; return; } goto L_002C69D0; } }
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[22].w[0]));
    c.r[3].d[0] = c.r[2].d[0] & c.r[21].d[0];
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[23].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[21].d[0];
    c.r[3].d[0] = c.r[21].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[21].d[0] & c.r[2].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[21].w[0]));
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6BC8:
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002C6BF4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C6BF4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[3].w[0] + 17200u);
    st32((c.r[3].w[0] + 17200u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 6;
L_002C6BF4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6C00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 17200u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6C1Cu);  if (depth < kMaxDepth) unit_0071(c, 271u, depth + 1u); else { c.pc = 0x002C6F10u; return; } if (c.pc != 0x002C6C1Cu) [[unlikely]] return; }
L_002C6C1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6C30; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6C30u);  if (depth < kMaxDepth) unit_0071(c, 200u, depth + 1u); else { c.pc = 0x002C5E90u; return; } if (c.pc != 0x002C6C30u) [[unlikely]] return; }
L_002C6C30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6C40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 17392u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6C60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 17392u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6C80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] - 17392u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[19].w[0] << 3);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C6D30; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 17200u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6CD8u);  if (depth < kMaxDepth) unit_0071(c, 271u, depth + 1u); else { c.pc = 0x002C6F10u; return; } if (c.pc != 0x002C6CD8u) [[unlikely]] return; }
L_002C6CD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6D30; } }
    set32(c.r[16], 0u + 4999u);
    c.budget -= 2;
L_002C6CE8:
    set32(c.r[4], c.r[18].w[0] + 17200u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6CF8u);  if (depth < kMaxDepth) unit_0071(c, 235u, depth + 1u); else { c.pc = 0x002C6878u; return; } if (c.pc != 0x002C6CF8u) [[unlikely]] return; }
L_002C6CF8:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6CE8u | kUnwind; return; } goto L_002C6CE8; } }
    set32(c.r[4], c.r[18].w[0] + 17200u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6D10u);  if (depth < kMaxDepth) unit_0071(c, 271u, depth + 1u); else { c.pc = 0x002C6F10u; return; } if (c.pc != 0x002C6D10u) [[unlikely]] return; }
L_002C6D10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6D48; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6D28u);  if (depth < kMaxDepth) unit_0071(c, 169u, depth + 1u); else { c.pc = 0x002C5960u; return; } if (c.pc != 0x002C6D28u) [[unlikely]] return; }
L_002C6D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6D48; } }
L_002C6D30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 17376u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_002C6D48:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6D70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 17392u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6D90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 17392u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6DB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 17392u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6DD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - 17392u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6DF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 17368u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6E08:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6E2Cu);  if (depth < kMaxDepth) unit_0071(c, 319u, depth + 1u); else { c.pc = 0x002C7658u; return; } if (c.pc != 0x002C6E2Cu) [[unlikely]] return; }
L_002C6E2C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6E50; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6E44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6E44u) [[unlikely]] return; }
L_002C6E44:
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6E54; } }
L_002C6E50:
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002C6E54:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6EE0; } }
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[19], 0u + 1u);
    c.budget -= 4;
L_002C6E70:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6E80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6E80u) [[unlikely]] return; }
L_002C6E80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6E98; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    set32(c.r[3], c.r[19].w[0] << (c.r[17].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002C6E98:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6EC8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6EB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6EB0u) [[unlikely]] return; }
L_002C6EB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6EC8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    set32(c.r[3], c.r[19].w[0] << (c.r[17].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002C6EC8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6E70u | kUnwind; return; } goto L_002C6E70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6EEC; } }
L_002C6EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6EE8u);  if (depth < kMaxDepth) unit_0044(c, 147u, depth + 1u); else { c.pc = 0x00212A70u; return; } if (c.pc != 0x002C6EE8u) [[unlikely]] return; }
L_002C6EE8:
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002C6EEC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6F10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6F30u);  if (depth < kMaxDepth) unit_0071(c, 319u, depth + 1u); else { c.pc = 0x002C7658u; return; } if (c.pc != 0x002C6F30u) [[unlikely]] return; }
L_002C6F30:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002C6F68; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6FA0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 10u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6FA0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6FA4; } }
L_002C6F68:
    set32(c.r[2], 0u + 152u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 12u));
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[16].w[0] & 31u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[2], c.r[2].w[0] + 36u);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C6FA0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 11u));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C6FA4; } }
L_002C6FA0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C6FA4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6FC0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002C6FF8; } }
    set32(c.r[4], c.r[4].w[0] + 199u);
    set32(c.r[3], 0u + 6u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_002C6FD8:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 152u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6FD8u | kUnwind; return; } goto L_002C6FD8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6FF8:
    set32(c.r[2], 0u + 152u);
    set32(c.r[3], 0u + 6u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7018:
    set32(c.r[2], 0u + 152u);
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[2], 0u + 128u);
    set32(c.r[5], c.r[5].w[0] + 36u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + 36u);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002C71D0; } }
    c.r[2].d[0] = c.r[6].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C70E4; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002C720C; } }
    c.r[2].d[0] = c.r[6].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C70A4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002C7218; } }
    c.r[2].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7090; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002C71F4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7090:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002C71E8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C70A4:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002C71DC; } }
    c.r[2].d[0] = c.r[6].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C70D0; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002C71B8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C70D0:
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002C71C4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C70E4:
    set32(c.r[2], 0u + 2048u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002C7230; } }
    c.r[2].d[0] = c.r[6].sd[0] < 2049ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C713C; } }
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002C7200; } }
    c.r[2].d[0] = c.r[6].sd[0] < 513ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7128; } }
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002C723C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7128:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002C7224; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C713C:
    set32(c.r[2], 0u + 8192u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002C71AC; } }
    c.r[2].d[0] = c.r[6].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7168; } }
    set32(c.r[2], 0u + 4096u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002C7188; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7168:
    set32(c.r[2], 0u + 16384u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002C7194; } }
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002C71A0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7188:
    st16((c.r[3].w[0] + 24u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7194:
    st16((c.r[3].w[0] + 28u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C71A0:
    st16((c.r[3].w[0] + 30u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C71AC:
    st16((c.r[3].w[0] + 26u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C71B8:
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C71C4:
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C71D0:
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C71DC:
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C71E8:
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C71F4:
    st16((c.r[4].w[0] + 36u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7200:
    st16((c.r[3].w[0] + 18u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C720C:
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7218:
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7224:
    st16((c.r[3].w[0] + 20u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7230:
    st16((c.r[3].w[0] + 22u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C723C:
    st16((c.r[3].w[0] + 16u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7248:
    set32(c.r[2], 0u + 152u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7260:
    set32(c.r[2], 0u + 152u);
    set32(c.r[3], 0u + 1u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 46u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7280:
    set32(c.r[2], 0u + 152u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 46u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7298:
    st8((c.r[4].w[0] + 32u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C72A8:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002C72C4; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C72E8; } }
L_002C72C4:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[5].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C72E8; } }
    set32(c.r[2], 0u + 152u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 38u));
    c.budget -= 4;
L_002C72E8:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C72F8:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.r[2].d[0] = ld16((c.r[7].w[0] + 38u));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002C7320; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7350; } }
L_002C7320:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7350; } }
    set32(c.r[2], 0u + 152u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 38u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7320u | kUnwind; return; } goto L_002C7320; } }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_002C7350:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7360:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002C737C; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 16u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C73A0; } }
L_002C737C:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[5].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C73A0; } }
    set32(c.r[2], 0u + 152u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 36u));
    c.budget -= 4;
L_002C73A0:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C73B0:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.r[2].d[0] = ld16((c.r[7].w[0] + 36u));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002C73D8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7408; } }
L_002C73D8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7408; } }
    set32(c.r[2], 0u + 152u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C73D8u | kUnwind; return; } goto L_002C73D8; } }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_002C7408:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7418:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002C7434; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 16u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7458; } }
L_002C7434:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[5].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7458; } }
    set32(c.r[2], 0u + 152u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 36u));
    c.budget -= 4;
L_002C7458:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7468:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002C7484; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 22u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C74A8; } }
L_002C7484:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[5].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C74A8; } }
    set32(c.r[2], 0u + 152u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 42u));
    c.budget -= 4;
L_002C74A8:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C74B8:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002C74D4; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C74F8; } }
L_002C74D4:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[5].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C74F8; } }
    set32(c.r[2], 0u + 152u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 40u));
    c.budget -= 4;
L_002C74F8:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7508:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002C755C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] - 12528u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7544u);  if (depth < kMaxDepth) unit_008B(c, 161u, depth + 1u); else { c.pc = 0x0032D3B0u; return; } if (c.pc != 0x002C7544u) [[unlikely]] return; }
L_002C7544:
    set32(c.r[3], 0u + 152u);
    set32(c.r[2], c.r[2].w[0] << 2);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 104u)));
    c.budget -= 6;
L_002C755C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7578:
    set32(c.r[2], 0u + 152u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + 36u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 14u));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 15u));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 16u));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 17u));
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 18u));
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 20u));
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C75C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 152u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[19], 0u + 2u);
    set32(c.r[18], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 12;
L_002C75F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C75FCu);  if (depth < kMaxDepth) unit_0071(c, 235u, depth + 1u); else { c.pc = 0x002C6878u; return; } if (c.pc != 0x002C75FCu) [[unlikely]] return; }
L_002C75FC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[19].d[0];  if (t) { goto L_002C7614; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 16u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C762C; } }
L_002C7614:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 28u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[17].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C762C; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 36u));
    c.budget -= 1;
L_002C762C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C75F0u | kUnwind; return; } goto L_002C75F0; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7658:
    set32(c.r[2], c.r[4].w[0] + 16u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7668:
    set32(c.r[3], 0u + 152u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 36u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7680:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_002C769C; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 16u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C76C0; } }
L_002C769C:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[6].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C76C0; } }
    set32(c.r[2], 0u + 152u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 36u));
    c.budget -= 4;
L_002C76C0:
    c.r[2].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C76D8:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_002C76F4; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7718; } }
L_002C76F4:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[6].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7718; } }
    set32(c.r[2], 0u + 152u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 38u));
    c.budget -= 4;
L_002C7718:
    c.r[2].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7730:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 28u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_002C7740:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> (c.r[4].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7740u | kUnwind; return; } goto L_002C7740; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7768:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7780u);  if (depth < kMaxDepth) unit_0071(c, 247u, depth + 1u); else { c.pc = 0x002C6BC8u; return; } if (c.pc != 0x002C7780u) [[unlikely]] return; }
L_002C7780:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7790:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C77A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C77A8:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 360u), c.f[21]);
    st32((c.r[29].w[0] + 352u), c.f[20]);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7890; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 192u);
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C780Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C780Cu) [[unlikely]] return; }
L_002C780C:
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7824u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C7824u) [[unlikely]] return; }
L_002C7824:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[23], c.r[2].w[0] - 11856u);
    set32(c.r[21], c.r[29].w[0] + 32u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    set32(c.r[30], c.r[3].w[0] - 30760u);
    mmi::por(c.r[2], c.r[0], c.r[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7864u);  if (depth < kMaxDepth) unit_008E(c, 69u, depth + 1u); else { c.pc = 0x00338EA0u; return; } if (c.pc != 0x002C7864u) [[unlikely]] return; }
L_002C7864:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002C7AC4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 17552u);
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7888u);  if (depth < kMaxDepth) unit_0072(c, 58u, depth + 1u); else { c.pc = 0x002C8858u; return; } if (c.pc != 0x002C7888u) [[unlikely]] return; }
L_002C7888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C789C; } }
L_002C7890:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7AC8; } }
L_002C789C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[8], ld32((c.r[2].w[0] + 19740u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002C78D4; } }
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 160u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 164u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C78D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C78D4u) [[unlikely]] return; }
L_002C78D4:
    set32(c.r[17], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C78F0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C78F0u) [[unlikely]] return; }
L_002C78F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[16], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 108u), c.f[20]);
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7918u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002C7918u) [[unlikely]] return; }
L_002C7918:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C792Cu);  if (depth < kMaxDepth) unit_008B(c, 106u, depth + 1u); else { c.pc = 0x0032CD08u; return; } if (c.pc != 0x002C792Cu) [[unlikely]] return; }
L_002C792C:
    c.f[12] = fp::add(c.f[0], c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7940u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002C7940u) [[unlikely]] return; }
L_002C7940:
    set32(c.r[18], c.r[29].w[0] + 64u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7958u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002C7958u) [[unlikely]] return; }
L_002C7958:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7964u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x002C7964u) [[unlikely]] return; }
L_002C7964:
    st32((c.r[29].w[0] + 76u), c.f[20]);
    set32(c.r[20], c.r[29].w[0] + 112u);
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 52u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C798Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002C798Cu) [[unlikely]] return; }
L_002C798C:
    set32(c.r[17], c.r[29].w[0] + 128u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C79A4u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002C79A4u) [[unlikely]] return; }
L_002C79A4:
    c.f[12] = ld32((c.r[22].w[0] - 16016u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C79B8u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002C79B8u) [[unlikely]] return; }
L_002C79B8:
    set32(c.r[16], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C79D0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002C79D0u) [[unlikely]] return; }
L_002C79D0:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 160u);
    set32(c.r[8], c.r[29].w[0] + 176u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C79F0u);  if (depth < kMaxDepth) unit_008E(c, 69u, depth + 1u); else { c.pc = 0x00338EA0u; return; } if (c.pc != 0x002C79F0u) [[unlikely]] return; }
L_002C79F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7A10; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7A10u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002C7A10u) [[unlikely]] return; }
L_002C7A10:
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7A24u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C7A24u) [[unlikely]] return; }
L_002C7A24:
    c.f[12] = ld32((c.r[22].w[0] - 16016u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7A38u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002C7A38u) [[unlikely]] return; }
L_002C7A38:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7A4Cu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002C7A4Cu) [[unlikely]] return; }
L_002C7A4C:
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7A60u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C7A60u) [[unlikely]] return; }
L_002C7A60:
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[5], c.r[4].w[0] + 192u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7A74u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C7A74u) [[unlikely]] return; }
L_002C7A74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    c.f[12] = ld32((c.r[2].w[0] - 16012u));
    set32(c.r[4], c.r[4].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7A8Cu);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x002C7A8Cu) [[unlikely]] return; }
L_002C7A8C:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7890u | kUnwind; return; } goto L_002C7890; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7890u | kUnwind; return; } goto L_002C7890; } }
    set32(c.r[6], ld32((c.r[19].w[0] + 16u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7AB8u);  if (depth < kMaxDepth) unit_0072(c, 122u, depth + 1u); else { c.pc = 0x002C9570u; return; } if (c.pc != 0x002C7AB8u) [[unlikely]] return; }
L_002C7AB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 16008u)));
    st32((c.r[19].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 3;
L_002C7AC4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C7AC8:
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.f[21] = ld32((c.r[29].w[0] + 360u));
    c.f[20] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[29], c.r[29].w[0] + 368u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7B08:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 9u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    c.budget -= 8;
L_002C7B28:
    st32((c.r[2].w[0] + 20u), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7B28u | kUnwind; return; } goto L_002C7B28; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[13] = c.r[1].w[0];
    set32(c.r[16], 0u + 24u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[14] = c.r[1].w[0];
    c.f[15] = c.f[12];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[16] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3960000u);
    c.f[17] = c.r[1].w[0];
    st32((c.r[17].w[0] + 240u), 0u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7B9Cu);  if (depth < kMaxDepth) unit_0072(c, 97u, depth + 1u); else { c.pc = 0x002C9150u; return; } if (c.pc != 0x002C7B9Cu) [[unlikely]] return; }
L_002C7B9C:
    set32(c.r[3], ld32((c.r[17].w[0] + 240u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = 0u;
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.f[16] = c.f[12];
    c.f[17] = c.f[12];
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    ldl(c.r[5], (c.r[29].w[0] + 7u));
    ldr(c.r[5], (c.r[29].w[0]));
    ldl(c.r[6], (c.r[29].w[0] + 15u));
    ldr(c.r[6], (c.r[29].w[0] + 8u));
    ldl(c.r[7], (c.r[29].w[0] + 23u));
    ldr(c.r[7], (c.r[29].w[0] + 16u));
    sdl(c.r[5], (c.r[3].w[0] + 7u));
    sdr(c.r[5], (c.r[3].w[0]));
    sdl(c.r[6], (c.r[3].w[0] + 15u));
    sdr(c.r[6], (c.r[3].w[0] + 8u));
    sdl(c.r[7], (c.r[3].w[0] + 23u));
    sdr(c.r[7], (c.r[3].w[0] + 16u));
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7C08u);  if (depth < kMaxDepth) unit_0072(c, 97u, depth + 1u); else { c.pc = 0x002C9150u; return; } if (c.pc != 0x002C7C08u) [[unlikely]] return; }
L_002C7C08:
    set32(c.r[4], ld32((c.r[17].w[0] + 240u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    mmi::mult(c, 0, c.r[4].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    ldl(c.r[5], (c.r[29].w[0] + 7u));
    ldr(c.r[5], (c.r[29].w[0]));
    ldl(c.r[6], (c.r[29].w[0] + 15u));
    ldr(c.r[6], (c.r[29].w[0] + 8u));
    ldl(c.r[7], (c.r[29].w[0] + 23u));
    ldr(c.r[7], (c.r[29].w[0] + 16u));
    sdl(c.r[5], (c.r[4].w[0] + 7u));
    sdr(c.r[5], (c.r[4].w[0]));
    sdl(c.r[6], (c.r[4].w[0] + 15u));
    sdr(c.r[6], (c.r[4].w[0] + 8u));
    sdl(c.r[7], (c.r[4].w[0] + 23u));
    sdr(c.r[7], (c.r[4].w[0] + 16u));
    set32(c.r[3], ld32((c.r[17].w[0] + 240u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 240u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7C70:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[5], c.r[5].w[0] + 192u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7CA8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C7CA8u) [[unlikely]] return; }
L_002C7CA8:
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7CC0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C7CC0u) [[unlikely]] return; }
L_002C7CC0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7CD0u);  if (depth < kMaxDepth) unit_008B(c, 100u, depth + 1u); else { c.pc = 0x0032CC60u; return; } if (c.pc != 0x002C7CD0u) [[unlikely]] return; }
L_002C7CD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C7DFC; } }
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7D08u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002C7D08u) [[unlikely]] return; }
L_002C7D08:
    set32(c.r[18], c.r[19].w[0] + 48u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7D1Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002C7D1Cu) [[unlikely]] return; }
L_002C7D1C:
    set32(c.r[17], c.r[29].w[0] + 48u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7D2Cu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002C7D2Cu) [[unlikely]] return; }
L_002C7D2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7D3Cu);  if (depth < kMaxDepth) unit_008A(c, 102u, depth + 1u); else { c.pc = 0x00329AC0u; return; } if (c.pc != 0x002C7D3Cu) [[unlikely]] return; }
L_002C7D3C:
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[16], c.r[29].w[0] + 112u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7D58u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002C7D58u) [[unlikely]] return; }
L_002C7D58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7D6Cu);  if (depth < kMaxDepth) unit_0045(c, 56u, depth + 1u); else { c.pc = 0x00214EB0u; return; } if (c.pc != 0x002C7D6Cu) [[unlikely]] return; }
L_002C7D6C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7D80u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x002C7D80u) [[unlikely]] return; }
L_002C7D80:
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[19].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7D9Cu);  if (depth < kMaxDepth) unit_008B(c, 163u, depth + 1u); else { c.pc = 0x0032D3F0u; return; } if (c.pc != 0x002C7D9Cu) [[unlikely]] return; }
L_002C7D9C:
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    set32(c.r[4], c.r[19].w[0] + 52u);
    c.f[1] = ld32((c.r[19].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7DB8u);  if (depth < kMaxDepth) unit_008B(c, 163u, depth + 1u); else { c.pc = 0x0032D3F0u; return; } if (c.pc != 0x002C7DB8u) [[unlikely]] return; }
L_002C7DB8:
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    set32(c.r[4], c.r[19].w[0] + 56u);
    c.f[1] = ld32((c.r[19].w[0] + 72u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 56u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7DD4u);  if (depth < kMaxDepth) unit_008B(c, 163u, depth + 1u); else { c.pc = 0x0032D3F0u; return; } if (c.pc != 0x002C7DD4u) [[unlikely]] return; }
L_002C7DD4:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7DE8u);  if (depth < kMaxDepth) unit_0045(c, 56u, depth + 1u); else { c.pc = 0x00214EB0u; return; } if (c.pc != 0x002C7DE8u) [[unlikely]] return; }
L_002C7DE8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7DFCu);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x002C7DFCu) [[unlikely]] return; }
L_002C7DFC:
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    set32(c.r[29], c.r[29].w[0] + 272u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7E20:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 216u), c.f[21]);
    st32((c.r[29].w[0] + 208u), c.f[20]);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7FD4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_002C7FD4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.r[16].d[0] = 0ull + 0ull;
    c.f[20] = 0u;
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 6;
L_002C7E78:
    set32(c.r[7], ld32((c.r[20].w[0] - 344u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7E9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7E9Cu) [[unlikely]] return; }
L_002C7E9C:
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7EB0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C7EB0u) [[unlikely]] return; }
L_002C7EB0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.f[21]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7EC4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002C7EC4u) [[unlikely]] return; }
L_002C7EC4:
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[1] = ld32((c.r[19].w[0] - 16004u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 44u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7EE4u);  if (depth < kMaxDepth) unit_008B(c, 108u, depth + 1u); else { c.pc = 0x0032CD48u; return; } if (c.pc != 0x002C7EE4u) [[unlikely]] return; }
L_002C7EE4:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C7F30; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7E78u | kUnwind; return; } goto L_002C7E78; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C7F08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C7F3C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7F28u);  if (depth < kMaxDepth) unit_0049(c, 34u, depth + 1u); else { c.pc = 0x00224B28u; return; } if (c.pc != 0x002C7F28u) [[unlikely]] return; }
L_002C7F28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7F50; } }
L_002C7F30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7F08u | kUnwind; return; } goto L_002C7F08; } }
L_002C7F3C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7F50u);  if (depth < kMaxDepth) unit_0049(c, 204u, depth + 1u); else { c.pc = 0x00226880u; return; } if (c.pc != 0x002C7F50u) [[unlikely]] return; }
L_002C7F50:
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + 20304u);
    set32(c.r[6], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7F74u);  if (depth < kMaxDepth) unit_0072(c, 117u, depth + 1u); else { c.pc = 0x002C9490u; return; } if (c.pc != 0x002C7F74u) [[unlikely]] return; }
L_002C7F74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C7FD4; } }
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7F8Cu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002C7F8Cu) [[unlikely]] return; }
L_002C7F8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7F9Cu);  if (depth < kMaxDepth) unit_0071(c, 359u, depth + 1u); else { c.pc = 0x002C7C70u; return; } if (c.pc != 0x002C7F9Cu) [[unlikely]] return; }
L_002C7F9C:
    c.f[2] = ld32((c.r[18].w[0] + 24u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    st32((c.r[29].w[0] + 104u), c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7FC8u);  if (depth < kMaxDepth) unit_0049(c, 102u, depth + 1u); else { c.pc = 0x00225700u; return; } if (c.pc != 0x002C7FC8u) [[unlikely]] return; }
L_002C7FC8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7FD4u);  if (depth < kMaxDepth) unit_0071(c, 329u, depth + 1u); else { c.pc = 0x002C77A8u; return; } if (c.pc != 0x002C7FD4u) [[unlikely]] return; }
L_002C7FD4:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 216u));
    c.f[20] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
}

}
