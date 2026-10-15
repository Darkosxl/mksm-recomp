#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0066[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0,
    0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 28, 0,
    0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71,
    0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0,
    0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0,
    0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0,
    0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 178,
    0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0,
    0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0,
    0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0,
    0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0,
    0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277,
    0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0,
    0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346,
    0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361,
    362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 366, 0, 0, 0,
    0, 367, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0066(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00298000;
    case 2u: goto L_00298004;
    case 3u: goto L_00298024;
    case 4u: goto L_0029803C;
    case 5u: goto L_00298060;
    case 6u: goto L_00298074;
    case 7u: goto L_00298088;
    case 8u: goto L_00298098;
    case 9u: goto L_002980A0;
    case 10u: goto L_002980A8;
    case 11u: goto L_002980BC;
    case 12u: goto L_002980D0;
    case 13u: goto L_00298104;
    case 14u: goto L_00298118;
    case 15u: goto L_0029814C;
    case 16u: goto L_00298188;
    case 17u: goto L_002981B0;
    case 18u: goto L_002981F8;
    case 19u: goto L_00298220;
    case 20u: goto L_00298248;
    case 21u: goto L_002982A4;
    case 22u: goto L_002982C8;
    case 23u: goto L_00298300;
    case 24u: goto L_00298328;
    case 25u: goto L_0029834C;
    case 26u: goto L_00298358;
    case 27u: goto L_0029836C;
    case 28u: goto L_00298378;
    case 29u: goto L_00298388;
    case 30u: goto L_002983C8;
    case 31u: goto L_002983F8;
    case 32u: goto L_00298460;
    case 33u: goto L_00298470;
    case 34u: goto L_002984B0;
    case 35u: goto L_002984C4;
    case 36u: goto L_00298510;
    case 37u: goto L_00298530;
    case 38u: goto L_0029853C;
    case 39u: goto L_0029854C;
    case 40u: goto L_00298558;
    case 41u: goto L_00298568;
    case 42u: goto L_00298598;
    case 43u: goto L_002985D8;
    case 44u: goto L_0029860C;
    case 45u: goto L_00298628;
    case 46u: goto L_00298650;
    case 47u: goto L_0029866C;
    case 48u: goto L_00298680;
    case 49u: goto L_002986A8;
    case 50u: goto L_002986E0;
    case 51u: goto L_00298704;
    case 52u: goto L_00298718;
    case 53u: goto L_00298750;
    case 54u: goto L_002987A0;
    case 55u: goto L_002987D8;
    case 56u: goto L_00298810;
    case 57u: goto L_00298848;
    case 58u: goto L_00298880;
    case 59u: goto L_002988B8;
    case 60u: goto L_00298900;
    case 61u: goto L_00298930;
    case 62u: goto L_00298950;
    case 63u: goto L_00298960;
    case 64u: goto L_00298994;
    case 65u: goto L_002989B8;
    case 66u: goto L_002989C8;
    case 67u: goto L_002989E0;
    case 68u: goto L_00298A18;
    case 69u: goto L_00298A50;
    case 70u: goto L_00298A60;
    case 71u: goto L_00298A7C;
    case 72u: goto L_00298AA0;
    case 73u: goto L_00298AB8;
    case 74u: goto L_00298AC8;
    case 75u: goto L_00298AFC;
    case 76u: goto L_00298B10;
    case 77u: goto L_00298B40;
    case 78u: goto L_00298B50;
    case 79u: goto L_00298B84;
    case 80u: goto L_00298B98;
    case 81u: goto L_00298BC8;
    case 82u: goto L_00298BD8;
    case 83u: goto L_00298BF0;
    case 84u: goto L_00298C3C;
    case 85u: goto L_00298C50;
    case 86u: goto L_00298C60;
    case 87u: goto L_00298C70;
    case 88u: goto L_00298C88;
    case 89u: goto L_00298CA0;
    case 90u: goto L_00298CC0;
    case 91u: goto L_00298CD0;
    case 92u: goto L_00298D24;
    case 93u: goto L_00298D30;
    case 94u: goto L_00298D3C;
    case 95u: goto L_00298D60;
    case 96u: goto L_00298D7C;
    case 97u: goto L_00298D90;
    case 98u: goto L_00298DA8;
    case 99u: goto L_00298DC0;
    case 100u: goto L_00298DD8;
    case 101u: goto L_00298DF0;
    case 102u: goto L_00298E48;
    case 103u: goto L_00298E60;
    case 104u: goto L_00298E68;
    case 105u: goto L_00298E80;
    case 106u: goto L_00298ECC;
    case 107u: goto L_00298EF4;
    case 108u: goto L_00298F1C;
    case 109u: goto L_00298F50;
    case 110u: goto L_00298F84;
    case 111u: goto L_00298FB8;
    case 112u: goto L_00299000;
    case 113u: goto L_00299014;
    case 114u: goto L_0029902C;
    case 115u: goto L_00299048;
    case 116u: goto L_0029909C;
    case 117u: goto L_002990B8;
    case 118u: goto L_002990C8;
    case 119u: goto L_002990D8;
    case 120u: goto L_002990F0;
    case 121u: goto L_00299104;
    case 122u: goto L_00299198;
    case 123u: goto L_002991C8;
    case 124u: goto L_00299208;
    case 125u: goto L_0029924C;
    case 126u: goto L_00299270;
    case 127u: goto L_002992A0;
    case 128u: goto L_0029932C;
    case 129u: goto L_0029935C;
    case 130u: goto L_002993D0;
    case 131u: goto L_002993F8;
    case 132u: goto L_00299458;
    case 133u: goto L_00299480;
    case 134u: goto L_002994B0;
    case 135u: goto L_002994F4;
    case 136u: goto L_00299508;
    case 137u: goto L_00299564;
    case 138u: goto L_0029957C;
    case 139u: goto L_002995BC;
    case 140u: goto L_002995D4;
    case 141u: goto L_00299614;
    case 142u: goto L_0029962C;
    case 143u: goto L_0029966C;
    case 144u: goto L_00299684;
    case 145u: goto L_00299694;
    case 146u: goto L_002996AC;
    case 147u: goto L_002996B8;
    case 148u: goto L_00299708;
    case 149u: goto L_00299764;
    case 150u: goto L_00299784;
    case 151u: goto L_00299790;
    case 152u: goto L_002997C8;
    case 153u: goto L_00299818;
    case 154u: goto L_00299838;
    case 155u: goto L_00299888;
    case 156u: goto L_002998A4;
    case 157u: goto L_002998BC;
    case 158u: goto L_002998D8;
    case 159u: goto L_00299920;
    case 160u: goto L_00299940;
    case 161u: goto L_00299990;
    case 162u: goto L_002999E0;
    case 163u: goto L_00299A44;
    case 164u: goto L_00299A58;
    case 165u: goto L_00299A84;
    case 166u: goto L_00299AB8;
    case 167u: goto L_00299AD0;
    case 168u: goto L_00299B10;
    case 169u: goto L_00299B28;
    case 170u: goto L_00299B68;
    case 171u: goto L_00299B80;
    case 172u: goto L_00299BC0;
    case 173u: goto L_00299BD8;
    case 174u: goto L_00299BFC;
    case 175u: goto L_00299C28;
    case 176u: goto L_00299C60;
    case 177u: goto L_00299C68;
    case 178u: goto L_00299C7C;
    case 179u: goto L_00299C98;
    case 180u: goto L_00299CB0;
    case 181u: goto L_00299CD0;
    case 182u: goto L_00299D08;
    case 183u: goto L_00299D60;
    case 184u: goto L_00299D80;
    case 185u: goto L_00299DA4;
    case 186u: goto L_00299DBC;
    case 187u: goto L_00299E00;
    case 188u: goto L_00299E4C;
    case 189u: goto L_00299E54;
    case 190u: goto L_00299E68;
    case 191u: goto L_00299E98;
    case 192u: goto L_00299EB4;
    case 193u: goto L_00299F04;
    case 194u: goto L_00299F24;
    case 195u: goto L_00299F48;
    case 196u: goto L_00299F60;
    case 197u: goto L_00299FB0;
    case 198u: goto L_0029A008;
    case 199u: goto L_0029A058;
    case 200u: goto L_0029A08C;
    case 201u: goto L_0029A0B0;
    case 202u: goto L_0029A0C8;
    case 203u: goto L_0029A10C;
    case 204u: goto L_0029A158;
    case 205u: goto L_0029A188;
    case 206u: goto L_0029A1A0;
    case 207u: goto L_0029A1B8;
    case 208u: goto L_0029A1C8;
    case 209u: goto L_0029A1D8;
    case 210u: goto L_0029A1F0;
    case 211u: goto L_0029A220;
    case 212u: goto L_0029A238;
    case 213u: goto L_0029A248;
    case 214u: goto L_0029A258;
    case 215u: goto L_0029A268;
    case 216u: goto L_0029A278;
    case 217u: goto L_0029A2B8;
    case 218u: goto L_0029A2E8;
    case 219u: goto L_0029A350;
    case 220u: goto L_0029A360;
    case 221u: goto L_0029A3A0;
    case 222u: goto L_0029A3C0;
    case 223u: goto L_0029A3EC;
    case 224u: goto L_0029A3FC;
    case 225u: goto L_0029A430;
    case 226u: goto L_0029A478;
    case 227u: goto L_0029A498;
    case 228u: goto L_0029A4C4;
    case 229u: goto L_0029A4D8;
    case 230u: goto L_0029A510;
    case 231u: goto L_0029A528;
    case 232u: goto L_0029A558;
    case 233u: goto L_0029A578;
    case 234u: goto L_0029A58C;
    case 235u: goto L_0029A59C;
    case 236u: goto L_0029A5A8;
    case 237u: goto L_0029A5B8;
    case 238u: goto L_0029A5D0;
    case 239u: goto L_0029A610;
    case 240u: goto L_0029A620;
    case 241u: goto L_0029A678;
    case 242u: goto L_0029A69C;
    case 243u: goto L_0029A708;
    case 244u: goto L_0029A734;
    case 245u: goto L_0029A760;
    case 246u: goto L_0029A798;
    case 247u: goto L_0029A804;
    case 248u: goto L_0029A834;
    case 249u: goto L_0029A850;
    case 250u: goto L_0029A870;
    case 251u: goto L_0029A8A8;
    case 252u: goto L_0029A914;
    case 253u: goto L_0029A944;
    case 254u: goto L_0029A960;
    case 255u: goto L_0029A980;
    case 256u: goto L_0029A9B8;
    case 257u: goto L_0029AA24;
    case 258u: goto L_0029AA5C;
    case 259u: goto L_0029AA80;
    case 260u: goto L_0029AAA4;
    case 261u: goto L_0029AAB8;
    case 262u: goto L_0029AAE0;
    case 263u: goto L_0029AB08;
    case 264u: goto L_0029AB20;
    case 265u: goto L_0029AB30;
    case 266u: goto L_0029AB40;
    case 267u: goto L_0029AB50;
    case 268u: goto L_0029AB98;
    case 269u: goto L_0029ABD4;
    case 270u: goto L_0029ABF8;
    case 271u: goto L_0029AC10;
    case 272u: goto L_0029AC50;
    case 273u: goto L_0029AC70;
    case 274u: goto L_0029AC98;
    case 275u: goto L_0029ACB8;
    case 276u: goto L_0029ACD8;
    case 277u: goto L_0029ACFC;
    case 278u: goto L_0029AD18;
    case 279u: goto L_0029AD50;
    case 280u: goto L_0029AD80;
    case 281u: goto L_0029ADB0;
    case 282u: goto L_0029ADC0;
    case 283u: goto L_0029ADD8;
    case 284u: goto L_0029AE08;
    case 285u: goto L_0029AE38;
    case 286u: goto L_0029AE58;
    case 287u: goto L_0029AE90;
    case 288u: goto L_0029AEA8;
    case 289u: goto L_0029AEB0;
    case 290u: goto L_0029AED0;
    case 291u: goto L_0029AF08;
    case 292u: goto L_0029AF28;
    case 293u: goto L_0029AF38;
    case 294u: goto L_0029AF40;
    case 295u: goto L_0029AF60;
    case 296u: goto L_0029AF90;
    case 297u: goto L_0029AFC8;
    case 298u: goto L_0029AFD8;
    case 299u: goto L_0029AFF8;
    case 300u: goto L_0029B064;
    case 301u: goto L_0029B090;
    case 302u: goto L_0029B0D4;
    case 303u: goto L_0029B0F8;
    case 304u: goto L_0029B120;
    case 305u: goto L_0029B1B0;
    case 306u: goto L_0029B1D8;
    case 307u: goto L_0029B218;
    case 308u: goto L_0029B220;
    case 309u: goto L_0029B250;
    case 310u: goto L_0029B2E8;
    case 311u: goto L_0029B344;
    case 312u: goto L_0029B3D8;
    case 313u: goto L_0029B430;
    case 314u: goto L_0029B498;
    case 315u: goto L_0029B4A4;
    case 316u: goto L_0029B4C8;
    case 317u: goto L_0029B4D8;
    case 318u: goto L_0029B504;
    case 319u: goto L_0029B528;
    case 320u: goto L_0029B598;
    case 321u: goto L_0029B5E4;
    case 322u: goto L_0029B614;
    case 323u: goto L_0029B664;
    case 324u: goto L_0029B6D0;
    case 325u: goto L_0029B72C;
    case 326u: goto L_0029B748;
    case 327u: goto L_0029B778;
    case 328u: goto L_0029B7E8;
    case 329u: goto L_0029B820;
    case 330u: goto L_0029B858;
    case 331u: goto L_0029B880;
    case 332u: goto L_0029B8E0;
    case 333u: goto L_0029B978;
    case 334u: goto L_0029B9A8;
    case 335u: goto L_0029BA40;
    case 336u: goto L_0029BA78;
    case 337u: goto L_0029BAE0;
    case 338u: goto L_0029BB04;
    case 339u: goto L_0029BB4C;
    case 340u: goto L_0029BB90;
    case 341u: goto L_0029BBA8;
    case 342u: goto L_0029BBCC;
    case 343u: goto L_0029BC0C;
    case 344u: goto L_0029BC2C;
    case 345u: goto L_0029BC64;
    case 346u: goto L_0029BC7C;
    case 347u: goto L_0029BC88;
    case 348u: goto L_0029BC98;
    case 349u: goto L_0029BCBC;
    case 350u: goto L_0029BD10;
    case 351u: goto L_0029BD40;
    case 352u: goto L_0029BDA0;
    case 353u: goto L_0029BDF8;
    case 354u: goto L_0029BE38;
    case 355u: goto L_0029BE90;
    case 356u: goto L_0029BEA4;
    case 357u: goto L_0029BEAC;
    case 358u: goto L_0029BEBC;
    case 359u: goto L_0029BEC8;
    case 360u: goto L_0029BED8;
    case 361u: goto L_0029BEFC;
    case 362u: goto L_0029BF00;
    case 363u: goto L_0029BF10;
    case 364u: goto L_0029BF58;
    case 365u: goto L_0029BF60;
    case 366u: goto L_0029BF70;
    case 367u: goto L_0029BF84;
    case 368u: goto L_0029BF8C;
    case 369u: goto L_0029BF9C;
    case 370u: goto L_0029BFB0;
    case 371u: goto L_0029BFBC;
    case 372u: goto L_0029BFD8;
    default: bad_entry(c, 0x00298000u); return;
    }
