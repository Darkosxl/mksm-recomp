#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0024[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0,
    0, 61, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74,
    0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 104, 0, 0, 105,
    0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0,
    0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0,
    129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0,
    0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0,
    0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0024(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00190000;
    case 2u: goto L_0019003C;
    case 3u: goto L_0019004C;
    case 4u: goto L_0019006C;
    case 5u: goto L_00190080;
    case 6u: goto L_001900C0;
    case 7u: goto L_0019015C;
    case 8u: goto L_00190190;
    case 9u: goto L_001901E0;
    case 10u: goto L_00190220;
    case 11u: goto L_001902A0;
    case 12u: goto L_001902B8;
    case 13u: goto L_001902F8;
    case 14u: goto L_00190394;
    case 15u: goto L_001903C8;
    case 16u: goto L_00190418;
    case 17u: goto L_00190458;
    case 18u: goto L_001904D8;
    case 19u: goto L_001904F0;
    case 20u: goto L_00190530;
    case 21u: goto L_001905CC;
    case 22u: goto L_00190600;
    case 23u: goto L_00190640;
    case 24u: goto L_0019064C;
    case 25u: goto L_00190670;
    case 26u: goto L_00190684;
    case 27u: goto L_00190698;
    case 28u: goto L_001906A8;
    case 29u: goto L_001906BC;
    case 30u: goto L_001906CC;
    case 31u: goto L_001906DC;
    case 32u: goto L_001906F0;
    case 33u: goto L_00190708;
    case 34u: goto L_00190718;
    case 35u: goto L_0019072C;
    case 36u: goto L_0019073C;
    case 37u: goto L_00190794;
    case 38u: goto L_001907FC;
    case 39u: goto L_00190860;
    case 40u: goto L_001908C4;
    case 41u: goto L_0019091C;
    case 42u: goto L_00190978;
    case 43u: goto L_001909D4;
    case 44u: goto L_00190A30;
    case 45u: goto L_00190A98;
    case 46u: goto L_00190AFC;
    case 47u: goto L_00190B38;
    case 48u: goto L_00190B5C;
    case 49u: goto L_00190B78;
    case 50u: goto L_00190BA8;
    case 51u: goto L_00190BB8;
    case 52u: goto L_00190BE0;
    case 53u: goto L_00190C18;
    case 54u: goto L_00190C40;
    case 55u: goto L_00190C60;
    case 56u: goto L_00190C88;
    case 57u: goto L_00190C90;
    case 58u: goto L_00190CB8;
    case 59u: goto L_00190CC0;
    case 60u: goto L_00190CE8;
    case 61u: goto L_00190D04;
    case 62u: goto L_00190D18;
    case 63u: goto L_00190D20;
    case 64u: goto L_00190D40;
    case 65u: goto L_00190D48;
    case 66u: goto L_00190D50;
    case 67u: goto L_00190D70;
    case 68u: goto L_00190D9C;
    case 69u: goto L_00190E00;
    case 70u: goto L_00190E0C;
    case 71u: goto L_00190E1C;
    case 72u: goto L_00190E30;
    case 73u: goto L_00190E48;
    case 74u: goto L_00190E7C;
    case 75u: goto L_00190E8C;
    case 76u: goto L_00190EA8;
    case 77u: goto L_00190F00;
    case 78u: goto L_00190F28;
    case 79u: goto L_00190F6C;
    case 80u: goto L_00190F80;
    case 81u: goto L_00190FC4;
    case 82u: goto L_00190FD8;
    case 83u: goto L_0019101C;
    case 84u: goto L_00191030;
    case 85u: goto L_00191074;
    case 86u: goto L_00191088;
    case 87u: goto L_001910CC;
    case 88u: goto L_001910E0;
    case 89u: goto L_00191124;
    case 90u: goto L_00191138;
    case 91u: goto L_00191140;
    case 92u: goto L_0019114C;
    case 93u: goto L_00191158;
    case 94u: goto L_00191198;
    case 95u: goto L_001911A8;
    case 96u: goto L_001911C0;
    case 97u: goto L_001911C8;
    case 98u: goto L_001911D4;
    case 99u: goto L_001911E0;
    case 100u: goto L_00191200;
    case 101u: goto L_00191218;
    case 102u: goto L_00191258;
    case 103u: goto L_00191268;
    case 104u: goto L_00191270;
    case 105u: goto L_0019127C;
    case 106u: goto L_00191288;
    case 107u: goto L_00191298;
    case 108u: goto L_001912AC;
    case 109u: goto L_001912B8;
    case 110u: goto L_001912C0;
    case 111u: goto L_001912C8;
    case 112u: goto L_001912D4;
    case 113u: goto L_001912E0;
    case 114u: goto L_00191310;
    case 115u: goto L_00191350;
    case 116u: goto L_00191368;
    case 117u: goto L_00191378;
    case 118u: goto L_00191384;
    case 119u: goto L_00191390;
    case 120u: goto L_001913A8;
    case 121u: goto L_001913B0;
    case 122u: goto L_001913BC;
    case 123u: goto L_001913C8;
    case 124u: goto L_00191400;
    case 125u: goto L_00191434;
    case 126u: goto L_00191448;
    case 127u: goto L_00191460;
    case 128u: goto L_00191470;
    case 129u: goto L_00191480;
    case 130u: goto L_0019148C;
    case 131u: goto L_001914B8;
    case 132u: goto L_001914D8;
    case 133u: goto L_001914E4;
    case 134u: goto L_00191510;
    case 135u: goto L_00191518;
    case 136u: goto L_00191538;
    case 137u: goto L_00191550;
    case 138u: goto L_00191568;
    case 139u: goto L_001915A8;
    case 140u: goto L_00191600;
    case 141u: goto L_00191640;
    case 142u: goto L_00191658;
    case 143u: goto L_00191698;
    case 144u: goto L_00191730;
    case 145u: goto L_00191764;
    case 146u: goto L_001917A8;
    case 147u: goto L_001917DC;
    case 148u: goto L_00191820;
    case 149u: goto L_00191854;
    case 150u: goto L_00191898;
    case 151u: goto L_001918CC;
    case 152u: goto L_00191910;
    case 153u: goto L_00191928;
    case 154u: goto L_00191940;
    case 155u: goto L_00191958;
    case 156u: goto L_00191960;
    case 157u: goto L_00191984;
    case 158u: goto L_001919A8;
    case 159u: goto L_001919B8;
    case 160u: goto L_001919D0;
    case 161u: goto L_001919F0;
    case 162u: goto L_00191A00;
    case 163u: goto L_00191A28;
    case 164u: goto L_00191A38;
    case 165u: goto L_00191A70;
    case 166u: goto L_00191AA8;
    case 167u: goto L_00191AC8;
    case 168u: goto L_00191AF4;
    case 169u: goto L_00191B28;
    case 170u: goto L_00191B40;
    case 171u: goto L_00191B60;
    case 172u: goto L_00191B70;
    case 173u: goto L_00191B88;
    case 174u: goto L_00191BA0;
    case 175u: goto L_00191BF0;
    case 176u: goto L_00191C18;
    case 177u: goto L_00191C34;
    case 178u: goto L_00191C78;
    case 179u: goto L_00191CA0;
    case 180u: goto L_00191CC4;
    case 181u: goto L_00191D08;
    case 182u: goto L_00191D20;
    case 183u: goto L_00191D3C;
    case 184u: goto L_00191D58;
    case 185u: goto L_00191D74;
    case 186u: goto L_00191D90;
    case 187u: goto L_00191DD0;
    case 188u: goto L_00191E08;
    case 189u: goto L_00191E20;
    case 190u: goto L_00191E78;
    case 191u: goto L_00191EE0;
    case 192u: goto L_00191EF8;
    case 193u: goto L_00191F20;
    case 194u: goto L_00191F70;
    case 195u: goto L_00191F84;
    case 196u: goto L_00191F98;
    case 197u: goto L_00191FB4;
    case 198u: goto L_00191FD0;
    case 199u: goto L_00191FE0;
    case 200u: goto L_0019202C;
    case 201u: goto L_00192040;
    case 202u: goto L_00192070;
    case 203u: goto L_001920A4;
    case 204u: goto L_001920B8;
    case 205u: goto L_00192118;
    case 206u: goto L_001921C0;
    case 207u: goto L_00192200;
    case 208u: goto L_001922AC;
    case 209u: goto L_001922CC;
    case 210u: goto L_001922EC;
    case 211u: goto L_00192358;
    case 212u: goto L_001923C8;
    case 213u: goto L_00192438;
    case 214u: goto L_00192450;
    case 215u: goto L_00192520;
    case 216u: goto L_00192528;
    case 217u: goto L_00192548;
    case 218u: goto L_001925A0;
    case 219u: goto L_00192610;
    case 220u: goto L_00192680;
    case 221u: goto L_00192698;
    case 222u: goto L_0019276C;
    case 223u: goto L_00192774;
    case 224u: goto L_00192794;
    case 225u: goto L_001927F0;
    case 226u: goto L_00192860;
    case 227u: goto L_001928D0;
    case 228u: goto L_001928E8;
    case 229u: goto L_001929BC;
    case 230u: goto L_001929CC;
    case 231u: goto L_00192A28;
    case 232u: goto L_00192A98;
    case 233u: goto L_00192B08;
    case 234u: goto L_00192B74;
    case 235u: goto L_00192BF8;
    case 236u: goto L_00192CD8;
    case 237u: goto L_00192CE8;
    case 238u: goto L_00192D40;
    case 239u: goto L_00192DB0;
    case 240u: goto L_00192E30;
    case 241u: goto L_00192E68;
    case 242u: goto L_00192EC8;
    case 243u: goto L_00192FB0;
    case 244u: goto L_00192FC0;
    case 245u: goto L_00193018;
    case 246u: goto L_00193088;
    case 247u: goto L_0019310C;
    case 248u: goto L_00193164;
    case 249u: goto L_001931D0;
    case 250u: goto L_001932B4;
    case 251u: goto L_001932C4;
    case 252u: goto L_00193318;
    case 253u: goto L_0019338C;
    case 254u: goto L_0019340C;
    case 255u: goto L_00193464;
    case 256u: goto L_001934D0;
    case 257u: goto L_001935B4;
    case 258u: goto L_001935C4;
    case 259u: goto L_00193618;
    case 260u: goto L_0019368C;
    case 261u: goto L_0019370C;
    case 262u: goto L_00193734;
    case 263u: goto L_00193754;
    case 264u: goto L_00193774;
    case 265u: goto L_00193794;
    case 266u: goto L_001937D0;
    case 267u: goto L_00193810;
    case 268u: goto L_0019381C;
    case 269u: goto L_00193848;
    case 270u: goto L_00193854;
    case 271u: goto L_00193878;
    case 272u: goto L_001938E8;
    case 273u: goto L_00193978;
    case 274u: goto L_001939E8;
    case 275u: goto L_00193AA8;
    default: bad_entry(c, 0x00190000u); return;
    }
