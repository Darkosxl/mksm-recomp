#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008B[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0,
    10, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0,
    0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68,
    0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0,
    0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0,
    0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101,
    0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0,
    0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0,
    0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0,
    0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0,
    0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0,
    0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151,
    0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0,
    0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0,
    175, 0, 176, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    203, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267,
    0, 0, 268, 0, 0, 0, 269, 270, 0, 271, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0,
    0, 0, 280, 281, 0, 282, 0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 288,
    0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0,
    0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 307, 308, 0, 309, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 311, 312, 0, 0, 0, 0, 313, 314, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0,
    0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0,
    0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0,
    0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_008B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0032C000;
    case 2u: goto L_0032C00C;
    case 3u: goto L_0032C024;
    case 4u: goto L_0032C038;
    case 5u: goto L_0032C048;
    case 6u: goto L_0032C050;
    case 7u: goto L_0032C058;
    case 8u: goto L_0032C068;
    case 9u: goto L_0032C070;
    case 10u: goto L_0032C080;
    case 11u: goto L_0032C088;
    case 12u: goto L_0032C090;
    case 13u: goto L_0032C0C8;
    case 14u: goto L_0032C0E0;
    case 15u: goto L_0032C110;
    case 16u: goto L_0032C128;
    case 17u: goto L_0032C158;
    case 18u: goto L_0032C178;
    case 19u: goto L_0032C1B0;
    case 20u: goto L_0032C1D4;
    case 21u: goto L_0032C208;
    case 22u: goto L_0032C234;
    case 23u: goto L_0032C244;
    case 24u: goto L_0032C278;
    case 25u: goto L_0032C29C;
    case 26u: goto L_0032C2D8;
    case 27u: goto L_0032C340;
    case 28u: goto L_0032C3D8;
    case 29u: goto L_0032C408;
    case 30u: goto L_0032C480;
    case 31u: goto L_0032C4FC;
    case 32u: goto L_0032C50C;
    case 33u: goto L_0032C524;
    case 34u: goto L_0032C534;
    case 35u: goto L_0032C54C;
    case 36u: goto L_0032C55C;
    case 37u: goto L_0032C574;
    case 38u: goto L_0032C584;
    case 39u: goto L_0032C5A0;
    case 40u: goto L_0032C5B8;
    case 41u: goto L_0032C5D0;
    case 42u: goto L_0032C5E8;
    case 43u: goto L_0032C600;
    case 44u: goto L_0032C618;
    case 45u: goto L_0032C628;
    case 46u: goto L_0032C63C;
    case 47u: goto L_0032C650;
    case 48u: goto L_0032C668;
    case 49u: goto L_0032C678;
    case 50u: goto L_0032C690;
    case 51u: goto L_0032C6A0;
    case 52u: goto L_0032C6B4;
    case 53u: goto L_0032C6C8;
    case 54u: goto L_0032C6DC;
    case 55u: goto L_0032C6F0;
    case 56u: goto L_0032C700;
    case 57u: goto L_0032C718;
    case 58u: goto L_0032C728;
    case 59u: goto L_0032C74C;
    case 60u: goto L_0032C760;
    case 61u: goto L_0032C778;
    case 62u: goto L_0032C790;
    case 63u: goto L_0032C7A4;
    case 64u: goto L_0032C7F0;
    case 65u: goto L_0032C824;
    case 66u: goto L_0032C834;
    case 67u: goto L_0032C848;
    case 68u: goto L_0032C87C;
    case 69u: goto L_0032C88C;
    case 70u: goto L_0032C8A0;
    case 71u: goto L_0032C8D4;
    case 72u: goto L_0032C8E4;
    case 73u: goto L_0032C8F8;
    case 74u: goto L_0032C920;
    case 75u: goto L_0032C934;
    case 76u: goto L_0032C96C;
    case 77u: goto L_0032C984;
    case 78u: goto L_0032C9A4;
    case 79u: goto L_0032C9C8;
    case 80u: goto L_0032C9F0;
    case 81u: goto L_0032CA04;
    case 82u: goto L_0032CA38;
    case 83u: goto L_0032CA50;
    case 84u: goto L_0032CA70;
    case 85u: goto L_0032CA98;
    case 86u: goto L_0032CAC0;
    case 87u: goto L_0032CAD4;
    case 88u: goto L_0032CB08;
    case 89u: goto L_0032CB20;
    case 90u: goto L_0032CB40;
    case 91u: goto L_0032CB68;
    case 92u: goto L_0032CB80;
    case 93u: goto L_0032CB98;
    case 94u: goto L_0032CBC4;
    case 95u: goto L_0032CBD8;
    case 96u: goto L_0032CBEC;
    case 97u: goto L_0032CC08;
    case 98u: goto L_0032CC10;
    case 99u: goto L_0032CC28;
    case 100u: goto L_0032CC60;
    case 101u: goto L_0032CC7C;
    case 102u: goto L_0032CC8C;
    case 103u: goto L_0032CCA0;
    case 104u: goto L_0032CCC8;
    case 105u: goto L_0032CCE4;
    case 106u: goto L_0032CD08;
    case 107u: goto L_0032CD24;
    case 108u: goto L_0032CD48;
    case 109u: goto L_0032CD64;
    case 110u: goto L_0032CD90;
    case 111u: goto L_0032CDC0;
    case 112u: goto L_0032CDD0;
    case 113u: goto L_0032CDF8;
    case 114u: goto L_0032CE08;
    case 115u: goto L_0032CE1C;
    case 116u: goto L_0032CE30;
    case 117u: goto L_0032CE50;
    case 118u: goto L_0032CE84;
    case 119u: goto L_0032CE98;
    case 120u: goto L_0032CED0;
    case 121u: goto L_0032CEE4;
    case 122u: goto L_0032CEF8;
    case 123u: goto L_0032CF18;
    case 124u: goto L_0032CF54;
    case 125u: goto L_0032CF68;
    case 126u: goto L_0032CFA0;
    case 127u: goto L_0032CFB4;
    case 128u: goto L_0032CFC8;
    case 129u: goto L_0032CFDC;
    case 130u: goto L_0032CFF0;
    case 131u: goto L_0032D004;
    case 132u: goto L_0032D028;
    case 133u: goto L_0032D05C;
    case 134u: goto L_0032D074;
    case 135u: goto L_0032D084;
    case 136u: goto L_0032D094;
    case 137u: goto L_0032D0A8;
    case 138u: goto L_0032D0C4;
    case 139u: goto L_0032D0D8;
    case 140u: goto L_0032D100;
    case 141u: goto L_0032D128;
    case 142u: goto L_0032D140;
    case 143u: goto L_0032D164;
    case 144u: goto L_0032D178;
    case 145u: goto L_0032D18C;
    case 146u: goto L_0032D1A8;
    case 147u: goto L_0032D1E0;
    case 148u: goto L_0032D1F4;
    case 149u: goto L_0032D208;
    case 150u: goto L_0032D248;
    case 151u: goto L_0032D27C;
    case 152u: goto L_0032D294;
    case 153u: goto L_0032D2BC;
    case 154u: goto L_0032D2F0;
    case 155u: goto L_0032D2F8;
    case 156u: goto L_0032D314;
    case 157u: goto L_0032D330;
    case 158u: goto L_0032D358;
    case 159u: goto L_0032D378;
    case 160u: goto L_0032D390;
    case 161u: goto L_0032D3B0;
    case 162u: goto L_0032D3C0;
    case 163u: goto L_0032D3F0;
    case 164u: goto L_0032D430;
    case 165u: goto L_0032D470;
    case 166u: goto L_0032D4F4;
    case 167u: goto L_0032D558;
    case 168u: goto L_0032D570;
    case 169u: goto L_0032D580;
    case 170u: goto L_0032D6D4;
    case 171u: goto L_0032D844;
    case 172u: goto L_0032D8E8;
    case 173u: goto L_0032D8F0;
    case 174u: goto L_0032D8F8;
    case 175u: goto L_0032D900;
    case 176u: goto L_0032D908;
    case 177u: goto L_0032D910;
    case 178u: goto L_0032D918;
    case 179u: goto L_0032D938;
    case 180u: goto L_0032D9E0;
    case 181u: goto L_0032DAF8;
    case 182u: goto L_0032DBF0;
    case 183u: goto L_0032DC00;
    case 184u: goto L_0032DC1C;
    case 185u: goto L_0032DC30;
    case 186u: goto L_0032DC60;
    case 187u: goto L_0032DC70;
    case 188u: goto L_0032DC98;
    case 189u: goto L_0032DCA0;
    case 190u: goto L_0032DCB0;
    case 191u: goto L_0032DCB8;
    case 192u: goto L_0032DCE0;
    case 193u: goto L_0032DD10;
    case 194u: goto L_0032DD20;
    case 195u: goto L_0032DD48;
    case 196u: goto L_0032DD50;
    case 197u: goto L_0032DD60;
    case 198u: goto L_0032DD68;
    case 199u: goto L_0032DD90;
    case 200u: goto L_0032DDC0;
    case 201u: goto L_0032DDD0;
    case 202u: goto L_0032DDF8;
    case 203u: goto L_0032DE00;
    case 204u: goto L_0032DE10;
    case 205u: goto L_0032DE18;
    case 206u: goto L_0032DE40;
    case 207u: goto L_0032DE70;
    case 208u: goto L_0032DE80;
    case 209u: goto L_0032DEA8;
    case 210u: goto L_0032DEB0;
    case 211u: goto L_0032DEC0;
    case 212u: goto L_0032DEC8;
    case 213u: goto L_0032DEF0;
    case 214u: goto L_0032DF64;
    case 215u: goto L_0032DFD0;
    case 216u: goto L_0032E018;
    case 217u: goto L_0032E060;
    case 218u: goto L_0032E150;
    case 219u: goto L_0032E178;
    case 220u: goto L_0032E1AC;
    case 221u: goto L_0032E1F8;
    case 222u: goto L_0032E250;
    case 223u: goto L_0032E27C;
    case 224u: goto L_0032E2A8;
    case 225u: goto L_0032E2F0;
    case 226u: goto L_0032E35C;
    case 227u: goto L_0032E398;
    case 228u: goto L_0032E3CC;
    case 229u: goto L_0032E3F8;
    case 230u: goto L_0032E4B8;
    case 231u: goto L_0032E59C;
    case 232u: goto L_0032E5AC;
    case 233u: goto L_0032E5C8;
    case 234u: goto L_0032E5D8;
    case 235u: goto L_0032E670;
    case 236u: goto L_0032E6A4;
    case 237u: goto L_0032E6F0;
    case 238u: goto L_0032E750;
    case 239u: goto L_0032E790;
    case 240u: goto L_0032E7C8;
    case 241u: goto L_0032E814;
    case 242u: goto L_0032E838;
    case 243u: goto L_0032E8A4;
    case 244u: goto L_0032E8DC;
    case 245u: goto L_0032E90C;
    case 246u: goto L_0032E920;
    case 247u: goto L_0032E934;
    case 248u: goto L_0032E948;
    case 249u: goto L_0032E970;
    case 250u: goto L_0032E9A0;
    case 251u: goto L_0032E9C8;
    case 252u: goto L_0032E9D8;
    case 253u: goto L_0032EA00;
    case 254u: goto L_0032EA08;
    case 255u: goto L_0032EA74;
    case 256u: goto L_0032EAB0;
    case 257u: goto L_0032EB6C;
    case 258u: goto L_0032EBC8;
    case 259u: goto L_0032EC28;
    case 260u: goto L_0032ECB0;
    case 261u: goto L_0032EDD4;
    case 262u: goto L_0032EF0C;
    case 263u: goto L_0032EFB0;
    case 264u: goto L_0032F088;
    case 265u: goto L_0032F094;
    case 266u: goto L_0032F0CC;
    case 267u: goto L_0032F0FC;
    case 268u: goto L_0032F108;
    case 269u: goto L_0032F118;
    case 270u: goto L_0032F11C;
    case 271u: goto L_0032F124;
    case 272u: goto L_0032F12C;
    case 273u: goto L_0032F140;
    case 274u: goto L_0032F160;
    case 275u: goto L_0032F180;
    case 276u: goto L_0032F194;
    case 277u: goto L_0032F1B4;
    case 278u: goto L_0032F1D4;
    case 279u: goto L_0032F1E8;
    case 280u: goto L_0032F208;
    case 281u: goto L_0032F20C;
    case 282u: goto L_0032F214;
    case 283u: goto L_0032F21C;
    case 284u: goto L_0032F22C;
    case 285u: goto L_0032F238;
    case 286u: goto L_0032F264;
    case 287u: goto L_0032F26C;
    case 288u: goto L_0032F27C;
    case 289u: goto L_0032F284;
    case 290u: goto L_0032F28C;
    case 291u: goto L_0032F2B0;
    case 292u: goto L_0032F2E8;
    case 293u: goto L_0032F328;
    case 294u: goto L_0032F368;
    case 295u: goto L_0032F3B8;
    case 296u: goto L_0032F418;
    case 297u: goto L_0032F424;
    case 298u: goto L_0032F44C;
    case 299u: goto L_0032F468;
    case 300u: goto L_0032F4AC;
    case 301u: goto L_0032F4EC;
    case 302u: goto L_0032F508;
    case 303u: goto L_0032F530;
    case 304u: goto L_0032F590;
    case 305u: goto L_0032F63C;
    case 306u: goto L_0032F644;
    case 307u: goto L_0032F65C;
    case 308u: goto L_0032F660;
    case 309u: goto L_0032F668;
    case 310u: goto L_0032F670;
    case 311u: goto L_0032F69C;
    case 312u: goto L_0032F6A0;
    case 313u: goto L_0032F6B4;
    case 314u: goto L_0032F6B8;
    case 315u: goto L_0032F6C0;
    case 316u: goto L_0032F6C8;
    case 317u: goto L_0032F6E8;
    case 318u: goto L_0032F748;
    case 319u: goto L_0032F754;
    case 320u: goto L_0032F780;
    case 321u: goto L_0032F788;
    case 322u: goto L_0032F7B0;
    case 323u: goto L_0032F7B8;
    case 324u: goto L_0032F7C0;
    case 325u: goto L_0032F7E8;
    case 326u: goto L_0032F830;
    case 327u: goto L_0032F8A0;
    case 328u: goto L_0032F8BC;
    case 329u: goto L_0032F8D8;
    case 330u: goto L_0032F918;
    case 331u: goto L_0032F958;
    case 332u: goto L_0032F974;
    case 333u: goto L_0032F998;
    case 334u: goto L_0032F9D8;
    case 335u: goto L_0032FA28;
    case 336u: goto L_0032FA58;
    case 337u: goto L_0032FA68;
    case 338u: goto L_0032FAA8;
    case 339u: goto L_0032FAB8;
    case 340u: goto L_0032FAC0;
    case 341u: goto L_0032FAE0;
    case 342u: goto L_0032FAF0;
    case 343u: goto L_0032FB08;
    case 344u: goto L_0032FB28;
    case 345u: goto L_0032FB54;
    case 346u: goto L_0032FB94;
    case 347u: goto L_0032FBC8;
    case 348u: goto L_0032FBE0;
    case 349u: goto L_0032FC30;
    case 350u: goto L_0032FD08;
    case 351u: goto L_0032FD40;
    case 352u: goto L_0032FD88;
    case 353u: goto L_0032FDC8;
    case 354u: goto L_0032FDF0;
    case 355u: goto L_0032FE08;
    case 356u: goto L_0032FE20;
    case 357u: goto L_0032FE30;
    case 358u: goto L_0032FE80;
    case 359u: goto L_0032FEA4;
    case 360u: goto L_0032FEE0;
    case 361u: goto L_0032FF0C;
    case 362u: goto L_0032FF18;
    case 363u: goto L_0032FF38;
    case 364u: goto L_0032FF44;
    case 365u: goto L_0032FF70;
    case 366u: goto L_0032FFC0;
    default: bad_entry(c, 0x0032C000u); return;
    }