L_00298000:
    c.budget -= 1;
L_00298004:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 10848u);
    set32(c.r[2], c.r[2].w[0] + 28440u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298024u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00298024u) [[unlikely]] return; }
L_00298024:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 28224u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029803Cu);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x0029803Cu) [[unlikely]] return; }
L_0029803C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298074u);  if (depth < kMaxDepth) unit_0067(c, 108u, depth + 1u); else { c.pc = 0x0029D178u; return; } if (c.pc != 0x00298074u) [[unlikely]] return; }
L_00298074:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298088:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298098:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002980A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002980A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002980BCu);  if (depth < kMaxDepth) unit_0067(c, 108u, depth + 1u); else { c.pc = 0x0029D178u; return; } if (c.pc != 0x002980BCu) [[unlikely]] return; }
L_002980BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002980D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298104u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x00298104u) [[unlikely]] return; }
L_00298104:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00298160; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_00298118:
    set32(c.r[2], ld32((c.r[5].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00298140; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 234u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00298140; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 920u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[17].d[0];
    c.budget -= 3;
L_00298140:
    set32(c.r[4], c.r[19].w[0] + 9872u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029814Cu);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0029814Cu) [[unlikely]] return; }
L_0029814C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00298160; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00298118u | kUnwind; return; } goto L_00298118; } }
L_00298160:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298188:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002981E8; } }
L_002981B0:
    set32(c.r[2], ld32((c.r[5].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002981E8; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002981E8; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002981E8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298208; } }
L_002981E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002981F8u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x002981F8u) [[unlikely]] return; }
L_002981F8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002981B0u | kUnwind; return; } goto L_002981B0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00298208:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298294; } }
L_00298248:
    set32(c.r[2], ld32((c.r[5].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00298294; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00298294; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 234u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00298294; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0] + 592u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002982B0; } }
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002982B0; } }
L_00298294:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002982A4u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x002982A4u) [[unlikely]] return; }
L_002982A4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00298248u | kUnwind; return; } goto L_00298248; } }
L_002982B0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002982C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 13248u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298300u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x00298300u) [[unlikely]] return; }
L_00298300:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st32((c.r[2].w[0] + 232u), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298328:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00298360; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029834Cu);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0029834Cu) [[unlikely]] return; }
L_0029834C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298358u);  if (depth < kMaxDepth) unit_0066(c, 216u, depth + 1u); else { c.pc = 0x0029A278u; return; } if (c.pc != 0x00298358u) [[unlikely]] return; }
L_00298358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298378; } }
L_00298360:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029836Cu);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0029836Cu) [[unlikely]] return; }
L_0029836C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298378u);  if (depth < kMaxDepth) unit_0066(c, 219u, depth + 1u); else { c.pc = 0x0029A350u; return; } if (c.pc != 0x00298378u) [[unlikely]] return; }
L_00298378:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298388:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 13248u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002983E4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002983C8u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002983C8u) [[unlikely]] return; }
L_002983C8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002983E4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 224u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 496u), c.r[3].w[0]);
    c.budget -= 4;
L_002983E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002983F8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002984E8; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[6], 0u + 120u);
    set32(c.r[5], 0u + 2752u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] - 19064u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[5].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[20], ld32((c.r[2].w[0] + 20u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298460u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00298460u) [[unlikely]] return; }
L_00298460:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298470u);  if (depth < kMaxDepth) unit_0098(c, 226u, depth + 1u); else { c.pc = 0x00362AF0u; return; } if (c.pc != 0x00298470u) [[unlikely]] return; }
L_00298470:
    c.f[2] = c.r[18].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = c.r[19].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = c.r[20].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002984B0u);  if (depth < kMaxDepth) unit_0098(c, 257u, depth + 1u); else { c.pc = 0x00362F98u; return; } if (c.pc != 0x002984B0u) [[unlikely]] return; }
L_002984B0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002984C4u);  if (depth < kMaxDepth) unit_008A(c, 136u, depth + 1u); else { c.pc = 0x0032A0B8u; return; } if (c.pc != 0x002984C4u) [[unlikely]] return; }
L_002984C4:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[3] = fp::cvt_w_s(c.f[0]);
    st32((c.r[16].w[0] + 24u), c.f[3]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.budget -= 9;
L_002984E8:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00298544; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298530u);  if (depth < kMaxDepth) unit_0036(c, 198u, depth + 1u); else { c.pc = 0x001D98C8u; return; } if (c.pc != 0x00298530u) [[unlikely]] return; }
L_00298530:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029853Cu);  if (depth < kMaxDepth) unit_0066(c, 219u, depth + 1u); else { c.pc = 0x0029A350u; return; } if (c.pc != 0x0029853Cu) [[unlikely]] return; }
L_0029853C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298558; } }
L_00298544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029854Cu);  if (depth < kMaxDepth) unit_0036(c, 198u, depth + 1u); else { c.pc = 0x001D98C8u; return; } if (c.pc != 0x0029854Cu) [[unlikely]] return; }
L_0029854C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298558u);  if (depth < kMaxDepth) unit_0066(c, 216u, depth + 1u); else { c.pc = 0x0029A278u; return; } if (c.pc != 0x00298558u) [[unlikely]] return; }
L_00298558:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298568:
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 13248u);
    set32(c.r[3], c.r[3].w[0] + 27456u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 7694u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298598:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 13248u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002985D8u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002985D8u) [[unlikely]] return; }