L_00190000:
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019003C; } }
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = fp::sub(c.f[22], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.f[0] = c.f[0] & fp::kAbs;
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019003C; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019003C; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_0019003C:
    set32(c.r[3], c.r[3].w[0] + 164u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018FFF0u | kUnwind; return; } [[clang::musttail]] return unit_0023(c, 326u, depth); } }
L_0019004C:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018FFB0u | kUnwind; return; } [[clang::musttail]] return unit_0023(c, 325u, depth); } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019006Cu);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x00191910u; return; } if (c.pc != 0x0019006Cu) [[unlikely]] return; }
L_0019006C:
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_00190080:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0019013C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[9].d[0];  if (t) { goto L_0019013C; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019013C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019013C; } }
    c.budget -= 1;
L_001900C0:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[16].d[0];  if (t) { goto L_0019012C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019012C; } }
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[2] = fp::sub(c.f[20], c.f[0]);
    c.f[1] = fp::sub(c.f[22], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.f[2] = c.f[2] & fp::kAbs;
    c.f[1] = c.f[1] & fp::kAbs;
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019012C; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[23]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019012C; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019012C; } }
    c.f[23] = c.f[2];
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_0019012C:
    set32(c.r[3], c.r[3].w[0] + 164u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001900C0u | kUnwind; return; } goto L_001900C0; } }
L_0019013C:
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00190080u | kUnwind; return; } goto L_00190080; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019015Cu);  if (depth < kMaxDepth) unit_0024(c, 158u, depth + 1u); else { c.pc = 0x001919A8u; return; } if (c.pc != 0x0019015Cu) [[unlikely]] return; }
L_0019015C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[23] = ld32((c.r[29].w[0] + 104u));
    c.f[22] = ld32((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 88u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00190190:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 88u), c.f[21]);
    set32(c.r[19], c.r[18].w[0] + 1652u);
    st32((c.r[29].w[0] + 96u), c.f[22]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.f[22] = c.f[12];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[20] = c.f[13];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 104u), c.f[23]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[21] = c.r[1].w[0];
    c.budget -= 20;
L_001901E0:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019027C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0019027C; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019027C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019027C; } }
    c.budget -= 1;
L_00190220:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_0019026C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019026C; } }
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::sub(c.f[22], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.f[0] = c.f[0] & fp::kAbs;
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019026C; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019026C; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_0019026C:
    set32(c.r[3], c.r[3].w[0] + 164u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00190220u | kUnwind; return; } goto L_00190220; } }
L_0019027C:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001901E0u | kUnwind; return; } goto L_001901E0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[23] = c.r[1].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001902A0u);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x00191910u; return; } if (c.pc != 0x001902A0u) [[unlikely]] return; }
L_001902A0:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_001902B8:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00190374; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[9].d[0];  if (t) { goto L_00190374; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00190374; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00190374; } }
    c.budget -= 1;
L_001902F8:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[16].d[0];  if (t) { goto L_00190364; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00190364; } }
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    c.f[2] = fp::sub(c.f[20], c.f[0]);
    c.f[1] = fp::sub(c.f[22], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.f[2] = c.f[2] & fp::kAbs;
    c.f[1] = c.f[1] & fp::kAbs;
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00190364; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00190364; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[23]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00190364; } }
    c.f[23] = c.f[2];
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_00190364:
    set32(c.r[3], c.r[3].w[0] + 164u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001902F8u | kUnwind; return; } goto L_001902F8; } }
L_00190374:
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001902B8u | kUnwind; return; } goto L_001902B8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190394u);  if (depth < kMaxDepth) unit_0024(c, 158u, depth + 1u); else { c.pc = 0x001919A8u; return; } if (c.pc != 0x00190394u) [[unlikely]] return; }
L_00190394:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[23] = ld32((c.r[29].w[0] + 104u));
    c.f[22] = ld32((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 88u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001903C8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 88u), c.f[21]);
    set32(c.r[19], c.r[18].w[0] + 1652u);
    st32((c.r[29].w[0] + 96u), c.f[22]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.f[22] = c.f[12];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[20] = c.f[13];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 104u), c.f[23]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[21] = c.r[1].w[0];
    c.budget -= 20;
L_00190418:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001904B4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_001904B4; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001904B4; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001904B4; } }
    c.budget -= 1;
L_00190458:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_001904A4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001904A4; } }
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::sub(c.f[22], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.f[0] = c.f[0] & fp::kAbs;
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001904A4; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001904A4; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_001904A4:
    set32(c.r[3], c.r[3].w[0] + 164u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00190458u | kUnwind; return; } goto L_00190458; } }
L_001904B4:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00190418u | kUnwind; return; } goto L_00190418; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[23] = c.r[1].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001904D8u);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x00191910u; return; } if (c.pc != 0x001904D8u) [[unlikely]] return; }
L_001904D8:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_001904F0:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001905AC; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[9].d[0];  if (t) { goto L_001905AC; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001905AC; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001905AC; } }
    c.budget -= 1;
L_00190530:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[16].d[0];  if (t) { goto L_0019059C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019059C; } }
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    c.f[2] = fp::sub(c.f[20], c.f[0]);
    c.f[1] = fp::sub(c.f[22], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.f[2] = c.f[2] & fp::kAbs;
    c.f[1] = c.f[1] & fp::kAbs;
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019059C; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019059C; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[23]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019059C; } }
    c.f[23] = c.f[2];
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_0019059C:
    set32(c.r[3], c.r[3].w[0] + 164u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00190530u | kUnwind; return; } goto L_00190530; } }
L_001905AC:
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001904F0u | kUnwind; return; } goto L_001904F0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001905CCu);  if (depth < kMaxDepth) unit_0024(c, 158u, depth + 1u); else { c.pc = 0x001919A8u; return; } if (c.pc != 0x001905CCu) [[unlikely]] return; }
L_001905CC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[23] = ld32((c.r[29].w[0] + 104u));
    c.f[22] = ld32((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 88u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00190600:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[4].w[0] + 17200u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190640u);  if (depth < kMaxDepth) unit_0071(c, 235u, depth + 1u); else { c.pc = 0x002C6878u; return; } if (c.pc != 0x00190640u) [[unlikely]] return; }
L_00190640:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019064Cu);  if (depth < kMaxDepth) unit_0028(c, 150u, depth + 1u); else { c.pc = 0x001A23F8u; return; } if (c.pc != 0x0019064Cu) [[unlikely]] return; }
L_0019064C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00190668; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00190670; } }
L_00190668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190670u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x00190670u) [[unlikely]] return; }
L_00190670:
    set32(c.r[17], c.r[16].w[0] + 17200u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190684u);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x00190684u) [[unlikely]] return; }
L_00190684:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0]), c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190698u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x00190698u) [[unlikely]] return; }
L_00190698:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001906A8u);  if (depth < kMaxDepth) unit_0071(c, 271u, depth + 1u); else { c.pc = 0x002C6F10u; return; } if (c.pc != 0x001906A8u) [[unlikely]] return; }
L_001906A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001906D4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001906BCu);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x001906BCu) [[unlikely]] return; }
L_001906BC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001906CCu);  if (depth < kMaxDepth) unit_0071(c, 169u, depth + 1u); else { c.pc = 0x002C5960u; return; } if (c.pc != 0x001906CCu) [[unlikely]] return; }
L_001906CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019073C; } }
L_001906D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001906DCu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001906DCu) [[unlikely]] return; }
L_001906DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019073C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001906F0u);  if (depth < kMaxDepth) unit_0071(c, 262u, depth + 1u); else { c.pc = 0x002C6DD0u; return; } if (c.pc != 0x001906F0u) [[unlikely]] return; }
L_001906F0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0019073C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190708u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x00190708u) [[unlikely]] return; }
L_00190708:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190718u);  if (depth < kMaxDepth) unit_0071(c, 271u, depth + 1u); else { c.pc = 0x002C6F10u; return; } if (c.pc != 0x00190718u) [[unlikely]] return; }
L_00190718:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019073C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019072Cu);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x0019072Cu) [[unlikely]] return; }
L_0019072C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019073Cu);  if (depth < kMaxDepth) unit_0071(c, 169u, depth + 1u); else { c.pc = 0x002C5960u; return; } if (c.pc != 0x0019073Cu) [[unlikely]] return; }
L_0019073C:
    c.r[2].d[0] = c.r[16].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001907A4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1684u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00190794; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x52880000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 24443ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190794u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00190794u) [[unlikely]] return; }
L_00190794:
    st32((c.r[20].w[0]), 0u);
    set32(c.r[19], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00190B08; } }
L_001907A4:
    c.r[2].d[0] = c.r[16].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00190808; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1684u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001907FC; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x52880000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 24443ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001907FCu);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x001907FCu) [[unlikely]] return; }
L_001907FC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00190B00; } }
L_00190808:
    c.r[2].d[0] = c.r[16].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019086C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1684u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00190860; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x52880000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 24443ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190860u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00190860u) [[unlikely]] return; }
L_00190860:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00190B00; } }
L_0019086C:
    c.r[2].d[0] = c.r[16].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001908D0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1684u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001908C4; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x52880000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 24443ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001908C4u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x001908C4u) [[unlikely]] return; }
L_001908C4:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00190B00; } }
L_001908D0:
    c.r[2].d[0] = c.r[16].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019092C; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xCC850000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 64330ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[19], 0u + 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019091Cu);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0019091Cu) [[unlikely]] return; }
L_0019091C:
    set32(c.r[3], 0u + 4u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00190B08; } }
L_0019092C:
    c.r[2].d[0] = c.r[16].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00190988; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x87F30000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 14642ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[19], 0u + 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190978u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00190978u) [[unlikely]] return; }
L_00190978:
    set32(c.r[3], 0u + 8u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00190B08; } }
L_00190988:
    c.r[2].d[0] = c.r[16].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001909E4; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x87F30000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 14642ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[19], 0u + 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001909D4u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x001909D4u) [[unlikely]] return; }
L_001909D4:
    set32(c.r[3], 0u + 7u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00190B08; } }
L_001909E4:
    c.r[2].d[0] = c.r[16].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00190A40; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x87F30000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 14642ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[19], 0u + 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190A30u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00190A30u) [[unlikely]] return; }
L_00190A30:
    set32(c.r[3], 0u + 6u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00190B08; } }
L_00190A40:
    c.r[2].d[0] = c.r[16].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00190AA4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1684u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00190A98; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x87F30000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 14642ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190A98u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00190A98u) [[unlikely]] return; }