L_0032C000:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032C02C; } }
L_0032C00C:
    set32(c.r[16], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C024u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0032C024u) [[unlikely]] return; }
L_0032C024:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0032C02C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C038u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0032C038u) [[unlikely]] return; }
L_0032C038:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C048u);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x0032C048u) [[unlikely]] return; }
L_0032C048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032C058; } }
L_0032C050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C058u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0032C058u) [[unlikely]] return; }
L_0032C058:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C068u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0032C068u) [[unlikely]] return; }
L_0032C068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032C090; } }
L_0032C070:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C080u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0032C080u) [[unlikely]] return; }
L_0032C080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C050u | kUnwind; return; } goto L_0032C050; } }
L_0032C088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C090u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0032C090u) [[unlikely]] return; }
L_0032C090:
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[21] = ld32((c.r[29].w[0] + 312u));
    c.f[20] = ld32((c.r[29].w[0] + 304u));
    set32(c.r[29], c.r[29].w[0] + 320u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032C0C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.f[20] = c.f[12];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C0E0u);  if (depth < kMaxDepth) unit_008B(c, 100u, depth + 1u); else { c.pc = 0x0032CC60u; return; } if (c.pc != 0x0032C0E0u) [[unlikely]] return; }
L_0032C0E0:
    c.f[20] = fp::mul(c.f[20], c.f[20]);
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032C0FC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032C0FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032C110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.f[20] = c.f[12];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C128u);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0032C128u) [[unlikely]] return; }
L_0032C128:
    c.f[20] = fp::mul(c.f[20], c.f[20]);
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032C144; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032C144:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032C158:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0] + 24u), c.f[21]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.f[21] = c.f[13];
    c.f[20] = c.f[12];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C178u);  if (depth < kMaxDepth) unit_008B(c, 100u, depth + 1u); else { c.pc = 0x0032CC60u; return; } if (c.pc != 0x0032C178u) [[unlikely]] return; }
L_0032C178:
    c.f[20] = fp::add(c.f[20], c.f[21]);
    set32(c.r[2], 0u + 1u);
    c.f[20] = fp::mul(c.f[20], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032C198; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032C198:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 24u));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032C1B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[8], 0u + 3u);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.f[20] = c.f[12];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[9], c.r[29].w[0] + 16u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C1D4u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x0032C1D4u) [[unlikely]] return; }
L_0032C1D4:
    c.f[20] = fp::mul(c.f[20], c.f[20]);
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032C1F0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032C1F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032C208:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[8], 0u + 3u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[9], c.r[29].w[0] + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C234u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x0032C234u) [[unlikely]] return; }
L_0032C234:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C244u);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0032C244u) [[unlikely]] return; }
L_0032C244:
    c.f[20] = fp::mul(c.f[20], c.f[20]);
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032C260; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032C260:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032C278:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st32((c.r[29].w[0] + 40u), c.f[21]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.f[21] = c.f[13];
    c.f[20] = c.f[12];
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C29Cu);  if (depth < kMaxDepth) unit_0045(c, 79u, depth + 1u); else { c.pc = 0x002158F8u; return; } if (c.pc != 0x0032C29Cu) [[unlikely]] return; }
L_0032C29C:
    c.f[20] = fp::add(c.f[20], c.f[21]);
    set32(c.r[2], 0u + 1u);
    c.f[20] = fp::mul(c.f[20], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032C2BC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032C2BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[21] = ld32((c.r[29].w[0] + 40u));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032C2D8:
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032C334; } }
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032C334; } }
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032C334; } }
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032C338; } }
L_0032C334:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032C338:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032C340:
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032C3C8; } }
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032C3C8; } }
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032C3C8; } }
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032C3C8; } }
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032C3C8; } }
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032C3CC; } }
L_0032C3C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032C3CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032C3D8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.f[21]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.f[21] = c.f[12];
    c.f[20] = c.f[13];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C408u);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0032C408u) [[unlikely]] return; }
L_0032C408:
    c.f[20] = fp::mul(c.f[20], c.f[20]);
    c.r[2].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032C424; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0032C424:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032C45C; } }
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032C45C; } }
    c.f[0] = fp::add(c.f[0], c.f[21]);
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032C460; } }
L_0032C45C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032C460:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 56u));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032C480:
    set32(c.r[29], c.r[29].w[0] - 432u);
    st32((c.r[29].w[0] + 408u), c.f[21]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[22]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 228u), c.r[6].w[0]);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 240u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 416u), c.f[22]);
    st32((c.r[29].w[0] + 400u), c.f[20]);
    st32((c.r[22].w[0] + 12u), c.f[21]);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    st32((c.r[2].w[0] + 12u), c.f[21]);
    st32((c.r[29].w[0] + 224u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 12u), c.f[21]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[20].w[0] + 12u), c.f[21]);
    set32(c.r[5], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C4FCu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032C4FCu) [[unlikely]] return; }
L_0032C4FC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C50Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032C50Cu) [[unlikely]] return; }
L_0032C50C:
    set32(c.r[23], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C524u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032C524u) [[unlikely]] return; }
L_0032C524:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C534u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032C534u) [[unlikely]] return; }
L_0032C534:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C54Cu);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x0032C54Cu) [[unlikely]] return; }
L_0032C54C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C55Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032C55Cu) [[unlikely]] return; }
L_0032C55C:
    set32(c.r[17], c.r[29].w[0] + 144u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C574u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032C574u) [[unlikely]] return; }
L_0032C574:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C584u);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x0032C584u) [[unlikely]] return; }
L_0032C584:
    set32(c.r[30], c.r[29].w[0] + 112u);
    c.f[22] = c.f[0];
    c.f[12] = c.f[22];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C5A0u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0032C5A0u) [[unlikely]] return; }
L_0032C5A0:
    set32(c.r[21], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C5B8u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0032C5B8u) [[unlikely]] return; }
L_0032C5B8:
    set32(c.r[19], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C5D0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0032C5D0u) [[unlikely]] return; }
L_0032C5D0:
    set32(c.r[20], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C5E8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032C5E8u) [[unlikely]] return; }
L_0032C5E8:
    set32(c.r[18], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C600u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032C600u) [[unlikely]] return; }
L_0032C600:
    set32(c.r[16], c.r[29].w[0] + 192u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C618u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x0032C618u) [[unlikely]] return; }
L_0032C618:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C628u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032C628u) [[unlikely]] return; }
L_0032C628:
    set32(c.r[6], ld32((c.r[29].w[0] + 228u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C63Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032C63Cu) [[unlikely]] return; }
L_0032C63C:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C650u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032C650u) [[unlikely]] return; }
L_0032C650:
    set32(c.r[16], c.r[29].w[0] + 208u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C668u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x0032C668u) [[unlikely]] return; }
L_0032C668:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C678u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032C678u) [[unlikely]] return; }
L_0032C678:
    set32(c.r[16], c.r[29].w[0] + 96u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C690u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032C690u) [[unlikely]] return; }
L_0032C690:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C6A0u);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x0032C6A0u) [[unlikely]] return; }
L_0032C6A0:
    c.f[12] = c.f[0];
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C6B4u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0032C6B4u) [[unlikely]] return; }
L_0032C6B4:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C6C8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032C6C8u) [[unlikely]] return; }
L_0032C6C8:
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C6DCu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032C6DCu) [[unlikely]] return; }
L_0032C6DC:
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C6F0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032C6F0u) [[unlikely]] return; }
L_0032C6F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C700u);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x0032C700u) [[unlikely]] return; }
L_0032C700:
    set32(c.r[5], ld32((c.r[29].w[0] + 228u)));
    c.f[20] = c.f[0];
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C718u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032C718u) [[unlikely]] return; }
L_0032C718:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C728u);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x0032C728u) [[unlikely]] return; }
L_0032C728:
    c.f[0] = fp::add(c.f[20], c.f[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 228u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C74Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032C74Cu) [[unlikely]] return; }
L_0032C74C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C760u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0032C760u) [[unlikely]] return; }
L_0032C760:
    set32(c.r[16], c.r[29].w[0] + 128u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C778u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0032C778u) [[unlikely]] return; }