L_002985D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00298610; } }
    set32(c.r[7], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00298610; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 128u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029860Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029860Cu) [[unlikely]] return; }
L_0029860C:
    st32((c.r[16].w[0] + 7700u), 0u);
    c.budget -= 1;
L_00298610:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298628:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298670; } }
    c.budget -= 1;
L_00298650:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029866C; } }
    set32(c.r[4], c.r[17].w[0] + 9872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029866Cu);  if (depth < kMaxDepth) unit_0062(c, 126u, depth + 1u); else { c.pc = 0x0028A0A8u; return; } if (c.pc != 0x0029866Cu) [[unlikely]] return; }
L_0029866C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00298670:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298680u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x00298680u) [[unlikely]] return; }
L_00298680:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00298650u | kUnwind; return; } goto L_00298650; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002986A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 13248u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[3].w[0] + 9872u);
    set32(c.r[5], c.r[5].w[0] + 27456u);
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002986E0u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002986E0u) [[unlikely]] return; }
L_002986E0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00298704; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00298704; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298704u);  if (depth < kMaxDepth) unit_0062(c, 126u, depth + 1u); else { c.pc = 0x0028A0A8u; return; } if (c.pc != 0x00298704u) [[unlikely]] return; }
L_00298704:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298718:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 13248u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298750u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x00298750u) [[unlikely]] return; }
L_00298750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00298788; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00298788; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00298788; } }
    c.r[2].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st64((c.r[4].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 5;
L_00298788:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002987A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 13248u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002987D8u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002987D8u) [[unlikely]] return; }
L_002987D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002987F8; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002987F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 544u), c.r[3].w[0]);
    c.budget -= 3;
L_002987F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 13248u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298848u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x00298848u) [[unlikely]] return; }
L_00298848:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00298868; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00298868; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 540u), c.r[3].w[0]);
    c.budget -= 3;
L_00298868:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 13248u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002988B8u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002988B8u) [[unlikely]] return; }
L_002988B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002988EC; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002988EC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002988EC; } }
    c.r[2].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 4;
L_002988EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298900:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 13248u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], c.r[5].w[0] + 27456u);
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + 9872u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298930u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x00298930u) [[unlikely]] return; }
L_00298930:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00298950; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00298950; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298950u);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x00298950u) [[unlikely]] return; }
L_00298950:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 13248u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 27456u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + 9872u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298994u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x00298994u) [[unlikely]] return; }
L_00298994:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002989C8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002989C8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002989B8u);  if (depth < kMaxDepth) unit_0066(c, 99u, depth + 1u); else { c.pc = 0x00298DC0u; return; } if (c.pc != 0x002989B8u) [[unlikely]] return; }
L_002989B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002989C8u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x002989C8u) [[unlikely]] return; }
L_002989C8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002989E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 13248u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298A18u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x00298A18u) [[unlikely]] return; }
L_00298A18:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00298A3C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00298A3C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st16((c.r[4].w[0] + 962u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00298A3C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298A50:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298A60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298A7Cu);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x00298A7Cu) [[unlikely]] return; }
L_00298A7C:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 36u), c.r[4].w[0]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298AA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298AB8u);  if (depth < kMaxDepth) unit_0065(c, 375u, depth + 1u); else { c.pc = 0x00297D18u; return; } if (c.pc != 0x00298AB8u) [[unlikely]] return; }
L_00298AB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298AC8:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] + 29352u);
    set32(c.r[8], c.r[8].w[0] + 29384u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 21u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298AFCu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00298AFCu) [[unlikely]] return; }
L_00298AFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298B10:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 29352u);
    set32(c.r[7], c.r[7].w[0] + 29392u);
    set32(c.r[8], 0u + 21u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298B40u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x00298B40u) [[unlikely]] return; }
L_00298B40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298B50:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] + 29352u);
    set32(c.r[8], c.r[8].w[0] + 29400u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 21u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298B84u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00298B84u) [[unlikely]] return; }
L_00298B84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298B98:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 29352u);
    set32(c.r[7], c.r[7].w[0] + 29408u);
    set32(c.r[8], 0u + 21u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298BC8u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x00298BC8u) [[unlikely]] return; }
L_00298BC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298BD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 29416u);
    st32((c.r[4].w[0] + 128u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298BF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 29416u);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st32((c.r[3].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00298C3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 29352u);
    set32(c.r[7], c.r[7].w[0] + 29392u);
    set32(c.r[8], 0u + 21u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298C3Cu);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x00298C3Cu) [[unlikely]] return; }
L_00298C3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298C50:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298C60:
    st32((c.r[4].w[0] + 64u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298C70:
    c.r[2].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st64((c.r[4].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298C88:
    c.r[2].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[3].d[0] = ~(0ull | c.r[5].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st64((c.r[4].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298CA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00298CC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00298CC0u) [[unlikely]] return; }
L_00298CC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298CD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st64((c.r[16].w[0] + 8u), 0ull);
    set32(c.r[4], c.r[16].w[0] + 80u);
    st64((c.r[16].w[0] + 16u), 0ull);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st64((c.r[16].w[0] + 24u), c.r[3].d[0]);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298D24u);  if (depth < kMaxDepth) unit_008A(c, 115u, depth + 1u); else { c.pc = 0x00329CE8u; return; } if (c.pc != 0x00298D24u) [[unlikely]] return; }
L_00298D24:
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298D30u);  if (depth < kMaxDepth) unit_008A(c, 115u, depth + 1u); else { c.pc = 0x00329CE8u; return; } if (c.pc != 0x00298D30u) [[unlikely]] return; }
L_00298D30:
    set32(c.r[4], c.r[16].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298D3Cu);  if (depth < kMaxDepth) unit_008A(c, 115u, depth + 1u); else { c.pc = 0x00329CE8u; return; } if (c.pc != 0x00298D3Cu) [[unlikely]] return; }
L_00298D3C:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298D60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00298D7C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00298D7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00298D7Cu) [[unlikely]] return; }
L_00298D7C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298D90:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 8u));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298DA8:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298DC0:
    c.r[2].d[0] = ld64((c.r[4].w[0] + 16u));
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st64((c.r[4].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298DD8:
    c.r[2].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[5].d[0] = ~(0ull | c.r[5].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    st64((c.r[4].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298DF0:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x19000000u);
    c.r[4].d[0] = c.r[4].d[0] | 24576ull;
    c.r[2].d[0] = ld64((c.r[6].w[0] + 32u));
    st64((c.r[6].w[0] + 24u), c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00298E28; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = ld64((c.r[6].w[0] + 16u));
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st64((c.r[6].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 5;
L_00298E28:
    c.r[2].d[0] = ld64((c.r[6].w[0] + 16u));
    st32((c.r[6].w[0] + 32u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st32((c.r[6].w[0] + 52u), 0u);
    st64((c.r[6].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298E48:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[4].w[0] + 44u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298E60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298E68:
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298E80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 29808u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[16].w[0] + 2504u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00298ECC; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 128u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00298ECCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00298ECCu) [[unlikely]] return; }
L_00298ECC:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00298EF4; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 128u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00298EF4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00298EF4u) [[unlikely]] return; }
L_00298EF4:
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00298F1C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 128u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00298F1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00298F1Cu) [[unlikely]] return; }
L_00298F1C:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00298F50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] + 29728u);
    set32(c.r[7], c.r[7].w[0] + 29768u);
    set32(c.r[8], 0u + 103u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298F50u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x00298F50u) [[unlikely]] return; }
L_00298F50:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00298F84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] + 29728u);
    set32(c.r[7], c.r[7].w[0] + 29768u);
    set32(c.r[8], 0u + 106u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298F84u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x00298F84u) [[unlikely]] return; }
L_00298F84:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00298FB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[6], c.r[6].w[0] + 29728u);
    set32(c.r[7], c.r[7].w[0] + 29768u);
    set32(c.r[8], 0u + 109u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298FB8u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x00298FB8u) [[unlikely]] return; }
L_00298FB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00299000; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 10368u);
    set32(c.r[8], ld32((c.r[2].w[0] + 10368u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[7].w[0] + 20744u)));
    set32(c.r[6], c.r[6].w[0] + 29728u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[7].w[0] + 29768u);
    set32(c.r[8], 0u + 112u);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299000u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x00299000u) [[unlikely]] return; }
L_00299000:
    set32(c.r[4], ld32((c.r[16].w[0] + 776u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00299014; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299014u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x00299014u) [[unlikely]] return; }
L_00299014:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029902C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029902Cu);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x0029902Cu) [[unlikely]] return; }
L_0029902C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00299048:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 856u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029911C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23016u)));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029911C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029909Cu);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x0029909Cu) [[unlikely]] return; }
L_0029909C:
    set32(c.r[3], ld32((c.r[2].w[0] + 212u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002990B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002990B8u) [[unlikely]] return; }
L_002990B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[18], c.r[29].w[0] + 16u);
    set32(c.r[21], c.r[2].w[0] + 13040u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_002990C8:
    set32(c.r[2], c.r[3].w[0] << 7);
    set32(c.r[19], c.r[3].w[0] + 1u);
    set32(c.r[16], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[17], 0u + 7u);
    c.budget -= 4;
L_002990D8:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002990F0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002990F0u) [[unlikely]] return; }
L_002990F0:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299104u);  if (depth < kMaxDepth) unit_0073(c, 203u, depth + 1u); else { c.pc = 0x002CEEF8u; return; } if (c.pc != 0x00299104u) [[unlikely]] return; }
L_00299104:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002990D8u | kUnwind; return; } goto L_002990D8; } }
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002990C8u | kUnwind; return; } goto L_002990C8; } }
L_0029911C:
    set32(c.r[2], ld32((c.r[20].w[0] + 828u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002991DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 25932u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00299160; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4984u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00299160; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 13356u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00299164; } }
L_00299160:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00299164:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002991DC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[3].w[0] + 10368u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 784u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002991DC; } }
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_00299198:
    set32(c.r[3], ld32((c.r[20].w[0] + 776u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002991C8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002991C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002991C8u) [[unlikely]] return; }
L_002991C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299198u | kUnwind; return; } goto L_00299198; } }
L_002991DC:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00299208:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    set32(c.r[5], 0u + 624u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] + 29624u);
    set32(c.r[8], c.r[8].w[0] + 29544u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 31u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029924Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0029924Cu) [[unlikely]] return; }