L_00190A98:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00190B00; } }
L_00190AA4:
    c.r[2].d[0] = c.r[16].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00190B08; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1684u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00190AFC; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x87F30000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 14642ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190AFCu);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00190AFCu) [[unlikely]] return; }
L_00190AFC:
    set32(c.r[2], 0u + 12u);
    c.budget -= 1;
L_00190B00:
    set32(c.r[19], 0u + 1u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00190B08:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
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
L_00190B38:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190B5Cu);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x00191910u; return; } if (c.pc != 0x00190B5Cu) [[unlikely]] return; }
L_00190B5C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] | 4ull;
    c.r[7].d[0] = c.r[29].d[0] | 8ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190B78u);  if (depth < kMaxDepth) unit_0024(c, 22u, depth + 1u); else { c.pc = 0x00190600u; return; } if (c.pc != 0x00190B78u) [[unlikely]] return; }
L_00190B78:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00190D50; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00190BAC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00190BAC; } }
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00190BA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00190BA8u) [[unlikely]] return; }
L_00190BA8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00190BAC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190BB8u);  if (depth < kMaxDepth) unit_0024(c, 178u, depth + 1u); else { c.pc = 0x00191C78u; return; } if (c.pc != 0x00190BB8u) [[unlikely]] return; }
L_00190BB8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00190BE4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00190BE4; } }
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00190BE0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00190BE0u) [[unlikely]] return; }
L_00190BE0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00190BE4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00190D50; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00190D50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 30160u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00190000u < 16384u) { entry = entries_0024[(t - 0x00190000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00190C18:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u - 33u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.f[13] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190C40u);  if (depth < kMaxDepth) unit_0024(c, 15u, depth + 1u); else { c.pc = 0x001903C8u; return; } if (c.pc != 0x00190C40u) [[unlikely]] return; }
L_00190C40:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00190CF0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00190D50; } }
L_00190C60:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u - 33u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.f[13] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190C88u);  if (depth < kMaxDepth) unit_0024(c, 8u, depth + 1u); else { c.pc = 0x00190190u; return; } if (c.pc != 0x00190C88u) [[unlikely]] return; }
L_00190C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00190C40u | kUnwind; return; } goto L_00190C40; } }
L_00190C90:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u - 33u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.f[13] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190CB8u);  if (depth < kMaxDepth) unit_0023(c, 324u, depth + 1u); else { c.pc = 0x0018FF58u; return; } if (c.pc != 0x00190CB8u) [[unlikely]] return; }
L_00190CB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00190C40u | kUnwind; return; } goto L_00190C40; } }
L_00190CC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u - 33u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.f[13] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190CE8u);  if (depth < kMaxDepth) unit_0023(c, 317u, depth + 1u); else { c.pc = 0x0018FD20u; return; } if (c.pc != 0x00190CE8u) [[unlikely]] return; }
L_00190CE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00190C40u | kUnwind; return; } goto L_00190C40; } }
L_00190CF0:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00190D50; } }
L_00190D04:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00190D48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190D18u);  if (depth < kMaxDepth) unit_0027(c, 125u, depth + 1u); else { c.pc = 0x0019E040u; return; } if (c.pc != 0x00190D18u) [[unlikely]] return; }
L_00190D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00190D50; } }
L_00190D20:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00190D50; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00190D50; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00190D40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00190D40u) [[unlikely]] return; }
L_00190D40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00190D50; } }
L_00190D48:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 2;
L_00190D50:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00190D70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st32((c.r[29].w[0] + 88u), c.f[21]);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 96u), c.f[22]);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190D9Cu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00190D9Cu) [[unlikely]] return; }
L_00190D9C:
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 12u));
    c.f[21] = fp::mul(c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00190DCC; } }
    c.f[21] = 0u;
    c.budget -= 1;
L_00190DCC:
    c.f[22] = 0u;
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[22]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00190EF0; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[6], c.r[16].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190E00u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00190E00u) [[unlikely]] return; }
L_00190E00:
    c.f[12] = ld32((c.r[29].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190E0Cu);  if (depth < kMaxDepth) unit_006F(c, 192u, depth + 1u); else { c.pc = 0x002BFD88u; return; } if (c.pc != 0x00190E0Cu) [[unlikely]] return; }
L_00190E0C:
    c.f[12] = ld32((c.r[29].w[0] + 4u));
    st32((c.r[29].w[0]), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190E1Cu);  if (depth < kMaxDepth) unit_006F(c, 192u, depth + 1u); else { c.pc = 0x002BFD88u; return; } if (c.pc != 0x00190E1Cu) [[unlikely]] return; }
L_00190E1C:
    st32((c.r[16].w[0] + 28u), c.f[22]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190E30u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00190E30u) [[unlikely]] return; }
L_00190E30:
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[13] = c.f[21];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190E48u);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x00190E48u) [[unlikely]] return; }
L_00190E48:
    c.f[1] = c.r[17].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x477F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65280ull;
    c.f[12] = c.r[1].w[0];
    c.f[13] = c.f[20];
    st32((c.r[16].w[0] + 16u), c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[12]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190E7Cu);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x00190E7Cu) [[unlikely]] return; }
L_00190E7C:
    c.f[12] = c.f[0];
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190E8Cu);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x00190E8Cu) [[unlikely]] return; }
L_00190E8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 20u);
    c.f[12] = fp::sub(c.f[0], c.f[12]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190EA8u);  if (depth < kMaxDepth) unit_0045(c, 110u, depth + 1u); else { c.pc = 0x00215EC0u; return; } if (c.pc != 0x00190EA8u) [[unlikely]] return; }
L_00190EA8:
    c.f[2] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[4] = ld32((c.r[29].w[0]));
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[5] = ld32((c.r[29].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 32u), c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00190F04; } }
L_00190EF0:
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190F00u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00190F00u) [[unlikely]] return; }
L_00190F00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00190F04:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 88u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00190F28:
    c.f[13] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42AC0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 54068ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190F6Cu);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00190F6Cu) [[unlikely]] return; }
L_00190F6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00190F80:
    c.f[13] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x52880000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].d[0] = c.r[5].d[0] | 24443ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190FC4u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00190FC4u) [[unlikely]] return; }
L_00190FC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00190FD8:
    c.f[13] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xCC850000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].d[0] = c.r[5].d[0] | 64330ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019101Cu);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0019101Cu) [[unlikely]] return; }
L_0019101C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191030:
    c.f[13] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x87F30000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].d[0] = c.r[5].d[0] | 14642ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191074u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00191074u) [[unlikely]] return; }
L_00191074:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191088:
    c.f[13] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBFA30000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].d[0] = c.r[5].d[0] | 60590ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001910CCu);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x001910CCu) [[unlikely]] return; }
L_001910CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001910E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[1].w[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[17].w[0] + 24040u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    set32(c.r[18], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 14664u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191124u);  if (depth < kMaxDepth) unit_007D(c, 267u, depth + 1u); else { c.pc = 0x002F7AB0u; return; } if (c.pc != 0x00191124u) [[unlikely]] return; }
L_00191124:
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019119C; } }
L_00191138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191140u);  if (depth < kMaxDepth) unit_001F(c, 323u, depth + 1u); else { c.pc = 0x0017FDD0u; return; } if (c.pc != 0x00191140u) [[unlikely]] return; }
L_00191140:
    set32(c.r[16], c.r[19].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019114Cu);  if (depth < kMaxDepth) unit_007D(c, 21u, depth + 1u); else { c.pc = 0x002F4200u; return; } if (c.pc != 0x0019114Cu) [[unlikely]] return; }
L_0019114C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191158u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x00191158u) [[unlikely]] return; }
L_00191158:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0019119C; } }
    c.f[13] = 0u;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xCC850000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].d[0] = c.r[5].d[0] | 64330ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191198u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00191198u) [[unlikely]] return; }
L_00191198:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019119C:
    set32(c.r[4], c.r[17].w[0] + 24040u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001911A8u);  if (depth < kMaxDepth) unit_007D(c, 262u, depth + 1u); else { c.pc = 0x002F7A00u; return; } if (c.pc != 0x001911A8u) [[unlikely]] return; }
L_001911A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00191138u | kUnwind; return; } goto L_00191138; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[17], 0u + 9u);
    st32((c.r[20].w[0] + 15804u), c.r[2].w[0]);
    c.budget -= 4;
L_001911C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001911C8u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x001911C8u) [[unlikely]] return; }
L_001911C8:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001911D4u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x001911D4u) [[unlikely]] return; }
L_001911D4:
    set32(c.r[4], c.r[19].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001911E0u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001911E0u) [[unlikely]] return; }
L_001911E0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001911C0u | kUnwind; return; } goto L_001911C0; } }
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st32((c.r[21].w[0] + 14664u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.budget -= 6;
L_00191200:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191218:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 19344u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[2].w[0] + 14664u), 0u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], 0u + 9u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191258u);  if (depth < kMaxDepth) unit_0088(c, 278u, depth + 1u); else { c.pc = 0x003232E0u; return; } if (c.pc != 0x00191258u) [[unlikely]] return; }
L_00191258:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 15804u), c.r[2].w[0]);
    c.budget -= 4;
L_00191268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191270u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x00191270u) [[unlikely]] return; }
L_00191270:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019127Cu);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x0019127Cu) [[unlikely]] return; }
L_0019127C:
    set32(c.r[4], c.r[17].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191288u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x00191288u) [[unlikely]] return; }
L_00191288:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00191268u | kUnwind; return; } goto L_00191268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191298u);  if (depth < kMaxDepth) unit_0023(c, 72u, depth + 1u); else { c.pc = 0x0018D208u; return; } if (c.pc != 0x00191298u) [[unlikely]] return; }
L_00191298:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[18].w[0] + 24040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001912ACu);  if (depth < kMaxDepth) unit_007D(c, 266u, depth + 1u); else { c.pc = 0x002F7A58u; return; } if (c.pc != 0x001912ACu) [[unlikely]] return; }
L_001912AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001912D4; } }
    c.budget -= 1;
L_001912B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001912C0u);  if (depth < kMaxDepth) unit_001F(c, 323u, depth + 1u); else { c.pc = 0x0017FDD0u; return; } if (c.pc != 0x001912C0u) [[unlikely]] return; }
L_001912C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001912C8u);  if (depth < kMaxDepth) unit_007D(c, 21u, depth + 1u); else { c.pc = 0x002F4200u; return; } if (c.pc != 0x001912C8u) [[unlikely]] return; }
L_001912C8:
    set32(c.r[4], c.r[17].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001912D4u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001912D4u) [[unlikely]] return; }
L_001912D4:
    set32(c.r[4], c.r[18].w[0] + 24040u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001912E0u);  if (depth < kMaxDepth) unit_007D(c, 262u, depth + 1u); else { c.pc = 0x002F7A00u; return; } if (c.pc != 0x001912E0u) [[unlikely]] return; }