L_0032C778:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C790u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0032C790u) [[unlikely]] return; }
L_0032C790:
    set32(c.r[4], ld32((c.r[29].w[0] + 224u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C7A4u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032C7A4u) [[unlikely]] return; }
L_0032C7A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.f[0] = c.f[22] & fp::kAbs;
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[16]);
    st32((c.r[2].w[0] + 12u), c.f[21]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 240u));
    c.f[22] = ld32((c.r[29].w[0] + 416u));
    c.f[21] = ld32((c.r[29].w[0] + 408u));
    c.f[20] = ld32((c.r[29].w[0] + 400u));
    set32(c.r[29], c.r[29].w[0] + 432u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032C7F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[14] = ld32((c.r[2].w[0] + 32u));
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C824u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0032C824u) [[unlikely]] return; }
L_0032C824:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C834u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032C834u) [[unlikely]] return; }
L_0032C834:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032C848:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[14] = ld32((c.r[2].w[0] + 36u));
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.f[13] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C87Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0032C87Cu) [[unlikely]] return; }
L_0032C87C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C88Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032C88Cu) [[unlikely]] return; }
L_0032C88C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032C8A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[14] = ld32((c.r[2].w[0] + 40u));
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.f[13] = ld32((c.r[2].w[0] + 24u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C8D4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0032C8D4u) [[unlikely]] return; }
L_0032C8D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C8E4u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032C8E4u) [[unlikely]] return; }
L_0032C8E4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032C8F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 24u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C920u);  if (depth < kMaxDepth) unit_0041(c, 385u, depth + 1u); else { c.pc = 0x002078A8u; return; } if (c.pc != 0x0032C920u) [[unlikely]] return; }
L_0032C920:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[12] = c.f[0];
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C934u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x0032C934u) [[unlikely]] return; }
L_0032C934:
    c.f[0] = c.f[0] & fp::kAbs;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032C994; } }
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.f[13] = ld32((c.r[16].w[0] + 40u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C96Cu);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x0032C96Cu) [[unlikely]] return; }
L_0032C96C:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C984u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x0032C984u) [[unlikely]] return; }
L_0032C984:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032C9B0; } }
L_0032C994:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[12] = ld32((c.r[16].w[0] + 36u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C9A4u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x0032C9A4u) [[unlikely]] return; }
L_0032C9A4:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 3;
L_0032C9B0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032C9C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C9F0u);  if (depth < kMaxDepth) unit_0041(c, 385u, depth + 1u); else { c.pc = 0x002078A8u; return; } if (c.pc != 0x0032C9F0u) [[unlikely]] return; }
L_0032C9F0:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[12] = c.f[0];
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CA04u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x0032CA04u) [[unlikely]] return; }
L_0032CA04:
    c.f[0] = c.f[0] & fp::kAbs;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032CA60; } }
    c.f[12] = ld32((c.r[16].w[0] + 36u));
    c.f[13] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CA38u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x0032CA38u) [[unlikely]] return; }
L_0032CA38:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0]), c.f[0]);
    c.f[13] = ld32((c.r[16].w[0]));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CA50u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x0032CA50u) [[unlikely]] return; }
L_0032CA50:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032CA7C; } }
L_0032CA60:
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CA70u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x0032CA70u) [[unlikely]] return; }
L_0032CA70:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 3;
L_0032CA7C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032CA98:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CAC0u);  if (depth < kMaxDepth) unit_0041(c, 385u, depth + 1u); else { c.pc = 0x002078A8u; return; } if (c.pc != 0x0032CAC0u) [[unlikely]] return; }
L_0032CAC0:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[12] = c.f[0];
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CAD4u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x0032CAD4u) [[unlikely]] return; }
L_0032CAD4:
    c.f[0] = c.f[0] & fp::kAbs;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032CB30; } }
    c.f[12] = ld32((c.r[16].w[0] + 24u));
    c.f[13] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CB08u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x0032CB08u) [[unlikely]] return; }
L_0032CB08:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0]), c.f[0]);
    c.f[13] = ld32((c.r[16].w[0]));
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CB20u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x0032CB20u) [[unlikely]] return; }
L_0032CB20:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032CB4C; } }
L_0032CB30:
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CB40u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x0032CB40u) [[unlikely]] return; }
L_0032CB40:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 3;
L_0032CB4C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032CB68:
    st32((c.r[4].w[0] + 12u), c.f[15]);
    st32((c.r[4].w[0]), c.f[12]);
    st32((c.r[4].w[0] + 4u), c.f[13]);
    st32((c.r[4].w[0] + 8u), c.f[14]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032CB80:
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032CB98:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CBC4u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032CBC4u) [[unlikely]] return; }
L_0032CBC4:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CBD8u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0032CBD8u) [[unlikely]] return; }
L_0032CBD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CBECu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0032CBECu) [[unlikely]] return; }
L_0032CBEC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032CC08:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0032CC10:
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
L_0032CC28:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032CC28u | kUnwind; return; } goto L_0032CC28; } }
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032CC10u | kUnwind; return; } goto L_0032CC10; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032CC60:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CC7Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032CC7Cu) [[unlikely]] return; }
L_0032CC7C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CC8Cu);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x0032CC8Cu) [[unlikely]] return; }
L_0032CC8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032CCA0:
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032CCC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CCE4u);  if (depth < kMaxDepth) unit_0045(c, 8u, depth + 1u); else { c.pc = 0x00214128u; return; } if (c.pc != 0x0032CCE4u) [[unlikely]] return; }
L_0032CCE4:
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032CD08:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CD24u);  if (depth < kMaxDepth) unit_0045(c, 8u, depth + 1u); else { c.pc = 0x00214128u; return; } if (c.pc != 0x0032CD24u) [[unlikely]] return; }
L_0032CD24:
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032CD48:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CD64u);  if (depth < kMaxDepth) unit_0045(c, 8u, depth + 1u); else { c.pc = 0x00214128u; return; } if (c.pc != 0x0032CD64u) [[unlikely]] return; }
L_0032CD64:
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[3] = ld32((c.r[29].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[29].w[0] + 12u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032CD90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[20] = c.f[12];
    set32(c.r[4], c.r[29].w[0] + 16u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CDC0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032CDC0u) [[unlikely]] return; }
L_0032CDC0:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CDD0u);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x0032CDD0u) [[unlikely]] return; }
L_0032CDD0:
    c.f[1] = fp::mul(c.f[20], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032CE30; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CDF8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032CDF8u) [[unlikely]] return; }
L_0032CDF8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CE08u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032CE08u) [[unlikely]] return; }
L_0032CE08:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CE1Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0032CE1Cu) [[unlikely]] return; }
L_0032CE1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CE30u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0032CE30u) [[unlikely]] return; }
L_0032CE30:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032CE50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CE84u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032CE84u) [[unlikely]] return; }
L_0032CE84:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CE98u);  if (depth < kMaxDepth) unit_0045(c, 8u, depth + 1u); else { c.pc = 0x00214128u; return; } if (c.pc != 0x0032CE98u) [[unlikely]] return; }
L_0032CE98:
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.f[3] = fp::mul(c.f[20], c.f[20]);
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    c.f[2] = ld32((c.r[29].w[0] + 24u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032CEF8; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CED0u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032CED0u) [[unlikely]] return; }
L_0032CED0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CEE4u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0032CEE4u) [[unlikely]] return; }
L_0032CEE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CEF8u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0032CEF8u) [[unlikely]] return; }
L_0032CEF8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032CF18:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 88u), c.f[21]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[20] = c.f[12];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[21] = c.f[13];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CF54u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032CF54u) [[unlikely]] return; }
L_0032CF54:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CF68u);  if (depth < kMaxDepth) unit_0045(c, 8u, depth + 1u); else { c.pc = 0x00214128u; return; } if (c.pc != 0x0032CF68u) [[unlikely]] return; }
L_0032CF68:
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.f[3] = fp::mul(c.f[20], c.f[20]);
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    c.f[2] = ld32((c.r[29].w[0] + 24u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032D004; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CFA0u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0032CFA0u) [[unlikely]] return; }
L_0032CFA0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CFB4u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0032CFB4u) [[unlikely]] return; }
L_0032CFB4:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CFC8u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0032CFC8u) [[unlikely]] return; }
L_0032CFC8:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CFDCu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032CFDCu) [[unlikely]] return; }
L_0032CFDC:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[12] = c.f[21];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CFF0u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0032CFF0u) [[unlikely]] return; }
L_0032CFF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D004u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0032D004u) [[unlikely]] return; }
L_0032D004:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 88u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032D028:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D05Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032D05Cu) [[unlikely]] return; }
L_0032D05C:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D074u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032D074u) [[unlikely]] return; }
L_0032D074:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D084u);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x0032D084u) [[unlikely]] return; }
L_0032D084:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D094u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0032D094u) [[unlikely]] return; }
L_0032D094:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[13] = c.r[1].w[0];
    c.f[12] = c.f[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D0A8u);  if (depth < kMaxDepth) unit_00C2(c, 242u, depth + 1u); else { c.pc = 0x0040AD90u; return; } if (c.pc != 0x0032D0A8u) [[unlikely]] return; }
L_0032D0A8:
    fpu_div(c, 12u, c.f[20], c.f[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D0C4u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0032D0C4u) [[unlikely]] return; }
L_0032D0C4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D0D8u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0032D0D8u) [[unlikely]] return; }
L_0032D0D8:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032D100:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 12u), c.f[1]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032D128:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032D140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D164u);  if (depth < kMaxDepth) unit_0045(c, 36u, depth + 1u); else { c.pc = 0x00214778u; return; } if (c.pc != 0x0032D164u) [[unlikely]] return; }
L_0032D164:
    c.f[12] = ld32((c.r[17].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D178u);  if (depth < kMaxDepth) unit_0045(c, 38u, depth + 1u); else { c.pc = 0x002148A0u; return; } if (c.pc != 0x0032D178u) [[unlikely]] return; }
L_0032D178:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0] + 4u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D18Cu);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x0032D18Cu) [[unlikely]] return; }
L_0032D18C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032D1A8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[18], c.r[29].w[0] + 32u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 144u), c.f[20]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D1E0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032D1E0u) [[unlikely]] return; }
L_0032D1E0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D1F4u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032D1F4u) [[unlikely]] return; }
L_0032D1F4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D208u);  if (depth < kMaxDepth) unit_0045(c, 8u, depth + 1u); else { c.pc = 0x00214128u; return; } if (c.pc != 0x0032D208u) [[unlikely]] return; }
L_0032D208:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[3] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[20] = fp::add(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032D2A8; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D248u);  if (depth < kMaxDepth) unit_0045(c, 8u, depth + 1u); else { c.pc = 0x00214128u; return; } if (c.pc != 0x0032D248u) [[unlikely]] return; }
L_0032D248:
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[17], c.r[29].w[0] + 48u);
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = fp::add(c.f[12], c.f[1]);
    c.f[12] = fp::add(c.f[12], c.f[0]);
    fpu_div(c, 12u, c.f[12], c.f[20]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D27Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0032D27Cu) [[unlikely]] return; }
L_0032D27C:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D294u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032D294u) [[unlikely]] return; }
L_0032D294:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D2B4; } }
L_0032D2A8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
L_0032D2B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D2BCu);  if (depth < kMaxDepth) unit_0045(c, 8u, depth + 1u); else { c.pc = 0x00214128u; return; } if (c.pc != 0x0032D2BCu) [[unlikely]] return; }
L_0032D2BC:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032D2F0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0032D2F8:
    set32(c.r[2], c.r[4].w[0] >> (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032D314; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032D314:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D2F8u | kUnwind; return; } goto L_0032D2F8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032D330:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D358u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0032D358u) [[unlikely]] return; }
L_0032D358:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D378u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0032D378u) [[unlikely]] return; }
L_0032D378:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032D390:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 11400u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032D3B0:
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032D3E0; } }
L_0032D3C0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032D3E0; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D3C0u | kUnwind; return; } goto L_0032D3C0; } }
L_0032D3E0:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032D3F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032D430; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032D430:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032D468; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 6;
L_0032D468:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032D470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[3] = c.r[1].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[12] = fp::mul(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032D4C8; } }
    c.f[12] = fp::sub(c.f[12], c.f[3]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D4EC; } }
L_0032D4C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032D4EC; } }
    c.f[12] = fp::add(c.f[12], c.f[3]);
    c.budget -= 1;
L_0032D4EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D4F4u);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x0032D4F4u) [[unlikely]] return; }
L_0032D4F4:
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[2] = fp::sub(c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032D53C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032D540; } }
L_0032D53C:
    st32((c.r[16].w[0]), c.f[3]);
    c.budget -= 1;