L_0029924C:
    set32(c.r[5], c.r[2].w[0] + 16u);
    set32(c.r[4], c.r[16].w[0] - 1u);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00299288; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 10704u);
    c.budget -= 3;
L_00299270:
    st32((c.r[3].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 624u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299270u | kUnwind; return; } goto L_00299270; } }
L_00299288:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002992A0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029935C; } }
    set32(c.r[18], c.r[21].w[0] + 10368u);
    set32(c.r[5], ld32((c.r[21].w[0] + 10368u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[7].w[0] + 29728u);
    set32(c.r[8], c.r[8].w[0] + 29784u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 210u);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029932Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0029932Cu) [[unlikely]] return; }
L_0029932C:
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029935C; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 10368u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] << 2);
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029935Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0029935Cu) [[unlikely]] return; }
L_0029935C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[17].w[0] + 1228u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    set32(c.r[3], c.r[17].w[0] + 864u);
    set32(c.r[30], c.r[17].w[0] + 1778u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[22], c.r[17].w[0] + 2320u);
    set32(c.r[3], c.r[17].w[0] + 1592u);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], c.r[17].w[0] + 1774u);
    st32((c.r[29].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], c.r[17].w[0] + 1776u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00299418; } }
    set32(c.r[5], 0u + 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[7].w[0] + 29592u);
    set32(c.r[8], c.r[8].w[0] + 29544u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 39u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002993D0u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x002993D0u) [[unlikely]] return; }
L_002993D0:
    set32(c.r[5], c.r[2].w[0] + 16u);
    set32(c.r[4], c.r[19].w[0] - 1u);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00299414; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 30200u);
    c.budget -= 4;
L_002993F8:
    st32((c.r[3].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[3].w[0] + 148u), 0u);
    st32((c.r[3].w[0] + 152u), 0u);
    set32(c.r[3], c.r[3].w[0] + 224u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002993F8u | kUnwind; return; } goto L_002993F8; } }
L_00299414:
    st32((c.r[17].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_00299418:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002994CC; } }
    set32(c.r[5], 0u + 592u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[7].w[0] + 29560u);
    set32(c.r[8], c.r[8].w[0] + 29544u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 44u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299458u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00299458u) [[unlikely]] return; }
L_00299458:
    set32(c.r[5], c.r[2].w[0] + 16u);
    set32(c.r[4], c.r[16].w[0] - 1u);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00299498; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 27720u);
    c.budget -= 4;
L_00299480:
    st32((c.r[3].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 592u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299480u | kUnwind; return; } goto L_00299480; } }
L_00299498:
    st32((c.r[17].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_002994CC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_002994B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 188u), 0u);
    set32(c.r[4], c.r[4].w[0] + 592u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002994B0u | kUnwind; return; } goto L_002994B0; } }
L_002994CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00299524; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 2504u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002994F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002994F4u) [[unlikely]] return; }
L_002994F4:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_00299524; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00299508:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 188u), 0u);
    set32(c.r[4], c.r[4].w[0] + 624u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299508u | kUnwind; return; } goto L_00299508; } }
L_00299524:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029957C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 29728u);
    set32(c.r[8], c.r[8].w[0] + 29784u);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[9], 0u + 255u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299564u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00299564u) [[unlikely]] return; }
L_00299564:
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029957Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0029957Cu) [[unlikely]] return; }
L_0029957C:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002995D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[20].w[0] << 1);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 29728u);
    set32(c.r[8], c.r[8].w[0] + 29784u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[9], 0u + 267u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002995BCu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x002995BCu) [[unlikely]] return; }
L_002995BC:
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002995D4u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002995D4u) [[unlikely]] return; }
L_002995D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029962C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 29728u);
    set32(c.r[8], c.r[8].w[0] + 29784u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[9], 0u + 279u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299614u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00299614u) [[unlikely]] return; }
L_00299614:
    set32(c.r[6], ld32((c.r[17].w[0] + 20u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029962Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0029962Cu) [[unlikely]] return; }
L_0029962C:
    set32(c.r[2], ld32((c.r[17].w[0] + 776u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00299684; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[23].w[0] << 2);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 29728u);
    set32(c.r[8], c.r[8].w[0] + 29784u);
    st32((c.r[17].w[0] + 772u), c.r[3].w[0]);
    set32(c.r[9], 0u + 291u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029966Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0029966Cu) [[unlikely]] return; }
L_0029966C:
    set32(c.r[6], ld32((c.r[17].w[0] + 772u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 776u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299684u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x00299684u) [[unlikely]] return; }
L_00299684:
    set32(c.r[5], c.r[18].w[0] - 23504u);
    set32(c.r[4], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299694u);  if (depth < kMaxDepth) unit_0084(c, 263u, depth + 1u); else { c.pc = 0x00313AD8u; return; } if (c.pc != 0x00299694u) [[unlikely]] return; }
L_00299694:
    set32(c.r[16], c.r[21].w[0] + 10368u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 104u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 860u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002996ACu);  if (depth < kMaxDepth) unit_0066(c, 295u, depth + 1u); else { c.pc = 0x0029AF60u; return; } if (c.pc != 0x002996ACu) [[unlikely]] return; }
L_002996AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002996B8u);  if (depth < kMaxDepth) unit_0066(c, 297u, depth + 1u); else { c.pc = 0x0029AFC8u; return; } if (c.pc != 0x002996B8u) [[unlikely]] return; }
L_002996B8:
    st32((c.r[17].w[0] + 816u), 0u);
    set32(c.r[13], 0u + 34u);
    st32((c.r[17].w[0] + 824u), 0u);
    set32(c.r[11], 0u + 33u);
    st32((c.r[17].w[0] + 828u), 0u);
    set32(c.r[12], 0u + 60u);
    c.r[9].d[0] = c.r[22].d[0] + 0ull;
    c.r[8].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[10], 0u + 90u);
    st32((c.r[17].w[0] + 820u), 0u);
    set32(c.r[6], ld32((c.r[29].w[0] + 12u)));
    st32((c.r[17].w[0] + 836u), 0u);
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    st32((c.r[17].w[0] + 840u), 0u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    st32((c.r[17].w[0] + 844u), 0u);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[17].w[0] + 832u), 0u);
    st32((c.r[17].w[0] + 852u), 0u);
    c.budget -= 20;
L_00299708:
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    set32(c.r[10], c.r[10].w[0] - 1u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 72u));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    set32(c.r[6], c.r[6].w[0] + 6u);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    set32(c.r[7], c.r[7].w[0] + 6u);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    set32(c.r[8], c.r[8].w[0] + 6u);
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.budget -= 20;
    { const bool t = c.r[10].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299708u | kUnwind; return; } goto L_00299708; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299764u);  if (depth < kMaxDepth) unit_003D(c, 245u, depth + 1u); else { c.pc = 0x001F78D0u; return; } if (c.pc != 0x00299764u) [[unlikely]] return; }
L_00299764:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 2504u)));
    st32((c.r[17].w[0] + 780u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00299784u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00299784u) [[unlikely]] return; }
L_00299784:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299790u);  if (depth < kMaxDepth) unit_0066(c, 162u, depth + 1u); else { c.pc = 0x002999E0u; return; } if (c.pc != 0x00299790u) [[unlikely]] return; }
L_00299790:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002997C8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 10368u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 16;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0029986C; } }
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[19], 0u + 10u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00299818:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00299838u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00299838u) [[unlikely]] return; }
L_00299838:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    set32(c.r[18], c.r[18].w[0] + 592u);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299818u | kUnwind; return; } goto L_00299818; } }
L_0029986C:
    set32(c.r[3], c.r[21].w[0] + 10368u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00299900; } }
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[18], 0u + 26u);
    c.budget -= 2;
L_00299888:
    set32(c.r[3], ld32((c.r[17].w[0] + 2504u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002998A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002998A4u) [[unlikely]] return; }
L_002998A4:
    set32(c.r[3], ld32((c.r[2].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002998BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002998BCu) [[unlikely]] return; }
L_002998BC:
    set32(c.r[3], ld32((c.r[17].w[0] + 2504u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002998D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002998D8u) [[unlikely]] return; }
L_002998D8:
    st32((c.r[2].w[0]), c.r[18].w[0]);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299888u | kUnwind; return; } goto L_00299888; } }
L_00299900:
    set32(c.r[3], c.r[21].w[0] + 10368u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00299974; } }
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[19], 0u + 6u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00299920:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00299940u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00299940u) [[unlikely]] return; }
L_00299940:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    set32(c.r[18], c.r[18].w[0] + 224u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299920u | kUnwind; return; } goto L_00299920; } }
L_00299974:
    set32(c.r[3], c.r[21].w[0] + 10368u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002999B4; } }
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_00299990:
    set32(c.r[2], ld32((c.r[17].w[0] + 776u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[2], ld32((c.r[5].w[0] + 40u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299990u | kUnwind; return; } goto L_00299990; } }
L_002999B4:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002999E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[29], c.r[29].w[0] - 256u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10444u)));
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.f[12] = 0u;
    c.f[14] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    c.f[13] = c.f[12];
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 1u);
    st32((c.r[29].w[0] + 240u), c.f[20]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299A44u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00299A44u) [[unlikely]] return; }
L_00299A44:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[20] = c.r[1].w[0];
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.budget -= 5;
L_00299A58:
    c.f[12] = c.r[17].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] - 16016u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299A84u);  if (depth < kMaxDepth) unit_008A(c, 121u, depth + 1u); else { c.pc = 0x00329D98u; return; } if (c.pc != 0x00299A84u) [[unlikely]] return; }
L_00299A84:
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299A58u | kUnwind; return; } goto L_00299A58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[19], c.r[2].w[0] + 10368u);
    set32(c.r[21], c.r[20].w[0] + 800u);
    set32(c.r[17], c.r[3].w[0] + 13040u);
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[18], 0u + 7u);
    c.budget -= 10;
L_00299AB8:
    c.f[12] = ld32((c.r[19].w[0] + 80u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299AD0u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00299AD0u) [[unlikely]] return; }