L_001912E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001912B8u | kUnwind; return; } goto L_001912B8; } }
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st32((c.r[19].w[0] + 14664u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191310:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[1].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[4], c.r[17].w[0] + 24040u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 14664u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191350u);  if (depth < kMaxDepth) unit_007D(c, 267u, depth + 1u); else { c.pc = 0x002F7AB0u; return; } if (c.pc != 0x00191350u) [[unlikely]] return; }
L_00191350:
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00191384; } }
    c.budget -= 1;
L_00191368:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191378u);  if (depth < kMaxDepth) unit_0026(c, 121u, depth + 1u); else { c.pc = 0x0019AC58u; return; } if (c.pc != 0x00191378u) [[unlikely]] return; }
L_00191378:
    set32(c.r[4], c.r[16].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191384u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x00191384u) [[unlikely]] return; }
L_00191384:
    set32(c.r[4], c.r[17].w[0] + 24040u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191390u);  if (depth < kMaxDepth) unit_007D(c, 262u, depth + 1u); else { c.pc = 0x002F7A00u; return; } if (c.pc != 0x00191390u) [[unlikely]] return; }
L_00191390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00191368u | kUnwind; return; } goto L_00191368; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[17], 0u + 9u);
    st32((c.r[19].w[0] + 15804u), c.r[2].w[0]);
    c.budget -= 4;
L_001913A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001913B0u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x001913B0u) [[unlikely]] return; }
L_001913B0:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001913BCu);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x001913BCu) [[unlikely]] return; }
L_001913BC:
    set32(c.r[4], c.r[16].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001913C8u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001913C8u) [[unlikely]] return; }
L_001913C8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001913A8u | kUnwind; return; } goto L_001913A8; } }
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st32((c.r[20].w[0] + 14664u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191400:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] - 19344u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[17].w[0] + 14664u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191434u);  if (depth < kMaxDepth) unit_0088(c, 278u, depth + 1u); else { c.pc = 0x003232E0u; return; } if (c.pc != 0x00191434u) [[unlikely]] return; }
L_00191434:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[16].w[0] + 24040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191448u);  if (depth < kMaxDepth) unit_007D(c, 266u, depth + 1u); else { c.pc = 0x002F7A58u; return; } if (c.pc != 0x00191448u) [[unlikely]] return; }
L_00191448:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 15804u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00191480; } }
    c.budget -= 1;
L_00191460:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191470u);  if (depth < kMaxDepth) unit_0026(c, 121u, depth + 1u); else { c.pc = 0x0019AC58u; return; } if (c.pc != 0x00191470u) [[unlikely]] return; }
L_00191470:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191480u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x00191480u) [[unlikely]] return; }
L_00191480:
    set32(c.r[4], c.r[16].w[0] + 24040u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019148Cu);  if (depth < kMaxDepth) unit_007D(c, 262u, depth + 1u); else { c.pc = 0x002F7A00u; return; } if (c.pc != 0x0019148Cu) [[unlikely]] return; }
L_0019148C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00191460u | kUnwind; return; } goto L_00191460; } }
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 14664u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001914B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001914F8; } }
    c.budget -= 1;
L_001914D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001914E4u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001914E4u) [[unlikely]] return; }
L_001914E4:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 164u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001914D8u | kUnwind; return; } goto L_001914D8; } }
L_001914F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191510:
    set32(c.r[2], 0u + 7u);
    c.budget -= 2;
L_00191518:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00191518u | kUnwind; return; } goto L_00191518; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191538:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 1652u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191550:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] + 1652u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 6;
L_00191568:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00191620; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[9].d[0];  if (t) { goto L_00191620; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00191620; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00191620; } }
    set32(c.r[8], 0u + 1u);
    c.budget -= 1;
L_001915A8:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00191610; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00191610; } }
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[8].d[0];  if (t) { goto L_001915E8; } }
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001915F0; } }
L_001915E8:
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[13]));
    c.budget -= 2;
L_001915F0:
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00191610; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 1;
L_00191600:
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00191610; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_00191610:
    set32(c.r[3], c.r[3].w[0] + 164u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001915A8u | kUnwind; return; } goto L_001915A8; } }
L_00191620:
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00191568u | kUnwind; return; } goto L_00191568; } }
    c.f[0] = c.f[2];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191640:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] + 1652u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 6;
L_00191658:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00191710; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[9].d[0];  if (t) { goto L_00191710; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00191710; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00191710; } }
    set32(c.r[8], 0u + 1u);
    c.budget -= 1;
L_00191698:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00191700; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00191700; } }
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::sub(c.f[13], c.f[0]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[8].d[0];  if (t) { goto L_001916D8; } }
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001916E0; } }
L_001916D8:
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 2;
L_001916E0:
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00191700; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00191700; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_00191700:
    set32(c.r[3], c.r[3].w[0] + 164u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00191698u | kUnwind; return; } goto L_00191698; } }
L_00191710:
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00191658u | kUnwind; return; } goto L_00191658; } }
    c.f[0] = c.f[2];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 33u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.f[13] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191764u);  if (depth < kMaxDepth) unit_0023(c, 317u, depth + 1u); else { c.pc = 0x0018FD20u; return; } if (c.pc != 0x00191764u) [[unlikely]] return; }
L_00191764:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00191784; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[5].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00191790; } }
L_00191784:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
L_00191790:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001917A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 33u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.f[13] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001917DCu);  if (depth < kMaxDepth) unit_0023(c, 324u, depth + 1u); else { c.pc = 0x0018FF58u; return; } if (c.pc != 0x001917DCu) [[unlikely]] return; }
L_001917DC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001917FC; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[5].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00191808; } }
L_001917FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
L_00191808:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 33u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.f[13] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191854u);  if (depth < kMaxDepth) unit_0024(c, 15u, depth + 1u); else { c.pc = 0x001903C8u; return; } if (c.pc != 0x00191854u) [[unlikely]] return; }
L_00191854:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00191874; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[5].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00191880; } }
L_00191874:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
L_00191880:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191898:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 33u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.f[13] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001918CCu);  if (depth < kMaxDepth) unit_0024(c, 8u, depth + 1u); else { c.pc = 0x00190190u; return; } if (c.pc != 0x001918CCu) [[unlikely]] return; }
L_001918CC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001918EC; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[5].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001918F8; } }
L_001918EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
L_001918F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191910:
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1652u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191928:
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00191940; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191940:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 1652u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191958:
    set32(c.r[4], c.r[4].w[0] + 1652u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00191960:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00191984; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00191984; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191984:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00191960u | kUnwind; return; } goto L_00191960; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001919A8:
    set32(c.r[3], ld32((c.r[5].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001919E0; } }
L_001919B8:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_001919D0; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001919D0:
    set32(c.r[3], c.r[3].w[0] + 164u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001919B8u | kUnwind; return; } goto L_001919B8; } }
L_001919E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001919F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191A00u);  if (depth < kMaxDepth) unit_0024(c, 175u, depth + 1u); else { c.pc = 0x00191BF0u; return; } if (c.pc != 0x00191A00u) [[unlikely]] return; }
L_00191A00:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00191A18; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
L_00191A18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191A28:
    set32(c.r[4], c.r[4].w[0] + 1652u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
L_00191A38:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00191A8C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_00191A8C; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00191A8C; } }
    set32(c.r[5], 0u - 65u);
    c.budget -= 1;
L_00191A70:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 164u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00191A70u | kUnwind; return; } goto L_00191A70; } }
L_00191A8C:
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00191A38u | kUnwind; return; } goto L_00191A38; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191AA8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191AC8u);  if (depth < kMaxDepth) unit_0024(c, 178u, depth + 1u); else { c.pc = 0x00191C78u; return; } if (c.pc != 0x00191AC8u) [[unlikely]] return; }
L_00191AC8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00191AE4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], 0u - 33u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
L_00191AE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191AF4u);  if (depth < kMaxDepth) unit_0024(c, 175u, depth + 1u); else { c.pc = 0x00191BF0u; return; } if (c.pc != 0x00191AF4u) [[unlikely]] return; }
L_00191AF4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00191B0C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
L_00191B0C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191B28:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1652u)));
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191B40:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1652u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00191B60; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191B60:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191B70:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1652u)));
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191B88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191BA0u);  if (depth < kMaxDepth) unit_0024(c, 175u, depth + 1u); else { c.pc = 0x00191BF0u; return; } if (c.pc != 0x00191BA0u) [[unlikely]] return; }
L_00191BA0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00191BD8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00191BC8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00191BD4; } }
L_00191BC8:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], 0u - 129u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_00191BD4:
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 1;
L_00191BD8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191BF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[17].w[0] + 1652u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
L_00191C18:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00191C3C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191C34u);  if (depth < kMaxDepth) unit_0024(c, 184u, depth + 1u); else { c.pc = 0x00191D58u; return; } if (c.pc != 0x00191C34u) [[unlikely]] return; }
L_00191C34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00191C54; } }
L_00191C3C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00191C18u | kUnwind; return; } goto L_00191C18; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00191C54:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191C78:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[17].w[0] + 1652u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[19], 0u + 1u);
    c.budget -= 10;
L_00191CA0:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00191CCC; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_00191CCC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191CC4u);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x00191D08u; return; } if (c.pc != 0x00191CC4u) [[unlikely]] return; }
L_00191CC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00191CE4; } }
L_00191CCC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00191CA0u | kUnwind; return; } goto L_00191CA0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00191CE4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191D08:
    set32(c.r[3], ld32((c.r[5].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00191D4C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00191D4C; } }
L_00191D20:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00191D3C; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191D3C:
    set32(c.r[3], c.r[3].w[0] + 164u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00191D20u | kUnwind; return; } goto L_00191D20; } }
L_00191D4C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191D58:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191D74u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x00191D74u) [[unlikely]] return; }
L_00191D74:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00191DB8; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00191DB8; } }
    c.budget -= 1;
L_00191D90:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00191DA8; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00191DBC; } }
L_00191DA8:
    set32(c.r[16], c.r[16].w[0] + 164u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00191D90u | kUnwind; return; } goto L_00191D90; } }
L_00191DB8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00191DBC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191DD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3A00000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3700000u);
    c.f[1] = c.r[1].w[0];
    st32((c.r[2].w[0]), c.f[0]);
    st32((c.r[2].w[0] + 48u), c.f[2]);
    st32((c.r[2].w[0] + 52u), c.f[1]);
    st32((c.r[2].w[0] + 56u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191E08u);  if (depth < kMaxDepth) unit_0024(c, 67u, depth + 1u); else { c.pc = 0x00190D70u; return; } if (c.pc != 0x00191E08u) [[unlikely]] return; }