L_0032D540:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032D558:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
L_0032D570:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D580u);  if (depth < kMaxDepth) unit_008B(c, 218u, depth + 1u); else { c.pc = 0x0032E150u; return; } if (c.pc != 0x0032D580u) [[unlikely]] return; }
L_0032D580:
    c.f[11] = ld32((c.r[29].w[0] + 4u));
    c.f[10] = ld32((c.r[29].w[0] + 8u));
    c.f[11] = c.f[11] ^ fp::kSign;
    c.f[15] = ld32((c.r[16].w[0] + 4u));
    c.f[10] = c.f[10] ^ fp::kSign;
    c.f[8] = ld32((c.r[16].w[0] + 12u));
    c.f[12] = ld32((c.r[29].w[0] + 12u));
    c.f[7] = fp::sub(c.f[15], c.f[8]);
    c.f[17] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::sub(c.f[11], c.f[10]);
    c.f[4] = ld32((c.r[16].w[0]));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[14] = ld32((c.r[29].w[0]));
    c.f[2] = fp::add(c.f[11], c.f[10]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[16] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[15], c.f[8]);
    st32((c.r[29].w[0] + 8u), c.f[10]);
    c.f[7] = fp::mul(c.f[7], c.f[0]);
    st32((c.r[29].w[0] + 12u), c.f[12]);
    c.f[0] = fp::sub(c.f[14], c.f[12]);
    st32((c.r[29].w[0] + 4u), c.f[11]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[9] = fp::add(c.f[4], c.f[17]);
    c.f[2] = fp::add(c.f[14], c.f[12]);
    c.f[5] = fp::sub(c.f[1], c.f[7]);
    c.f[9] = fp::mul(c.f[9], c.f[0]);
    c.f[3] = fp::add(c.f[1], c.f[7]);
    c.f[13] = fp::sub(c.f[4], c.f[17]);
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[6] = fp::add(c.f[5], c.f[9]);
    c.f[13] = fp::mul(c.f[13], c.f[2]);
    c.f[3] = fp::add(c.f[3], c.f[9]);
    c.f[0] = fp::add(c.f[14], c.f[11]);
    c.f[1] = fp::sub(c.f[1], c.f[7]);
    c.f[2] = fp::add(c.f[4], c.f[15]);
    c.f[7] = fp::add(c.f[10], c.f[12]);
    c.f[5] = fp::sub(c.f[5], c.f[9]);
    c.f[3] = fp::add(c.f[3], c.f[13]);
    c.f[6] = fp::sub(c.f[6], c.f[13]);
    c.f[4] = fp::sub(c.f[4], c.f[15]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[3] = fp::mul(c.f[3], c.f[16]);
    c.f[0] = fp::add(c.f[17], c.f[8]);
    c.f[5] = fp::add(c.f[5], c.f[13]);
    c.f[4] = fp::mul(c.f[4], c.f[7]);
    c.f[6] = fp::mul(c.f[6], c.f[16]);
    c.f[14] = fp::sub(c.f[14], c.f[11]);
    c.f[1] = fp::add(c.f[1], c.f[9]);
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[4] = fp::add(c.f[4], c.f[6]);
    c.f[0] = fp::mul(c.f[0], c.f[14]);
    c.f[5] = fp::mul(c.f[5], c.f[16]);
    st32((c.r[29].w[0] + 20u), c.f[2]);
    c.f[10] = fp::sub(c.f[10], c.f[12]);
    st32((c.r[29].w[0] + 24u), c.f[4]);
    c.f[1] = fp::add(c.f[1], c.f[13]);
    c.f[8] = fp::sub(c.f[8], c.f[17]);
    c.f[0] = fp::add(c.f[0], c.f[5]);
    c.f[1] = fp::mul(c.f[1], c.f[16]);
    c.f[8] = fp::mul(c.f[8], c.f[10]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    st32((c.r[29].w[0] + 28u), c.f[0]);
    c.f[4] = fp::mul(c.f[4], c.f[4]);
    c.f[8] = fp::add(c.f[8], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[4]);
    c.f[3] = fp::mul(c.f[8], c.f[8]);
    st32((c.r[29].w[0] + 16u), c.f[8]);
    c.f[1] = 0u;
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.f[12] = fp::add(c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 76;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032D6F0; } }
    c.f[1] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032D6D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D6D4u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x0032D6D4u) [[unlikely]] return; }
L_0032D6D4:
    c.f[1] = c.f[0];
    c.budget -= 1;
L_0032D6D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_div(c, 17u, c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D6F8; } }
L_0032D6F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[17] = c.r[1].w[0];
    c.budget -= 2;
L_0032D6F8:
    c.f[9] = ld32((c.r[29].w[0] + 12u));
    c.f[7] = ld32((c.r[29].w[0] + 8u));
    c.f[10] = ld32((c.r[29].w[0] + 4u));
    c.f[3] = ld32((c.r[29].w[0]));
    c.f[16] = fp::add(c.f[7], c.f[9]);
    c.f[0] = fp::add(c.f[10], c.f[7]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[11] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[10], c.f[9]);
    c.f[14] = ld32((c.r[29].w[0] + 20u));
    c.f[4] = fp::sub(c.f[10], c.f[7]);
    c.f[15] = ld32((c.r[29].w[0] + 24u));
    c.f[1] = fp::sub(c.f[10], c.f[9]);
    c.f[13] = ld32((c.r[29].w[0] + 28u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[12] = ld32((c.r[29].w[0] + 16u));
    c.f[8] = fp::add(c.f[3], c.f[7]);
    c.f[0] = fp::sub(c.f[3], c.f[9]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[4] = fp::add(c.f[3], c.f[9]);
    c.f[8] = fp::mul(c.f[8], c.f[0]);
    c.f[6] = fp::sub(c.f[3], c.f[7]);
    c.f[0] = fp::add(c.f[2], c.f[1]);
    c.f[5] = fp::sub(c.f[2], c.f[1]);
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[6] = fp::mul(c.f[6], c.f[4]);
    c.f[0] = fp::add(c.f[0], c.f[8]);
    c.f[4] = fp::add(c.f[5], c.f[8]);
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.f[3], c.f[10]);
    c.f[0] = fp::add(c.f[0], c.f[6]);
    c.f[5] = fp::sub(c.f[5], c.f[8]);
    c.f[4] = fp::sub(c.f[4], c.f[6]);
    c.f[3] = fp::sub(c.f[3], c.f[10]);
    c.f[0] = fp::mul(c.f[0], c.f[11]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[3] = fp::mul(c.f[3], c.f[16]);
    c.f[5] = fp::add(c.f[5], c.f[6]);
    c.f[4] = fp::mul(c.f[4], c.f[11]);
    c.f[2] = fp::add(c.f[2], c.f[8]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[4] = fp::add(c.f[3], c.f[4]);
    c.f[0] = fp::sub(c.f[9], c.f[7]);
    c.f[5] = fp::mul(c.f[5], c.f[11]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    c.f[2] = fp::add(c.f[2], c.f[6]);
    st32((c.r[29].w[0] + 40u), c.f[4]);
    c.f[7] = fp::sub(c.f[7], c.f[9]);
    c.f[3] = fp::add(c.f[3], c.f[5]);
    c.f[2] = fp::mul(c.f[2], c.f[11]);
    c.f[4] = fp::mul(c.f[4], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[7]);
    st32((c.r[29].w[0] + 44u), c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[3] = fp::mul(c.f[3], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[4] = 0u;
    c.f[2] = fp::mul(c.f[0], c.f[0]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[12] = fp::mul(c.f[12], c.f[17]);
    c.f[14] = fp::mul(c.f[14], c.f[17]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[15] = fp::mul(c.f[15], c.f[17]);
    st32((c.r[29].w[0] + 16u), c.f[12]);
    c.f[13] = fp::mul(c.f[13], c.f[17]);
    st32((c.r[29].w[0] + 20u), c.f[14]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    st32((c.r[29].w[0] + 24u), c.f[15]);
    st32((c.r[29].w[0] + 28u), c.f[13]);
    c.budget -= 73;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032D860; } }
    c.f[2] = fp::sqrt(c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032D848; } }
    c.f[12] = c.f[1];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D844u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x0032D844u) [[unlikely]] return; }
L_0032D844:
    c.f[2] = c.f[0];
    c.budget -= 1;
L_0032D848:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_div(c, 8u, c.f[0], c.f[2]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D868; } }
L_0032D860:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[8] = c.r[1].w[0];
    c.budget -= 2;
L_0032D868:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[5] = ld32((c.r[29].w[0] + 16u));
    c.f[0] = fp::mul(c.f[0], c.f[8]);
    c.f[4] = ld32((c.r[29].w[0] + 28u));
    c.f[6] = ld32((c.r[29].w[0] + 20u));
    c.f[7] = ld32((c.r[29].w[0] + 24u));
    fpu_div(c, 5u, c.f[5], c.f[0]);
    c.f[3] = ld32((c.r[29].w[0] + 36u));
    fpu_div(c, 4u, c.f[4], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    fpu_div(c, 6u, c.f[6], c.f[0]);
    fpu_div(c, 7u, c.f[7], c.f[0]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[3] = fp::mul(c.f[3], c.f[8]);
    c.f[2] = fp::mul(c.f[2], c.f[8]);
    c.f[1] = fp::mul(c.f[1], c.f[8]);
    st32((c.r[17].w[0]), c.f[5]);
    st32((c.r[17].w[0] + 12u), c.f[4]);
    st32((c.r[29].w[0] + 36u), c.f[3]);
    st32((c.r[29].w[0] + 40u), c.f[2]);
    st32((c.r[29].w[0] + 44u), c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[6]);
    st32((c.r[17].w[0] + 8u), c.f[7]);
    c.budget -= 32;
L_0032D8E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D920; } }
L_0032D8F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D8F8u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0032D8F8u) [[unlikely]] return; }
L_0032D8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D900u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0032D900u) [[unlikely]] return; }
L_0032D900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D908u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0032D908u) [[unlikely]] return; }
L_0032D908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D8F0u | kUnwind; return; } goto L_0032D8F0; } }
L_0032D910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D8F8u | kUnwind; return; } goto L_0032D8F8; } }
L_0032D918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D900u | kUnwind; return; } goto L_0032D900; } }
L_0032D920:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032D938:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.f[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[20] = 0u;
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[3] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::add(c.f[2], c.f[1]);
    set32(c.r[7], c.r[2].w[0] - 8568u);
    ldl(c.r[3], (c.r[7].w[0] + 7u));
    ldr(c.r[3], (c.r[7].w[0]));
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    sdl(c.r[3], (c.r[29].w[0] + 23u));
    sdr(c.r[3], (c.r[29].w[0] + 16u));
    st32((c.r[29].w[0] + 24u), c.r[4].w[0]);
    c.f[12] = fp::add(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[12]));
    c.budget -= 31;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032DA54; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.f[2] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032D9E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D9E0u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x0032D9E0u) [[unlikely]] return; }
L_0032D9E0:
    c.f[2] = c.f[0];
    c.budget -= 1;
L_0032D9E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[1] = c.r[1].w[0];
    fpu_div(c, 5u, c.f[0], c.f[2]);
    fpu_div(c, 1u, c.f[1], c.f[5]);
    st32((c.r[19].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    st32((c.r[19].w[0] + 8u), c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    st32((c.r[19].w[0] + 12u), c.f[0]);
    c.budget -= 28;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032DBC0; } }
L_0032DA54:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032DA68; } }
    set32(c.r[22], 0u + 1u);
    c.budget -= 1;
L_0032DA68:
    set32(c.r[5], 0u + 20u);
    mmi::mult(c, 0, c.r[22].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032DA8C; } }
    set32(c.r[22], 0u + 2u);
    c.budget -= 1;
L_0032DA8C:
    mmi::mult(c, 0, c.r[22].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[20], c.r[22].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[20].w[0]);
    c.f[2] = ld32((c.r[3].w[0]));
    set32(c.r[17], ld32((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[17].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[21], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[21].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[18], ld32((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[18].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.f[12] = fp::add(c.f[2], c.f[3]);
    c.f[0] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[0]));
    c.budget -= 25;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032DAF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DAF8u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x0032DAF8u) [[unlikely]] return; }
L_0032DAF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[5] = c.f[0];
    fpu_compare(c, fp::key(c.f[5]) == fp::key(c.f[20]));
    set32(c.r[2], c.r[29].w[0] + c.r[20].w[0]);
    c.f[0] = fp::mul(c.f[5], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032DB28; } }
    fpu_div(c, 5u, c.f[1], c.f[5]);
    c.budget -= 3;