L_00299AD0:
    set32(c.r[16], c.r[16].w[0] + 16u);
    st32((c.r[17].w[0] + 12u), c.f[20]);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299AB8u | kUnwind; return; } goto L_00299AB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] + 13168u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[20], c.r[3].w[0] + 10368u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] + 12u);
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], 0u + 7u);
    c.budget -= 11;
L_00299B10:
    c.f[12] = ld32((c.r[20].w[0] + 84u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299B28u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00299B28u) [[unlikely]] return; }
L_00299B28:
    set32(c.r[16], c.r[16].w[0] + 16u);
    st32((c.r[18].w[0]), c.f[20]);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 6;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299B10u | kUnwind; return; } goto L_00299B10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] + 13296u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[20], c.r[3].w[0] + 10368u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] + 12u);
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], 0u + 7u);
    c.budget -= 10;
L_00299B68:
    c.f[12] = ld32((c.r[20].w[0] + 88u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299B80u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00299B80u) [[unlikely]] return; }
L_00299B80:
    set32(c.r[16], c.r[16].w[0] + 16u);
    st32((c.r[18].w[0]), c.f[20]);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 6;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299B68u | kUnwind; return; } goto L_00299B68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] + 13424u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[20], c.r[3].w[0] + 10368u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] + 12u);
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], 0u + 7u);
    c.budget -= 10;
L_00299BC0:
    c.f[12] = ld32((c.r[20].w[0] + 92u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299BD8u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00299BD8u) [[unlikely]] return; }
L_00299BD8:
    set32(c.r[16], c.r[16].w[0] + 16u);
    st32((c.r[18].w[0]), c.f[20]);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 6;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299BC0u | kUnwind; return; } goto L_00299BC0; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299BFCu);  if (depth < kMaxDepth) unit_008A(c, 115u, depth + 1u); else { c.pc = 0x00329CE8u; return; } if (c.pc != 0x00299BFCu) [[unlikely]] return; }
L_00299BFC:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00299C28:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 22480u);
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299C60u);  if (depth < kMaxDepth) unit_0087(c, 230u, depth + 1u); else { c.pc = 0x0031F4C8u; return; } if (c.pc != 0x00299C60u) [[unlikely]] return; }
L_00299C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299C68u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x00299C68u) [[unlikely]] return; }
L_00299C68:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299C7Cu);  if (depth < kMaxDepth) unit_009C(c, 30u, depth + 1u); else { c.pc = 0x00370328u; return; } if (c.pc != 0x00299C7Cu) [[unlikely]] return; }
L_00299C7C:
    set32(c.r[5], ld32((c.r[16].w[0] + 576u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00299C98; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 12992u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299C98u);  if (depth < kMaxDepth) unit_0068(c, 90u, depth + 1u); else { c.pc = 0x002A1CB0u; return; } if (c.pc != 0x00299C98u) [[unlikely]] return; }
L_00299C98:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00299CB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00299CB0u) [[unlikely]] return; }
L_00299CB0:
    c.r[2].d[0] = c.r[2].d[0] & 26ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 26ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00299CD8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299CD0u);  if (depth < kMaxDepth) unit_0066(c, 187u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x00299CD0u) [[unlikely]] return; }
L_00299CD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00299DDC; } }
L_00299CD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 10368u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00299DDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[6], c.r[2].w[0] + 13552u);
    set32(c.r[7], 0u - 2u);
    set32(c.r[19], 0u - 3u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_00299D08:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00299DC4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00299D3C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 246u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 6;
L_00299D3C:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    set32(c.r[4], ld32((c.r[16].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00299D60; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299D60u);  if (depth < kMaxDepth) unit_0066(c, 335u, depth + 1u); else { c.pc = 0x0029BA40u; return; } if (c.pc != 0x00299D60u) [[unlikely]] return; }
L_00299D60:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299D80u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x00299D80u) [[unlikely]] return; }
L_00299D80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00299DA4; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299DA4u);  if (depth < kMaxDepth) unit_0066(c, 272u, depth + 1u); else { c.pc = 0x0029AC50u; return; } if (c.pc != 0x00299DA4u) [[unlikely]] return; }
L_00299DA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00299DBCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00299DBCu) [[unlikely]] return; }
L_00299DBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00299DDC; } }
L_00299DC4:
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 592u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299D08u | kUnwind; return; } goto L_00299D08; } }
L_00299DDC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00299E00:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    set32(c.r[4], c.r[4].w[0] - 22480u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299E4Cu);  if (depth < kMaxDepth) unit_0087(c, 230u, depth + 1u); else { c.pc = 0x0031F4C8u; return; } if (c.pc != 0x00299E4Cu) [[unlikely]] return; }
L_00299E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299E54u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x00299E54u) [[unlikely]] return; }
L_00299E54:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299E68u);  if (depth < kMaxDepth) unit_009C(c, 30u, depth + 1u); else { c.pc = 0x00370328u; return; } if (c.pc != 0x00299E68u) [[unlikely]] return; }
L_00299E68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[2].w[0] + 10368u);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00299F7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[21], c.r[2].w[0] + 13552u);
    set32(c.r[20], 0u - 1u);
    set32(c.r[22], 0u - 2u);
    set32(c.r[23], 0u - 3u);
    c.budget -= 7;
L_00299E98:
    set32(c.r[3], ld32((c.r[18].w[0] + 2504u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00299EB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00299EB4u) [[unlikely]] return; }
L_00299EB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00299F68; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_00299EE0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 246u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 6;
L_00299EE0:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    set32(c.r[4], ld32((c.r[16].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[22].d[0];
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00299F04; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299F04u);  if (depth < kMaxDepth) unit_0066(c, 335u, depth + 1u); else { c.pc = 0x0029BA40u; return; } if (c.pc != 0x00299F04u) [[unlikely]] return; }
L_00299F04:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299F24u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x00299F24u) [[unlikely]] return; }
L_00299F24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00299F48; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[23].d[0];
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299F48u);  if (depth < kMaxDepth) unit_0066(c, 272u, depth + 1u); else { c.pc = 0x0029AC50u; return; } if (c.pc != 0x00299F48u) [[unlikely]] return; }
L_00299F48:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00299F60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00299F60u) [[unlikely]] return; }
L_00299F60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00299F7C; } }
L_00299F68:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299E98u | kUnwind; return; } goto L_00299E98; } }
L_00299F7C:
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
L_00299FB0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[5].w[0] + 10368u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 18;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0029A120; } }
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[21], 0u + 224u);
    c.budget -= 4;
L_0029A008:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[20], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0029A10C; } }
    set32(c.r[3], ld32((c.r[23].w[0] + 8044u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[21].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[22].w[0] + 44u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0029A0E8; } }
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[7], 0u - 2u);
    set32(c.r[19], 0u - 3u);
    set32(c.r[3], c.r[30].w[0] + 10368u);
    c.budget -= 4;
L_0029A058:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[4].d[0];  if (t) { goto L_0029A0D0; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A08Cu);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0029A08Cu) [[unlikely]] return; }
L_0029A08C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029A0B0; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A0B0u);  if (depth < kMaxDepth) unit_0066(c, 272u, depth + 1u); else { c.pc = 0x0029AC50u; return; } if (c.pc != 0x0029A0B0u) [[unlikely]] return; }
L_0029A0B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A0C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029A0C8u) [[unlikely]] return; }
L_0029A0C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029A0E8; } }
L_0029A0D0:
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 224u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029A058u | kUnwind; return; } goto L_0029A058; } }
L_0029A0E8:
    mmi::mult(c, 0, c.r[17].w[0], c.r[21].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 128u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A10Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029A10Cu) [[unlikely]] return; }
L_0029A10C:
    set32(c.r[2], ld32((c.r[22].w[0] + 44u)));
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029A008u | kUnwind; return; } goto L_0029A008; } }
L_0029A120:
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
L_0029A158:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 29808u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 2504u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A188:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 408u), c.r[6].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A1A0:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 408u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A1B8:
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A1C8:
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A1D8:
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 15));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1592u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A1F0:
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[2], 0u + 6u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[6], c.r[6].w[0] << 16);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 15));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1774u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A220:
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 15));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2320u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A238:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A248u);  if (depth < kMaxDepth) unit_0067(c, 106u, depth + 1u); else { c.pc = 0x0029D148u; return; } if (c.pc != 0x0029A248u) [[unlikely]] return; }
L_0029A248:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A258:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8044u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A268:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[2].w[0] + 8044u), c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A278:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 10368u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[18].w[0] + 828u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0029A32C; } }
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0029A2B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 776u)));
    set32(c.r[17], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0029A318; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A2E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029A2E8u) [[unlikely]] return; }
L_0029A2E8:
    c.r[2].d[0] = c.r[2].d[0] & 10ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 10ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029A318; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 776u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 840u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029A318; } }
    st16((c.r[3].w[0] + 836u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0029A318:
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029A2B8u | kUnwind; return; } goto L_0029A2B8; } }
L_0029A32C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A350:
    st32((c.r[4].w[0] + 828u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A360:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[2].w[0] + 10368u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0029A410; } }
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
L_0029A3A0:
    set32(c.r[6], ld32((c.r[17].w[0] + 8044u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 2504u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A3C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029A3C0u) [[unlikely]] return; }
L_0029A3C0:
    set32(c.r[3], ld32((c.r[2].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029A3FC; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 8044u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 2504u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A3ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029A3ECu) [[unlikely]] return; }
L_0029A3EC:
    set32(c.r[4], ld32((c.r[2].w[0] + 188u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A3FCu);  if (depth < kMaxDepth) unit_0064(c, 97u, depth + 1u); else { c.pc = 0x00291B48u; return; } if (c.pc != 0x0029A3FCu) [[unlikely]] return; }
L_0029A3FC:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029A3A0u | kUnwind; return; } goto L_0029A3A0; } }
L_0029A410:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A430:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[2].w[0] + 10368u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[19], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0029A4EC; } }
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
L_0029A478:
    set32(c.r[6], ld32((c.r[18].w[0] + 8044u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 2504u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A498u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029A498u) [[unlikely]] return; }
L_0029A498:
    set32(c.r[3], ld32((c.r[2].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029A4D8; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 8044u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 2504u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A4C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029A4C4u) [[unlikely]] return; }
L_0029A4C4:
    set32(c.r[3], ld32((c.r[2].w[0] + 156u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A4D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029A4D8u) [[unlikely]] return; }
L_0029A4D8:
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029A478u | kUnwind; return; } goto L_0029A478; } }
L_0029A4EC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A510:
    set32(c.r[3], 0u + 624u);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A528:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[17], c.r[17].w[0] + 800u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A558u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x0029A558u) [[unlikely]] return; }