L_00191E08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191E20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[1].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00191E78; } }
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3A00000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3700000u);
    c.f[2] = c.r[1].w[0];
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 48u), c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191E78u);  if (depth < kMaxDepth) unit_0024(c, 67u, depth + 1u); else { c.pc = 0x00190D70u; return; } if (c.pc != 0x00191E78u) [[unlikely]] return; }
L_00191E78:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00191EA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 5;
L_00191EA8:
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00191ED4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.budget -= 5;
L_00191ED4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191EE0u);  if (depth < kMaxDepth) unit_0024(c, 193u, depth + 1u); else { c.pc = 0x00191F20u; return; } if (c.pc != 0x00191EE0u) [[unlikely]] return; }
L_00191EE0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00191F08; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191EF8u);  if (depth < kMaxDepth) unit_0024(c, 67u, depth + 1u); else { c.pc = 0x00190D70u; return; } if (c.pc != 0x00191EF8u) [[unlikely]] return; }
L_00191EF8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00191F0C; } }
L_00191F08:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00191F0C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191F20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[2] = c.r[1].w[0];
    st32((c.r[29].w[0] + 48u), c.f[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    fpu_div(c, 20u, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[20]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00191FA4; } }
    set32(c.r[16], c.r[4].w[0] + 64u);
    set32(c.r[5], c.r[4].w[0] + 32u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191F70u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00191F70u) [[unlikely]] return; }
L_00191F70:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191F84u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00191F84u) [[unlikely]] return; }
L_00191F84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191F98u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00191F98u) [[unlikely]] return; }
L_00191F98:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00191FB8; } }
L_00191FA4:
    set32(c.r[5], c.r[4].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191FB4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00191FB4u) [[unlikely]] return; }
L_00191FB4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00191FB8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00191FD0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191FE0u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x00191FE0u) [[unlikely]] return; }
L_00191FE0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001920A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[2].w[0] + 13128u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00192078; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 13132u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0019202C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[1].w[0];
    st32((c.r[3].w[0] + 13132u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 24040u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019202Cu);  if (depth < kMaxDepth) unit_007D(c, 267u, depth + 1u); else { c.pc = 0x002F7AB0u; return; } if (c.pc != 0x0019202Cu) [[unlikely]] return; }
L_0019202C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 30224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192040u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x00192040u) [[unlikely]] return; }
L_00192040:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[12] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80800000u);
    set32(c.r[4], 0u + 320u);
    set32(c.r[5], 0u + 240u);
    c.r[6].d[0] = c.r[6].d[0] | 32897ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192070u);  if (depth < kMaxDepth) unit_007D(c, 122u, depth + 1u); else { c.pc = 0x002F58A0u; return; } if (c.pc != 0x00192070u) [[unlikely]] return; }
L_00192070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001920A4; } }
L_00192078:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 13132u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001920A4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[1].w[0];
    st32((c.r[3].w[0] + 13132u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 24040u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001920A4u);  if (depth < kMaxDepth) unit_007D(c, 266u, depth + 1u); else { c.pc = 0x002F7A58u; return; } if (c.pc != 0x001920A4u) [[unlikely]] return; }
L_001920A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001920B8:
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[3], 0u + 3u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], 0u - 1u);
    st32((c.r[29].w[0] + 232u), c.f[21]);
    st32((c.r[29].w[0] + 224u), c.f[20]);
    c.budget -= 24;
L_00192118:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00192118u | kUnwind; return; } goto L_00192118; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 248u)));
    st8((c.r[29].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[23].w[0]));
    st8((c.r[29].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 10;
    { const bool t = c.r[22].d[0] == c.r[2].d[0];  if (t) { goto L_00193714; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[19], c.r[19].w[0] + 5u);
    set32(c.r[2], ld32((c.r[3].w[0] + 7524u)));
    set32(c.r[4], c.r[22].w[0] << 3);
    st32((c.r[29].w[0] + 16u), c.r[19].w[0]);
    set32(c.r[18], c.r[17].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[30], c.r[21].w[0] + 5u);
    c.r[6].d[0] = ld16((c.r[2].w[0] + 2u));
    set32(c.r[21], c.r[16].w[0] - 5u);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 4u));
    set32(c.r[20], c.r[20].w[0] - 5u);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    c.r[19].d[0] = 0ull + 0ull;
    c.r[4].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[8], c.r[17].w[0] + 120u);
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 28u), c.r[4].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[17].w[0] + 1652u);
    c.budget -= 24;
L_001921C0:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001921E0; } }
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_001922B4; } }
L_001921E0:
    set32(c.r[7], c.r[7].w[0] + 12u);
    set32(c.r[5], c.r[3].w[0] + 12u);
    set32(c.r[6], c.r[4].w[0] + 12u);
    set32(c.r[8], c.r[8].w[0] + 12u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001921C0u | kUnwind; return; } goto L_001921C0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00192200:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001922E4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.f[1] = ld32((c.r[29].w[0] + 16u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[8], c.r[21].w[0] - c.r[30].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 64511ull;
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.f[0] = c.r[30].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 304u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 248u)));
    st16((c.r[16].w[0] + 314u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    st32((c.r[29].w[0] + 36u), c.r[8].w[0]);
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], c.r[20].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 516u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 480u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] & 65487ull;
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    st32((c.r[16].w[0] + 192u), c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 48ull;
    st32((c.r[16].w[0] + 196u), c.f[1]);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001922ACu);  if (depth < kMaxDepth) unit_0040(c, 69u, depth + 1u); else { c.pc = 0x00200C48u; return; } if (c.pc != 0x001922ACu) [[unlikely]] return; }
L_001922AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00192438; } }
L_001922B4:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[17].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00192200u | kUnwind; return; } goto L_00192200; } }
L_001922CC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[17].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00192488; } }
L_001922E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001922ECu);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x001922ECu) [[unlikely]] return; }
L_001922EC:
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[4], c.r[21].w[0] - c.r[30].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[4].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] - c.r[5].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00192438; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[10], c.r[17].w[0] + 120u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[8], c.r[17].w[0] + 124u);
    c.f[20] = c.r[30].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[21] = ld32((c.r[29].w[0] + 16u));
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00192358; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00192388; } }
    c.budget -= 1;
L_00192358:
    set32(c.r[2], 0u + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00192358u | kUnwind; return; } goto L_00192358; } }
    set32(c.r[2], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00192358u | kUnwind; return; } goto L_00192358; } }
L_00192388:
    set32(c.r[2], 0u + 12u);
    set32(c.r[9], 0u + 1u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 178ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[9].w[0]);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    st32((c.r[8].w[0]), c.r[16].w[0]);
    st32((c.r[2].w[0]), c.r[22].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001923C8u);  if (depth < kMaxDepth) unit_0083(c, 304u, depth + 1u); else { c.pc = 0x0030FAF8u; return; } if (c.pc != 0x001923C8u) [[unlikely]] return; }
L_001923C8:
    st32((c.r[16].w[0] + 304u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.r[2].d[0] = c.r[2].d[0] | 64511ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 256u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 314u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 480u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 264u)));
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[16].w[0] + 516u), 0u);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    set32(c.r[7], ld32((c.r[29].w[0] + 248u)));
    c.r[2].d[0] = c.r[2].d[0] & 65487ull;
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    st32((c.r[16].w[0] + 192u), c.f[20]);
    c.r[2].d[0] = c.r[2].d[0] | 48ull;
    st32((c.r[16].w[0] + 196u), c.f[21]);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192438u);  if (depth < kMaxDepth) unit_0040(c, 69u, depth + 1u); else { c.pc = 0x00200C48u; return; } if (c.pc != 0x00192438u) [[unlikely]] return; }
L_00192438:
    set32(c.r[19], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 120u);
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[18].w[0] + 1536u);
    c.budget -= 6;
L_00192450:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00192468; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001922CCu | kUnwind; return; } goto L_001922CC; } }
L_00192468:
    set32(c.r[3], c.r[3].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + 12u);
    set32(c.r[5], c.r[5].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 12u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00192450u | kUnwind; return; } goto L_00192450; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00192488:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00192540; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.f[1] = ld32((c.r[29].w[0] + 16u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.f[0] = c.r[21].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 64511ull;
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 304u), 0u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 480u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 248u)));
    st16((c.r[16].w[0] + 314u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    st32((c.r[16].w[0] + 516u), 0u);
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] & 65487ull;
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    st32((c.r[16].w[0] + 192u), c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 48ull;
    st32((c.r[16].w[0] + 196u), c.f[1]);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192520u);  if (depth < kMaxDepth) unit_0040(c, 69u, depth + 1u); else { c.pc = 0x00200C48u; return; } if (c.pc != 0x00192520u) [[unlikely]] return; }
L_00192520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00192680; } }
L_00192528:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[17].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001926D0; } }
L_00192540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192548u);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x00192548u) [[unlikely]] return; }
L_00192548:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00192680; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[10], c.r[17].w[0] + 120u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[8], c.r[17].w[0] + 124u);
    c.f[20] = c.r[21].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[21] = ld32((c.r[29].w[0] + 16u));
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001925A0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001925D0; } }
    c.budget -= 1;
L_001925A0:
    set32(c.r[2], 0u + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001925A0u | kUnwind; return; } goto L_001925A0; } }
    set32(c.r[2], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001925A0u | kUnwind; return; } goto L_001925A0; } }
L_001925D0:
    set32(c.r[2], 0u + 12u);
    set32(c.r[9], 0u + 1u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.r[7].d[0] = c.r[7].d[0] | 178ull;
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[9].w[0]);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    st32((c.r[8].w[0]), c.r[16].w[0]);
    st32((c.r[2].w[0]), c.r[22].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192610u);  if (depth < kMaxDepth) unit_0083(c, 304u, depth + 1u); else { c.pc = 0x0030FAF8u; return; } if (c.pc != 0x00192610u) [[unlikely]] return; }
L_00192610:
    st32((c.r[16].w[0] + 304u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.r[2].d[0] = c.r[2].d[0] | 64511ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 314u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 480u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 264u)));
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[16].w[0] + 516u), 0u);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    set32(c.r[7], ld32((c.r[29].w[0] + 248u)));
    c.r[2].d[0] = c.r[2].d[0] & 65487ull;
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    st32((c.r[16].w[0] + 192u), c.f[20]);
    c.r[2].d[0] = c.r[2].d[0] | 48ull;
    st32((c.r[16].w[0] + 196u), c.f[21]);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192680u);  if (depth < kMaxDepth) unit_0040(c, 69u, depth + 1u); else { c.pc = 0x00200C48u; return; } if (c.pc != 0x00192680u) [[unlikely]] return; }