L_0032DB28:
    set32(c.r[5], c.r[17].w[0] << 4);
    set32(c.r[6], c.r[18].w[0] << 4);
    set32(c.r[7], c.r[18].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[21].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[22].w[0] << 4);
    c.f[2] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[3] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[20].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[4] = ld32((c.r[5].w[0]));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    set32(c.r[6], c.r[20].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[3] = ld32((c.r[6].w[0]));
    set32(c.r[3], c.r[29].w[0] + c.r[21].w[0]);
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    set32(c.r[2], c.r[29].w[0] + c.r[7].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    st32((c.r[29].w[0] + 12u), c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[3] = ld32((c.r[29].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    st32((c.r[19].w[0] + 4u), c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    st32((c.r[19].w[0] + 8u), c.f[2]);
    st32((c.r[19].w[0] + 12u), c.f[3]);
    c.budget -= 38;
L_0032DBC0:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032DBF0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032DC00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0032DC1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DC1Cu);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x0032DC1Cu) [[unlikely]] return; }
L_0032DC1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032DC30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    ldl(c.r[2], (c.r[6].w[0] + 7u));
    ldr(c.r[2], (c.r[6].w[0]));
    ldl(c.r[3], (c.r[6].w[0] + 15u));
    ldr(c.r[3], (c.r[6].w[0] + 8u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[3], (c.r[29].w[0] + 15u));
    sdr(c.r[3], (c.r[29].w[0] + 8u));
    c.budget -= 12;
L_0032DC60:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DC70u);  if (depth < kMaxDepth) unit_008B(c, 215u, depth + 1u); else { c.pc = 0x0032DFD0u; return; } if (c.pc != 0x0032DC70u) [[unlikely]] return; }
L_0032DC70:
    ldl(c.r[2], (c.r[29].w[0] + 23u));
    ldr(c.r[2], (c.r[29].w[0] + 16u));
    ldl(c.r[3], (c.r[29].w[0] + 31u));
    ldr(c.r[3], (c.r[29].w[0] + 24u));
    sdl(c.r[2], (c.r[16].w[0] + 7u));
    sdr(c.r[2], (c.r[16].w[0]));
    sdl(c.r[3], (c.r[16].w[0] + 15u));
    sdr(c.r[3], (c.r[16].w[0] + 8u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032DCC8; } }
L_0032DC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DCA0u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0032DCA0u) [[unlikely]] return; }
L_0032DCA0:
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032DC98u | kUnwind; return; } goto L_0032DC98; } }
L_0032DCB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DCB8u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0032DCB8u) [[unlikely]] return; }
L_0032DCB8:
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032DCB0u | kUnwind; return; } goto L_0032DCB0; } }
L_0032DCC8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032DCE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    ldl(c.r[2], (c.r[6].w[0] + 7u));
    ldr(c.r[2], (c.r[6].w[0]));
    ldl(c.r[3], (c.r[6].w[0] + 15u));
    ldr(c.r[3], (c.r[6].w[0] + 8u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[3], (c.r[29].w[0] + 15u));
    sdr(c.r[3], (c.r[29].w[0] + 8u));
    c.budget -= 12;
L_0032DD10:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DD20u);  if (depth < kMaxDepth) unit_008B(c, 216u, depth + 1u); else { c.pc = 0x0032E018u; return; } if (c.pc != 0x0032DD20u) [[unlikely]] return; }
L_0032DD20:
    ldl(c.r[2], (c.r[29].w[0] + 23u));
    ldr(c.r[2], (c.r[29].w[0] + 16u));
    ldl(c.r[3], (c.r[29].w[0] + 31u));
    ldr(c.r[3], (c.r[29].w[0] + 24u));
    sdl(c.r[2], (c.r[16].w[0] + 7u));
    sdr(c.r[2], (c.r[16].w[0]));
    sdl(c.r[3], (c.r[16].w[0] + 15u));
    sdr(c.r[3], (c.r[16].w[0] + 8u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032DD78; } }
L_0032DD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DD50u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0032DD50u) [[unlikely]] return; }
L_0032DD50:
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032DD48u | kUnwind; return; } goto L_0032DD48; } }
L_0032DD60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DD68u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0032DD68u) [[unlikely]] return; }
L_0032DD68:
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032DD60u | kUnwind; return; } goto L_0032DD60; } }
L_0032DD78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032DD90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    ldl(c.r[2], (c.r[6].w[0] + 7u));
    ldr(c.r[2], (c.r[6].w[0]));
    ldl(c.r[3], (c.r[6].w[0] + 15u));
    ldr(c.r[3], (c.r[6].w[0] + 8u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[3], (c.r[29].w[0] + 15u));
    sdr(c.r[3], (c.r[29].w[0] + 8u));
    c.budget -= 12;
L_0032DDC0:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DDD0u);  if (depth < kMaxDepth) unit_008B(c, 217u, depth + 1u); else { c.pc = 0x0032E060u; return; } if (c.pc != 0x0032DDD0u) [[unlikely]] return; }
L_0032DDD0:
    ldl(c.r[2], (c.r[29].w[0] + 23u));
    ldr(c.r[2], (c.r[29].w[0] + 16u));
    ldl(c.r[3], (c.r[29].w[0] + 31u));
    ldr(c.r[3], (c.r[29].w[0] + 24u));
    sdl(c.r[2], (c.r[16].w[0] + 7u));
    sdr(c.r[2], (c.r[16].w[0]));
    sdl(c.r[3], (c.r[16].w[0] + 15u));
    sdr(c.r[3], (c.r[16].w[0] + 8u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032DE28; } }
L_0032DDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DE00u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0032DE00u) [[unlikely]] return; }
L_0032DE00:
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032DDF8u | kUnwind; return; } goto L_0032DDF8; } }
L_0032DE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DE18u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0032DE18u) [[unlikely]] return; }
L_0032DE18:
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032DE10u | kUnwind; return; } goto L_0032DE10; } }
L_0032DE28:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032DE40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    ldl(c.r[2], (c.r[6].w[0] + 7u));
    ldr(c.r[2], (c.r[6].w[0]));
    ldl(c.r[3], (c.r[6].w[0] + 15u));
    ldr(c.r[3], (c.r[6].w[0] + 8u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[3], (c.r[29].w[0] + 15u));
    sdr(c.r[3], (c.r[29].w[0] + 8u));
    c.budget -= 12;
L_0032DE70:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DE80u);  if (depth < kMaxDepth) unit_008B(c, 167u, depth + 1u); else { c.pc = 0x0032D558u; return; } if (c.pc != 0x0032DE80u) [[unlikely]] return; }
L_0032DE80:
    ldl(c.r[2], (c.r[29].w[0] + 23u));
    ldr(c.r[2], (c.r[29].w[0] + 16u));
    ldl(c.r[3], (c.r[29].w[0] + 31u));
    ldr(c.r[3], (c.r[29].w[0] + 24u));
    sdl(c.r[2], (c.r[16].w[0] + 7u));
    sdr(c.r[2], (c.r[16].w[0]));
    sdl(c.r[3], (c.r[16].w[0] + 15u));
    sdr(c.r[3], (c.r[16].w[0] + 8u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032DED8; } }
L_0032DEA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DEB0u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0032DEB0u) [[unlikely]] return; }
L_0032DEB0:
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032DEA8u | kUnwind; return; } goto L_0032DEA8; } }
L_0032DEC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DEC8u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0032DEC8u) [[unlikely]] return; }
L_0032DEC8:
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032DEC0u | kUnwind; return; } goto L_0032DEC0; } }
L_0032DED8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032DEF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[4] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 12u));
    c.f[3] = fp::mul(c.f[3], c.f[3]);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[12] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[12]));
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032DF80; } }
    c.f[1] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032DF68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DF64u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x0032DF64u) [[unlikely]] return; }
L_0032DF64:
    c.f[1] = c.f[0];
    c.budget -= 1;
L_0032DF68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_div(c, 4u, c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032DF88; } }
L_0032DF80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    c.budget -= 2;
L_0032DF88:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[3] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    st32((c.r[16].w[0] + 12u), c.f[3]);
    st32((c.r[16].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032DFD0:
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032E018:
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[4].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032E060:
    c.f[15] = ld32((c.r[5].w[0] + 4u));
    c.f[16] = ld32((c.r[6].w[0] + 4u));
    c.f[14] = ld32((c.r[5].w[0] + 12u));
    c.f[10] = ld32((c.r[6].w[0] + 8u));
    c.f[3] = fp::add(c.f[15], c.f[14]);
    c.f[8] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::add(c.f[16], c.f[10]);
    c.f[11] = ld32((c.r[6].w[0] + 12u));
    c.f[0] = fp::sub(c.f[16], c.f[10]);
    c.f[6] = ld32((c.r[5].w[0]));
    c.f[5] = fp::sub(c.f[15], c.f[14]);
    c.f[9] = ld32((c.r[6].w[0]));
    c.f[3] = fp::mul(c.f[3], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[6], c.f[8]);
    c.f[5] = fp::mul(c.f[5], c.f[0]);
    c.f[7] = fp::sub(c.f[9], c.f[11]);
    c.f[2] = c.f[3] ^ fp::kSign;
    c.f[4] = fp::sub(c.f[3], c.f[5]);
    c.f[1] = fp::mul(c.f[1], c.f[7]);
    c.f[0] = fp::sub(c.f[6], c.f[8]);
    c.f[7] = fp::add(c.f[9], c.f[11]);
    c.f[2] = fp::sub(c.f[2], c.f[5]);
    c.f[3] = fp::add(c.f[3], c.f[5]);
    c.f[5] = fp::sub(c.f[4], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[7]);
    c.f[2] = fp::add(c.f[2], c.f[1]);
    c.f[3] = fp::add(c.f[3], c.f[1]);
    c.f[4] = fp::add(c.f[4], c.f[1]);
    c.f[5] = fp::add(c.f[5], c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[0]);
    c.f[4] = fp::sub(c.f[4], c.f[0]);
    c.f[1] = fp::add(c.f[6], c.f[15]);
    c.f[13] = fp::add(c.f[9], c.f[16]);
    c.f[0] = fp::sub(c.f[14], c.f[8]);
    c.f[7] = fp::sub(c.f[10], c.f[11]);
    c.f[6] = fp::sub(c.f[6], c.f[15]);
    c.f[10] = fp::add(c.f[10], c.f[11]);
    c.f[8] = fp::add(c.f[8], c.f[14]);
    c.f[9] = fp::sub(c.f[9], c.f[16]);
    c.f[1] = fp::mul(c.f[1], c.f[13]);
    c.f[0] = fp::mul(c.f[0], c.f[7]);
    c.f[6] = fp::mul(c.f[6], c.f[10]);
    c.f[8] = fp::mul(c.f[8], c.f[9]);
    c.f[5] = fp::mul(c.f[5], c.f[12]);
    c.f[2] = fp::mul(c.f[2], c.f[12]);
    c.f[3] = fp::mul(c.f[3], c.f[12]);
    c.f[4] = fp::mul(c.f[4], c.f[12]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[6] = fp::add(c.f[6], c.f[4]);
    c.f[8] = fp::add(c.f[8], c.f[5]);
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[6]);
    st32((c.r[4].w[0] + 12u), c.f[8]);
    c.budget -= 60;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032E150:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 12u), c.f[1]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032E178:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] | 4ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E1ACu);  if (depth < kMaxDepth) unit_0045(c, 110u, depth + 1u); else { c.pc = 0x00215EC0u; return; } if (c.pc != 0x0032E1ACu) [[unlikely]] return; }
L_0032E1AC:
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0]));
    st32((c.r[16].w[0]), c.f[1]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 12u), c.f[2]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032E1F8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st32((c.r[29].w[0] + 104u), c.f[21]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[21] = c.r[1].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[12] = fp::mul(c.f[12], c.f[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[29].w[0] + 4u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[22]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.f[22] = c.f[14];
    c.f[20] = c.f[13];
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E250u);  if (depth < kMaxDepth) unit_0045(c, 110u, depth + 1u); else { c.pc = 0x00215EC0u; return; } if (c.pc != 0x0032E250u) [[unlikely]] return; }
L_0032E250:
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.f[12] = fp::mul(c.f[20], c.f[21]);
    c.f[1] = ld32((c.r[29].w[0]));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E27Cu);  if (depth < kMaxDepth) unit_0045(c, 110u, depth + 1u); else { c.pc = 0x00215EC0u; return; } if (c.pc != 0x0032E27Cu) [[unlikely]] return; }