L_0029A558:
    set32(c.r[3], ld32((c.r[2].w[0] + 212u)));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A578u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029A578u) [[unlikely]] return; }
L_0029A578:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A58Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0029A58Cu) [[unlikely]] return; }
L_0029A58C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A59Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0029A59Cu) [[unlikely]] return; }
L_0029A59C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[2].w[0] + 13040u);
    c.budget -= 3;
L_0029A5A8:
    set32(c.r[2], c.r[3].w[0] << 7);
    set32(c.r[18], c.r[3].w[0] + 1u);
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[17], 0u + 2u);
    c.budget -= 4;
L_0029A5B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A5D0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0029A5D0u) [[unlikely]] return; }
L_0029A5D0:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029A5B8u | kUnwind; return; } goto L_0029A5B8; } }
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029A5A8u | kUnwind; return; } goto L_0029A5A8; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A610:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] + 13040u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A620:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[2].w[0] + 10368u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    if (c.r[6].d[0] != 0) c.r[18].d[0] = c.r[6].d[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 19;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0029A6D8; } }
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[21], 0u + 1u);
    c.budget -= 3;
L_0029A678:
    set32(c.r[2], ld32((c.r[19].w[0] + 776u)));
    set32(c.r[17], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0029A6C4; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A69Cu);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0029A69Cu) [[unlikely]] return; }
L_0029A69C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029A6C4; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[21].d[0];  if (t) { goto L_0029A6C0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 776u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029A6DC; } }
L_0029A6C0:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_0029A6C4:
    set32(c.r[2], ld32((c.r[22].w[0] + 40u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029A678u | kUnwind; return; } goto L_0029A678; } }
L_0029A6D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029A6DC:
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
L_0029A708:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029A728; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0029A728; } }
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029A734; } }
L_0029A728:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A734:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 13552u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A760:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], c.r[5].w[0] << 16);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029A79C; } }
    c.budget -= 1;
L_0029A798:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0029A79C:
    set32(c.r[3], c.r[7].w[0] + 10368u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029A7E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029A798u | kUnwind; return; } goto L_0029A798; } }
    set32(c.r[3], 0u + 592u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_0029A7E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0029A854; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A804u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029A804u) [[unlikely]] return; }
L_0029A804:
    set32(c.r[3], ld32((c.r[16].w[0] + 780u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 12992u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 780u), c.r[3].w[0]);
    c.r[2].d[0] = ld64((c.r[17].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st64((c.r[17].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A834u);  if (depth < kMaxDepth) unit_0067(c, 272u, depth + 1u); else { c.pc = 0x0029EFE8u; return; } if (c.pc != 0x0029A834u) [[unlikely]] return; }
L_0029A834:
    st32((c.r[17].w[0] + 576u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0029A850; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A850u);  if (depth < kMaxDepth) unit_0066(c, 259u, depth + 1u); else { c.pc = 0x0029AA80u; return; } if (c.pc != 0x0029A850u) [[unlikely]] return; }
L_0029A850:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029A854:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A870:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], c.r[5].w[0] << 16);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029A8AC; } }
    c.budget -= 1;
L_0029A8A8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0029A8AC:
    set32(c.r[3], c.r[7].w[0] + 10368u);
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029A8F0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029A8A8u | kUnwind; return; } goto L_0029A8A8; } }
    set32(c.r[3], 0u + 624u);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_0029A8F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0029A964; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A914u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029A914u) [[unlikely]] return; }
L_0029A914:
    set32(c.r[3], ld32((c.r[16].w[0] + 780u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 12992u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 780u), c.r[3].w[0]);
    c.r[2].d[0] = ld64((c.r[17].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st64((c.r[17].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A944u);  if (depth < kMaxDepth) unit_0067(c, 272u, depth + 1u); else { c.pc = 0x0029EFE8u; return; } if (c.pc != 0x0029A944u) [[unlikely]] return; }
L_0029A944:
    st32((c.r[17].w[0] + 576u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0029A960; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A960u);  if (depth < kMaxDepth) unit_0066(c, 259u, depth + 1u); else { c.pc = 0x0029AA80u; return; } if (c.pc != 0x0029A960u) [[unlikely]] return; }
L_0029A960:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029A964:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029A980:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], c.r[5].w[0] << 16);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029A9BC; } }
    c.budget -= 1;
L_0029A9B8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0029A9BC:
    set32(c.r[8], c.r[7].w[0] + 10368u);
    set32(c.r[2], ld32((c.r[8].w[0] + 44u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029AA00; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029A9B8u | kUnwind; return; } goto L_0029A9B8; } }
    set32(c.r[3], 0u + 224u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_0029AA00:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0029AA14; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029AA60; } }
L_0029AA14:
    set32(c.r[5], ld32((c.r[8].w[0] + 48u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AA24u);  if (depth < kMaxDepth) unit_0066(c, 299u, depth + 1u); else { c.pc = 0x0029AFF8u; return; } if (c.pc != 0x0029AA24u) [[unlikely]] return; }
L_0029AA24:
    set32(c.r[2], ld32((c.r[16].w[0] + 780u)));
    set32(c.r[4], 0u + 1u);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 780u), c.r[2].w[0]);
    c.r[3].d[0] = ld64((c.r[17].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[17].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0029AA5C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AA5Cu);  if (depth < kMaxDepth) unit_0066(c, 259u, depth + 1u); else { c.pc = 0x0029AA80u; return; } if (c.pc != 0x0029AA5Cu) [[unlikely]] return; }
L_0029AA5C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029AA60:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029AA80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 2u);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st64((c.r[2].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AAA4u);  if (depth < kMaxDepth) unit_0066(c, 275u, depth + 1u); else { c.pc = 0x0029ACB8u; return; } if (c.pc != 0x0029AAA4u) [[unlikely]] return; }
L_0029AAA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029AAB8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AAE0u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0029AAE0u) [[unlikely]] return; }
L_0029AAE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029AB08; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AB08u);  if (depth < kMaxDepth) unit_0066(c, 272u, depth + 1u); else { c.pc = 0x0029AC50u; return; } if (c.pc != 0x0029AB08u) [[unlikely]] return; }
L_0029AB08:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029AB20:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029AB30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AB40u);  if (depth < kMaxDepth) unit_0066(c, 187u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x0029AB40u) [[unlikely]] return; }
L_0029AB40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029AB50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[2].w[0] + 10368u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0029AC30; } }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[7], 0u - 2u);
    set32(c.r[18], 0u - 3u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_0029AB98:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0029AC18; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029ABD4u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0029ABD4u) [[unlikely]] return; }
L_0029ABD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029ABF8; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[18].d[0];
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029ABF8u);  if (depth < kMaxDepth) unit_0066(c, 272u, depth + 1u); else { c.pc = 0x0029AC50u; return; } if (c.pc != 0x0029ABF8u) [[unlikely]] return; }
L_0029ABF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AC10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029AC10u) [[unlikely]] return; }
L_0029AC10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029AC30; } }
L_0029AC18:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 224u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029AB98u | kUnwind; return; } goto L_0029AB98; } }
L_0029AC30:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029AC50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + 10368u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0029ACAC; } }
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0029AC70:
    set32(c.r[2], ld32((c.r[7].w[0] + 776u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0029AC98; } }
    st32((c.r[3].w[0]), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029AC98:
    set32(c.r[2], ld32((c.r[8].w[0] + 40u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029AC70u | kUnwind; return; } goto L_0029AC70; } }
L_0029ACAC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029ACB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + 10368u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0029AD10; } }
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0029ACD8:
    set32(c.r[2], ld32((c.r[7].w[0] + 776u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0029ACFC; } }
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029ACFC:
    set32(c.r[2], ld32((c.r[8].w[0] + 40u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029ACD8u | kUnwind; return; } goto L_0029ACD8; } }
L_0029AD10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029AD18:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[2].w[0] + 10368u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0029AD94; } }
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0029AD50:
    set32(c.r[3], ld32((c.r[17].w[0] + 776u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0029AD80; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AD80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029AD80u) [[unlikely]] return; }
L_0029AD80:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029AD50u | kUnwind; return; } goto L_0029AD50; } }
L_0029AD94:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029ADB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[2].w[0] + 13552u);
    c.budget -= 4;
L_0029ADC0:
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], c.r[2].w[0] + 28u);
    c.budget -= 6;
L_0029ADD8:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029ADD8u | kUnwind; return; } goto L_0029ADD8; } }
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029ADC0u | kUnwind; return; } goto L_0029ADC0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029AE08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[3], ld32((c.r[2].w[0] + 10372u)));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029AE38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 10368u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0029AE88; } }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[8], c.r[7].w[0] + 10368u);
    c.budget -= 2;
L_0029AE58:
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 10368u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029AE58u | kUnwind; return; } goto L_0029AE58; } }
L_0029AE88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029AE90:
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 14));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029AEA8:
    set32(c.r[4], c.r[4].w[0] + 404u);
    set32(c.r[2], 0u + 90u);
    c.budget -= 2;
L_0029AEB0:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029AEB0u | kUnwind; return; } goto L_0029AEB0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029AED0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 234u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[7], ld32((c.r[6].w[0] + 10372u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8044u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029AF08:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 234u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8044u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029AF28:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029AF38:
    set32(c.r[4], c.r[4].w[0] + 768u);
    set32(c.r[2], 0u + 90u);
    c.budget -= 2;
L_0029AF40:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029AF40u | kUnwind; return; } goto L_0029AF40; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029AF60:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[6].w[0] + 10368u);
    set32(c.r[2], ld32((c.r[6].w[0] + 10368u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0029AFBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[7], c.r[2].w[0] - 20696u);
    c.budget -= 4;
L_0029AF90:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 10368u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 4u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029AF90u | kUnwind; return; } goto L_0029AF90; } }
L_0029AFBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029AFC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00290000u);
    set32(c.r[4], c.r[4].w[0] + 404u);
    set32(c.r[2], c.r[2].w[0] + 26360u);
    set32(c.r[3], 0u + 90u);
    c.budget -= 4;