L_00192680:
    set32(c.r[19], 0u + 2u);
    set32(c.r[4], c.r[17].w[0] + 120u);
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[18].w[0] + 1536u);
    c.budget -= 6;
L_00192698:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001926B0; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00192528u | kUnwind; return; } goto L_00192528; } }
L_001926B0:
    set32(c.r[3], c.r[3].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + 12u);
    set32(c.r[5], c.r[5].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 12u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00192698u | kUnwind; return; } goto L_00192698; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001926D0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0019278C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 64511ull;
    c.f[0] = c.r[30].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[1] = c.r[20].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 304u), 0u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 248u)));
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 314u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 480u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 264u)));
    st32((c.r[16].w[0] + 516u), 0u);
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] & 65487ull;
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    st32((c.r[16].w[0] + 192u), c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 48ull;
    st32((c.r[16].w[0] + 196u), c.f[1]);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019276Cu);  if (depth < kMaxDepth) unit_0040(c, 69u, depth + 1u); else { c.pc = 0x00200C48u; return; } if (c.pc != 0x0019276Cu) [[unlikely]] return; }
L_0019276C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001928D0; } }
L_00192774:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[17].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00192920; } }
L_0019278C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192794u);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x00192794u) [[unlikely]] return; }
L_00192794:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001928D0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[10], c.r[17].w[0] + 120u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[8], c.r[17].w[0] + 124u);
    c.f[20] = c.r[30].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[21] = c.r[20].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001927F0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00192820; } }
    c.budget -= 1;
L_001927F0:
    set32(c.r[2], 0u + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001927F0u | kUnwind; return; } goto L_001927F0; } }
    set32(c.r[2], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001927F0u | kUnwind; return; } goto L_001927F0; } }
L_00192820:
    set32(c.r[2], 0u + 12u);
    set32(c.r[9], 0u + 1u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 178ull;
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[9].w[0]);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    st32((c.r[8].w[0]), c.r[16].w[0]);
    st32((c.r[2].w[0]), c.r[22].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192860u);  if (depth < kMaxDepth) unit_0083(c, 304u, depth + 1u); else { c.pc = 0x0030FAF8u; return; } if (c.pc != 0x00192860u) [[unlikely]] return; }
L_00192860:
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[16].w[0] + 304u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 64511ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    st16((c.r[16].w[0] + 314u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 480u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[16].w[0] + 516u), 0u);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    set32(c.r[7], ld32((c.r[29].w[0] + 248u)));
    c.r[2].d[0] = c.r[2].d[0] & 65487ull;
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    st32((c.r[16].w[0] + 192u), c.f[20]);
    c.r[2].d[0] = c.r[2].d[0] | 48ull;
    st32((c.r[16].w[0] + 196u), c.f[21]);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001928D0u);  if (depth < kMaxDepth) unit_0040(c, 69u, depth + 1u); else { c.pc = 0x00200C48u; return; } if (c.pc != 0x001928D0u) [[unlikely]] return; }
L_001928D0:
    set32(c.r[19], 0u + 3u);
    set32(c.r[4], c.r[17].w[0] + 120u);
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[18].w[0] + 1536u);
    c.budget -= 6;
L_001928E8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00192900; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00192774u | kUnwind; return; } goto L_00192774; } }
L_00192900:
    set32(c.r[3], c.r[3].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + 12u);
    set32(c.r[5], c.r[5].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 12u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001928E8u | kUnwind; return; } goto L_001928E8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00192920:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001929C4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 64511ull;
    c.f[0] = c.r[21].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[1] = c.r[20].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 304u), 0u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 248u)));
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 314u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 480u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 264u)));
    st32((c.r[16].w[0] + 516u), 0u);
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] & 65487ull;
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    st32((c.r[16].w[0] + 192u), c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 48ull;
    st32((c.r[16].w[0] + 196u), c.f[1]);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001929BCu);  if (depth < kMaxDepth) unit_0040(c, 69u, depth + 1u); else { c.pc = 0x00200C48u; return; } if (c.pc != 0x001929BCu) [[unlikely]] return; }
L_001929BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00192B08; } }
L_001929C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001929CCu);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x001929CCu) [[unlikely]] return; }
L_001929CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00192B08; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[10], c.r[17].w[0] + 120u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[8], c.r[17].w[0] + 124u);
    c.f[20] = c.r[21].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[21] = c.r[20].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00192A28; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00192A58; } }
    c.budget -= 1;
L_00192A28:
    set32(c.r[2], 0u + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00192A28u | kUnwind; return; } goto L_00192A28; } }
    set32(c.r[2], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00192A28u | kUnwind; return; } goto L_00192A28; } }
L_00192A58:
    set32(c.r[2], 0u + 12u);
    set32(c.r[9], 0u + 1u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 178ull;
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[9].w[0]);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    st32((c.r[8].w[0]), c.r[16].w[0]);
    st32((c.r[2].w[0]), c.r[22].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192A98u);  if (depth < kMaxDepth) unit_0083(c, 304u, depth + 1u); else { c.pc = 0x0030FAF8u; return; } if (c.pc != 0x00192A98u) [[unlikely]] return; }
L_00192A98:
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[16].w[0] + 304u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 64511ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    st16((c.r[16].w[0] + 314u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 480u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[16].w[0] + 516u), 0u);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    set32(c.r[7], ld32((c.r[29].w[0] + 248u)));
    c.r[2].d[0] = c.r[2].d[0] & 65487ull;
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    st32((c.r[16].w[0] + 192u), c.f[20]);
    c.r[2].d[0] = c.r[2].d[0] | 48ull;
    st32((c.r[16].w[0] + 196u), c.f[21]);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192B08u);  if (depth < kMaxDepth) unit_0040(c, 69u, depth + 1u); else { c.pc = 0x00200C48u; return; } if (c.pc != 0x00192B08u) [[unlikely]] return; }
L_00192B08:
    set32(c.r[2], 0u + 134u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00192B2C; } }
    set32(c.r[5], 0u + 137u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00192B3C; } }
L_00192B2C:
    set32(c.r[6], 0u + 138u);
    set32(c.r[4], 0u - 2u);
    st32((c.r[29].w[0] + 20u), c.r[6].w[0]);
    set32(c.r[3], 0u - 2u);
    c.budget -= 4;
L_00192B3C:
    set32(c.r[2], 0u + 134u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00192B8C; } }
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00192B9C; } }
L_00192B74:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[17].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00192C30; } }
L_00192B8C:
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], c.r[5].w[0] >> 31);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 4;
L_00192B9C:
    set32(c.r[19], c.r[30].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[20], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[21], c.r[21].w[0] + c.r[4].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[4], c.r[30].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[6].w[0] - c.r[7].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[20].w[0]);
    set32(c.r[3], c.r[8].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 44u), c.r[21].w[0]);
    set32(c.r[20], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[4].w[0]);
    c.budget -= 16;
    { const bool t = c.r[20].sd[0] <= 0;  if (t) { goto L_00192E30; } }
    set32(c.r[21], 0u + 136u);
    set32(c.r[4], c.r[17].w[0] + 120u);
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[18].w[0] + 1536u);
    c.budget -= 7;
L_00192BF8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00192C10; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00192B74u | kUnwind; return; } goto L_00192B74; } }
L_00192C10:
    set32(c.r[3], c.r[3].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + 12u);
    set32(c.r[5], c.r[5].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 12u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00192BF8u | kUnwind; return; } goto L_00192BF8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00192C30:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00192CE0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 64511ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 304u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 256u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 314u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 480u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 264u)));
    st32((c.r[16].w[0] + 516u), 0u);
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] & 65487ull;
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.r[2].d[0] = c.r[2].d[0] | 48ull;
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 26;
    { const bool t = c.r[20].d[0] == c.r[4].d[0];  if (t) { goto L_00192CA4; } }
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.budget -= 1;
L_00192CA4:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    c.f[1] = c.r[19].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[7], ld32((c.r[29].w[0] + 248u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[16].w[0] + 196u), c.f[0]);
    st32((c.r[16].w[0] + 192u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192CD8u);  if (depth < kMaxDepth) unit_0040(c, 69u, depth + 1u); else { c.pc = 0x00200C48u; return; } if (c.pc != 0x00192CD8u) [[unlikely]] return; }
L_00192CD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00192E30; } }
L_00192CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192CE8u);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x00192CE8u) [[unlikely]] return; }
L_00192CE8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00192E30; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.f[21] = ld32((c.r[29].w[0] + 32u));
    c.f[21] = fp::cvt_s_w(c.f[21]);
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.f[20] = c.r[19].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[10], c.r[17].w[0] + 120u);
    set32(c.r[8], c.r[17].w[0] + 124u);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00192D40; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00192D70; } }
    c.budget -= 1;
L_00192D40:
    set32(c.r[2], 0u + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00192D40u | kUnwind; return; } goto L_00192D40; } }
    set32(c.r[2], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00192D40u | kUnwind; return; } goto L_00192D40; } }
L_00192D70:
    set32(c.r[2], 0u + 12u);
    set32(c.r[9], 0u + 1u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 178ull;
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], 0u + 136u);
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[9].w[0]);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    st32((c.r[8].w[0]), c.r[16].w[0]);
    st32((c.r[2].w[0]), c.r[21].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192DB0u);  if (depth < kMaxDepth) unit_0083(c, 304u, depth + 1u); else { c.pc = 0x0030FAF8u; return; } if (c.pc != 0x00192DB0u) [[unlikely]] return; }
L_00192DB0:
    st32((c.r[16].w[0] + 304u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.r[2].d[0] = c.r[2].d[0] | 64511ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[4], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 314u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 480u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 264u)));
    st32((c.r[16].w[0] + 516u), 0u);
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] & 65487ull;
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.r[2].d[0] = c.r[2].d[0] | 48ull;
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 23;
    { const bool t = c.r[20].d[0] == c.r[4].d[0];  if (t) { goto L_00192E10; } }
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.budget -= 1;
L_00192E10:
    st32((c.r[16].w[0] + 192u), c.f[20]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 196u), c.f[21]);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192E30u);  if (depth < kMaxDepth) unit_0040(c, 69u, depth + 1u); else { c.pc = 0x00200C48u; return; } if (c.pc != 0x00192E30u) [[unlikely]] return; }
L_00192E30:
    set32(c.r[2], 0u + 134u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00192E80; } }
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00192E90; } }
L_00192E68:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[17].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00192F00; } }
L_00192E80:
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 4;
L_00192E90:
    set32(c.r[19], c.r[30].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[30], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[20], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[20].sd[0] <= 0;  if (t) { goto L_0019310C; } }
    set32(c.r[21], 0u + 136u);
    set32(c.r[4], c.r[17].w[0] + 120u);
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[18].w[0] + 1536u);
    c.budget -= 6;