L_0032E27C:
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[12] = fp::mul(c.f[22], c.f[21]);
    c.f[0] = ld32((c.r[29].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[18].w[0] + 8u), 0u);
    st32((c.r[18].w[0] + 12u), c.f[0]);
    st32((c.r[18].w[0]), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E2A8u);  if (depth < kMaxDepth) unit_0045(c, 110u, depth + 1u); else { c.pc = 0x00215EC0u; return; } if (c.pc != 0x0032E2A8u) [[unlikely]] return; }
L_0032E2A8:
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0]));
    st32((c.r[19].w[0]), c.f[0]);
    st32((c.r[19].w[0] + 4u), c.f[1]);
    st32((c.r[19].w[0] + 12u), 0u);
    st32((c.r[19].w[0] + 8u), 0u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[22] = ld32((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 104u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032E2F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 72u), c.f[23]);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    st32((c.r[29].w[0] + 64u), c.f[22]);
    st32((c.r[29].w[0] + 56u), c.f[21]);
    c.f[21] = ld32((c.r[16].w[0] + 12u));
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[20] = fp::mul(c.f[12], c.f[12]);
    c.f[22] = ld32((c.r[16].w[0]));
    c.f[23] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[21], c.f[22]);
    c.f[21] = fp::mul(c.f[21], c.f[21]);
    c.f[13] = fp::sub(c.f[20], c.f[23]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.f[22] = fp::mul(c.f[22], c.f[22]);
    c.f[13] = fp::sub(c.f[13], c.f[21]);
    c.f[12] = fp::add(c.f[12], c.f[1]);
    c.f[13] = fp::add(c.f[13], c.f[22]);
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E35Cu);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x0032E35Cu) [[unlikely]] return; }
L_0032E35C:
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[20] = c.f[20] ^ fp::kSign;
    c.f[2] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[20] = fp::sub(c.f[20], c.f[23]);
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[12] = fp::mul(c.f[12], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[20] = fp::add(c.f[20], c.f[21]);
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.f[13] = fp::add(c.f[20], c.f[22]);
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E398u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x0032E398u) [[unlikely]] return; }
L_0032E398:
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[3]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E3CCu);  if (depth < kMaxDepth) unit_0041(c, 385u, depth + 1u); else { c.pc = 0x002078A8u; return; } if (c.pc != 0x0032E3CCu) [[unlikely]] return; }
L_0032E3CC:
    st32((c.r[17].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[23] = ld32((c.r[29].w[0] + 72u));
    c.f[22] = ld32((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 56u));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032E3F8:
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[3] = ld32((c.r[4].w[0] + 12u));
    c.f[10] = fp::add(c.f[0], c.f[0]);
    c.f[8] = fp::add(c.f[1], c.f[1]);
    c.f[6] = ld32((c.r[4].w[0]));
    c.f[2] = fp::add(c.f[3], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[9] = c.r[1].w[0];
    c.f[5] = fp::mul(c.f[0], c.f[10]);
    st32((c.r[5].w[0] + 48u), 0u);
    c.f[4] = fp::mul(c.f[1], c.f[8]);
    st32((c.r[5].w[0] + 60u), c.f[9]);
    c.f[3] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[5].w[0] + 52u), 0u);
    c.f[11] = fp::mul(c.f[6], c.f[2]);
    st32((c.r[5].w[0] + 56u), 0u);
    c.f[12] = fp::add(c.f[5], c.f[4]);
    st32((c.r[5].w[0] + 12u), 0u);
    c.f[7] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[5].w[0] + 28u), 0u);
    c.f[10] = fp::mul(c.f[6], c.f[10]);
    st32((c.r[5].w[0] + 44u), 0u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[6] = fp::mul(c.f[6], c.f[8]);
    c.f[0] = fp::mul(c.f[0], c.f[8]);
    c.f[5] = fp::add(c.f[5], c.f[3]);
    c.f[4] = fp::add(c.f[4], c.f[3]);
    c.f[2] = fp::sub(c.f[7], c.f[6]);
    c.f[3] = fp::add(c.f[0], c.f[11]);
    c.f[8] = fp::add(c.f[1], c.f[10]);
    c.f[4] = fp::sub(c.f[9], c.f[4]);
    st32((c.r[5].w[0] + 8u), c.f[2]);
    c.f[5] = fp::sub(c.f[9], c.f[5]);
    st32((c.r[5].w[0] + 4u), c.f[3]);
    c.f[9] = fp::sub(c.f[9], c.f[12]);
    st32((c.r[5].w[0] + 24u), c.f[8]);
    c.f[0] = fp::sub(c.f[0], c.f[11]);
    st32((c.r[5].w[0]), c.f[4]);
    c.f[7] = fp::add(c.f[7], c.f[6]);
    st32((c.r[5].w[0] + 20u), c.f[5]);
    c.f[1] = fp::sub(c.f[1], c.f[10]);
    st32((c.r[5].w[0] + 40u), c.f[9]);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    st32((c.r[5].w[0] + 32u), c.f[7]);
    st32((c.r[5].w[0] + 36u), c.f[1]);
    c.budget -= 48;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032E4B8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.f[8] = ld32((c.r[5].w[0]));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.f[22]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[22] = c.f[12];
    st32((c.r[29].w[0] + 72u), c.f[21]);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.f[4] = 0u;
    c.f[5] = ld32((c.r[5].w[0] + 4u));
    c.f[6] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[7] = ld32((c.r[5].w[0] + 12u));
    c.f[2] = fp::mul(c.f[2], c.f[6]);
    c.f[3] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[3] = fp::mul(c.f[3], c.f[7]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[8]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[12] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[4]));
    c.budget -= 30;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032E55C; } }
    c.f[0] = c.f[5] ^ fp::kSign;
    c.f[1] = c.f[6] ^ fp::kSign;
    c.f[2] = c.f[7] ^ fp::kSign;
    c.f[3] = c.f[8] ^ fp::kSign;
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.f[12] = c.f[12] ^ fp::kSign;
    st32((c.r[29].w[0] + 8u), c.f[2]);
    st32((c.r[29].w[0] + 12u), c.f[3]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032E56C; } }
L_0032E55C:
    st32((c.r[29].w[0]), c.f[5]);
    st32((c.r[29].w[0] + 4u), c.f[6]);
    st32((c.r[29].w[0] + 8u), c.f[7]);
    st32((c.r[29].w[0] + 12u), c.f[8]);
    c.budget -= 4;
L_0032E56C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[21], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032E5E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E59Cu);  if (depth < kMaxDepth) unit_00C2(c, 223u, depth + 1u); else { c.pc = 0x0040AB48u; return; } if (c.pc != 0x0032E59Cu) [[unlikely]] return; }
L_0032E59C:
    c.f[20] = c.f[0];
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E5ACu);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x0032E5ACu) [[unlikely]] return; }
L_0032E5AC:
    c.f[12] = fp::sub(c.f[21], c.f[22]);
    fpu_div(c, 21u, c.f[21], c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E5C8u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x0032E5C8u) [[unlikely]] return; }
L_0032E5C8:
    c.f[12] = fp::mul(c.f[22], c.f[20]);
    c.f[20] = fp::mul(c.f[21], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E5D8u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x0032E5D8u) [[unlikely]] return; }
L_0032E5D8:
    c.f[12] = fp::mul(c.f[21], c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032E5EC; } }
L_0032E5E4:
    c.f[20] = fp::sub(c.f[21], c.f[22]);
    c.f[12] = c.f[22];
    c.budget -= 2;
L_0032E5EC:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    c.f[3] = ld32((c.r[29].w[0] + 8u));
    c.f[4] = ld32((c.r[29].w[0] + 12u));
    c.f[2] = fp::mul(c.f[12], c.f[2]);
    c.f[3] = fp::mul(c.f[12], c.f[3]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[22] = ld32((c.r[29].w[0] + 80u));
    c.f[4] = fp::mul(c.f[12], c.f[4]);
    c.f[21] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[17].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    st32((c.r[17].w[0] + 12u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[17].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 33;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032E670:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E6A4u);  if (depth < kMaxDepth) unit_0045(c, 110u, depth + 1u); else { c.pc = 0x00215EC0u; return; } if (c.pc != 0x0032E6A4u) [[unlikely]] return; }
L_0032E6A4:
    c.f[2] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[29].w[0] + 4u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[17].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0]));
    st32((c.r[17].w[0]), c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 12u), c.f[1]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032E6F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0032E7F8; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[9].w[0] - 12520u)));
    set32(c.r[5], c.r[2].w[0] - 12400u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[9].w[0] - 12520u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032E750; } }
    st32((c.r[9].w[0] - 12520u), c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032E778; } }
    c.budget -= 1;
L_0032E750:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[8].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032E77C; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E750u | kUnwind; return; } goto L_0032E750; } }
    st32((c.r[4].w[0]), c.r[7].w[0]);
    c.budget -= 1;
L_0032E778:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0032E77C:
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0032E7F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E790u);  if (depth < kMaxDepth) unit_008B(c, 251u, depth + 1u); else { c.pc = 0x0032E9C8u; return; } if (c.pc != 0x0032E790u) [[unlikely]] return; }
L_0032E790:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[9].w[0] - 12520u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] - 12400u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[9].w[0] - 12520u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032E7C8; } }
    st32((c.r[9].w[0] - 12520u), c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032E7F0; } }
    c.budget -= 1;
L_0032E7C8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[8].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032E7F4; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E7C8u | kUnwind; return; } goto L_0032E7C8; } }
    st32((c.r[4].w[0]), c.r[7].w[0]);
    c.budget -= 1;
L_0032E7F0:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0032E7F4:
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0032E7F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 8u);
    set32(c.r[7], c.r[16].w[0] + 12u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E814u);  if (depth < kMaxDepth) unit_0085(c, 246u, depth + 1u); else { c.pc = 0x00316850u; return; } if (c.pc != 0x0032E814u) [[unlikely]] return; }
L_0032E814:
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032E838:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 112u), c.f[20]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[4].w[0] - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032E8AC; } }
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.f[15] = 0u;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[14] = ld32((c.r[3].w[0] + 8u));
    c.f[12] = ld32((c.r[3].w[0]));
    c.f[13] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E8A4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0032E8A4u) [[unlikely]] return; }
L_0032E8A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032E948; } }
L_0032E8AC:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.f[20] = 0u;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[14] = ld32((c.r[3].w[0] + 8u));
    c.f[15] = c.f[20];
    c.f[12] = ld32((c.r[3].w[0]));
    c.f[13] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E8DCu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0032E8DCu) [[unlikely]] return; }
L_0032E8DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[16], c.r[29].w[0] + 16u);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.f[15] = c.f[20];
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[12] = ld32((c.r[3].w[0]));
    c.f[14] = ld32((c.r[3].w[0] + 8u));
    c.f[13] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E90Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0032E90Cu) [[unlikely]] return; }
L_0032E90C:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E920u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0032E920u) [[unlikely]] return; }
L_0032E920:
    c.f[12] = ld32((c.r[18].w[0] + 4u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E934u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0032E934u) [[unlikely]] return; }
L_0032E934:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E948u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0032E948u) [[unlikely]] return; }
L_0032E948:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032E970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 12400u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[6], 0u + 16u);
    set32(c.r[16], c.r[16].w[0] >> 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E9A0u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0032E9A0u) [[unlikely]] return; }
L_0032E9A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 12520u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0]), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032E9C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], 0u + 29u);
    set32(c.r[3], c.r[2].w[0] - 12520u);
    c.budget -= 4;