L_0029AFD8:
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029AFD8u | kUnwind; return; } goto L_0029AFD8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029AFF8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029B094; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 30112u);
    set32(c.r[17], c.r[17].w[0] + 30160u);
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[4], ld32((c.r[18].w[0] + 20744u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], 0u + 70u);
    st32((c.r[19].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B064u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0029B064u) [[unlikely]] return; }
L_0029B064:
    set32(c.r[3], c.r[20].w[0] << 1);
    set32(c.r[4], ld32((c.r[18].w[0] + 20744u)));
    st32((c.r[19].w[0] + 148u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[19].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 77u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B090u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0029B090u) [[unlikely]] return; }
L_0029B090:
    st32((c.r[19].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 1;
L_0029B094:
    set32(c.r[2], ld32((c.r[19].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029B0FC; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[17], c.r[17].w[0] + 30112u);
    set32(c.r[18], c.r[18].w[0] + 30160u);
    set32(c.r[4], ld32((c.r[16].w[0] + 20744u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 156u)));
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[9], 0u + 83u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B0D4u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0029B0D4u) [[unlikely]] return; }
L_0029B0D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 20744u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 156u)));
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[19].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 85u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B0F8u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0029B0F8u) [[unlikely]] return; }
L_0029B0F8:
    st32((c.r[19].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 1;
L_0029B0FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 10368u);
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0029B16C; } }
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 2;
L_0029B120:
    set32(c.r[3], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 160u)));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 152u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[2], ld32((c.r[8].w[0] + 48u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B120u | kUnwind; return; } goto L_0029B120; } }
L_0029B16C:
    set32(c.r[2], 0u + 1u);
    st16((c.r[19].w[0] + 168u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 208u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[9].w[0] + 10368u);
    st16((c.r[19].w[0] + 170u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st16((c.r[19].w[0] + 172u), static_cast<std::uint16_t>(0u));
    st32((c.r[19].w[0] + 196u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 200u), 0u);
    st32((c.r[19].w[0] + 204u), 0u);
    st16((c.r[19].w[0] + 210u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 216u), static_cast<std::uint16_t>(0u));
    st32((c.r[19].w[0] + 176u), 0u);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 60u));
    st16((c.r[19].w[0] + 192u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B1B0u);  if (depth < kMaxDepth) unit_0066(c, 89u, depth + 1u); else { c.pc = 0x00298CA0u; return; } if (c.pc != 0x0029B1B0u) [[unlikely]] return; }
L_0029B1B0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029B1D8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B218u);  if (depth < kMaxDepth) unit_0067(c, 82u, depth + 1u); else { c.pc = 0x0029CDB0u; return; } if (c.pc != 0x0029B218u) [[unlikely]] return; }
L_0029B218:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029B22C; } }
L_0029B220:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029B3F4; } }
L_0029B22C:
    set32(c.r[5], ld32((c.r[21].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B220u | kUnwind; return; } goto L_0029B220; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B250u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029B250u) [[unlikely]] return; }
L_0029B250:
    set32(c.r[3], 0u + 5120u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B220u | kUnwind; return; } goto L_0029B220; } }
    set32(c.r[22], ld32((c.r[21].w[0] + 204u)));
    st32((c.r[29].w[0]), c.r[22].w[0]);
    c.r[2].d[0] = ld16((c.r[22].w[0] + 956u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029B2B4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 210u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[21].w[0]);
    st32((c.r[21].w[0] + 208u), c.r[22].w[0]);
    c.r[3].d[0] = ld16((c.r[22].w[0] + 956u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[22].w[0] + 956u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[19].w[0] + 210u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[19].w[0] + 210u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 15;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029B3F4; } }
L_0029B2B4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 210u)));
    set32(c.r[16], 0u - 1u);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 210u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029B394; } }
    set32(c.r[30], ld32((c.r[21].w[0] + 556u)));
    set32(c.r[23], 0u - 1u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0029B390; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 3;
L_0029B2E8:
    set32(c.r[2], ld32((c.r[21].w[0] + 204u)));
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0029B378; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[20], ld32((c.r[21].w[0] + 556u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[17], ld32((c.r[3].w[0] + 556u)));
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[20].w[0] + c.r[17].w[0]);
    c.budget -= 16;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0029B35C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B344u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0029B344u) [[unlikely]] return; }
L_0029B344:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x0029B34Cu);  goto L_0029B350; }
L_0029B350:
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029B360; } }
L_0029B35C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029B360:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = ld16((c.r[19].w[0] + 210u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029B378; } }
    c.r[2].d[0] = c.r[30].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[23].d[0] = c.r[18].d[0];
    c.budget -= 2;
L_0029B378:
    set32(c.r[2], c.r[3].w[0] << 16);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B2E8u | kUnwind; return; } goto L_0029B2E8; } }
L_0029B390:
    c.r[16].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_0029B394:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0029B3AC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029B3F4; } }
L_0029B3AC:
    st32((c.r[21].w[0] + 208u), c.r[22].w[0]);
    set32(c.r[16], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[22].w[0] + 956u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[22].w[0] + 956u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B3D8u);  if (depth < kMaxDepth) unit_0067(c, 60u, depth + 1u); else { c.pc = 0x0029CA90u; return; } if (c.pc != 0x0029B3D8u) [[unlikely]] return; }
L_0029B3D8:
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[21].w[0]);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 210u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[19].w[0] + 210u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0029B3F4:
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
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029B430:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 216u));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029B694; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029B7BC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 210u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 168u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0029B7BC; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[20].w[0] + 10368u);
    c.r[21].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
L_0029B498:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B4A4u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0029B4A4u) [[unlikely]] return; }
L_0029B4A4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 168u)));
    c.r[7].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0029B4B4u);  goto L_0029B4B8; }
L_0029B4B8:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0029B4E8; } }
    set32(c.r[16], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_0029B4C8:
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B4D8u);  if (depth < kMaxDepth) unit_0067(c, 117u, depth + 1u); else { c.pc = 0x0029D270u; return; } if (c.pc != 0x0029B4D8u) [[unlikely]] return; }
L_0029B4D8:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B4C8u | kUnwind; return; } goto L_0029B4C8; } }
L_0029B4E8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0029B548; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0029B510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029B548; } }
L_0029B504:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029B54C; } }
L_0029B510:
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0029B548; } }
    set32(c.r[6], ld32((c.r[21].w[0] + 48u)));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_0029B528:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B504u | kUnwind; return; } goto L_0029B504; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B528u | kUnwind; return; } goto L_0029B528; } }
L_0029B548:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029B54C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029B564; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B498u | kUnwind; return; } goto L_0029B498; } }
L_0029B564:
    set32(c.r[3], c.r[20].w[0] + 10368u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0029B5C8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0029B598; } }
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029B5C8; } }
L_0029B598:
    set32(c.r[3], c.r[20].w[0] + 10368u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029B5C8; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B598u | kUnwind; return; } goto L_0029B598; } }
    st32((c.r[2].w[0]), c.r[7].w[0]);
    c.budget -= 1;
L_0029B5C8:
    set32(c.r[2], ld32((c.r[7].w[0] + 128u)));
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 120u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B5E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029B5E4u) [[unlikely]] return; }
L_0029B5E4:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 210u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 208u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] << 16);
    st16((c.r[17].w[0] + 210u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029B658; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B614u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0029B614u) [[unlikely]] return; }
L_0029B614:
    set32(c.r[3], 0u + 120u);
    set32(c.r[6], 0u + 1u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0029B624u);  goto L_0029B628; }
L_0029B628:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 208u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 210u)));
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    st16((c.r[17].w[0] + 216u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[17].w[0] + 52u), 0u);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] + 20u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 56u), c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029B7BC; } }
L_0029B658:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B664u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0029B664u) [[unlikely]] return; }
L_0029B664:
    set32(c.r[3], 0u + 300u);
    set32(c.r[5], 0u + 2u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0029B674u);  goto L_0029B678; }
L_0029B678:
    st16((c.r[17].w[0] + 216u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[17].w[0] + 52u), 0u);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + 120u);
    st32((c.r[17].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029B7BC; } }
L_0029B694:
    set32(c.r[2], c.r[3].w[0] << 16);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0029B7BC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029B7BC; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029B6D4; } }
L_0029B6D0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0029B6D4:
    set32(c.r[18], c.r[20].w[0] + 10368u);
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029B708; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 212u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B6D0u | kUnwind; return; } goto L_0029B6D0; } }
    st32((c.r[2].w[0]), 0u);
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0029B708:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0029B748; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B72Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029B72Cu) [[unlikely]] return; }
L_0029B72C:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[5], 0u + 64u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B748u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029B748u) [[unlikely]] return; }
L_0029B748:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 210u));
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 216u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 210u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0029B7A4; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0029B778:
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B778u | kUnwind; return; } goto L_0029B778; } }
L_0029B7A4:
    set32(c.r[2], c.r[20].w[0] + 10368u);
    set32(c.r[4], ld32((c.r[17].w[0] + 212u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] - 4u), 0u);
    c.budget -= 6;
L_0029B7BC:
    c.r[2].d[0] = 0ull + 0ull;
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
L_0029B7E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10864u)));
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[11].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[17]);
    c.r[24].d[0] = 0ull + 0ull;
    c.r[15].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[12].d[0];  if (t) { goto L_0029B83C; } }
    set32(c.r[3], c.r[3].w[0] + 10864u);
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
L_0029B820:
    set32(c.r[3], c.r[3].w[0] + 12u);
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[11].d[0] == c.r[4].d[0];  if (t) { goto L_0029B964; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[12].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B820u | kUnwind; return; } goto L_0029B820; } }
L_0029B83C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[8].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[13], c.r[2].w[0] + 10864u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[13].w[0] + 4u);
    set32(c.r[25], c.r[13].w[0] + 8u);
    set32(c.r[14], 0u + 12u);
    c.budget -= 7;
L_0029B858:
    mmi::mult(c, 0, c.r[11].w[0], c.r[14].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[13].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[12].d[0];  if (t) { goto L_0029B8B8; } }
    set32(c.r[4], 0u + 20u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[17].w[0] + 10864u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 5;
L_0029B880:
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == c.r[4].d[0];  if (t) { goto L_0029B964; } }
    mmi::div(c, 0, c.r[11].w[0], c.r[4].w[0]);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[7].d[0]) { breakpoint(c, 0x0029B898u);  goto L_0029B89C; }