L_00192EC8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00192EE0; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00192E68u | kUnwind; return; } goto L_00192E68; } }
L_00192EE0:
    set32(c.r[3], c.r[3].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + 12u);
    set32(c.r[5], c.r[5].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 12u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00192EC8u | kUnwind; return; } goto L_00192EC8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00192F00:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00192FB8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 64511ull;
    set32(c.r[8], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], 0u - 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 304u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 256u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 314u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 480u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 264u)));
    st32((c.r[16].w[0] + 516u), 0u);
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] & 65487ull;
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.r[2].d[0] = c.r[2].d[0] | 48ull;
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 27;
    { const bool t = c.r[20].d[0] == c.r[4].d[0];  if (t) { goto L_00192F78; } }
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.budget -= 1;
L_00192F78:
    c.f[1] = c.r[19].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    c.f[0] = c.r[30].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 248u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[16].w[0] + 192u), c.f[1]);
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192FB0u);  if (depth < kMaxDepth) unit_0040(c, 69u, depth + 1u); else { c.pc = 0x00200C48u; return; } if (c.pc != 0x00192FB0u) [[unlikely]] return; }
L_00192FB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019310C; } }
L_00192FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192FC0u);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x00192FC0u) [[unlikely]] return; }
L_00192FC0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0019310C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.f[20] = c.r[19].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.f[21] = c.r[30].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[10], c.r[17].w[0] + 120u);
    set32(c.r[8], c.r[17].w[0] + 124u);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00193018; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193048; } }
L_00193018:
    set32(c.r[2], 0u + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00193018u | kUnwind; return; } goto L_00193018; } }
    set32(c.r[2], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00193018u | kUnwind; return; } goto L_00193018; } }
L_00193048:
    set32(c.r[2], 0u + 12u);
    set32(c.r[9], 0u + 1u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], 0u + 136u);
    c.r[7].d[0] = c.r[7].d[0] | 178ull;
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[9].w[0]);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    st32((c.r[8].w[0]), c.r[16].w[0]);
    st32((c.r[2].w[0]), c.r[21].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193088u);  if (depth < kMaxDepth) unit_0083(c, 304u, depth + 1u); else { c.pc = 0x0030FAF8u; return; } if (c.pc != 0x00193088u) [[unlikely]] return; }
L_00193088:
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[16].w[0] + 304u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 64511ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[4], 0u - 1u);
    st16((c.r[16].w[0] + 314u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    st32((c.r[16].w[0] + 516u), 0u);
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 480u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] & 65487ull;
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.r[2].d[0] = c.r[2].d[0] | 48ull;
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 24;
    { const bool t = c.r[20].d[0] == c.r[4].d[0];  if (t) { goto L_001930EC; } }
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.budget -= 1;
L_001930EC:
    st32((c.r[16].w[0] + 192u), c.f[20]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 196u), c.f[21]);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019310Cu);  if (depth < kMaxDepth) unit_0040(c, 69u, depth + 1u); else { c.pc = 0x00200C48u; return; } if (c.pc != 0x0019310Cu) [[unlikely]] return; }
L_0019310C:
    set32(c.r[2], 0u + 134u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_0019317C; } }
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[6], ld32((c.r[29].w[0] + 48u)));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[7], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], c.r[6].w[0] - c.r[7].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[20], c.r[2].w[0] - 1u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[2].w[0] - 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001931B0; } }
L_00193164:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[17].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019320C; } }
L_0019317C:
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 28u)));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[20], c.r[4].w[0] - c.r[5].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 13;
L_001931B0:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] <= 0;  if (t) { goto L_0019340C; } }
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[17].w[0] + 120u);
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[18].w[0] + 1536u);
    c.budget -= 6;
L_001931D0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001931EC; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[8], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00193164u | kUnwind; return; } goto L_00193164; } }
L_001931EC:
    set32(c.r[3], c.r[3].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + 12u);
    set32(c.r[5], c.r[5].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 12u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001931D0u | kUnwind; return; } goto L_001931D0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019320C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001932BC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 64511ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 304u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 256u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 314u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 480u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 264u)));
    st32((c.r[16].w[0] + 516u), 0u);
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] & 65487ull;
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[21].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 26;
    { const bool t = c.r[20].d[0] == c.r[4].d[0];  if (t) { goto L_00193280; } }
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.budget -= 1;
L_00193280:
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    c.f[0] = c.r[19].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 248u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[16].w[0] + 192u), c.f[1]);
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001932B4u);  if (depth < kMaxDepth) unit_0040(c, 69u, depth + 1u); else { c.pc = 0x00200C48u; return; } if (c.pc != 0x001932B4u) [[unlikely]] return; }
L_001932B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019340C; } }
L_001932BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001932C4u);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x001932C4u) [[unlikely]] return; }
L_001932C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0019340C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.f[20] = ld32((c.r[29].w[0] + 40u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.f[21] = c.r[19].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[10], c.r[17].w[0] + 120u);
    set32(c.r[8], c.r[17].w[0] + 124u);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00193318; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193348; } }
L_00193318:
    set32(c.r[2], 0u + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00193318u | kUnwind; return; } goto L_00193318; } }
    set32(c.r[2], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00193318u | kUnwind; return; } goto L_00193318; } }
L_00193348:
    set32(c.r[2], 0u + 12u);
    set32(c.r[9], 0u + 1u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00060000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.r[7].d[0] = c.r[7].d[0] | 178ull;
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[9].w[0]);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    st32((c.r[8].w[0]), c.r[16].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 20u)));
    st32((c.r[2].w[0]), c.r[8].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019338Cu);  if (depth < kMaxDepth) unit_0083(c, 304u, depth + 1u); else { c.pc = 0x0030FAF8u; return; } if (c.pc != 0x0019338Cu) [[unlikely]] return; }
L_0019338C:
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[16].w[0] + 304u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 64511ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    st16((c.r[16].w[0] + 314u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    st32((c.r[16].w[0] + 516u), 0u);
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 480u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] & 65487ull;
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[21].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 23;
    { const bool t = c.r[20].d[0] == c.r[4].d[0];  if (t) { goto L_001933EC; } }
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.budget -= 1;
L_001933EC:
    st32((c.r[16].w[0] + 192u), c.f[20]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 196u), c.f[21]);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019340Cu);  if (depth < kMaxDepth) unit_0040(c, 69u, depth + 1u); else { c.pc = 0x00200C48u; return; } if (c.pc != 0x0019340Cu) [[unlikely]] return; }
L_0019340C:
    set32(c.r[2], 0u + 134u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_0019347C; } }
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[5], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[20], c.r[2].w[0] - 1u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[2].w[0] - 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001934B0; } }
L_00193464:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[17].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019350C; } }
L_0019347C:
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 28u)));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[20], c.r[4].w[0] - c.r[5].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 13;
L_001934B0:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] <= 0;  if (t) { goto L_00193794; } }
    set32(c.r[21], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 120u);
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[18].w[0] + 1536u);
    c.budget -= 6;
L_001934D0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001934EC; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[8], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00193464u | kUnwind; return; } goto L_00193464; } }
L_001934EC:
    set32(c.r[3], c.r[3].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + 12u);
    set32(c.r[5], c.r[5].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 12u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001934D0u | kUnwind; return; } goto L_001934D0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019350C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001935BC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 64511ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 264u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 304u), 0u);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 314u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 516u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 480u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] & 65487ull;
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[21].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 26;
    { const bool t = c.r[20].d[0] == c.r[4].d[0];  if (t) { goto L_00193580; } }
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.budget -= 1;
L_00193580:
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    c.f[0] = c.r[19].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 248u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[16].w[0] + 192u), c.f[1]);
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001935B4u);  if (depth < kMaxDepth) unit_0040(c, 69u, depth + 1u); else { c.pc = 0x00200C48u; return; } if (c.pc != 0x001935B4u) [[unlikely]] return; }
L_001935B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193794; } }
L_001935BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001935C4u);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x001935C4u) [[unlikely]] return; }
L_001935C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00193794; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.f[20] = ld32((c.r[29].w[0] + 44u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.f[21] = c.r[19].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[10], c.r[17].w[0] + 120u);
    set32(c.r[8], c.r[17].w[0] + 124u);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00193618; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193648; } }
L_00193618:
    set32(c.r[2], 0u + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00193618u | kUnwind; return; } goto L_00193618; } }
    set32(c.r[2], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00193618u | kUnwind; return; } goto L_00193618; } }
L_00193648:
    set32(c.r[2], 0u + 12u);
    set32(c.r[9], 0u + 1u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00060000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.r[7].d[0] = c.r[7].d[0] | 178ull;
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[9].w[0]);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    st32((c.r[8].w[0]), c.r[16].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 20u)));
    st32((c.r[2].w[0]), c.r[8].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019368Cu);  if (depth < kMaxDepth) unit_0083(c, 304u, depth + 1u); else { c.pc = 0x0030FAF8u; return; } if (c.pc != 0x0019368Cu) [[unlikely]] return; }
L_0019368C:
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.r[2].d[0] = c.r[2].d[0] | 64511ull;
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 264u)));
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 304u), 0u);
    st16((c.r[16].w[0] + 314u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 516u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 480u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] & 65487ull;
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[21].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 23;
    { const bool t = c.r[20].d[0] == c.r[4].d[0];  if (t) { goto L_001936EC; } }
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.budget -= 1;
L_001936EC:
    st32((c.r[16].w[0] + 192u), c.f[20]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 196u), c.f[21]);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019370Cu);  if (depth < kMaxDepth) unit_0040(c, 69u, depth + 1u); else { c.pc = 0x00200C48u; return; } if (c.pc != 0x0019370Cu) [[unlikely]] return; }
L_0019370C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193794; } }
L_00193714:
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[19].w[0] + c.r[18].w[0]);
    set32(c.r[9], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193734u);  if (depth < kMaxDepth) unit_0052(c, 128u, depth + 1u); else { c.pc = 0x0024B9D0u; return; } if (c.pc != 0x00193734u) [[unlikely]] return; }
L_00193734:
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] - c.r[18].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193754u);  if (depth < kMaxDepth) unit_0052(c, 128u, depth + 1u); else { c.pc = 0x0024B9D0u; return; } if (c.pc != 0x00193754u) [[unlikely]] return; }
L_00193754:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] - c.r[18].w[0]);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193774u);  if (depth < kMaxDepth) unit_0052(c, 128u, depth + 1u); else { c.pc = 0x0024B9D0u; return; } if (c.pc != 0x00193774u) [[unlikely]] return; }
L_00193774:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[4].w[0] + c.r[18].w[0]);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193794u);  if (depth < kMaxDepth) unit_0052(c, 128u, depth + 1u); else { c.pc = 0x0024B9D0u; return; } if (c.pc != 0x00193794u) [[unlikely]] return; }
L_00193794:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 232u));
    c.f[20] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001937D0:
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[8], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { goto L_0019383C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001937F8; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0019381C; } }
L_001937F8:
    set32(c.r[5], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00193810; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00193848; } }