L_0032E9D8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032E9EC; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_0032E9EC:
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E9D8u | kUnwind; return; } goto L_0032E9D8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032EA00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032EA08:
    set32(c.r[29], c.r[29].w[0] - 352u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 14664u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    set32(c.r[17], 0u + 1u);
    st32((c.r[29].w[0] + 336u), c.f[20]);
    set32(c.r[3], ld32((c.r[2].w[0] + 128u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_0032EC00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 15264u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3BD30000u);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 10248ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EA74u);  if (depth < kMaxDepth) unit_0086(c, 325u, depth + 1u); else { c.pc = 0x0031BFE8u; return; } if (c.pc != 0x0032EA74u) [[unlikely]] return; }
L_0032EA74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[20] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[20]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032EA9C; } }
    c.f[20] = c.f[2];
    c.budget -= 1;
L_0032EA9C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 25u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032EB48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EAB0u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x0032EAB0u) [[unlikely]] return; }
L_0032EAB0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0032EB08; } }
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032EADC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_0032EAFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032EB48; } }
L_0032EADC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032EB20; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032EB34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032EB48; } }
L_0032EAFC:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032EB38; } }
L_0032EB08:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[3].w[0] - 10124u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032EB54; } }
L_0032EB20:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[2].w[0] - 10124u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032EB54; } }
L_0032EB34:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0032EB38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[2].w[0] - 10124u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032EB54; } }
L_0032EB48:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[2].w[0] - 10124u), 0u);
    c.budget -= 3;
L_0032EB54:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 26u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[2].w[0] - 10120u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EB6Cu);  if (depth < kMaxDepth) unit_0044(c, 47u, depth + 1u); else { c.pc = 0x00211148u; return; } if (c.pc != 0x0032EB6Cu) [[unlikely]] return; }
L_0032EB6C:
    set32(c.r[3], c.r[19].w[0] + 14664u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 192u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0032EBA4; } }
    c.r[8].d[0] = ld8((c.r[16].w[0] + 24u));
    c.f[12] = c.f[20];
    c.r[5].d[0] = ld16((c.r[16].w[0] + 20u));
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[16].w[0] + 22u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032EBC0; } }
L_0032EBA4:
    c.r[8].d[0] = ld8((c.r[16].w[0] + 24u));
    c.f[12] = c.f[20];
    c.r[5].d[0] = ld16((c.r[16].w[0] + 20u));
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[16].w[0] + 22u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
L_0032EBC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EBC8u);  if (depth < kMaxDepth) unit_005B(c, 401u, depth + 1u); else { c.pc = 0x0026FD80u; return; } if (c.pc != 0x0032EBC8u) [[unlikely]] return; }
L_0032EBC8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032EBF0; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0032EBFC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032EC00; } }
L_0032EBF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032EC00; } }
L_0032EBFC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0032EC00:
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    c.f[20] = ld32((c.r[29].w[0] + 336u));
    set32(c.r[29], c.r[29].w[0] + 352u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032EC28:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 168u), c.f[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    c.f[21] = 0u;
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.f[4] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::add(c.f[0], c.f[4]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[1]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032ED14; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032ECB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032ECB0u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x0032ECB0u) [[unlikely]] return; }
L_0032ECB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[1].w[0];
    c.f[1] = c.f[0];
    c.f[6] = ld32((c.r[16].w[0] + 4u));
    fpu_div(c, 12u, c.f[3], c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[3] = fp::mul(c.f[1], c.f[3]);
    c.f[5] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[4] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = fp::sub(c.f[2], c.f[5]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    st32((c.r[29].w[0] + 12u), c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[6]);
    c.f[2] = fp::mul(c.f[2], c.f[12]);
    c.f[1] = fp::mul(c.f[1], c.f[12]);
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    st32((c.r[29].w[0]), c.f[2]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032EE68; } }
L_0032ED14:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032ED28; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032ED28:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032ED50; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_0032ED50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[18], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 10024u);
    set32(c.r[5], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[21], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[21].w[0] + c.r[18].w[0]);
    c.f[2] = ld32((c.r[2].w[0]));
    set32(c.r[17], c.r[3].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[19], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[19].w[0] + c.r[17].w[0]);
    c.f[2] = fp::add(c.f[2], c.f[20]);
    set32(c.r[20], c.r[2].w[0] << 2);
    c.f[1] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[12] = fp::sub(c.f[2], c.f[1]);
    c.f[6] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[6]) == fp::key(c.f[6]));
    c.budget -= 31;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032EDD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EDD4u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x0032EDD4u) [[unlikely]] return; }
L_0032EDD4:
    c.f[6] = c.f[0];
    c.budget -= 1;
L_0032EDD8:
    fpu_compare(c, fp::key(c.f[6]) == fp::key(c.f[21]));
    c.f[12] = c.f[20];
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032EDF8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    fpu_div(c, 12u, c.f[0], c.f[6]);
    c.budget -= 4;
L_0032EDF8:
    set32(c.r[2], c.r[19].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[21].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[4], c.r[16].w[0] + c.r[18].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[21].w[0] + c.r[20].w[0]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[5] = ld32((c.r[2].w[0]));
    c.f[3] = fp::add(c.f[3], c.f[0]);
    set32(c.r[5], c.r[19].w[0] + c.r[20].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[4] = ld32((c.r[5].w[0]));
    c.f[2] = fp::add(c.f[2], c.f[5]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[3] = fp::mul(c.f[3], c.f[12]);
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    set32(c.r[6], c.r[29].w[0] + c.r[18].w[0]);
    c.f[0] = fp::mul(c.f[6], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + c.r[17].w[0]);
    c.f[2] = fp::mul(c.f[2], c.f[12]);
    set32(c.r[2], c.r[29].w[0] + c.r[20].w[0]);
    c.f[1] = fp::mul(c.f[1], c.f[12]);
    st32((c.r[6].w[0]), c.f[0]);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[2].w[0]), c.f[2]);
    st32((c.r[29].w[0] + 12u), c.f[1]);
    c.budget -= 28;
L_0032EE68:
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[3] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 8u));
    c.f[3] = fp::mul(c.f[3], c.f[3]);
    c.f[1] = ld32((c.r[29].w[0] + 12u));
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].d[0] = c.r[1].d[0] | 8389ull;
    c.f[4] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[12] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[12]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032EEE8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F7F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 48759ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032EF54; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032EF54; } }
L_0032EEE8:
    c.f[1] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032EF10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EF0Cu);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x0032EF0Cu) [[unlikely]] return; }
L_0032EF0C:
    c.f[1] = c.f[0];
    c.budget -= 1;
L_0032EF10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[3] = ld32((c.r[29].w[0]));
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[29].w[0] + 8u));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    c.f[3] = fp::mul(c.f[3], c.f[12]);
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    c.f[1] = fp::mul(c.f[1], c.f[12]);
    c.f[2] = fp::mul(c.f[2], c.f[12]);
    st32((c.r[29].w[0]), c.f[3]);
    st32((c.r[29].w[0] + 12u), c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    c.budget -= 17;
L_0032EF54:
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0] + 8u));
    c.f[3] = ld32((c.r[29].w[0] + 12u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    st32((c.r[29].w[0] + 28u), c.f[3]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[22].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 168u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032EFB0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    set32(c.r[7], 0u + 2u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 4u), 0u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[1]);
    st8((c.r[29].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 60u), c.f[2]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    st32((c.r[29].w[0] + 168u), c.f[4]);
    st32((c.r[29].w[0] + 172u), c.f[3]);
    st32((c.r[29].w[0] + 176u), c.f[1]);
    st8((c.r[29].w[0] + 181u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    st8((c.r[29].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    st32((c.r[29].w[0] + 164u), 0u);
    st8((c.r[29].w[0] + 180u), static_cast<std::uint8_t>(0u));
    c.budget -= 54;
L_0032F088:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F094u);  if (depth < kMaxDepth) unit_008B(c, 259u, depth + 1u); else { c.pc = 0x0032EC28u; return; } if (c.pc != 0x0032F094u) [[unlikely]] return; }
L_0032F094:
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    st32((c.r[29].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 108u)));
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[18].w[0] + 96u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F0CCu);  if (depth < kMaxDepth) unit_00B6(c, 29u, depth + 1u); else { c.pc = 0x003D86C0u; return; } if (c.pc != 0x0032F0CCu) [[unlikely]] return; }
L_0032F0CC:
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st8((c.r[29].w[0] + 180u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 160u);
    set32(c.r[7], ld32((c.r[3].w[0] + 8208u)));
    set32(c.r[6], 0u + 36u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F0FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032F0FCu) [[unlikely]] return; }
L_0032F0FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 160u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0032F108:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F118u);  if (depth < kMaxDepth) unit_00A2(c, 104u, depth + 1u); else { c.pc = 0x003891A0u; return; } if (c.pc != 0x0032F118u) [[unlikely]] return; }
L_0032F118:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_0032F11C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F12C; } }
L_0032F124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F12Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0032F12Cu) [[unlikely]] return; }
L_0032F12C:
    set32(c.r[16], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[19], c.r[18].w[0] + 64u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F140u);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x0032F140u) [[unlikely]] return; }
L_0032F140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032F160; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032F160; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F160u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x0032F160u) [[unlikely]] return; }
L_0032F160:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 168u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F180u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032F180u) [[unlikely]] return; }
L_0032F180:
    set32(c.r[16], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[18], c.r[18].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F194u);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x0032F194u) [[unlikely]] return; }
L_0032F194:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032F1B4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032F1B4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F1B4u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x0032F1B4u) [[unlikely]] return; }
L_0032F1B4:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 180u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F1D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032F1D4u) [[unlikely]] return; }
L_0032F1D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], 0u + 112u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F1E8u);  if (depth < kMaxDepth) unit_00A5(c, 138u, depth + 1u); else { c.pc = 0x00395B98u; return; } if (c.pc != 0x0032F1E8u) [[unlikely]] return; }
L_0032F1E8:
    st32((c.r[17].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[2].w[0] - 11308u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F208u);  if (depth < kMaxDepth) unit_00A5(c, 62u, depth + 1u); else { c.pc = 0x00394BA0u; return; } if (c.pc != 0x0032F208u) [[unlikely]] return; }
L_0032F208:
    st32((c.r[17].w[0] + 88u), 0u);
    c.budget -= 1;
L_0032F20C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F21C; } }
L_0032F214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F21Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0032F21Cu) [[unlikely]] return; }
L_0032F21C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F22Cu);  if (depth < kMaxDepth) unit_008B(c, 337u, depth + 1u); else { c.pc = 0x0032FA68u; return; } if (c.pc != 0x0032F22Cu) [[unlikely]] return; }
L_0032F22C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F28C; } }
L_0032F238:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 36u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F264u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032F264u) [[unlikely]] return; }
L_0032F264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F124u | kUnwind; return; } goto L_0032F124; } }
L_0032F26C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F27Cu);  if (depth < kMaxDepth) unit_008B(c, 337u, depth + 1u); else { c.pc = 0x0032FA68u; return; } if (c.pc != 0x0032F27Cu) [[unlikely]] return; }
L_0032F27C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F214u | kUnwind; return; } goto L_0032F214; } }
L_0032F284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F28Cu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0032F28Cu) [[unlikely]] return; }
L_0032F28C:
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 272u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032F2B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032F34C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[5], c.r[16].w[0] + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F2E8u);  if (depth < kMaxDepth) unit_008C(c, 3u, depth + 1u); else { c.pc = 0x00330060u; return; } if (c.pc != 0x0032F2E8u) [[unlikely]] return; }
L_0032F2E8:
    c.f[1] = ld32((c.r[16].w[0] + 176u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 180u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 184u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 56u), c.f[1]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F328u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032F328u) [[unlikely]] return; }
L_0032F328:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0032F34C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032F350; } }
L_0032F34C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032F350:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032F368:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4984u)));
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0032F560; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[2].w[0] - 11912u);
    st32((c.r[2].w[0] - 11912u), 0u);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] + 4u);
    c.budget -= 6;
L_0032F3B8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032F3DC; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F3F4; } }
L_0032F3DC:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F3B8u | kUnwind; return; } goto L_0032F3B8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032F3F4:
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0032F560; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[20], c.r[2].w[0] - 11856u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 6;
L_0032F418:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F424u);  if (depth < kMaxDepth) unit_008B(c, 291u, depth + 1u); else { c.pc = 0x0032F2B0u; return; } if (c.pc != 0x0032F424u) [[unlikely]] return; }
L_0032F424:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032F508; } }
    set32(c.r[6], c.r[22].w[0] - 11912u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0032F468; } }
    st32((c.r[6].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F494; } }