L_0029B89C:
    c.r[3].d[0] = c.hi.d[0];
    c.r[11].d[0] = c.r[3].d[0] + 0ull;
    mmi::mult(c, 0, c.r[11].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B880u | kUnwind; return; } goto L_0029B880; } }
L_0029B8B8:
    mmi::mult(c, 0, c.r[8].w[0], c.r[14].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[13].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0029B918; } }
    set32(c.r[4], 0u + 20u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[17].w[0] + 10864u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 5;
L_0029B8E0:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[24], c.r[24].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[24].d[0] == c.r[4].d[0];  if (t) { goto L_0029B964; } }
    mmi::div(c, 0, c.r[8].w[0], c.r[4].w[0]);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[7].d[0]) { breakpoint(c, 0x0029B8F8u);  goto L_0029B8FC; }
L_0029B8FC:
    c.r[3].d[0] = c.hi.d[0];
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    mmi::mult(c, 0, c.r[8].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[12].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B8E0u | kUnwind; return; } goto L_0029B8E0; } }
L_0029B918:
    mmi::mult(c, 0, c.r[8].w[0], c.r[14].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[11].w[0], c.r[14].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[10], c.r[5].w[0] + c.r[13].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[13].w[0]);
    c.r[2].d[0] = ld16((c.r[10].w[0]));
    set32(c.r[7], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[25].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + c.r[25].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0])));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(0u));
    st32((c.r[7].w[0]), 0u);
    st32((c.r[5].w[0]), 0u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B858u | kUnwind; return; } goto L_0029B858; } }
L_0029B964:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0]) & ~15u, c.r[17]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029B978:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00680000u);
    ldl(c.r[2], (c.r[4].w[0] + 7u));
    ldr(c.r[2], (c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[7].w[0] + 10864u);
    set32(c.r[5], c.r[4].w[0] + 240u);
    c.budget -= 12;
L_0029B9A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0029B9D0; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 4u)));
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029BA34; } }
L_0029B9D0:
    set32(c.r[4], c.r[4].w[0] + 12u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B9A8u | kUnwind; return; } goto L_0029B9A8; } }
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[3], ld32((c.r[11].w[0] + 9920u)));
    set32(c.r[6], 0u + 20u);
    set32(c.r[4], c.r[7].w[0] + 10864u);
    set32(c.r[9], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[7].d[0] = ld16((c.r[8].w[0]));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[8], ld32((c.r[8].w[0] + 8u)));
    mmi::div(c, 0, c.r[2].w[0], c.r[6].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[9].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 8u), c.r[8].w[0]);
    c.budget -= 19;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0029BA28u);  goto L_0029BA2C; }
L_0029BA2C:
    c.r[10].d[0] = c.hi.d[0];
    st32((c.r[11].w[0] + 9920u), c.r[10].w[0]);
    c.budget -= 2;
L_0029BA34:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029BA40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[2].w[0] + 10368u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0029BCF0; } }
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0029BA78:
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[17].d[0];  if (t) { goto L_0029BCDC; } }
    st32((c.r[3].w[0]), 0u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 168u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 168u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 192u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_0029BAC4; } }
    st32((c.r[17].w[0] + 192u), 0u);
    c.budget -= 1;
L_0029BAC4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 210u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0029BB00; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_0029BAE0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0029BCD0; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029BAE0u | kUnwind; return; } goto L_0029BAE0; } }
L_0029BB00:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0029BB04:
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0029BB90; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 210u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 210u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 208u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BB4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029BB4Cu) [[unlikely]] return; }
L_0029BB4C:
    set32(c.r[3], 0u + 5120u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0029BB70; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 208u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 956u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029BB70; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 956u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0029BB70:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 210u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029BB90; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 212u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BB90u);  if (depth < kMaxDepth) unit_009F(c, 9u, depth + 1u); else { c.pc = 0x0037C0A8u; return; } if (c.pc != 0x0029BB90u) [[unlikely]] return; }
L_0029BB90:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 210u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0029BBC8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0029BBA8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0029BCC4; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029BBA8u | kUnwind; return; } goto L_0029BBA8; } }
L_0029BBC8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0029BBCC:
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0029BC0C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 172u));
    set32(c.r[4], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 208u)));
    st16((c.r[16].w[0] + 172u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BC0Cu);  if (depth < kMaxDepth) unit_009F(c, 9u, depth + 1u); else { c.pc = 0x0037C0A8u; return; } if (c.pc != 0x0029BC0Cu) [[unlikely]] return; }
L_0029BC0C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 168u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[16].w[0] + 180u));
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st16((c.r[29].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 8u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BC2Cu);  if (depth < kMaxDepth) unit_0066(c, 333u, depth + 1u); else { c.pc = 0x0029B978u; return; } if (c.pc != 0x0029BC2Cu) [[unlikely]] return; }
L_0029BC2C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { goto L_0029BC98; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029BC64; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 180u));
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st16((c.r[29].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BC64u);  if (depth < kMaxDepth) unit_0066(c, 333u, depth + 1u); else { c.pc = 0x0029B978u; return; } if (c.pc != 0x0029BC64u) [[unlikely]] return; }
L_0029BC64:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BC7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029BC7Cu) [[unlikely]] return; }
L_0029BC7C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BC88u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0029BC88u) [[unlikely]] return; }
L_0029BC88:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BC98u);  if (depth < kMaxDepth) unit_0066(c, 267u, depth + 1u); else { c.pc = 0x0029AB50u; return; } if (c.pc != 0x0029BC98u) [[unlikely]] return; }
L_0029BC98:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029BCF0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BCBCu);  if (depth < kMaxDepth) unit_0067(c, 135u, depth + 1u); else { c.pc = 0x0029D560u; return; } if (c.pc != 0x0029BCBCu) [[unlikely]] return; }
L_0029BCBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029BCF0; } }
L_0029BCC4:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029BBCCu | kUnwind; return; } goto L_0029BBCC; } }
L_0029BCD0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029BB04u | kUnwind; return; } goto L_0029BB04; } }
L_0029BCDC:
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029BA78u | kUnwind; return; } goto L_0029BA78; } }
L_0029BCF0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029BD10:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0029BD7C; } }
    set32(c.r[2], c.r[9].w[0] + 10368u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0029BD6C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_0029BD40:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0029BD58; } }
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029BD70; } }
L_0029BD58:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029BD40u | kUnwind; return; } goto L_0029BD40; } }
L_0029BD6C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0029BD70:
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[7], c.r[2].w[0] + 1u);
    c.budget -= 3;
L_0029BD7C:
    set32(c.r[2], c.r[9].w[0] + 10368u);
    set32(c.r[6], ld32((c.r[2].w[0] + 48u)));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029BDCC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[2], c.r[7].w[0] << 2);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0029BDA0:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029BDB8; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029BDD0; } }
L_0029BDB8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029BDA0u | kUnwind; return; } goto L_0029BDA0; } }
L_0029BDCC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029BDD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029BE28; } }
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[9].w[0] + 10368u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0029BE24; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_0029BDF8:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029BE10; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029BE28; } }
L_0029BE10:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029BDF8u | kUnwind; return; } goto L_0029BDF8; } }
L_0029BE24:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029BE28:
    c.r[3].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029BE38:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld16((c.r[17].w[0] + 168u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029BFB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 30176u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00298000u < 16384u) { entry = entries_0066[(t - 0x00298000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0029BE90:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BEA4u);  if (depth < kMaxDepth) unit_0065(c, 281u, depth + 1u); else { c.pc = 0x00296FE0u; return; } if (c.pc != 0x0029BEA4u) [[unlikely]] return; }
L_0029BEA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029BFB0; } }
L_0029BEAC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BEBCu);  if (depth < kMaxDepth) unit_0066(c, 350u, depth + 1u); else { c.pc = 0x0029BD10u; return; } if (c.pc != 0x0029BEBCu) [[unlikely]] return; }
L_0029BEBC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029BF20; } }
L_0029BEC8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BED8u);  if (depth < kMaxDepth) unit_0066(c, 350u, depth + 1u); else { c.pc = 0x0029BD10u; return; } if (c.pc != 0x0029BED8u) [[unlikely]] return; }
L_0029BED8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 248u)));
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 9u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029BF38; } }
L_0029BEFC:
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_0029BF00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BF10u);  if (depth < kMaxDepth) unit_0066(c, 350u, depth + 1u); else { c.pc = 0x0029BD10u; return; } if (c.pc != 0x0029BF10u) [[unlikely]] return; }
L_0029BF10:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029BF00u | kUnwind; return; } goto L_0029BF00; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 248u)));
    c.budget -= 1;
L_0029BF20:
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 11u);
    c.budget -= 6;
L_0029BF38:
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BF58u);  if (depth < kMaxDepth) unit_0065(c, 281u, depth + 1u); else { c.pc = 0x00296FE0u; return; } if (c.pc != 0x0029BF58u) [[unlikely]] return; }
L_0029BF58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029BFB0; } }
L_0029BF60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BF70u);  if (depth < kMaxDepth) unit_0066(c, 350u, depth + 1u); else { c.pc = 0x0029BD10u; return; } if (c.pc != 0x0029BF70u) [[unlikely]] return; }
L_0029BF70:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BF84u);  if (depth < kMaxDepth) unit_0065(c, 281u, depth + 1u); else { c.pc = 0x00296FE0u; return; } if (c.pc != 0x0029BF84u) [[unlikely]] return; }
L_0029BF84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029BFB0; } }
L_0029BF8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BF9Cu);  if (depth < kMaxDepth) unit_0066(c, 350u, depth + 1u); else { c.pc = 0x0029BD10u; return; } if (c.pc != 0x0029BF9Cu) [[unlikely]] return; }
L_0029BF9C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BFB0u);  if (depth < kMaxDepth) unit_0065(c, 281u, depth + 1u); else { c.pc = 0x00296FE0u; return; } if (c.pc != 0x0029BFB0u) [[unlikely]] return; }
L_0029BFB0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BFBCu);  if (depth < kMaxDepth) unit_0065(c, 154u, depth + 1u); else { c.pc = 0x00295C00u; return; } if (c.pc != 0x0029BFBCu) [[unlikely]] return; }
L_0029BFBC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029BFD8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    [[clang::musttail]] return unit_0067(c, 1u, depth);
}

}