L_00193810:
    set32(c.r[2], 0u + 142u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019381C:
    set32(c.r[5], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00193848; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00193848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00193810u | kUnwind; return; } goto L_00193810; } }
L_0019383C:
    set32(c.r[7], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_00193854; } }
L_00193848:
    set32(c.r[2], 0u + 141u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00193854:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001938A4; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00193878; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00193878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00193848u | kUnwind; return; } goto L_00193848; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00193810u | kUnwind; return; } goto L_00193810; } }
    set32(c.r[6], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00193848u | kUnwind; return; } goto L_00193848; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00193848u | kUnwind; return; } goto L_00193848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00193810u | kUnwind; return; } goto L_00193810; } }
L_001938A4:
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001938DC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00193848u | kUnwind; return; } goto L_00193848; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00193810u | kUnwind; return; } goto L_00193810; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00193848u | kUnwind; return; } goto L_00193848; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00193848u | kUnwind; return; } goto L_00193848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00193810u | kUnwind; return; } goto L_00193810; } }
L_001938DC:
    set32(c.r[2], 0u + 142u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001938E8:
    set32(c.r[29], c.r[29].w[0] - 432u);
    c.r[25].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 212u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 52u);
    set32(c.r[2], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 228u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[23]);
    set32(c.r[4], 0u + 3u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), c.r[6].w[0]);
    set32(c.r[10], c.r[29].w[0] + 56u);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[16]);
    set32(c.r[20], c.r[29].w[0] + 60u);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[17]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[18]);
    set32(c.r[21], c.r[29].w[0] + 176u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[22]);
    set32(c.r[24], c.r[29].w[0] + 192u);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    set32(c.r[6], 0u - 1u);
    st32((c.r[29].w[0] + 424u), c.f[21]);
    st32((c.r[29].w[0] + 416u), c.f[20]);
    st32((c.r[29].w[0] + 240u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    c.budget -= 36;
L_00193978:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00193978u | kUnwind; return; } goto L_00193978; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 432u)));
    set32(c.r[9], c.r[9].w[0] - 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 448u)));
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 440u)));
    set32(c.r[18], 0u + 1u);
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[17], 0u + 2u);
    st8((c.r[29].w[0] + 35u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], 0u + 3u);
    st32((c.r[29].w[0] + 216u), c.r[9].w[0]);
    set32(c.r[15], 0u + 134u);
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[23].w[0]));
    set32(c.r[14], 0u + 139u);
    st8((c.r[29].w[0] + 34u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[13], 0u + 140u);
    set32(c.r[4], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[12], 0u - 1u);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 3u);
    c.budget -= 20;
L_001939E8:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> (c.r[11].w[0] & 31u)));
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[18].d[0];  if (t) { goto L_00193A3C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193A18; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00193A30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193A58; } }
L_00193A18:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_00193A48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00193A54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193A58; } }
L_00193A30:
    st32((c.r[4].w[0]), c.r[15].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193A58; } }
L_00193A3C:
    st32((c.r[4].w[0]), c.r[14].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193A58; } }
L_00193A48:
    st32((c.r[4].w[0]), c.r[13].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193A58; } }
L_00193A54:
    st32((c.r[4].w[0]), c.r[12].w[0]);
    c.budget -= 1;
L_00193A58:
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[11], c.r[11].w[0] + 3u);
    set32(c.r[10], c.r[10].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[10].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001939E8u | kUnwind; return; } goto L_001939E8; } }
    c.r[12].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[22], 0u + 1u);
    set32(c.r[20], 0u + 2u);
    set32(c.r[18], 0u + 4u);
    set32(c.r[11], 0u + 139u);
    set32(c.r[17], 0u + 90u);
    set32(c.r[10], 0u + 140u);
    set32(c.r[16], 0u + 270u);
    set32(c.r[15], 0u + 180u);
    set32(c.r[14], 0u + 12u);
    set32(c.r[13], 0u + 3u);
    c.budget -= 14;
L_00193AA8:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> (c.r[14].w[0] & 31u)));
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    st32((c.r[12].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[22].d[0];  if (t) { goto L_00193B0C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00193AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193B78; } }
L_00193AD8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[20].d[0];  if (t) { goto L_00193B28; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[18].d[0];  if (t) { goto L_00193B48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193B78; } }
L_00193AF0:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[11].d[0];  if (t) { goto L_00193B3C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[10].d[0];  if (t) { goto L_00193B74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193B54; } }
L_00193B0C:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[11].d[0];  if (t) { goto L_00193B68; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[10].d[0];  if (t) { goto L_00193B54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193B3C; } }
L_00193B28:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[11].d[0];  if (t) { goto L_00193B74; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[10].d[0];  if (t) { goto L_00193B68; } }
L_00193B3C:
    st32((c.r[4].w[0]), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193B78; } }
L_00193B48:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[11].d[0];  if (t) { goto L_00193B60; } }
L_00193B54:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193B78; } }
L_00193B60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[10].d[0];  if (t) { goto L_00193B74; } }
L_00193B68:
    st32((c.r[4].w[0]), c.r[15].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193B78; } }
L_00193B74:
    st32((c.r[4].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_00193B78:
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[12], c.r[12].w[0] + 16u);
    set32(c.r[14], c.r[14].w[0] + 3u);
    set32(c.r[13], c.r[13].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[13].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00193AA8u | kUnwind; return; } goto L_00193AA8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.r[14].d[0] = 0ull + 0ull;
    set32(c.r[12], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], 0u + 139u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00193D68; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], 0u + 90u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00193C14; } }
    c.r[2].d[0] = c.r[3].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193BD8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00193BF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193C68; } }
L_00193BD8:
    set32(c.r[2], 0u + 180u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00193C30; } }
    set32(c.r[2], 0u + 270u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00193C4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193C68; } }
L_00193BF8:
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], c.r[30].w[0] + 13144u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193C6C; } }
L_00193C14:
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], c.r[30].w[0] + 13144u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193C6C; } }
L_00193C30:
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], c.r[30].w[0] + 13144u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193C6C; } }
L_00193C4C:
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], c.r[30].w[0] + 13144u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193C6C; } }
L_00193C68:
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00193C6C:
    set32(c.r[2], 0u + 48u);
    set32(c.r[13], c.r[30].w[0] + 13144u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[2].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[14].w[0] << 4);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[5], c.r[14].w[0] << 2);
    set32(c.r[5], c.r[21].w[0] + c.r[5].w[0]);
    set32(c.r[6], 0u + 90u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[11].w[0] + c.r[13].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] - 9u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 19;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_00193D04; } }
    c.r[2].d[0] = c.r[4].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193CD4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00193CF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193D34; } }
L_00193CD4:
    set32(c.r[2], 0u + 180u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00193D14; } }
    set32(c.r[2], 0u + 270u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00193D24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193D34; } }
L_00193CF4:
    set32(c.r[2], c.r[13].w[0] + c.r[11].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193D38; } }
L_00193D04:
    set32(c.r[2], c.r[13].w[0] + c.r[11].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193D38; } }
L_00193D14:
    set32(c.r[2], c.r[13].w[0] + c.r[11].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193D38; } }
L_00193D24:
    set32(c.r[2], c.r[13].w[0] + c.r[11].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193D38; } }
L_00193D34:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00193D38:
    set32(c.r[3], 0u + 48u);
    set32(c.r[4], c.r[30].w[0] + 13144u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[14].w[0] << 2);
    set32(c.r[5], c.r[24].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[25].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193F14; } }
L_00193D68:
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], 0u + 90u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00193DD0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193D94; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00193DB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193E24; } }
L_00193D94:
    set32(c.r[2], 0u + 180u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00193DEC; } }
    set32(c.r[2], 0u + 270u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00193E08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193E24; } }
L_00193DB4:
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], c.r[30].w[0] + 13144u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193E28; } }
L_00193DD0:
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], c.r[30].w[0] + 13144u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193E28; } }
L_00193DEC:
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], c.r[30].w[0] + 13144u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193E28; } }
L_00193E08:
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], c.r[30].w[0] + 13144u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193E28; } }
L_00193E24:
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00193E28:
    set32(c.r[2], 0u + 48u);
    set32(c.r[13], c.r[30].w[0] + 13144u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[2].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[14].w[0] << 2);
    set32(c.r[7], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[5], c.r[21].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[14].w[0] << 4);
    set32(c.r[6], 0u + 90u);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[11].w[0] + c.r[13].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_00193EBC; } }
    c.r[2].d[0] = c.r[4].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193E8C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00193EAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193EEC; } }
L_00193E8C:
    set32(c.r[2], 0u + 180u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00193ECC; } }
    set32(c.r[2], 0u + 270u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00193EDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193EEC; } }
L_00193EAC:
    set32(c.r[2], c.r[13].w[0] + c.r[11].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193EF0; } }
L_00193EBC:
    set32(c.r[2], c.r[13].w[0] + c.r[11].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193EF0; } }
L_00193ECC:
    set32(c.r[2], c.r[13].w[0] + c.r[11].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193EF0; } }
L_00193EDC:
    set32(c.r[2], c.r[13].w[0] + c.r[11].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193EF0; } }
L_00193EEC:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00193EF0:
    set32(c.r[3], 0u + 48u);
    set32(c.r[4], c.r[30].w[0] + 13144u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[14].w[0] << 2);
    set32(c.r[5], c.r[24].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[25].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 9;
L_00193F14:
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[14], 0u + 1u);
    set32(c.r[12], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], 0u + 90u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00193F88; } }
    c.r[2].d[0] = c.r[3].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193F4C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00193F6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193FDC; } }
L_00193F4C:
    set32(c.r[2], 0u + 180u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00193FA4; } }
    set32(c.r[2], 0u + 270u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00193FC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193FDC; } }
L_00193F6C:
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], c.r[30].w[0] + 13144u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193FE0; } }
L_00193F88:
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], c.r[30].w[0] + 13144u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193FE0; } }
L_00193FA4:
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], c.r[30].w[0] + 13144u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193FE0; } }
L_00193FC0:
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], c.r[30].w[0] + 13144u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193FE0; } }
L_00193FDC:
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00193FE0:
    set32(c.r[2], 0u + 48u);
    set32(c.r[13], c.r[30].w[0] + 13144u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[2].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[14].w[0] << 2);
    set32(c.r[7], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[5], c.r[21].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[14].w[0] << 4);
    set32(c.r[6], 0u + 90u);
    c.budget -= 8;
    [[clang::musttail]] return unit_0025(c, 1u, depth);
}

}