L_0032F44C:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F558; } }
    c.budget -= 1;
L_0032F468:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032F494; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F468u | kUnwind; return; } goto L_0032F468; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_0032F494:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0032F508; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 548u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F4ACu);  if (depth < kMaxDepth) unit_00A3(c, 263u, depth + 1u); else { c.pc = 0x0038FB40u; return; } if (c.pc != 0x0032F4ACu) [[unlikely]] return; }
L_0032F4AC:
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032F4EC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0032F4EC; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F4ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032F4ECu) [[unlikely]] return; }
L_0032F4EC:
    set32(c.r[4], ld32((c.r[21].w[0] + 20748u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] - 8464u);
    set32(c.r[7], c.r[18].w[0] - 8488u);
    set32(c.r[8], 0u + 58u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F508u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0032F508u) [[unlikely]] return; }
L_0032F508:
    set32(c.r[6], ld32((c.r[17].w[0] - 11912u)));
    set32(c.r[5], c.r[17].w[0] - 11912u);
    c.r[2].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032F554; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
L_0032F530:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F44Cu | kUnwind; return; } goto L_0032F44C; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F530u | kUnwind; return; } goto L_0032F530; } }
L_0032F554:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032F558:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F418u | kUnwind; return; } goto L_0032F418; } }
L_0032F560:
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
L_0032F590:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 48u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st32((c.r[29].w[0] + 120u), c.f[21]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.f[21] = c.f[12];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], 0u + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[20] = c.r[1].w[0];
    c.f[4] = ld32((c.r[6].w[0] + 8u));
    c.f[5] = ld32((c.r[7].w[0] + 8u));
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[4] = fp::mul(c.f[4], c.f[20]);
    c.f[3] = ld32((c.r[6].w[0] + 4u));
    c.f[5] = fp::mul(c.f[5], c.f[20]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[2] = fp::mul(c.f[2], c.f[20]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[3] = fp::mul(c.f[3], c.f[20]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 8u), c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    st32((c.r[29].w[0]), c.f[2]);
    st32((c.r[29].w[0] + 4u), c.f[3]);
    set32(c.r[6], 0u + 30u);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[5]);
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 43;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F63Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032F63Cu) [[unlikely]] return; }
L_0032F63C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 2;
L_0032F644:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[21], c.f[20]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F65Cu);  if (depth < kMaxDepth) unit_00A9(c, 112u, depth + 1u); else { c.pc = 0x003A55B0u; return; } if (c.pc != 0x0032F65Cu) [[unlikely]] return; }
L_0032F65C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0032F660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F670; } }
L_0032F668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F670u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0032F670u) [[unlikely]] return; }
L_0032F670:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], c.r[7].w[0] - 8464u);
    set32(c.r[8], c.r[8].w[0] - 8496u);
    set32(c.r[5], 0u + 112u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 58u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F69Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0032F69Cu) [[unlikely]] return; }
L_0032F69C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0032F6A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F6B4u);  if (depth < kMaxDepth) unit_008B(c, 263u, depth + 1u); else { c.pc = 0x0032EFB0u; return; } if (c.pc != 0x0032F6B4u) [[unlikely]] return; }
L_0032F6B4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0032F6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F6D4; } }
L_0032F6C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F6C8u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0032F6C8u) [[unlikely]] return; }
L_0032F6C8:
    st32((c.r[4].w[0]), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F70C; } }
L_0032F6D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11912u);
    set32(c.r[3], c.r[2].w[0] + 4u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
L_0032F6E8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F6C8u | kUnwind; return; } goto L_0032F6C8; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F6E8u | kUnwind; return; } goto L_0032F6E8; } }
L_0032F70C:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032F748; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0032F748; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F748u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032F748u) [[unlikely]] return; }
L_0032F748:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F7C0; } }
L_0032F754:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 30u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F780u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032F780u) [[unlikely]] return; }
L_0032F780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F668u | kUnwind; return; } goto L_0032F668; } }
L_0032F788:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 8464u);
    set32(c.r[7], c.r[7].w[0] - 8488u);
    set32(c.r[8], 0u + 58u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F7B0u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0032F7B0u) [[unlikely]] return; }
L_0032F7B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F6C0u | kUnwind; return; } goto L_0032F6C0; } }
L_0032F7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F7C0u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0032F7C0u) [[unlikely]] return; }
L_0032F7C0:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 120u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032F7E8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    set32(c.r[5], c.r[2].w[0] - 11912u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[5].w[0] + 4u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[2].w[0] - 11912u), 0u);
    c.budget -= 18;
L_0032F830:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032F854; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F86C; } }
L_0032F854:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F830u | kUnwind; return; } goto L_0032F830; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032F86C:
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0032F9C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[17], c.r[2].w[0] - 11912u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[19], c.r[17].w[0] + 4u);
    set32(c.r[23], c.r[3].w[0] - 11856u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 10;
L_0032F8A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0032F8D8; } }
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F900; } }
L_0032F8BC:
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F9C0; } }
    c.budget -= 1;
L_0032F8D8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032F900; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F8D8u | kUnwind; return; } goto L_0032F8D8; } }
    st32((c.r[2].w[0]), 0u);
    c.budget -= 1;
L_0032F900:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0032F974; } }
    set32(c.r[4], ld32((c.r[23].w[0] + 548u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F918u);  if (depth < kMaxDepth) unit_00A3(c, 263u, depth + 1u); else { c.pc = 0x0038FB40u; return; } if (c.pc != 0x0032F918u) [[unlikely]] return; }
L_0032F918:
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032F958; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0032F958; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F958u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032F958u) [[unlikely]] return; }
L_0032F958:
    set32(c.r[4], ld32((c.r[22].w[0] + 20748u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[21].w[0] - 8464u);
    set32(c.r[7], c.r[20].w[0] - 8488u);
    set32(c.r[8], 0u + 58u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F974u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0032F974u) [[unlikely]] return; }
L_0032F974:
    set32(c.r[4], ld32((c.r[18].w[0] - 11912u)));
    set32(c.r[6], c.r[18].w[0] - 11912u);
    c.r[2].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032F9BC; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0032F998:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F8BCu | kUnwind; return; } goto L_0032F8BC; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F998u | kUnwind; return; } goto L_0032F998; } }
L_0032F9BC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032F9C0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F8A0u | kUnwind; return; } goto L_0032F8A0; } }
L_0032F9C8:
    set32(c.r[2], c.r[30].w[0] - 11912u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[2], c.r[2].w[0] + 40u);
    c.budget -= 4;
L_0032F9D8:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F9D8u | kUnwind; return; } goto L_0032F9D8; } }
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
L_0032FA28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032FA58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032FA58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 11912u);
    st32((c.r[2].w[0] - 11912u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FA58u);  if (depth < kMaxDepth) unit_008B(c, 339u, depth + 1u); else { c.pc = 0x0032FAB8u; return; } if (c.pc != 0x0032FA58u) [[unlikely]] return; }
L_0032FA58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032FA68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0032FAA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FAA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032FAA8u) [[unlikely]] return; }
L_0032FAA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032FAB8:
    set32(c.r[4], c.r[4].w[0] + 40u);
    set32(c.r[2], 0u + 9u);
    c.budget -= 2;
L_0032FAC0:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FAC0u | kUnwind; return; } goto L_0032FAC0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032FAE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11912u);
    set32(c.r[3], c.r[2].w[0] + 4u);
    c.budget -= 4;
L_0032FAF0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0032FB08; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032FB08:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FAF0u | kUnwind; return; } goto L_0032FAF0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032FB28:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 11308u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FB54u);  if (depth < kMaxDepth) unit_00A3(c, 263u, depth + 1u); else { c.pc = 0x0038FB40u; return; } if (c.pc != 0x0032FB54u) [[unlikely]] return; }
L_0032FB54:
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032FB94; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0032FB94; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FB94u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032FB94u) [[unlikely]] return; }
L_0032FB94:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032FBC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 8464u);
    set32(c.r[7], c.r[7].w[0] - 8488u);
    set32(c.r[8], 0u + 58u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FBC8u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0032FBC8u) [[unlikely]] return; }
L_0032FBC8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032FBE0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[10].d[0] + 0ull;
    st32((c.r[29].w[0] + 144u), c.f[20]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    c.f[20] = c.f[12];
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FC30u);  if (depth < kMaxDepth) unit_008C(c, 4u, depth + 1u); else { c.pc = 0x003300D8u; return; } if (c.pc != 0x0032FC30u) [[unlikely]] return; }
L_0032FC30:
    c.f[2] = ld32((c.r[16].w[0] + 56u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[3] = c.r[1].w[0];
    st32((c.r[29].w[0] + 12u), 0u);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    ld128((c.r[29].w[0]) & ~15u, c.r[3]);
    st32((c.r[29].w[0] + 12u), 0u);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    st32((c.r[29].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 4u), c.f[2]);
    ld128((c.r[29].w[0]) & ~15u, c.r[3]);
    st32((c.r[29].w[0] + 12u), 0u);
    st128((c.r[17].w[0] + 64u) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    st32((c.r[17].w[0] + 96u), c.f[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0]) & ~15u, c.r[3]);
    st32((c.r[17].w[0] + 100u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 104u), c.r[21].w[0]);
    st32((c.r[17].w[0] + 108u), c.r[22].w[0]);
    st128((c.r[17].w[0] + 80u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 53;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032FD08:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[6], c.r[2].w[0] - 11912u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0032FD40; } }
    st32((c.r[6].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032FD6C; } }
    c.budget -= 1;
L_0032FD40:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032FD6C; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FD40u | kUnwind; return; } goto L_0032FD40; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_0032FD6C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0032FDF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[2].w[0] - 11308u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FD88u);  if (depth < kMaxDepth) unit_00A3(c, 263u, depth + 1u); else { c.pc = 0x0038FB40u; return; } if (c.pc != 0x0032FD88u) [[unlikely]] return; }
L_0032FD88:
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032FDC8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0032FDC8; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FDC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032FDC8u) [[unlikely]] return; }
L_0032FDC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 8464u);
    set32(c.r[7], c.r[7].w[0] - 8488u);
    set32(c.r[8], 0u + 58u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FDF0u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0032FDF0u) [[unlikely]] return; }
L_0032FDF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032FE08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FE20u);  if (depth < kMaxDepth) unit_008B(c, 335u, depth + 1u); else { c.pc = 0x0032FA28u; return; } if (c.pc != 0x0032FE20u) [[unlikely]] return; }
L_0032FE20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032FE30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_008C(c, 2u, depth); } }
    set32(c.r[6], ld32((c.r[6].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_008C(c, 2u, depth); } }
    set32(c.r[2], c.r[6].w[0] + 48u);
    set32(c.r[17], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], 0u + 111u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0032FEA0; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 48u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0032FE80:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[8].d[0];  if (t) { goto L_0032FF2C; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FE80u | kUnwind; return; } goto L_0032FE80; } }
L_0032FEA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032FEA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032FF50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 11252u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_008C(c, 2u, depth); } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[9].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[8], 0u + 111u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0032FF08; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 48u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_0032FEE0:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[8].d[0];  if (t) { goto L_0032FF20; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FEE0u | kUnwind; return; } goto L_0032FEE0; } }
L_0032FF08:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032FF0C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[9].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FF18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032FF18u) [[unlikely]] return; }
L_0032FF18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_008C(c, 2u, depth); } }
L_0032FF20:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FF0Cu | kUnwind; return; } goto L_0032FF0C; } }
L_0032FF2C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FEA4u | kUnwind; return; } goto L_0032FEA4; } }
L_0032FF38:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032FF94; } }
L_0032FF44:
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032FFE8; } }
L_0032FF50:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[8], 0u + 100u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0032FF90; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 48u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_0032FF70:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FF38u | kUnwind; return; } goto L_0032FF38; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FF70u | kUnwind; return; } goto L_0032FF70; } }
L_0032FF90:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032FF94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_008C(c, 2u, depth); } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[7], 0u + 100u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0032FFE4; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 48u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
L_0032FFC0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FF44u | kUnwind; return; } goto L_0032FF44; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FFC0u | kUnwind; return; } goto L_0032FFC0; } }
L_0032FFE4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032FFE8:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00330000u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00330000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_008C(c, 1u, depth);
}

}
