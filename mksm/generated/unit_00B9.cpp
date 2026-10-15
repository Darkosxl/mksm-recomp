#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B9[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10,
    0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 40,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0,
    0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 77,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85,
    0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0,
    0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0,
    0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0,
    0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0,
    0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0,
    0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201,
    0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 222, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 244, 0, 245,
    0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0,
    0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0,
    0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 283, 0, 284, 0,
    0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0,
    0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0,
    0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0,
    0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327,
    0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0, 354, 0, 0, 355, 0, 356, 0, 0, 0, 0,
    357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 372, 0, 373, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0,
    0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0,
};

void unit_00B9(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003E4000;
    case 2u: goto L_003E4018;
    case 3u: goto L_003E4080;
    case 4u: goto L_003E4088;
    case 5u: goto L_003E40B8;
    case 6u: goto L_003E40E4;
    case 7u: goto L_003E4128;
    case 8u: goto L_003E413C;
    case 9u: goto L_003E4154;
    case 10u: goto L_003E417C;
    case 11u: goto L_003E4194;
    case 12u: goto L_003E41C0;
    case 13u: goto L_003E420C;
    case 14u: goto L_003E4258;
    case 15u: goto L_003E4270;
    case 16u: goto L_003E429C;
    case 17u: goto L_003E42A8;
    case 18u: goto L_003E42B4;
    case 19u: goto L_003E42D4;
    case 20u: goto L_003E4328;
    case 21u: goto L_003E4344;
    case 22u: goto L_003E4370;
    case 23u: goto L_003E437C;
    case 24u: goto L_003E4388;
    case 25u: goto L_003E43A8;
    case 26u: goto L_003E440C;
    case 27u: goto L_003E4418;
    case 28u: goto L_003E442C;
    case 29u: goto L_003E443C;
    case 30u: goto L_003E446C;
    case 31u: goto L_003E44A8;
    case 32u: goto L_003E4530;
    case 33u: goto L_003E4554;
    case 34u: goto L_003E4570;
    case 35u: goto L_003E45D8;
    case 36u: goto L_003E461C;
    case 37u: goto L_003E4650;
    case 38u: goto L_003E4658;
    case 39u: goto L_003E466C;
    case 40u: goto L_003E467C;
    case 41u: goto L_003E46B8;
    case 42u: goto L_003E46C0;
    case 43u: goto L_003E46D4;
    case 44u: goto L_003E46F8;
    case 45u: goto L_003E4740;
    case 46u: goto L_003E4748;
    case 47u: goto L_003E475C;
    case 48u: goto L_003E4780;
    case 49u: goto L_003E479C;
    case 50u: goto L_003E47E0;
    case 51u: goto L_003E481C;
    case 52u: goto L_003E482C;
    case 53u: goto L_003E4858;
    case 54u: goto L_003E48D0;
    case 55u: goto L_003E490C;
    case 56u: goto L_003E4914;
    case 57u: goto L_003E4934;
    case 58u: goto L_003E496C;
    case 59u: goto L_003E4974;
    case 60u: goto L_003E4994;
    case 61u: goto L_003E49BC;
    case 62u: goto L_003E4A00;
    case 63u: goto L_003E4A38;
    case 64u: goto L_003E4AAC;
    case 65u: goto L_003E4ABC;
    case 66u: goto L_003E4AEC;
    case 67u: goto L_003E4B00;
    case 68u: goto L_003E4B14;
    case 69u: goto L_003E4B28;
    case 70u: goto L_003E4B3C;
    case 71u: goto L_003E4B50;
    case 72u: goto L_003E4B88;
    case 73u: goto L_003E4BB0;
    case 74u: goto L_003E4BC8;
    case 75u: goto L_003E4BE8;
    case 76u: goto L_003E4BF0;
    case 77u: goto L_003E4BFC;
    case 78u: goto L_003E4C08;
    case 79u: goto L_003E4C60;
    case 80u: goto L_003E4C7C;
    case 81u: goto L_003E4CA8;
    case 82u: goto L_003E4D08;
    case 83u: goto L_003E4DB0;
    case 84u: goto L_003E4DE0;
    case 85u: goto L_003E4DFC;
    case 86u: goto L_003E4E0C;
    case 87u: goto L_003E4E50;
    case 88u: goto L_003E4E5C;
    case 89u: goto L_003E4E8C;
    case 90u: goto L_003E4EBC;
    case 91u: goto L_003E4F00;
    case 92u: goto L_003E4F14;
    case 93u: goto L_003E4F60;
    case 94u: goto L_003E4F90;
    case 95u: goto L_003E4FA4;
    case 96u: goto L_003E4FE4;
    case 97u: goto L_003E5008;
    case 98u: goto L_003E5038;
    case 99u: goto L_003E5068;
    case 100u: goto L_003E50A4;
    case 101u: goto L_003E50B8;
    case 102u: goto L_003E50C4;
    case 103u: goto L_003E50F0;
    case 104u: goto L_003E5128;
    case 105u: goto L_003E5160;
    case 106u: goto L_003E5198;
    case 107u: goto L_003E51D8;
    case 108u: goto L_003E51E8;
    case 109u: goto L_003E5240;
    case 110u: goto L_003E5294;
    case 111u: goto L_003E52C4;
    case 112u: goto L_003E52E0;
    case 113u: goto L_003E52F4;
    case 114u: goto L_003E5328;
    case 115u: goto L_003E5350;
    case 116u: goto L_003E5368;
    case 117u: goto L_003E5398;
    case 118u: goto L_003E53EC;
    case 119u: goto L_003E53F8;
    case 120u: goto L_003E5420;
    case 121u: goto L_003E5438;
    case 122u: goto L_003E5464;
    case 123u: goto L_003E54B4;
    case 124u: goto L_003E54F0;
    case 125u: goto L_003E5550;
    case 126u: goto L_003E5564;
    case 127u: goto L_003E5574;
    case 128u: goto L_003E5588;
    case 129u: goto L_003E55B0;
    case 130u: goto L_003E55E4;
    case 131u: goto L_003E55F4;
    case 132u: goto L_003E5604;
    case 133u: goto L_003E5628;
    case 134u: goto L_003E56C8;
    case 135u: goto L_003E5700;
    case 136u: goto L_003E573C;
    case 137u: goto L_003E574C;
    case 138u: goto L_003E5768;
    case 139u: goto L_003E57C0;
    case 140u: goto L_003E57C8;
    case 141u: goto L_003E57D8;
    case 142u: goto L_003E5838;
    case 143u: goto L_003E5880;
    case 144u: goto L_003E58B8;
    case 145u: goto L_003E5900;
    case 146u: goto L_003E5934;
    case 147u: goto L_003E5958;
    case 148u: goto L_003E59CC;
    case 149u: goto L_003E5A18;
    case 150u: goto L_003E5A28;
    case 151u: goto L_003E5A40;
    case 152u: goto L_003E5A80;
    case 153u: goto L_003E5A88;
    case 154u: goto L_003E5AD4;
    case 155u: goto L_003E5AEC;
    case 156u: goto L_003E5B0C;
    case 157u: goto L_003E5B24;
    case 158u: goto L_003E5B60;
    case 159u: goto L_003E5BC0;
    case 160u: goto L_003E5BD8;
    case 161u: goto L_003E5C08;
    case 162u: goto L_003E5C10;
    case 163u: goto L_003E5C5C;
    case 164u: goto L_003E5C64;
    case 165u: goto L_003E5C84;
    case 166u: goto L_003E5CA0;
    case 167u: goto L_003E5CB8;
    case 168u: goto L_003E5CC0;
    case 169u: goto L_003E5CDC;
    case 170u: goto L_003E5D04;
    case 171u: goto L_003E5D18;
    case 172u: goto L_003E5D24;
    case 173u: goto L_003E5D50;
    case 174u: goto L_003E5D68;
    case 175u: goto L_003E5DA4;
    case 176u: goto L_003E5DC4;
    case 177u: goto L_003E5DF8;
    case 178u: goto L_003E5E28;
    case 179u: goto L_003E5E34;
    case 180u: goto L_003E5E68;
    case 181u: goto L_003E5E78;
    case 182u: goto L_003E5E88;
    case 183u: goto L_003E5EA4;
    case 184u: goto L_003E5EBC;
    case 185u: goto L_003E5ECC;
    case 186u: goto L_003E5EE8;
    case 187u: goto L_003E5EF4;
    case 188u: goto L_003E5F0C;
    case 189u: goto L_003E5F4C;
    case 190u: goto L_003E5F5C;
    case 191u: goto L_003E5F88;
    case 192u: goto L_003E5FF8;
    case 193u: goto L_003E6060;
    case 194u: goto L_003E6068;
    case 195u: goto L_003E60E8;
    case 196u: goto L_003E6118;
    case 197u: goto L_003E61C0;
    case 198u: goto L_003E61E0;
    case 199u: goto L_003E6278;
    case 200u: goto L_003E6370;
    case 201u: goto L_003E63FC;
    case 202u: goto L_003E6420;
    case 203u: goto L_003E6490;
    case 204u: goto L_003E64B8;
    case 205u: goto L_003E6514;
    case 206u: goto L_003E6534;
    case 207u: goto L_003E6590;
    case 208u: goto L_003E65A8;
    case 209u: goto L_003E661C;
    case 210u: goto L_003E6630;
    case 211u: goto L_003E6670;
    case 212u: goto L_003E66E4;
    case 213u: goto L_003E6714;
    case 214u: goto L_003E6748;
    case 215u: goto L_003E6784;
    case 216u: goto L_003E67AC;
    case 217u: goto L_003E67BC;
    case 218u: goto L_003E67D0;
    case 219u: goto L_003E67F8;
    case 220u: goto L_003E6800;
    case 221u: goto L_003E6870;
    case 222u: goto L_003E6874;
    case 223u: goto L_003E6938;
    case 224u: goto L_003E6944;
    case 225u: goto L_003E6954;
    case 226u: goto L_003E69B0;
    case 227u: goto L_003E69D0;
    case 228u: goto L_003E69DC;
    case 229u: goto L_003E69F8;
    case 230u: goto L_003E6A44;
    case 231u: goto L_003E6A54;
    case 232u: goto L_003E6AA4;
    case 233u: goto L_003E6AB4;
    case 234u: goto L_003E6B08;
    case 235u: goto L_003E6B18;
    case 236u: goto L_003E6B40;
    case 237u: goto L_003E6B64;
    case 238u: goto L_003E6B98;
    case 239u: goto L_003E6BA8;
    case 240u: goto L_003E6BB8;
    case 241u: goto L_003E6BC8;
    case 242u: goto L_003E6BD8;
    case 243u: goto L_003E6BE0;
    case 244u: goto L_003E6BF4;
    case 245u: goto L_003E6BFC;
    case 246u: goto L_003E6C04;
    case 247u: goto L_003E6C28;
    case 248u: goto L_003E6C68;
    case 249u: goto L_003E6C80;
    case 250u: goto L_003E6C90;
    case 251u: goto L_003E6CA0;
    case 252u: goto L_003E6CC0;
    case 253u: goto L_003E6D00;
    case 254u: goto L_003E6D40;
    case 255u: goto L_003E6D48;
    case 256u: goto L_003E6D88;
    case 257u: goto L_003E6D94;
    case 258u: goto L_003E6DC8;
    case 259u: goto L_003E6DEC;
    case 260u: goto L_003E6E48;
    case 261u: goto L_003E6E54;
    case 262u: goto L_003E6E64;
    case 263u: goto L_003E6E74;
    case 264u: goto L_003E6E84;
    case 265u: goto L_003E6EA0;
    case 266u: goto L_003E6EAC;
    case 267u: goto L_003E6EE8;
    case 268u: goto L_003E6F0C;
    case 269u: goto L_003E6F50;
    case 270u: goto L_003E6F58;
    case 271u: goto L_003E6F7C;
    case 272u: goto L_003E6FA8;
    case 273u: goto L_003E6FB8;
    case 274u: goto L_003E6FD4;
    case 275u: goto L_003E6FE0;
    case 276u: goto L_003E7010;
    case 277u: goto L_003E705C;
    case 278u: goto L_003E7068;
    case 279u: goto L_003E70A8;
    case 280u: goto L_003E70B0;
    case 281u: goto L_003E70E0;
    case 282u: goto L_003E70E8;
    case 283u: goto L_003E70F0;
    case 284u: goto L_003E70F8;
    case 285u: goto L_003E7110;
    case 286u: goto L_003E711C;
    case 287u: goto L_003E712C;
    case 288u: goto L_003E7138;
    case 289u: goto L_003E7140;
    case 290u: goto L_003E7168;
    case 291u: goto L_003E7178;
    case 292u: goto L_003E7184;
    case 293u: goto L_003E71A4;
    case 294u: goto L_003E71AC;
    case 295u: goto L_003E71C4;
    case 296u: goto L_003E71D8;
    case 297u: goto L_003E71F0;
    case 298u: goto L_003E7204;
    case 299u: goto L_003E7220;
    case 300u: goto L_003E7234;
    case 301u: goto L_003E7244;
    case 302u: goto L_003E7268;
    case 303u: goto L_003E7270;
    case 304u: goto L_003E7284;
    case 305u: goto L_003E729C;
    case 306u: goto L_003E72B0;
    case 307u: goto L_003E72C0;
    case 308u: goto L_003E72D4;
    case 309u: goto L_003E72E8;
    case 310u: goto L_003E72F4;
    case 311u: goto L_003E7304;
    case 312u: goto L_003E731C;
    case 313u: goto L_003E7330;
    case 314u: goto L_003E7344;
    case 315u: goto L_003E7358;
    case 316u: goto L_003E7370;
    case 317u: goto L_003E738C;
    case 318u: goto L_003E73A8;
    case 319u: goto L_003E73B0;
    case 320u: goto L_003E73C0;
    case 321u: goto L_003E73D4;
    case 322u: goto L_003E7408;
    case 323u: goto L_003E7458;
    case 324u: goto L_003E7464;
    case 325u: goto L_003E74A8;
    case 326u: goto L_003E74C0;
    case 327u: goto L_003E74FC;
    case 328u: goto L_003E751C;
    case 329u: goto L_003E7590;
    case 330u: goto L_003E75C0;
    case 331u: goto L_003E7640;
    case 332u: goto L_003E7658;
    case 333u: goto L_003E7688;
    case 334u: goto L_003E76E8;
    case 335u: goto L_003E7734;
    case 336u: goto L_003E77A4;
    case 337u: goto L_003E77B4;
    case 338u: goto L_003E7838;
    case 339u: goto L_003E7850;
    case 340u: goto L_003E78DC;
    case 341u: goto L_003E78EC;
    case 342u: goto L_003E7968;
    case 343u: goto L_003E7978;
    case 344u: goto L_003E79E0;
    case 345u: goto L_003E7A14;
    case 346u: goto L_003E7A60;
    case 347u: goto L_003E7AB0;
    case 348u: goto L_003E7AC0;
    case 349u: goto L_003E7B04;
    case 350u: goto L_003E7B28;
    case 351u: goto L_003E7B34;
    case 352u: goto L_003E7B44;
    case 353u: goto L_003E7B4C;
    case 354u: goto L_003E7B58;
    case 355u: goto L_003E7B64;
    case 356u: goto L_003E7B6C;
    case 357u: goto L_003E7B80;
    case 358u: goto L_003E7BA0;
    case 359u: goto L_003E7BAC;
    case 360u: goto L_003E7BEC;
    case 361u: goto L_003E7C38;
    case 362u: goto L_003E7CD0;
    case 363u: goto L_003E7CE0;
    case 364u: goto L_003E7CEC;
    case 365u: goto L_003E7D18;
    case 366u: goto L_003E7D40;
    case 367u: goto L_003E7D4C;
    case 368u: goto L_003E7D90;
    case 369u: goto L_003E7DA0;
    case 370u: goto L_003E7DDC;
    case 371u: goto L_003E7DE4;
    case 372u: goto L_003E7DEC;
    case 373u: goto L_003E7DF4;
    case 374u: goto L_003E7E38;
    case 375u: goto L_003E7E88;
    case 376u: goto L_003E7EA8;
    case 377u: goto L_003E7ED8;
    case 378u: goto L_003E7EF4;
    case 379u: goto L_003E7F08;
    case 380u: goto L_003E7F50;
    case 381u: goto L_003E7F8C;
    case 382u: goto L_003E7F9C;
    case 383u: goto L_003E7FB0;
    case 384u: goto L_003E7FC8;
    case 385u: goto L_003E7FF0;
    default: bad_entry(c, 0x003E4000u); return;
    }
L_003E4000:
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 512u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[21] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_003E402C; } }
L_003E4018:
    c.f[1] = ld32((c.r[2].w[0] + 512u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 2264u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[21] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 5;
L_003E402C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x49740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E4090; } }
    set32(c.r[3], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 2328u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E4090; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 412u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E4080; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E4080; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4080u); set32(c.r[5], c.r[5].w[0] - 26304u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E4080u) [[unlikely]] return; }
L_003E4080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4088u);  if (depth < kMaxDepth) unit_00B8(c, 294u, depth + 1u); else { c.pc = 0x003E37E8u; return; } if (c.pc != 0x003E4088u) [[unlikely]] return; }
L_003E4088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { goto L_003E4470; } }
L_003E4090:
    set32(c.r[4], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[4].w[0] + 2328u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_003E40C0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E40B8u); set32(c.r[5], c.r[5].w[0] - 26168u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E40B8u) [[unlikely]] return; }
L_003E40B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E40E8; } }
L_003E40C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 412u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E40D8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E40E8; } }
L_003E40D8:
    set32(c.r[4], ld32((c.r[4].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E40E4u); set32(c.r[5], c.r[5].w[0] - 26048u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E40E4u) [[unlikely]] return; }
L_003E40E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003E40E8:
    set32(c.r[16], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[16].w[0] + 216u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 12u)));  if (t) { goto L_003E4194; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E4144; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] - 25888u);  if (t) { goto L_003E4118; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] - 26816u);  if (t) { goto L_003E4120; } }
L_003E4118:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[17], c.r[2].w[0] - 26808u);
    c.budget -= 2;
L_003E4120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4128u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E4128u) [[unlikely]] return; }
L_003E4128:
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E413Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E413Cu) [[unlikely]] return; }
L_003E413C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E4198; } }
L_003E4144:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[12] = c.f[22];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4154u); set32(c.r[19], c.r[2].w[0] - 25760u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E4154u) [[unlikely]] return; }
L_003E4154:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E416C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] - 26816u);  if (t) { goto L_003E4174; } }
L_003E416C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[17], c.r[2].w[0] - 26808u);
    c.budget -= 2;
L_003E4174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E417Cu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E417Cu) [[unlikely]] return; }
L_003E417C:
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4194u); c.r[8].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E4194u) [[unlikely]] return; }
L_003E4194:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003E4198:
    set32(c.r[3], c.r[2].w[0] - 22720u);
    set32(c.r[19], ld32((c.r[3].w[0] + 2212u)));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E43E8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E43E8; } }
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 3;
L_003E41C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_003E41E0; } }
    set32(c.r[2], ld32((c.r[23].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[19].w[0] + 28u)));  goto L_003E43D0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_003E41E0:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[19].w[0] + 28u)));  goto L_003E43D0; }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 12u)));  if (t) { goto L_003E4214; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[23].w[0] + 2192u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E420Cu); set32(c.r[5], c.r[2].w[0] - 25640u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E420Cu) [[unlikely]] return; }
L_003E420C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[19].w[0] + 28u)));  if (t) { goto L_003E43D0; } }
L_003E4214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[23].w[0] + 512u)));  if (t) { goto L_003E422C; } }
    c.f[0] = ld32((c.r[23].w[0] + 1600u));
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.f[20] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
L_003E422C:
    set32(c.r[3], ld32((c.r[23].w[0] + 504u)));
    set32(c.r[18], ld32((c.r[23].w[0] + 516u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[22], c.r[18].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E4304; } }
    set32(c.r[21], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[21].w[0] + 68u)));
    c.budget -= 3;
L_003E4258:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003E42EC; } }
    c.r[20].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4270u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003E4270u) [[unlikely]] return; }
L_003E4270:
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[20].w[0]));  goto L_003E42D8; }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == c.r[19].d[0];  if (t) { goto L_003E4294; } }
    st32((c.r[29].w[0] + 16u), c.r[30].w[0]);
    c.r[30].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_003E4294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E429Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003E429Cu) [[unlikely]] return; }
L_003E429C:
    c.f[12] = ld32((c.r[29].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E42A8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E42A8u) [[unlikely]] return; }
L_003E42A8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E42B4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E42B4u) [[unlikely]] return; }
L_003E42B4:
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 2192u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], ld32((c.r[19].w[0] + 56u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E42D4u); set32(c.r[5], c.r[2].w[0] - 26800u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E42D4u) [[unlikely]] return; }
L_003E42D4:
    c.f[0] = ld32((c.r[20].w[0]));
    c.budget -= 1;
L_003E42D8:
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[20].w[0]), c.f[1]);  goto L_003E42EC; }
L_003E42EC:
    set32(c.r[2], ld32((c.r[21].w[0] + 504u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[18].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 68u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E4258u | kUnwind; return; } goto L_003E4258; }
L_003E4304:
    set32(c.r[2], ld32((c.r[23].w[0] + 2420u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], ld32((c.r[19].w[0] + 28u)));  goto L_003E43D0; }
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[21], c.r[2].w[0] + 8u);  if (t) { goto L_003E43CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[22], c.r[2].w[0] - 22720u);
    c.budget -= 3;
L_003E4328:
    set32(c.r[2], ld32((c.r[22].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003E43C0; } }
    c.r[20].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4344u); set32(c.r[6], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003E4344u) [[unlikely]] return; }
L_003E4344:
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[20].w[0]));  goto L_003E43AC; }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == c.r[19].d[0];  if (t) { goto L_003E4368; } }
    st32((c.r[29].w[0] + 16u), c.r[30].w[0]);
    c.r[30].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_003E4368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4370u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003E4370u) [[unlikely]] return; }
L_003E4370:
    c.f[12] = ld32((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E437Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E437Cu) [[unlikely]] return; }
L_003E437C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4388u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E4388u) [[unlikely]] return; }
L_003E4388:
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[22].w[0] + 2192u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], ld32((c.r[19].w[0] + 56u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E43A8u); set32(c.r[5], c.r[2].w[0] - 26800u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E43A8u) [[unlikely]] return; }
L_003E43A8:
    c.f[0] = ld32((c.r[20].w[0]));
    c.budget -= 1;
L_003E43AC:
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[20].w[0]), c.f[1]);  goto L_003E43C0; }
L_003E43C0:
    set32(c.r[18], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E4328u | kUnwind; return; } goto L_003E4328; } }
L_003E43CC:
    set32(c.r[19], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 1;
L_003E43D0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E43E8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E41C0u | kUnwind; return; } goto L_003E41C0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003E43E8:
    c.f[12] = ld32((c.r[29].w[0]));
    set32(c.r[18], c.r[2].w[0] - 22720u);
    c.f[1] = ld32((c.r[18].w[0] + 1656u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E4444; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E440Cu); set32(c.r[16], c.r[16].w[0] - 25576u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E440Cu) [[unlikely]] return; }
L_003E440C:
    c.f[12] = ld32((c.r[18].w[0] + 1656u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4418u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E4418u) [[unlikely]] return; }
L_003E4418:
    set32(c.r[4], ld32((c.r[18].w[0] + 2192u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E442Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E442Cu) [[unlikely]] return; }
L_003E442C:
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E443Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00BB(c, 104u, depth + 1u); else { c.pc = 0x003ED100u; return; } if (c.pc != 0x003E443Cu) [[unlikely]] return; }
L_003E443C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { goto L_003E4470; } }
L_003E4444:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E446C; } }
    c.f[0] = ld32((c.r[2].w[0] - 25440u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003E446C; } }
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E446Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00BB(c, 104u, depth + 1u); else { c.pc = 0x003ED100u; return; } if (c.pc != 0x003E446Cu) [[unlikely]] return; }
L_003E446C:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003E4470:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 208u));
    c.f[21] = ld32((c.r[29].w[0] + 200u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003E44A8:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    set32(c.r[6], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    set32(c.r[3], ld32((c.r[6].w[0] + 392u)));
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 12u), 0u);
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 20u), 0u);
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 24u), 0u);  if (t) { goto L_003E4510; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[2].w[0] - 20104u);
    st32((c.r[2].w[0] + 132u), 0u);
    st32((c.r[2].w[0] + 92u), 0u);
    c.budget -= 4;
L_003E4510:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003E49D8; } }
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003E49D8; } }
    c.f[20] = 0u;
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 2;
L_003E4530:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003E4578; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25432u);
    st32((c.r[29].w[0] + 8u), c.r[19].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4554u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 107u, depth + 1u); else { c.pc = 0x003ED148u; return; } if (c.pc != 0x003E4554u) [[unlikely]] return; }
L_003E4554:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] - 22720u);
    set32(c.r[6], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4570u); set32(c.r[5], c.r[5].w[0] - 25416u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E4570u) [[unlikely]] return; }
L_003E4570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[19].w[0] + 28u)));  if (t) { goto L_003E49C0; } }
L_003E4578:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 40u)));  goto L_003E45AC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 1568u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 8704ull;  if (t) { goto L_003E45A4; } }
    set32(c.r[3], 0u + 8192u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 40u)));  goto L_003E45AC; }
L_003E45A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 28u), 0u);  if (t) { goto L_003E47A8; } }
L_003E45AC:
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_003E47A8; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[21], c.r[2].w[0] + 8u);  if (t) { goto L_003E47A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[22], c.r[2].w[0] - 20104u);
    c.r[23].d[0] = c.r[23].d[0] | 65535ull;
    c.budget -= 4;
L_003E45D8:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[30].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 8704ull;
    set32(c.r[2], 0u + 8192u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[30], c.r[30].w[0] + 1u);  if (t) { goto L_003E4604; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 28u), 0u);  if (t) { goto L_003E479C; } }
L_003E4604:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[20], c.r[3].w[0] - 22720u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E461Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003E461Cu) [[unlikely]] return; }
L_003E461C:
    c.f[0] = ld32((c.r[20].w[0] + 1600u));
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003E479C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[0] = ld32((c.r[20].w[0] + 1600u));  goto L_003E4684; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4650u); set32(c.r[4], c.r[2].w[0] - 25344u);  if (depth < kMaxDepth) unit_00BB(c, 107u, depth + 1u); else { c.pc = 0x003ED148u; return; } if (c.pc != 0x003E4650u) [[unlikely]] return; }
L_003E4650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4658u); c.f[12] = ld32((c.r[29].w[0]));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E4658u) [[unlikely]] return; }
L_003E4658:
    set32(c.r[4], ld32((c.r[20].w[0] + 2192u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E466Cu); set32(c.r[5], c.r[3].w[0] - 25312u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E466Cu) [[unlikely]] return; }
L_003E466C:
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E467Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E467Cu) [[unlikely]] return; }
L_003E467C:
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[0] = ld32((c.r[20].w[0] + 1600u));
    c.budget -= 2;
L_003E4684:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E4700; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 92u)));
    set32(c.r[4], c.r[3].w[0] - 25240u);
    st32((c.r[29].w[0] + 12u), c.r[18].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 8u), c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E46B8u); st32((c.r[22].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 107u, depth + 1u); else { c.pc = 0x003ED148u; return; } if (c.pc != 0x003E46B8u) [[unlikely]] return; }
L_003E46B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E46C0u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003E46C0u) [[unlikely]] return; }
L_003E46C0:
    set32(c.r[16], ld32((c.r[16].w[0] + 20u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E46D4u); c.r[16].d[0] = c.r[16].d[0] & c.r[23].d[0];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E46D4u) [[unlikely]] return; }
L_003E46D4:
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 2192u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], ld32((c.r[18].w[0] + 56u)));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E46F8u); set32(c.r[5], c.r[2].w[0] - 25224u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E46F8u) [[unlikely]] return; }
L_003E46F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[21].w[0])));  if (t) { goto L_003E47A0; } }
L_003E4700:
    set32(c.r[2], ld32((c.r[20].w[0] + 1568u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[22].w[0] + 132u)));  goto L_003E4788; }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E479C; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 132u)));
    set32(c.r[4], c.r[3].w[0] - 25144u);
    st32((c.r[29].w[0] + 12u), c.r[18].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 8u), c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4740u); st32((c.r[22].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 107u, depth + 1u); else { c.pc = 0x003ED148u; return; } if (c.pc != 0x003E4740u) [[unlikely]] return; }
L_003E4740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4748u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003E4748u) [[unlikely]] return; }
L_003E4748:
    set32(c.r[16], ld32((c.r[16].w[0] + 20u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E475Cu); c.r[16].d[0] = c.r[16].d[0] & c.r[23].d[0];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E475Cu) [[unlikely]] return; }
L_003E475C:
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 2192u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], ld32((c.r[18].w[0] + 56u)));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4780u); set32(c.r[5], c.r[2].w[0] - 25128u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E4780u) [[unlikely]] return; }
L_003E4780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[21].w[0])));  if (t) { goto L_003E47A0; } }
L_003E4788:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[3].w[0] - 25144u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E479Cu); st32((c.r[22].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 107u, depth + 1u); else { c.pc = 0x003ED148u; return; } if (c.pc != 0x003E479Cu) [[unlikely]] return; }
L_003E479C:
    set32(c.r[18], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_003E47A0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E45D8u | kUnwind; return; } goto L_003E45D8; } }
L_003E47A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[19].w[0] + 28u)));  goto L_003E49C0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[4].w[0] + 2312u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 20u)));  if (t) { goto L_003E47EC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], ld32((c.r[19].w[0] + 20u)));  goto L_003E4830; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E47E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 7u, depth + 1u); else { c.pc = 0x003F40F8u; return; } if (c.pc != 0x003E47E0u) [[unlikely]] return; }
L_003E47E0:
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_003E4830; } }
L_003E47EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003E4820; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[3], 0u + 8192u);
    c.r[2].d[0] = c.r[2].d[0] & 8704ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E481C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 2192u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 25032u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E481Cu); st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E481Cu) [[unlikely]] return; }
L_003E481C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003E4820:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E482Cu); st32((c.r[29].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 7u, depth + 1u); else { c.pc = 0x003F40F8u; return; } if (c.pc != 0x003E482Cu) [[unlikely]] return; }
L_003E482C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003E4830:
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 24u)));  goto L_003E49A4; }
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[21], c.r[2].w[0] + 8u);  if (t) { goto L_003E49A0; } }
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
L_003E4858:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 1568u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 60u)));  if (t) { goto L_003E4888; } }
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 512ull;  if (t) { goto L_003E488C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[21].w[0])));  goto L_003E4998; }
L_003E4888:
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 1;
L_003E488C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[21].w[0])));  goto L_003E4998; }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[21].w[0])));  goto L_003E4998; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[16], c.r[2].w[0] - 20104u);
    set32(c.r[17], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E48D0u); st32((c.r[16].w[0] + 196u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003E48D0u) [[unlikely]] return; }
L_003E48D0:
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 1600u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E493C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[4], c.r[3].w[0] - 25240u);
    st32((c.r[29].w[0] + 12u), c.r[18].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 8u), c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E490Cu); st32((c.r[16].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 107u, depth + 1u); else { c.pc = 0x003ED148u; return; } if (c.pc != 0x003E490Cu) [[unlikely]] return; }
L_003E490C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4914u); c.f[12] = ld32((c.r[29].w[0]));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E4914u) [[unlikely]] return; }
L_003E4914:
    set32(c.r[6], ld32((c.r[19].w[0] + 56u)));
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[5], c.r[30].w[0] - 24928u);
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4934u); c.r[10].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E4934u) [[unlikely]] return; }
L_003E4934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[21].w[0])));  if (t) { goto L_003E4998; } }
L_003E493C:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_003E4994; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    st32((c.r[29].w[0] + 12u), c.r[18].w[0]);
    set32(c.r[4], c.r[23].w[0] - 25144u);
    st32((c.r[29].w[0] + 8u), c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E496Cu); st32((c.r[16].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 107u, depth + 1u); else { c.pc = 0x003ED148u; return; } if (c.pc != 0x003E496Cu) [[unlikely]] return; }
L_003E496C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4974u); c.f[12] = ld32((c.r[29].w[0]));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E4974u) [[unlikely]] return; }
L_003E4974:
    set32(c.r[6], ld32((c.r[19].w[0] + 56u)));
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[5], c.r[22].w[0] - 24840u);
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4994u); c.r[10].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E4994u) [[unlikely]] return; }
L_003E4994:
    set32(c.r[18], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_003E4998:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E4858u | kUnwind; return; } goto L_003E4858; } }
L_003E49A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 1;
L_003E49A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E49BC; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 22720u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E49BCu); set32(c.r[5], ld32((c.r[3].w[0] + 2200u)));  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003E49BCu) [[unlikely]] return; }
L_003E49BC:
    set32(c.r[19], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 1;
L_003E49C0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003E49D8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E4530u | kUnwind; return; } goto L_003E4530; }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 1;
L_003E49D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E4A00; } }
    set32(c.r[2], c.r[3].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { goto L_003E4A04; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4A00u); set32(c.r[6], ld32((c.r[29].w[0] + 12u)));  if (depth < kMaxDepth) unit_00BB(c, 104u, depth + 1u); else { c.pc = 0x003ED100u; return; } if (c.pc != 0x003E4A00u) [[unlikely]] return; }
L_003E4A00:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003E4A04:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003E4A38:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[18].d[0] | 65535ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 60u)));
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    st32((c.r[29].w[0] + 12u), 0u);
    st32((c.r[29].w[0] + 16u), 0u);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 20u), 0u);  if (t) { goto L_003E4ABC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[6], ld32((c.r[22].w[0] + 56u)));
    set32(c.r[2], c.r[3].w[0] - 22720u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4AACu); set32(c.r[5], c.r[5].w[0] - 24744u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E4AACu) [[unlikely]] return; }
L_003E4AAC:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4ABCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E4ABCu) [[unlikely]] return; }
L_003E4ABC:
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[22].w[0] + 32u)));  goto L_003E4AF0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[3].w[0] - 22720u);
    set32(c.r[6], ld32((c.r[22].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    set32(c.r[5], c.r[5].w[0] - 24672u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4AECu); st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E4AECu) [[unlikely]] return; }
L_003E4AEC:
    set32(c.r[4], ld32((c.r[22].w[0] + 32u)));
    c.budget -= 1;
L_003E4AF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[22].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4B00u); set32(c.r[5], c.r[5].w[0] - 24592u);  if (depth < kMaxDepth) unit_00BB(c, 194u, depth + 1u); else { c.pc = 0x003EE218u; return; } if (c.pc != 0x003E4B00u) [[unlikely]] return; }
L_003E4B00:
    set32(c.r[4], ld32((c.r[22].w[0] + 36u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[22].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4B14u); set32(c.r[5], c.r[5].w[0] - 24576u);  if (depth < kMaxDepth) unit_00BB(c, 194u, depth + 1u); else { c.pc = 0x003EE218u; return; } if (c.pc != 0x003E4B14u) [[unlikely]] return; }
L_003E4B14:
    set32(c.r[4], ld32((c.r[22].w[0] + 44u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[22].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4B28u); set32(c.r[5], c.r[5].w[0] - 24560u);  if (depth < kMaxDepth) unit_00BB(c, 194u, depth + 1u); else { c.pc = 0x003EE218u; return; } if (c.pc != 0x003E4B28u) [[unlikely]] return; }
L_003E4B28:
    set32(c.r[4], ld32((c.r[22].w[0] + 48u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[22].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4B3Cu); set32(c.r[5], c.r[5].w[0] - 24536u);  if (depth < kMaxDepth) unit_00BB(c, 194u, depth + 1u); else { c.pc = 0x003EE218u; return; } if (c.pc != 0x003E4B3Cu) [[unlikely]] return; }
L_003E4B3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[22].w[0] + 40u)));
    set32(c.r[6], ld32((c.r[22].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4B50u); set32(c.r[5], c.r[5].w[0] - 24512u);  if (depth < kMaxDepth) unit_00BB(c, 194u, depth + 1u); else { c.pc = 0x003EE218u; return; } if (c.pc != 0x003E4B50u) [[unlikely]] return; }
L_003E4B50:
    set32(c.r[2], ld32((c.r[22].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E4BE8; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[20], c.r[2].w[0] + 8u);  if (t) { goto L_003E4BE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[30], c.r[2].w[0] - 22720u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[17].d[0] = c.r[17].d[0] | 65535ull;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 8;
L_003E4B88:
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[6].d[0] & c.r[23].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003E4BC8; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 2192u)));
    set32(c.r[7], ld32((c.r[22].w[0] + 56u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[17].d[0];
    set32(c.r[5], c.r[21].w[0] - 24496u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4BB0u); st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E4BB0u) [[unlikely]] return; }
L_003E4BB0:
    set32(c.r[4], c.r[19].w[0] - 24424u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4BC8u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 119u, depth + 1u); else { c.pc = 0x003F27E0u; return; } if (c.pc != 0x003E4BC8u) [[unlikely]] return; }
L_003E4BC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[7].d[0] = c.r[2].d[0] & c.r[17].d[0];
    c.r[3].d[0] = c.r[7].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003E4C84; } }
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E4B88u | kUnwind; return; } goto L_003E4B88; } }
L_003E4BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4BF0u); set32(c.r[4], ld32((c.r[22].w[0] + 40u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E4BF0u) [[unlikely]] return; }
L_003E4BF0:
    set32(c.r[4], ld32((c.r[22].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4BFCu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E4BFCu) [[unlikely]] return; }
L_003E4BFC:
    set32(c.r[4], ld32((c.r[22].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4C08u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E4C08u) [[unlikely]] return; }
L_003E4C08:
    set32(c.r[4], ld32((c.r[22].w[0] + 60u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E4CB0; } }
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[18], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[22].w[0] + 40u)));  goto L_003E4DBC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[22].w[0] + 40u)));  goto L_003E4DBC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 2192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[22].w[0] + 56u)));
    set32(c.r[5], c.r[5].w[0] - 24312u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4C60u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E4C60u) [[unlikely]] return; }
L_003E4C60:
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 26808u);
    set32(c.r[4], ld32((c.r[18].w[0] + 2192u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4C7Cu); set32(c.r[6], ld32((c.r[22].w[0] + 40u)));  if (depth < kMaxDepth) unit_00BB(c, 248u, depth + 1u); else { c.pc = 0x003EEB78u; return; } if (c.pc != 0x003E4C7Cu) [[unlikely]] return; }
L_003E4C7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[22].w[0] + 40u)));  if (t) { goto L_003E4DBC; } }
L_003E4C84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[3].w[0] - 22720u);
    set32(c.r[6], ld32((c.r[22].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    set32(c.r[5], c.r[5].w[0] - 24408u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4CA8u); st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E4CA8u) [[unlikely]] return; }
L_003E4CA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E4BE8u | kUnwind; return; } goto L_003E4BE8; } }
L_003E4CB0:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_003E4D14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], c.r[2].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[5].w[0] + 504u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_003E4CDC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_003E4D14; } }
L_003E4CDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_003E4D14; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 2192u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[22].w[0] + 56u)));
    set32(c.r[5], c.r[5].w[0] - 24200u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4D08u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E4D08u) [[unlikely]] return; }
L_003E4D08:
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003E4D14:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[22].w[0] + 60u)));  goto L_003E4D78; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E4D4C; } }
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 2u);  goto L_003E4D50; }
    set32(c.r[2], ld32((c.r[4].w[0] + 2344u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[22].w[0] + 60u)));  goto L_003E4D78; }
L_003E4D4C:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_003E4D50:
    set32(c.r[2], c.r[3].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[2].w[0] + 504u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[2], ld32((c.r[22].w[0] + 40u)));  goto L_003E4DBC; }
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[3], 0u + 6u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[22].w[0] + 40u)));  goto L_003E4DBC; }
    set32(c.r[2], ld32((c.r[22].w[0] + 60u)));
    c.budget -= 1;
L_003E4D78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[22].w[0] + 40u)));  goto L_003E4DBC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[3].w[0] - 22720u);
    set32(c.r[6], ld32((c.r[22].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    set32(c.r[5], c.r[5].w[0] - 24096u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4DB0u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E4DB0u) [[unlikely]] return; }
L_003E4DB0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 40u)));
    c.budget -= 3;
L_003E4DBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[22].w[0] + 36u)));  goto L_003E4ED8; }
    set32(c.r[19], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[30], c.r[2].w[0] + 8u);  if (t) { goto L_003E4E24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[2].w[0] - 22720u);
    c.budget -= 4;
L_003E4DE0:
    set32(c.r[2], c.r[19].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] - 23968u);  if (t) { goto L_003E4E0C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4DFCu); set32(c.r[6], ld32((c.r[22].w[0] + 56u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E4DFCu) [[unlikely]] return; }
L_003E4DFC:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4E0Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E4E0Cu) [[unlikely]] return; }
L_003E4E0C:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[30].w[0])));
    c.budget -= 6;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[30], c.r[30].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E4DE0u | kUnwind; return; } goto L_003E4DE0; } }
L_003E4E24:
    set32(c.r[2], ld32((c.r[22].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[22].w[0] + 36u)));  goto L_003E4ED8; }
    set32(c.r[19], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[30], c.r[2].w[0] + 8u);  if (t) { goto L_003E4ED4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[2].w[0] - 22720u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[17], 0u - 16385u);
    c.budget -= 5;
L_003E4E50:
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4E5Cu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 238u, depth + 1u); else { c.pc = 0x003EEA80u; return; } if (c.pc != 0x003E4E5Cu) [[unlikely]] return; }
L_003E4E5C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 60u)));  goto L_003E4E90; }
    set32(c.r[6], ld32((c.r[22].w[0] + 56u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[7], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[5], c.r[20].w[0] - 23880u);
    st32((c.r[29].w[0] + 12u), c.r[19].w[0]);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4E8Cu); st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E4E8Cu) [[unlikely]] return; }
L_003E4E8C:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 1;
L_003E4E90:
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 60u)));  goto L_003E4EC0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], ld32((c.r[22].w[0] + 56u)));
    set32(c.r[5], c.r[18].w[0] - 23776u);
    st32((c.r[29].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[7], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4EBCu); st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E4EBCu) [[unlikely]] return; }
L_003E4EBC:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 1;
L_003E4EC0:
    c.r[2].d[0] = c.r[2].d[0] & c.r[17].d[0];
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[30].w[0])));
    c.budget -= 5;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[30], c.r[30].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E4E50u | kUnwind; return; } goto L_003E4E50; } }
L_003E4ED4:
    set32(c.r[2], ld32((c.r[22].w[0] + 36u)));
    c.budget -= 1;
L_003E4ED8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[22].w[0] + 60u)));  goto L_003E5048; }
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[21], c.r[2].w[0] + 8u);  if (t) { goto L_003E4F2C; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[18].d[0] | 65535ull;
    c.r[16].d[0] = c.r[16].d[0] | 65535ull;
    c.budget -= 5;
L_003E4F00:
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], c.r[19].w[0] - 23696u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4F14u); c.r[6].d[0] = c.r[6].d[0] & c.r[18].d[0];  if (depth < kMaxDepth) unit_00BB(c, 194u, depth + 1u); else { c.pc = 0x003EE218u; return; } if (c.pc != 0x003E4F14u) [[unlikely]] return; }
L_003E4F14:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[21].w[0])));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E4F00u | kUnwind; return; } goto L_003E4F00; } }
L_003E4F2C:
    set32(c.r[2], ld32((c.r[22].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[22].w[0] + 60u)));  goto L_003E5048; }
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[21], c.r[2].w[0] + 8u);  if (t) { goto L_003E5044; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[20], c.r[2].w[0] - 22720u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[16].d[0] = c.r[16].d[0] | 65535ull;
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 7;
L_003E4F60:
    set32(c.r[7], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[7].d[0] & c.r[18].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E4F90; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 2192u)));
    set32(c.r[6], ld32((c.r[22].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.r[7].d[0] = c.r[7].d[0] & c.r[16].d[0];
    set32(c.r[5], c.r[3].w[0] - 23680u);
    st32((c.r[29].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4F90u); st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E4F90u) [[unlikely]] return; }
L_003E4F90:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[18].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4FA4u); st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E4FA4u) [[unlikely]] return; }
L_003E4FA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[8].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[30].w[0] - 23600u);  if (t) { goto L_003E4FE4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 2192u)));
    st32((c.r[29].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4FE4u); set32(c.r[7], ld32((c.r[3].w[0] + 56u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E4FE4u) [[unlikely]] return; }
L_003E4FE4:
    set32(c.r[19], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[22].d[0]) { set32(c.r[19], ld32((c.r[17].w[0] + 8u)));  goto L_003E4FF0; }
L_003E4FF0:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5008u); set32(c.r[4], ld32((c.r[22].w[0] + 40u)));  if (depth < kMaxDepth) unit_00BB(c, 238u, depth + 1u); else { c.pc = 0x003EEA80u; return; } if (c.pc != 0x003E5008u) [[unlikely]] return; }
L_003E5008:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[21].w[0])));  goto L_003E503C; }
    set32(c.r[8], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[7], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[5], c.r[23].w[0] - 23512u);
    st32((c.r[29].w[0] + 16u), c.r[17].w[0]);
    c.r[8].d[0] = c.r[8].d[0] & c.r[16].d[0];
    set32(c.r[4], ld32((c.r[20].w[0] + 2192u)));
    set32(c.r[6], ld32((c.r[22].w[0] + 56u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5038u); st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E5038u) [[unlikely]] return; }
L_003E5038:
    set32(c.r[17], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_003E503C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E4F60u | kUnwind; return; } goto L_003E4F60; } }
L_003E5044:
    set32(c.r[2], ld32((c.r[22].w[0] + 60u)));
    c.budget -= 1;
L_003E5048:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[22].w[0] + 40u)));  if (t) { goto L_003E5308; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  goto L_003E53A8; }
    set32(c.r[19], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[30], c.r[2].w[0] + 8u);  if (t) { goto L_003E53A4; } }
L_003E5068:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[22].w[0] + 32u)));  goto L_003E50A8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[6], ld32((c.r[22].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    set32(c.r[5], c.r[3].w[0] - 23416u);
    st32((c.r[29].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[7], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E50A4u); st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E50A4u) [[unlikely]] return; }
L_003E50A4:
    set32(c.r[4], ld32((c.r[22].w[0] + 32u)));
    c.budget -= 1;
L_003E50A8:
    set32(c.r[3], c.r[30].w[0] + 4u);
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E50B8u); set32(c.r[5], ld32((c.r[19].w[0] + 32u)));  if (depth < kMaxDepth) unit_00BA(c, 192u, depth + 1u); else { c.pc = 0x003E9E98u; return; } if (c.pc != 0x003E50B8u) [[unlikely]] return; }
L_003E50B8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E50C4u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 268u, depth + 1u); else { c.pc = 0x003EEEA8u; return; } if (c.pc != 0x003E50C4u) [[unlikely]] return; }
L_003E50C4:
    set32(c.r[2], ld32((c.r[22].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0])));  goto L_003E5110; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[20], c.r[2].w[0] + 8u);  if (t) { goto L_003E510C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFDFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 5;
L_003E50F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E50F0u | kUnwind; return; } goto L_003E50F0; } }
L_003E510C:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003E5110:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[22].w[0] + 36u)));  goto L_003E5148; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[20], c.r[2].w[0] + 8u);  if (t) { goto L_003E5144; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.budget -= 1;
L_003E5128:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5128u | kUnwind; return; } goto L_003E5128; } }
L_003E5144:
    set32(c.r[2], ld32((c.r[22].w[0] + 36u)));
    c.budget -= 1;
L_003E5148:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  goto L_003E5214; }
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[21], c.r[2].w[0] + 8u);  if (t) { goto L_003E5210; } }
    c.budget -= 1;
L_003E5160:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[22].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_003E516C; }
L_003E516C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[23], c.r[21].w[0] + 4u);  if (t) { goto L_003E5204; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[21].w[0])));  goto L_003E5208; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[20], c.r[2].w[0] + 8u);  if (t) { goto L_003E5204; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[18].d[0] = c.r[18].d[0] | 65535ull;
    c.budget -= 3;
L_003E5198:
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_003E51EC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[7], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[18].d[0];
    set32(c.r[8], ld32((c.r[22].w[0] + 56u)));
    set32(c.r[5], c.r[3].w[0] - 23328u);
    set32(c.r[9], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E51D8u); c.r[7].d[0] = c.r[7].d[0] & c.r[18].d[0];  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E51D8u) [[unlikely]] return; }
L_003E51D8:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E51E8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E51E8u) [[unlikely]] return; }
L_003E51E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_003E51EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5198u | kUnwind; return; } goto L_003E5198; } }
L_003E5204:
    set32(c.r[17], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_003E5208:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[21].d[0] = c.r[23].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5160u | kUnwind; return; } goto L_003E5160; } }
L_003E5210:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_003E5214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003E52EC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E52EC; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[20], c.r[2].w[0] + 8u);  if (t) { goto L_003E52EC; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[18].d[0] | 65535ull;
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
L_003E5240:
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[20].w[0])));  goto L_003E52E4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[17], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));  goto L_003E527C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[20].w[0])));  goto L_003E52E4; }
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    c.budget -= 1;
L_003E527C:
    c.r[6].d[0] = c.r[6].d[0] & c.r[18].d[0];
    set32(c.r[7], ld32((c.r[22].w[0] + 56u)));
    set32(c.r[5], c.r[23].w[0] - 23240u);
    set32(c.r[8], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5294u); set32(c.r[9], ld32((c.r[17].w[0] + 2316u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E5294u) [[unlikely]] return; }
L_003E5294:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[20].w[0])));  goto L_003E52E4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[20].w[0])));  goto L_003E52E4; }
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] - 24424u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E52C4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 119u, depth + 1u); else { c.pc = 0x003F27E0u; return; } if (c.pc != 0x003E52C4u) [[unlikely]] return; }
L_003E52C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[20].w[0])));  goto L_003E52E4; }
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E52E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E52E0u) [[unlikely]] return; }
L_003E52E0:
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_003E52E4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5240u | kUnwind; return; } goto L_003E5240; } }
L_003E52EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E52F4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003E52F4u) [[unlikely]] return; }
L_003E52F4:
    set32(c.r[19], ld32((c.r[30].w[0])));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[30], ld32((c.r[29].w[0] + 24u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5068u | kUnwind; return; } goto L_003E5068; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E53A8; } }
L_003E5308:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  goto L_003E53A8; }
    set32(c.r[19], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[30], c.r[2].w[0] + 8u);  if (t) { goto L_003E53A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[18], c.r[2].w[0] - 22720u);
    c.budget -= 3;
L_003E5328:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[30].w[0] - 8u);  if (t) { goto L_003E5398; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5350u); set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (depth < kMaxDepth) unit_00BB(c, 241u, depth + 1u); else { c.pc = 0x003EEAC0u; return; } if (c.pc != 0x003E5350u) [[unlikely]] return; }
L_003E5350:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[22].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 32u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5368u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 231u, depth + 1u); else { c.pc = 0x003EE900u; return; } if (c.pc != 0x003E5368u) [[unlikely]] return; }
L_003E5368:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[30].w[0])));  goto L_003E539C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 2192u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], ld32((c.r[22].w[0] + 56u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[19].w[0] + 56u)));
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] - 23096u);
    st32((c.r[29].w[0] + 12u), c.r[19].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5398u); st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E5398u) [[unlikely]] return; }
L_003E5398:
    set32(c.r[19], ld32((c.r[30].w[0])));
    c.budget -= 1;
L_003E539C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[30], c.r[30].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5328u | kUnwind; return; } goto L_003E5328; } }
L_003E53A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003E53A8:
    set32(c.r[3], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 504u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 20u)));  goto L_003E5494; }
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[22].w[0] + 36u)));  goto L_003E53DC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 20u)));  if (t) { goto L_003E5494; } }
    set32(c.r[6], ld32((c.r[22].w[0] + 36u)));
    c.budget -= 1;
L_003E53DC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003E5490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E53ECu); set32(c.r[17], ld32((c.r[6].w[0] + 4u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E53ECu) [[unlikely]] return; }
L_003E53EC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003E5490; } }
L_003E53F8:
    set32(c.r[18], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003E5474; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[30], c.r[3].w[0] - 22720u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[19].d[0] = c.r[19].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[22].w[0] + 36u)));
    c.budget -= 6;
L_003E5420:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5438u); set32(c.r[5], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00BB(c, 225u, depth + 1u); else { c.pc = 0x003EE7E8u; return; } if (c.pc != 0x003E5438u) [[unlikely]] return; }
L_003E5438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003E5464; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], c.r[23].w[0] - 23000u);
    st32((c.r[29].w[0] + 16u), c.r[17].w[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[19].d[0];
    c.r[6].d[0] = c.r[6].d[0] & c.r[19].d[0];
    set32(c.r[4], ld32((c.r[30].w[0] + 2192u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5464u); st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E5464u) [[unlikely]] return; }
L_003E5464:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[22].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5420u | kUnwind; return; } goto L_003E5420; }
L_003E5474:
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[22].w[0] + 36u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E53F8u | kUnwind; return; } goto L_003E53F8; } }
L_003E5490:
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 1;
L_003E5494:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E54C0; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 24424u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E54B4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 119u, depth + 1u); else { c.pc = 0x003F27E0u; return; } if (c.pc != 0x003E54B4u) [[unlikely]] return; }
L_003E54B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003E54C0:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003E54F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 2212u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003E5530; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st32((c.r[2].w[0] - 19788u), 0u);
    c.budget -= 2;
L_003E5530:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003E55C8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E55C8; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
L_003E5550:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E55B0; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5564u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 275u, depth + 1u); else { c.pc = 0x003E32B0u; return; } if (c.pc != 0x003E5564u) [[unlikely]] return; }
L_003E5564:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003E55B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5574u); c.f[12] = ld32((c.r[29].w[0]));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E5574u) [[unlikely]] return; }
L_003E5574:
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5588u); set32(c.r[5], c.r[20].w[0] - 22936u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E5588u) [[unlikely]] return; }
L_003E5588:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003E55B4; }
    set32(c.r[4], c.r[19].w[0] - 24424u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E55B0u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_00BC(c, 119u, depth + 1u); else { c.pc = 0x003F27E0u; return; } if (c.pc != 0x003E55B0u) [[unlikely]] return; }
L_003E55B0:
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_003E55B4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E55C8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5550u | kUnwind; return; } goto L_003E5550; }
L_003E55C8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[16], c.r[21].w[0] - 22720u);  if (t) { goto L_003E5604; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[12] = ld32((c.r[16].w[0] + 1600u));
    set32(c.r[17], c.r[17].w[0] - 22872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E55E4u); c.f[12] = c.f[12] ^ fp::kSign;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E55E4u) [[unlikely]] return; }
L_003E55E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E55F4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E55F4u) [[unlikely]] return; }
L_003E55F4:
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5604u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E5604u) [[unlikely]] return; }
L_003E5604:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003E5628:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 2212u)));
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 12u), 0u);
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 24;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0]), 0u);  if (t) { goto L_003E5694; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003E569C; } }
L_003E5694:
    set32(c.r[18], 0u + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 2;
L_003E569C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E5784; } }
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E5780; } }
    set32(c.r[21], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] - 22720u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 2228u)));
    c.budget -= 5;
L_003E56C8:
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[17].d[0] ^ c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[21].d[0];  if (t) { goto L_003E5768; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003E5750; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2220u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_003E56F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_003E5750; } }
L_003E56F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5700u); set32(c.r[4], ld32((c.r[17].w[0] + 44u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E5700u) [[unlikely]] return; }
L_003E5700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003E5750; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1640u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));  goto L_003E5730; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E5754; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 1;
L_003E5730:
    set32(c.r[5], c.r[20].w[0] - 22752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E573Cu); set32(c.r[6], ld32((c.r[17].w[0] + 56u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E573Cu) [[unlikely]] return; }
L_003E573C:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E574Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E574Cu) [[unlikely]] return; }
L_003E574C:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 1;
L_003E5750:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E5754:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5768u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 63u, depth + 1u); else { c.pc = 0x003E4A38u; return; } if (c.pc != 0x003E5768u) [[unlikely]] return; }
L_003E5768:
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E5784; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 2228u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E56C8u | kUnwind; return; } goto L_003E56C8; }
L_003E5780:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003E5784:
    set32(c.r[16], c.r[2].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[16].w[0] + 2228u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E57DC; } }
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  goto L_003E57E0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 2212u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E57F8; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E57C0u); set32(c.r[5], c.r[5].w[0] - 22664u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E57C0u) [[unlikely]] return; }
L_003E57C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E57C8u);  if (depth < kMaxDepth) unit_00BA(c, 42u, depth + 1u); else { c.pc = 0x003E85E0u; return; } if (c.pc != 0x003E57C8u) [[unlikely]] return; }
L_003E57C8:
    set32(c.r[5], ld32((c.r[16].w[0] + 2228u)));
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E57D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E57D8u) [[unlikely]] return; }
L_003E57D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003E57DC:
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_003E57E0:
    set32(c.r[3], c.r[5].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 2212u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E57F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 2252u)));  if (t) { goto L_003E5810; } }
L_003E57F8:
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[4].w[0] + 2224u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003E5810; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 2260u)));
    c.budget -= 1;
L_003E5810:
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003E5860; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E5860; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 4;
L_003E5838:
    st32((c.r[16].w[0] + 16u), 0u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  goto L_003E5860; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5838u | kUnwind; return; } goto L_003E5838; }
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_003E5860:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E5984; } }
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003E5988; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 2;
L_003E5880:
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003E596C; }
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E58B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 504u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 16u), c.r[4].w[0]);  if (t) { goto L_003E58C4; } }
L_003E58B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E58B8u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E58B8u) [[unlikely]] return; }
L_003E58B8:
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 3;
L_003E58C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003E596C; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 8u);  if (t) { goto L_003E5968; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[30], 0u - 1u);
    set32(c.r[20], c.r[6].w[0] - 22720u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[19].d[0] = c.r[19].d[0] | 65535ull;
    set32(c.r[22], 0u + 1u);
    c.budget -= 9;
L_003E5900:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[21].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_003E595C; } }
    c.r[2].d[0] = c.r[4].d[0] | c.r[21].d[0];
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5934u); st32((c.r[29].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003E5934u) [[unlikely]] return; }
L_003E5934:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[30].d[0]) { set32(c.r[16], ld32((c.r[18].w[0])));  goto L_003E5960; }
    set32(c.r[7], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], c.r[23].w[0] - 22576u);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 2192u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[19].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5958u); set32(c.r[8], ld32((c.r[20].w[0] + 516u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E5958u) [[unlikely]] return; }
L_003E5958:
    st32((c.r[29].w[0]), c.r[22].w[0]);
    c.budget -= 1;
L_003E595C:
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003E5960:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5900u | kUnwind; return; } goto L_003E5900; } }
L_003E5968:
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_003E596C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E5984; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5880u | kUnwind; return; } goto L_003E5880; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003E5984:
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 1;
L_003E5988:
    set32(c.r[16], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[16].w[0] + 2396u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 2212u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 2396u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003E5BC4; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 2264u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 2232u)));
    set32(c.r[2], c.r[7].w[0] - c.r[8].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[6], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003E59D4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E59CCu); set32(c.r[5], c.r[5].w[0] - 22488u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E59CCu) [[unlikely]] return; }
L_003E59CC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003E59D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 2396u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 1564u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 2396u), c.r[2].w[0]);  if (t) { goto L_003E5ADC; } }
    set32(c.r[16], ld32((c.r[16].w[0] + 2252u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003E5A68; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003E5A68; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[17].d[0] = c.r[17].d[0] | 65535ull;
    c.r[18].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 6;
L_003E5A18:
    set32(c.r[5], c.r[19].w[0] - 22360u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5A28u); c.r[6].d[0] = c.r[6].d[0] & c.r[17].d[0];  if (depth < kMaxDepth) unit_00BB(c, 194u, depth + 1u); else { c.pc = 0x003EE218u; return; } if (c.pc != 0x003E5A28u) [[unlikely]] return; }
L_003E5A28:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[18].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_003E5A50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5A40u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E5A40u) [[unlikely]] return; }
L_003E5A40:
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[6].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 4;
L_003E5A50:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003E5A68; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5A18u | kUnwind; return; } goto L_003E5A18; }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_003E5A68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003E5AA8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 20u)));  if (t) { goto L_003E5AAC; } }
    c.budget -= 1;
L_003E5A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5A88u); set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E5A88u) [[unlikely]] return; }
L_003E5A88:
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_003E5AA8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5A80u | kUnwind; return; } goto L_003E5A80; } }
L_003E5AA8:
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 1;
L_003E5AAC:
    set32(c.r[5], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E5ADC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[6].w[0] - 22720u);
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    set32(c.r[5], c.r[5].w[0] - 22344u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5AD4u); set32(c.r[6], ld32((c.r[29].w[0] + 20u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E5AD4u) [[unlikely]] return; }
L_003E5AD4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003E5ADC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[17], c.r[2].w[0] - 22720u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5AECu); set32(c.r[4], ld32((c.r[17].w[0] + 2424u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E5AECu) [[unlikely]] return; }
L_003E5AEC:
    set32(c.r[3], ld32((c.r[17].w[0] + 2268u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E5B2C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2424u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5B0Cu); set32(c.r[16], c.r[16].w[0] - 22232u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E5B0Cu) [[unlikely]] return; }
L_003E5B0C:
    set32(c.r[7], ld32((c.r[17].w[0] + 2268u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5B24u); set32(c.r[7], c.r[7].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E5B24u) [[unlikely]] return; }
L_003E5B24:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003E5B2C:
    set32(c.r[3], ld32((c.r[17].w[0] + 504u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E5B6C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E5B6C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] - 22128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5B60u); set32(c.r[7], ld32((c.r[29].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E5B60u) [[unlikely]] return; }
L_003E5B60:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
L_003E5B6C:
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003E5BC4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 2u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 11;
    { const bool t = c.r[8].d[0] == c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E5BC0; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 2192u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] - 22056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5BC0u); set32(c.r[7], ld32((c.r[29].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E5BC0u) [[unlikely]] return; }
L_003E5BC0:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003E5BC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_003E5BD8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5BD8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E5BD8u) [[unlikely]] return; }
L_003E5BD8:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003E5C08:
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 2;
L_003E5C10:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[30].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    set32(c.r[16], c.r[16].w[0] - 22720u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    set32(c.r[22], 0u + 1u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 504u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5C5Cu); set32(c.r[4], c.r[4].w[0] + 1u);  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003E5C5Cu) [[unlikely]] return; }
L_003E5C5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5C64u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 250u, depth + 1u); else { c.pc = 0x003E2D78u; return; } if (c.pc != 0x003E5C64u) [[unlikely]] return; }
L_003E5C64:
    st32((c.r[16].w[0] + 2232u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 2212u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 2216u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 2224u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 2268u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5C84u); st32((c.r[16].w[0] + 2264u), 0u);  if (depth < kMaxDepth) unit_00BA(c, 162u, depth + 1u); else { c.pc = 0x003E9A20u; return; } if (c.pc != 0x003E5C84u) [[unlikely]] return; }
L_003E5C84:
    st32((c.r[16].w[0] + 2252u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 2256u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[16].w[0] + 2260u), c.r[2].w[0]);  if (t) { goto L_003E5D30; } }
    set32(c.r[20], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5CA0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E5CA0u) [[unlikely]] return; }
L_003E5CA0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E5D30; } }
    set32(c.r[23], 0u - 4097u);
    set32(c.r[17], c.r[21].w[0] + 4u);
    c.budget -= 3;
L_003E5CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5CC0u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_00B8(c, 250u, depth + 1u); else { c.pc = 0x003E2D78u; return; } if (c.pc != 0x003E5CC0u) [[unlikely]] return; }
L_003E5CC0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5CDCu); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_00BB(c, 119u, depth + 1u); else { c.pc = 0x003ED450u; return; } if (c.pc != 0x003E5CDCu) [[unlikely]] return; }
L_003E5CDC:
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.r[3].d[0] = c.r[22].d[0] & 1ull;
    set32(c.r[3], c.r[3].w[0] << 12);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[23].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[22].d[0] = c.r[22].d[0] ^ 1ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5D04u); st32((c.r[16].w[0] + 60u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 273u, depth + 1u); else { c.pc = 0x003E31F0u; return; } if (c.pc != 0x003E5D04u) [[unlikely]] return; }
L_003E5D04:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5D18u); st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 274u, depth + 1u); else { c.pc = 0x003E3250u; return; } if (c.pc != 0x003E5D18u) [[unlikely]] return; }
L_003E5D18:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5D24u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E5D24u) [[unlikely]] return; }
L_003E5D24:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], ld32((c.r[17].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5CB8u | kUnwind; return; } goto L_003E5CB8; } }
L_003E5D30:
    set32(c.r[3], c.r[30].w[0] - 22720u);
    set32(c.r[16], ld32((c.r[3].w[0] + 2224u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E5DBC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003E5DBC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 2224u)));
    c.budget -= 1;
L_003E5D50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003E5D98; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  goto L_003E5D9C; }
L_003E5D68:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[16].d[0]; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { goto L_003E5D80; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 4;
L_003E5D80:
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  goto L_003E5D9C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5D68u | kUnwind; return; } goto L_003E5D68; } }
L_003E5D98:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_003E5D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5DA4u); set32(c.r[5], ld32((c.r[17].w[0] + 504u)));  if (depth < kMaxDepth) unit_00BB(c, 162u, depth + 1u); else { c.pc = 0x003EDB50u; return; } if (c.pc != 0x003E5DA4u) [[unlikely]] return; }
L_003E5DA4:
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E5DBC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 2224u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5D50u | kUnwind; return; } goto L_003E5D50; }
L_003E5DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5DC4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003E5DC4u) [[unlikely]] return; }
L_003E5DC4:
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
L_003E5DF8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5E28u); set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E5E28u) [[unlikely]] return; }
L_003E5E28:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5E34u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003E5E34u) [[unlikely]] return; }
L_003E5E34:
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_003E5ED4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E5E78; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    set32(c.r[5], c.r[5].w[0] - 21720u);
    set32(c.r[7], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5E68u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E5E68u) [[unlikely]] return; }
L_003E5E68:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5E78u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E5E78u) [[unlikely]] return; }
L_003E5E78:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5E88u); set32(c.r[5], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E5E88u) [[unlikely]] return; }
L_003E5E88:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003E5EAC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5EA4u); set32(c.r[5], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E5EA4u) [[unlikely]] return; }
L_003E5EA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 32u)));  if (t) { goto L_003E5EC0; } }
L_003E5EAC:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5EBCu); set32(c.r[6], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BB(c, 179u, depth + 1u); else { c.pc = 0x003EDE98u; return; } if (c.pc != 0x003E5EBCu) [[unlikely]] return; }
L_003E5EBC:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_003E5EC0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5ECCu); set32(c.r[5], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E5ECCu) [[unlikely]] return; }
L_003E5ECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003E5F60; } }
L_003E5ED4:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[21], c.r[29].w[0] + 4u);
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
L_003E5EE8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5EF4u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 167u, depth + 1u); else { c.pc = 0x003E9B08u; return; } if (c.pc != 0x003E5EF4u) [[unlikely]] return; }
L_003E5EF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003E5F30; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5F0Cu); set32(c.r[19], c.r[19].w[0] + 1u);  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E5F0Cu) [[unlikely]] return; }
L_003E5F0C:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E5F20; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[20].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5EE8u | kUnwind; return; } goto L_003E5EE8; } }
L_003E5F20:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E5F34; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[18].d[0]; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003E5F60; } }
L_003E5F30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003E5F34:
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 21632u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5F4Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E5F4Cu) [[unlikely]] return; }
L_003E5F4C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5F5Cu); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E5F5Cu) [[unlikely]] return; }
L_003E5F5C:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003E5F60:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003E5F88:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[22].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 184u), c.f[21]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 21;
    { const bool t = c.r[19].d[0] == 0ull; c.f[21] = ld32((c.r[2].w[0] - 21536u));  if (t) { goto L_003E6018; } }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[23].w[0] - 22720u);  if (t) { goto L_003E601C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
L_003E5FF8:
    set32(c.r[3], c.r[18].w[0] + 1u);
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; if (c.r[2].d[0] != 0) c.r[18].d[0] = c.r[3].d[0];  if (t) { goto L_003E6018; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5FF8u | kUnwind; return; } goto L_003E5FF8; }
L_003E6018:
    set32(c.r[3], c.r[23].w[0] - 22720u);
    c.budget -= 1;
L_003E601C:
    set32(c.r[2], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[3], c.r[23].w[0] - 22720u);  goto L_003E609C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[23].w[0] - 22720u);  goto L_003E609C; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[23].w[0] - 22720u);  goto L_003E609C; }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[23].w[0] - 22720u);  goto L_003E609C; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    c.r[17].d[0] = c.r[17].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 5;
L_003E6060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6068u); set32(c.r[5], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_00BA(c, 155u, depth + 1u); else { c.pc = 0x003E9940u; return; } if (c.pc != 0x003E6068u) [[unlikely]] return; }
L_003E6068:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_003E6084; }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[17].d[0];
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
L_003E6084:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], c.r[23].w[0] - 22720u);  if (t) { goto L_003E609C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 80u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6060u | kUnwind; return; } goto L_003E6060; }
    set32(c.r[3], c.r[23].w[0] - 22720u);
    c.budget -= 1;
L_003E609C:
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[23].w[0] - 22720u);  goto L_003E6174; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], c.r[23].w[0] - 22720u);  goto L_003E6174; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[23].w[0] - 22720u);  goto L_003E6174; }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E6170; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.f[20] = 0u;
    set32(c.r[21], c.r[2].w[0] - 20104u);
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[17].d[0] = c.r[17].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 8;
L_003E60E8:
    c.r[2].d[0] = c.r[2].d[0] & c.r[30].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_003E615C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E6158; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 200u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 68u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6118u); st32((c.r[21].w[0] + 200u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003E6118u) [[unlikely]] return; }
L_003E6118:
    c.f[0] = ld32((c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.r[2].d[0] = c.r[2].sd[0] < 1ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_003E6140; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_003E614C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  if (t) { goto L_003E615C; } }
L_003E6140:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_003E615C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_003E614C:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[17].d[0];
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
L_003E6158:
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_003E615C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], c.r[23].w[0] - 22720u);  if (t) { goto L_003E6174; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E60E8u | kUnwind; return; } goto L_003E60E8; }
L_003E6170:
    set32(c.r[3], c.r[23].w[0] - 22720u);
    c.budget -= 1;
L_003E6174:
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  goto L_003E6300; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003E619C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E619C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 2320u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E6300; } }
L_003E619C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003E6228; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003E6228; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[17].d[0] = c.r[17].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 4;
L_003E61C0:
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_003E6214; }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_003E6214; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E61E0u); set32(c.r[5], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00BD(c, 158u, depth + 1u); else { c.pc = 0x003F6C78u; return; } if (c.pc != 0x003E61E0u) [[unlikely]] return; }
L_003E61E0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_003E6214; }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[17].d[0];
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[18], c.r[18].w[0] - 1u);  if (t) { goto L_003E6210; } }
    c.f[21] = c.f[0];
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003E6210:
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_003E6214:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E6228; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E61C0u | kUnwind; return; } goto L_003E61C0; }
L_003E6228:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[5], c.r[23].w[0] - 22720u);  goto L_003E62D8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[23].w[0] - 22720u);  if (t) { goto L_003E6248; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 2320u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E6300; } }
L_003E6248:
    set32(c.r[16], c.r[23].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[16].w[0] + 2320u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E628C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 12u)));  goto L_003E6270; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2320u), 0u);  if (t) { goto L_003E628C; } }
L_003E6270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6278u); c.r[5].d[0] = c.r[29].d[0] | 4ull;  if (depth < kMaxDepth) unit_00BD(c, 158u, depth + 1u); else { c.pc = 0x003F6C78u; return; } if (c.pc != 0x003E6278u) [[unlikely]] return; }
L_003E6278:
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[22], ld32((c.r[16].w[0] + 2320u)));  goto L_003E628C; }
L_003E628C:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[5], c.r[23].w[0] - 22720u);  if (t) { goto L_003E62FC; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 2320u)));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[4].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E6300; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[5].w[0] + 2320u), c.r[22].w[0]);  goto L_003E62C0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 2320u), c.r[22].w[0]);
    c.budget -= 6;
L_003E62C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[2], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[22].w[0] + 60u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_003E6334; } }
L_003E62D8:
    set32(c.r[4], ld32((c.r[5].w[0] + 2320u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E6300; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 2320u), 0u);
    c.budget -= 6;
L_003E62FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003E6300:
    set32(c.r[3], c.r[3].w[0] - 20104u);
    set32(c.r[2], ld32((c.r[3].w[0] + 380u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[3].w[0] + 380u), c.r[2].w[0]);  if (t) { goto L_003E6330; } }
    set32(c.r[3], c.r[23].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003E6334; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003E6334; } }
L_003E6330:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003E6334:
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
    c.f[21] = ld32((c.r[29].w[0] + 184u));
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003E6370:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    set32(c.r[6], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 176u), c.f[20]);
    c.r[30].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = ld64((c.r[6].w[0] + 72u));
    c.budget -= 22;
    { const bool t = c.r[5].d[0] != 0ull; c.f[20] = ld32((c.r[3].w[0] - 21324u));  if (t) { goto L_003E63E0; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[23].w[0] - 22720u);  goto L_003E63E4; }
    set32(c.r[2], ld32((c.r[6].w[0] + 420u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);  if (t) { goto L_003E6640; } }
L_003E63E0:
    set32(c.r[3], c.r[23].w[0] - 22720u);
    c.budget -= 1;
L_003E63E4:
    set32(c.r[2], ld32((c.r[3].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E63FC; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 2212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E63FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 191u, depth + 1u); else { c.pc = 0x003E5F88u; return; } if (c.pc != 0x003E63FCu) [[unlikely]] return; }
L_003E63FC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[3], c.r[23].w[0] - 22720u);  if (t) { goto L_003E6444; } }
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 76u)));  goto L_003E6448; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
L_003E6420:
    set32(c.r[3], c.r[19].w[0] + 1u);
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; if (c.r[2].d[0] != 0) c.r[19].d[0] = c.r[3].d[0];  if (t) { goto L_003E6440; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6420u | kUnwind; return; } goto L_003E6420; }
L_003E6440:
    set32(c.r[3], c.r[23].w[0] - 22720u);
    c.budget -= 1;
L_003E6444:
    set32(c.r[2], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 1;
L_003E6448:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003E6464; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], c.r[23].w[0] - 22720u);  if (t) { goto L_003E655C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[23].w[0] - 22720u);  if (t) { goto L_003E655C; } }
L_003E6464:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[2], c.r[23].w[0] - 22720u);  if (t) { goto L_003E655C; } }
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[23].w[0] - 22720u);  if (t) { goto L_003E655C; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    c.r[20].d[0] = c.r[20].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 5;
L_003E6490:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003E6544; }
    set32(c.r[2], ld32((c.r[22].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[22].w[0] + 80u)));
    c.r[18].d[0] = c.r[2].sd[0] < 1ll ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E64B8u); c.r[16].d[0] = c.r[18].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_00BA(c, 155u, depth + 1u); else { c.pc = 0x003E9940u; return; } if (c.pc != 0x003E64B8u) [[unlikely]] return; }
L_003E64B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E64D0; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] - 1u);  goto L_003E64DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_003E6544; } }
L_003E64D0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003E6544; }
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 1;
L_003E64DC:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  goto L_003E6538; }
    set32(c.r[18], c.r[23].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[18].w[0] + 156u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  goto L_003E6610; }
    set32(c.r[6], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E651C; } }
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[4], ld32((c.r[18].w[0] + 2192u)));
    set32(c.r[5], c.r[2].w[0] - 21448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6514u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E6514u) [[unlikely]] return; }
L_003E6514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  if (t) { goto L_003E6538; } }
L_003E651C:
    c.r[6].d[0] = ~(0ull | c.r[6].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 2192u)));
    set32(c.r[5], c.r[3].w[0] - 21392u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6534u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E6534u) [[unlikely]] return; }
L_003E6534:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_003E6538:
    c.r[2].d[0] = c.r[2].d[0] & c.r[20].d[0];
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
L_003E6544:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], c.r[23].w[0] - 22720u);  if (t) { goto L_003E655C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6490u | kUnwind; return; } goto L_003E6490; }
    set32(c.r[2], c.r[23].w[0] - 22720u);
    c.budget -= 1;
L_003E655C:
    set32(c.r[3], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[23].w[0] - 22720u);  if (t) { goto L_003E6638; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_003E65F0; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003E65F0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[16].d[0] = c.r[16].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 5;
L_003E6590:
    c.r[2].d[0] = c.r[2].d[0] & c.r[18].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003E65DC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E65A8u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 158u, depth + 1u); else { c.pc = 0x003F6C78u; return; } if (c.pc != 0x003E65A8u) [[unlikely]] return; }
L_003E65A8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003E65DC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[19], c.r[19].w[0] - 1u);  if (t) { goto L_003E65D8; } }
    c.f[20] = c.f[0];
    c.r[30].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003E65D8:
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_003E65DC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E65F0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6590u | kUnwind; return; } goto L_003E6590; }
L_003E65F0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[2], c.r[23].w[0] - 22720u);  if (t) { goto L_003E6638; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_003E6638; } }
    set32(c.r[2], ld32((c.r[30].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_003E663C; } }
L_003E6610:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E661Cu); set32(c.r[16], c.r[16].w[0] - 21528u);  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003E661Cu) [[unlikely]] return; }
L_003E661C:
    set32(c.r[4], ld32((c.r[18].w[0] + 2192u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6630u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E6630u) [[unlikely]] return; }
L_003E6630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);  if (t) { goto L_003E6640; } }
L_003E6638:
    st32((c.r[2].w[0] + 2276u), c.r[19].w[0]);
    c.budget -= 1;
L_003E663C:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003E6640:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003E6670:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[16], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[16].w[0] + 2316u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[16].w[0] + 2472u), 0u);
    st32((c.r[16].w[0] + 2284u), 0u);
    st32((c.r[16].w[0] + 2288u), 0u);
    st32((c.r[16].w[0] + 2280u), 0u);
    st32((c.r[16].w[0] + 2396u), 0u);
    st32((c.r[16].w[0] + 2392u), 0u);
    c.budget -= 22;
    { const bool t = c.r[4].sd[0] <= 0; st32((c.r[16].w[0] + 2328u), 0u);  if (t) { goto L_003E66D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 1u);  if (t) { goto L_003E66DC; } }
L_003E66D0:
    c.budget -= 2;
    if (c.r[4].sd[0] >= 0) { set32(c.r[16], c.r[20].w[0] - 22720u);  goto L_003E66EC; }
    c.r[4].d[0] = ~(0ull | c.r[4].d[0]);
    c.budget -= 1;
L_003E66DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E66E4u);  if (depth < kMaxDepth) unit_00BA(c, 170u, depth + 1u); else { c.pc = 0x003E9B88u; return; } if (c.pc != 0x003E66E4u) [[unlikely]] return; }
L_003E66E4:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[16], c.r[20].w[0] - 22720u);
    c.budget -= 2;
L_003E66EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_003E6700; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 1u);  if (t) { goto L_003E670C; } }
L_003E6700:
    c.budget -= 2;
    if (c.r[4].sd[0] >= 0) { set32(c.r[16], c.r[20].w[0] - 22720u);  goto L_003E671C; }
    c.r[4].d[0] = ~(0ull | c.r[4].d[0]);
    c.budget -= 1;
L_003E670C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6714u);  if (depth < kMaxDepth) unit_00BA(c, 170u, depth + 1u); else { c.pc = 0x003E9B88u; return; } if (c.pc != 0x003E6714u) [[unlikely]] return; }
L_003E6714:
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[16], c.r[20].w[0] - 22720u);
    c.budget -= 2;
L_003E671C:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 76u)));  goto L_003E675C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 516u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] - 22720u);  if (t) { goto L_003E6794; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 512u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6748u); set32(c.r[4], c.r[4].w[0] - 1u);  if (depth < kMaxDepth) unit_00BA(c, 170u, depth + 1u); else { c.pc = 0x003E9B88u; return; } if (c.pc != 0x003E6748u) [[unlikely]] return; }
L_003E6748:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] - 22720u);  if (t) { goto L_003E6794; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_003E675C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[20].w[0] - 22720u);  goto L_003E67C0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 516u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] - 22720u);  if (t) { goto L_003E6794; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 512u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6784u); set32(c.r[4], c.r[4].w[0] - 1u);  if (depth < kMaxDepth) unit_00BA(c, 170u, depth + 1u); else { c.pc = 0x003E9B88u; return; } if (c.pc != 0x003E6784u) [[unlikely]] return; }
L_003E6784:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[20].w[0] - 22720u);  if (t) { goto L_003E67BC; } }
L_003E6794:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 512u)));
    set32(c.r[5], c.r[5].w[0] - 21240u);
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E67ACu); set32(c.r[6], c.r[6].w[0] - 1u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E67ACu) [[unlikely]] return; }
L_003E67AC:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E67BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E67BCu) [[unlikely]] return; }
L_003E67BC:
    set32(c.r[16], c.r[20].w[0] - 22720u);
    c.budget -= 1;
L_003E67C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 516u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 512u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E67D0u); set32(c.r[6], ld32((c.r[16].w[0] + 504u)));  if (depth < kMaxDepth) unit_00BD(c, 175u, depth + 1u); else { c.pc = 0x003F7088u; return; } if (c.pc != 0x003E67D0u) [[unlikely]] return; }
L_003E67D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 404u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_003E67F8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 516u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 512u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 504u)));
    c.f[12] = ld32((c.r[16].w[0] + 1636u));
    c.f[13] = ld32((c.r[16].w[0] + 1608u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E67F8u); c.f[14] = ld32((c.r[16].w[0] + 1616u));  if (depth < kMaxDepth) unit_00BE(c, 18u, depth + 1u); else { c.pc = 0x003F82C0u; return; } if (c.pc != 0x003E67F8u) [[unlikely]] return; }
L_003E67F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6800u); c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_00BD(c, 98u, depth + 1u); else { c.pc = 0x003F5D30u; return; } if (c.pc != 0x003E6800u) [[unlikely]] return; }
L_003E6800:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[18], c.r[29].w[0] + 12u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[29].w[0] + 16u);  if (t) { goto L_003E6920; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 504u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 1572u)));
    set32(c.r[5], c.r[3].w[0] << 2);
    c.f[1] = ld32((c.r[4].w[0] - 20740u));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] - 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E6920; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1576u)));
    c.f[1] = ld32((c.r[2].w[0] - 20736u));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] - 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 332u);  if (t) { goto L_003E6920; } }
    set32(c.r[5], 0u + 28u);
    set32(c.r[8], 0u - 1u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 7u);
    c.budget -= 5;
L_003E6870:
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 1;
L_003E6874:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[8].d[0]; set32(c.r[4], c.r[4].w[0] - 4u);  if (t) { goto L_003E68B0; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[3], c.r[7].w[0] - 22720u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6870u | kUnwind; return; } goto L_003E6870; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[5], c.r[5].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6874u | kUnwind; return; } goto L_003E6874; }
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6874u | kUnwind; return; } goto L_003E6874; }
    set32(c.r[2], ld32((c.r[3].w[0] + 420u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6874u | kUnwind; return; } goto L_003E6874; }
L_003E68B0:
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { set32(c.r[16], c.r[20].w[0] - 22720u);  goto L_003E6924; }
    set32(c.r[5], c.r[20].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[5].w[0] + 464u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003E68EC; } }
    c.f[0] = ld32((c.r[5].w[0] + 1588u));
    set32(c.r[2], ld32((c.r[5].w[0] + 504u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 1576u)));
    c.f[0] = fp::add(c.f[0], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] - 4u), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 72u), c.r[4].w[0]);  if (t) { goto L_003E6920; } }
L_003E68EC:
    c.f[0] = ld32((c.r[5].w[0] + 1588u));
    set32(c.r[2], ld32((c.r[5].w[0] + 504u)));
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[3], ld32((c.r[5].w[0] + 1572u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    st32((c.r[2].w[0] - 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 72u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[20].w[0] - 22720u);  if (t) { goto L_003E6924; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[5].w[0] + 420u), c.r[2].w[0]);
    c.budget -= 2;
L_003E6920:
    set32(c.r[16], c.r[20].w[0] - 22720u);
    c.budget -= 1;
L_003E6924:
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 516u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 512u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6938u); set32(c.r[4], ld32((c.r[16].w[0] + 504u)));  if (depth < kMaxDepth) unit_00B9(c, 276u, depth + 1u); else { c.pc = 0x003E7010u; return; } if (c.pc != 0x003E6938u) [[unlikely]] return; }
L_003E6938:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6944u); st32((c.r[29].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B9(c, 247u, depth + 1u); else { c.pc = 0x003E6C28u; return; } if (c.pc != 0x003E6944u) [[unlikely]] return; }
L_003E6944:
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 516u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6954u); set32(c.r[6], ld32((c.r[16].w[0] + 512u)));  if (depth < kMaxDepth) unit_00BA(c, 350u, depth + 1u); else { c.pc = 0x003EB800u; return; } if (c.pc != 0x003E6954u) [[unlikely]] return; }
L_003E6954:
    set32(c.r[2], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 436u)));  if (t) { goto L_003E6978; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[20].w[0] - 22720u);  if (t) { goto L_003E698C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003E69D4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 436u)));
    c.budget -= 1;
L_003E6978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[20].w[0] - 22720u);  if (t) { goto L_003E698C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_003E69B8; }
L_003E698C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[7].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], c.r[2].w[0] - 21184u);  if (t) { goto L_003E69A0; } }
    set32(c.r[6], ld32((c.r[7].w[0] + 436u)));
    c.budget -= 1;
L_003E69A0:
    set32(c.r[4], ld32((c.r[7].w[0] + 2192u)));
    set32(c.r[8], c.r[7].w[0] + 532u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E69B0u); set32(c.r[7], c.r[7].w[0] + 788u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E69B0u) [[unlikely]] return; }
L_003E69B0:
    set32(c.r[7], c.r[20].w[0] - 22720u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 2;
L_003E69B8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[7].w[0] + 2192u)));
    set32(c.r[5], c.r[5].w[0] - 21152u);
    set32(c.r[6], c.r[6].w[0] - 1016u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E69D0u); set32(c.r[7], c.r[7].w[0] + 1044u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E69D0u) [[unlikely]] return; }
L_003E69D0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E69D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E69DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BA(c, 52u, depth + 1u); else { c.pc = 0x003E87E8u; return; } if (c.pc != 0x003E69DCu) [[unlikely]] return; }
L_003E69DC:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[20].w[0] - 22720u);
    c.f[1] = ld32((c.r[17].w[0] - 20732u));
    set32(c.r[2], ld32((c.r[3].w[0] + 2212u)));
    st32((c.r[3].w[0] + 2220u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003E6A20; } }
L_003E69F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[3].w[0] + 28u)));  goto L_003E6A20; }
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[3].w[0] + 28u)));  goto L_003E6A20; }
    c.f[1] = c.f[0];
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
L_003E6A20:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E6A34; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E69F8u | kUnwind; return; } goto L_003E69F8; }
L_003E6A34:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] - 22720u);  if (t) { goto L_003E6A58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6A44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 292u, depth + 1u); else { c.pc = 0x003E3730u; return; } if (c.pc != 0x003E6A44u) [[unlikely]] return; }
L_003E6A44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6A54u); set32(c.r[5], c.r[5].w[0] - 20500u);  if (depth < kMaxDepth) unit_00BA(c, 177u, depth + 1u); else { c.pc = 0x003E9CE8u; return; } if (c.pc != 0x003E6A54u) [[unlikely]] return; }
L_003E6A54:
    set32(c.r[3], c.r[20].w[0] - 22720u);
    c.budget -= 1;
L_003E6A58:
    set32(c.r[2], ld32((c.r[3].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 156u)));  goto L_003E6A78; }
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[1] = ld32((c.r[3].w[0] + 128u));
    st32((c.r[3].w[0] + 1596u), c.f[0]);
    st32((c.r[3].w[0] + 1592u), c.f[1]);
    set32(c.r[2], ld32((c.r[3].w[0] + 156u)));
    c.budget -= 5;
L_003E6A78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E6BF4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[3], c.r[20].w[0] - 22720u);  goto L_003E6AB8; }
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E6AB4; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6AA4u); set32(c.r[5], c.r[5].w[0] - 21112u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E6AA4u) [[unlikely]] return; }
L_003E6AA4:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6AB4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E6AB4u) [[unlikely]] return; }
L_003E6AB4:
    set32(c.r[3], c.r[20].w[0] - 22720u);
    c.budget -= 1;
L_003E6AB8:
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[20].w[0] - 22720u);  if (t) { goto L_003E6B1C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 76u)));  goto L_003E6B20; }
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] - 22720u);  if (t) { goto L_003E6AF8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] - 22720u);  if (t) { goto L_003E6AF8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 76u)));  goto L_003E6B20; }
    set32(c.r[2], c.r[20].w[0] - 22720u);
    c.budget -= 1;
L_003E6AF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6B08u); set32(c.r[5], c.r[5].w[0] - 20976u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E6B08u) [[unlikely]] return; }
L_003E6B08:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6B18u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E6B18u) [[unlikely]] return; }
L_003E6B18:
    set32(c.r[17], c.r[20].w[0] - 22720u);
    c.budget -= 1;
L_003E6B1C:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_003E6B20:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], c.r[20].w[0] - 22720u);  if (t) { goto L_003E6BE8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] - 22720u);  if (t) { goto L_003E6BE8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6B40u); set32(c.r[5], ld32((c.r[29].w[0] + 12u)));  if (depth < kMaxDepth) unit_00BA(c, 155u, depth + 1u); else { c.pc = 0x003E9940u; return; } if (c.pc != 0x003E6B40u) [[unlikely]] return; }
L_003E6B40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] - 22720u);  if (t) { goto L_003E6BE8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 2212u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6B64u); c.r[9].d[0] = c.r[29].d[0] | 8ull;  if (depth < kMaxDepth) unit_00BC(c, 173u, depth + 1u); else { c.pc = 0x003F3790u; return; } if (c.pc != 0x003E6B64u) [[unlikely]] return; }
L_003E6B64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 20104u);
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 200u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[3].w[0] + 200u), c.r[2].w[0]);  if (t) { goto L_003E6BB8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6B98u); set32(c.r[16], c.r[16].w[0] - 20832u);  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003E6B98u) [[unlikely]] return; }
L_003E6B98:
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6BA8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E6BA8u) [[unlikely]] return; }
L_003E6BA8:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6BB8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E6BB8u) [[unlikely]] return; }
L_003E6BB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6BC8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 218u, depth + 1u); else { c.pc = 0x003EA210u; return; } if (c.pc != 0x003E6BC8u) [[unlikely]] return; }
L_003E6BC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] - 22720u);  if (t) { goto L_003E6BE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6BD8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003E6BD8u) [[unlikely]] return; }
L_003E6BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6BE0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003E6BE0u) [[unlikely]] return; }
L_003E6BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);  if (t) { goto L_003E6C08; } }
L_003E6BE8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6BF4u); set32(c.r[4], ld32((c.r[2].w[0] + 2212u)));  if (depth < kMaxDepth) unit_00B9(c, 191u, depth + 1u); else { c.pc = 0x003E5F88u; return; } if (c.pc != 0x003E6BF4u) [[unlikely]] return; }
L_003E6BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6BFCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003E6BFCu) [[unlikely]] return; }
L_003E6BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6C04u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003E6C04u) [[unlikely]] return; }
L_003E6C04:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003E6C08:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003E6C28:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st32((c.r[29].w[0] + 144u), c.f[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6C68u); c.f[20] = ld32((c.r[2].w[0] - 20292u));  if (depth < kMaxDepth) unit_00B9(c, 162u, depth + 1u); else { c.pc = 0x003E5C10u; return; } if (c.pc != 0x003E6C68u) [[unlikely]] return; }
L_003E6C68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[18], c.r[2].w[0] - 22720u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6C80u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 52u, depth + 1u); else { c.pc = 0x003E87E8u; return; } if (c.pc != 0x003E6C80u) [[unlikely]] return; }
L_003E6C80:
    set32(c.r[2], ld32((c.r[18].w[0] + 2212u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6C90u); st32((c.r[18].w[0] + 2220u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 65u, depth + 1u); else { c.pc = 0x003F5458u; return; } if (c.pc != 0x003E6C90u) [[unlikely]] return; }
L_003E6C90:
    set32(c.r[17], ld32((c.r[18].w[0] + 2212u)));
    st32((c.r[18].w[0] + 2196u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6CA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 25u, depth + 1u); else { c.pc = 0x003F4650u; return; } if (c.pc != 0x003E6CA0u) [[unlikely]] return; }
L_003E6CA0:
    set32(c.r[16], c.r[16].w[0] - 20104u);
    set32(c.r[4], ld32((c.r[18].w[0] + 2196u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 616u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6CC0u); st32((c.r[16].w[0] + 616u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003E6CC0u) [[unlikely]] return; }
L_003E6CC0:
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[21].w[0] - 22720u);  if (t) { goto L_003E6D38; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 2212u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[2].w[0] + 2212u)));  goto L_003E6D4C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[21].w[0] - 22720u);  if (t) { goto L_003E6D38; } }
    set32(c.r[4], 0u - 4097u);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
L_003E6D00:
    set32(c.r[2], c.r[3].w[0] >> 12);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[2], c.r[2].w[0] << 12);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], c.r[21].w[0] - 22720u);  if (t) { goto L_003E6D38; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6D00u | kUnwind; return; } goto L_003E6D00; }
    set32(c.r[2], c.r[21].w[0] - 22720u);
    c.budget -= 1;
L_003E6D38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 2212u)));  if (t) { goto L_003E6D4C; } }
L_003E6D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6D48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 25u, depth + 1u); else { c.pc = 0x003F4650u; return; } if (c.pc != 0x003E6D48u) [[unlikely]] return; }
L_003E6D48:
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_003E6D4C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], c.r[21].w[0] - 22720u);  if (t) { goto L_003E6D60; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6D40u | kUnwind; return; } goto L_003E6D40; } }
L_003E6D60:
    set32(c.r[16], ld32((c.r[3].w[0] + 2212u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], c.r[21].w[0] - 22720u);  goto L_003E6E24; }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[21].w[0] - 22720u);  goto L_003E6E24; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.r[17].d[0] = c.r[17].d[0] | 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_003E6D88:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6D94u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B8(c, 275u, depth + 1u); else { c.pc = 0x003E32B0u; return; } if (c.pc != 0x003E6D94u) [[unlikely]] return; }
L_003E6D94:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_003E6E0C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[17].d[0];
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 2212u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], c.r[21].w[0] - 22720u);  if (t) { goto L_003E6E24; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[3].w[0] + 2212u)));  goto L_003E6E28; }
    set32(c.r[17], 0u - 4097u);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 2;
L_003E6DC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] >> 12);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[17].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[2], c.r[2].w[0] << 12);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6DECu); st32((c.r[16].w[0] + 60u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BE(c, 129u, depth + 1u); else { c.pc = 0x003F9818u; return; } if (c.pc != 0x003E6DECu) [[unlikely]] return; }
L_003E6DEC:
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], c.r[21].w[0] - 22720u);  if (t) { goto L_003E6E24; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6DC8u | kUnwind; return; } goto L_003E6DC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 2212u)));  if (t) { goto L_003E6E28; } }
L_003E6E0C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], c.r[21].w[0] - 22720u);  if (t) { goto L_003E6E24; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6D88u | kUnwind; return; } goto L_003E6D88; } }
    set32(c.r[3], c.r[21].w[0] - 22720u);
    c.budget -= 1;
L_003E6E24:
    set32(c.r[16], ld32((c.r[3].w[0] + 2212u)));
    c.budget -= 1;
L_003E6E28:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E6EE0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E6EE0; } }
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
L_003E6E48:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6E54u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 275u, depth + 1u); else { c.pc = 0x003E32B0u; return; } if (c.pc != 0x003E6E54u) [[unlikely]] return; }
L_003E6E54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_003E6E88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6E64u); set32(c.r[4], c.r[19].w[0] - 20728u);  if (depth < kMaxDepth) unit_00BB(c, 107u, depth + 1u); else { c.pc = 0x003ED148u; return; } if (c.pc != 0x003E6E64u) [[unlikely]] return; }
L_003E6E64:
    set32(c.r[4], ld32((c.r[20].w[0] + 2192u)));
    set32(c.r[5], c.r[18].w[0] - 20680u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6E74u); set32(c.r[6], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E6E74u) [[unlikely]] return; }
L_003E6E74:
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6E84u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E6E84u) [[unlikely]] return; }
L_003E6E84:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_003E6E88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_003E6ECC; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { goto L_003E6EC8; } }
    c.budget -= 1;
L_003E6EA0:
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6EACu); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_00BD(c, 62u, depth + 1u); else { c.pc = 0x003F5398u; return; } if (c.pc != 0x003E6EACu) [[unlikely]] return; }
L_003E6EAC:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[20] = c.f[0];  goto L_003E6EBC; }
L_003E6EBC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6EA0u | kUnwind; return; } goto L_003E6EA0; } }
L_003E6EC8:
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_003E6ECC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E6EE0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6E48u | kUnwind; return; } goto L_003E6E48; } }
L_003E6EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6EE8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E6EE8u) [[unlikely]] return; }
L_003E6EE8:
    c.r[5].d[0] = 0ull | 49135ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 64161ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 40007ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6F0Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x003E6F0Cu) [[unlikely]] return; }
L_003E6F0C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[16], c.r[21].w[0] - 22720u);  goto L_003E6FBC; }
    set32(c.r[17], c.r[21].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[21].w[0] - 22720u);  goto L_003E6FBC; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 1640u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    set32(c.r[4], c.r[4].w[0] - 20600u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6F50u); st32((c.r[29].w[0] + 4u), c.f[0]);  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003E6F50u) [[unlikely]] return; }
L_003E6F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6F58u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E6F58u) [[unlikely]] return; }
L_003E6F58:
    c.r[5].d[0] = 0ull | 49135ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 65527ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6F7Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x003E6F7Cu) [[unlikely]] return; }
L_003E6F7C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[16], c.r[21].w[0] - 22720u);  goto L_003E6FBC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 392u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[21].w[0] - 22720u);  goto L_003E6FBC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E6FB8; } }
    c.f[12] = c.f[20] ^ fp::kSign;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6FA8u); set32(c.r[16], c.r[16].w[0] - 20584u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E6FA8u) [[unlikely]] return; }
L_003E6FA8:
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6FB8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E6FB8u) [[unlikely]] return; }
L_003E6FB8:
    set32(c.r[16], c.r[21].w[0] - 22720u);
    c.budget -= 1;
L_003E6FBC:
    set32(c.r[3], c.r[22].w[0] - 20104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 2212u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6FD4u); st32((c.r[3].w[0] + 680u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B9(c, 133u, depth + 1u); else { c.pc = 0x003E5628u; return; } if (c.pc != 0x003E6FD4u) [[unlikely]] return; }
L_003E6FD4:
    set32(c.r[4], ld32((c.r[16].w[0] + 2212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6FE0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B9(c, 31u, depth + 1u); else { c.pc = 0x003E44A8u; return; } if (c.pc != 0x003E6FE0u) [[unlikely]] return; }
L_003E6FE0:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003E7010:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[16], c.r[20].w[0] + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[7].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E705Cu); st32((c.r[29].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003E705Cu) [[unlikely]] return; }
L_003E705C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7068u); st32((c.r[29].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003E7068u) [[unlikely]] return; }
L_003E7068:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] - 22720u)));
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] - 22720u);  if (t) { goto L_003E7094; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003E7368; } }
L_003E7094:
    set32(c.r[17], ld32((c.r[4].w[0] + 380u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[19].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E7150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E7138; } }
L_003E70A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E70B0u);  if (depth < kMaxDepth) unit_00BE(c, 157u, depth + 1u); else { c.pc = 0x003F9C80u; return; } if (c.pc != 0x003E70B0u) [[unlikely]] return; }
L_003E70B0:
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], c.r[22].w[0] - 22720u);
    c.f[0] = ld32((c.r[3].w[0] + 512u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E70E0u); c.f[12] = fp::mul(c.f[0], c.f[12]);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E70E0u) [[unlikely]] return; }
L_003E70E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E70E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 208u, depth + 1u); else { c.pc = 0x0040A860u; return; } if (c.pc != 0x003E70E8u) [[unlikely]] return; }
L_003E70E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E70F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 249u, depth + 1u); else { c.pc = 0x00202C80u; return; } if (c.pc != 0x003E70F0u) [[unlikely]] return; }
L_003E70F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003E7104; } }
L_003E70F8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[17].d[0] = 0ull;
    c.budget -= 3;
L_003E7104:
    set32(c.r[16], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7110u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 170u, depth + 1u); else { c.pc = 0x003E9B88u; return; } if (c.pc != 0x003E7110u) [[unlikely]] return; }
L_003E7110:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E711Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 238u, depth + 1u); else { c.pc = 0x003EEA80u; return; } if (c.pc != 0x003E711Cu) [[unlikely]] return; }
L_003E711C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 512u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E70F8u | kUnwind; return; } goto L_003E70F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E712Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 170u, depth + 1u); else { c.pc = 0x003E9B88u; return; } if (c.pc != 0x003E712Cu) [[unlikely]] return; }
L_003E712C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7138u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E7138u) [[unlikely]] return; }
L_003E7138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7140u); set32(c.r[4], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E7140u) [[unlikely]] return; }
L_003E7140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0]; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E70A8u | kUnwind; return; } goto L_003E70A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E7390; } }
L_003E7150:
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    c.r[2].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003E7378; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7168u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003E7168u) [[unlikely]] return; }
L_003E7168:
    set32(c.r[5], ld32((c.r[21].w[0] + 4u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7178u); st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E7178u) [[unlikely]] return; }
L_003E7178:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7184u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E7184u) [[unlikely]] return; }
L_003E7184:
    c.r[2].d[0] = c.r[20].sd[0] < 7ll ? 1ull : 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[4], 0u + 6u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[20].d[0];
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E71A4u); c.r[8].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 182u, depth + 1u); else { c.pc = 0x003F7348u; return; } if (c.pc != 0x003E71A4u) [[unlikely]] return; }
L_003E71A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E71ACu); set32(c.r[4], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E71ACu) [[unlikely]] return; }
L_003E71AC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[22], c.r[29].w[0] + 8u);  if (t) { goto L_003E72C4; } }
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E71C4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E71C4u) [[unlikely]] return; }
L_003E71C4:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003E72C4; } }
    set32(c.r[17], c.r[21].w[0] + 4u);
    c.budget -= 1;
L_003E71D8:
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 4u);  goto L_003E7250; }
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E71F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 238u, depth + 1u); else { c.pc = 0x003EEA80u; return; } if (c.pc != 0x003E71F0u) [[unlikely]] return; }
L_003E71F0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 4u);  goto L_003E7250; }
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7204u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 238u, depth + 1u); else { c.pc = 0x003EEA80u; return; } if (c.pc != 0x003E7204u) [[unlikely]] return; }
L_003E7204:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 4u);  goto L_003E7250; }
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7220u); set32(c.r[7], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00BE(c, 106u, depth + 1u); else { c.pc = 0x003F94A0u; return; } if (c.pc != 0x003E7220u) [[unlikely]] return; }
L_003E7220:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E723C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7234u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E7234u) [[unlikely]] return; }
L_003E7234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_003E7250; } }
L_003E723C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7244u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E7244u) [[unlikely]] return; }
L_003E7244:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[20].d[0]; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_003E72C4; } }
L_003E7250:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E71D8u | kUnwind; return; } goto L_003E71D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E72C4; } }
L_003E7268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7270u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 238u, depth + 1u); else { c.pc = 0x003EEA80u; return; } if (c.pc != 0x003E7270u) [[unlikely]] return; }
L_003E7270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E72C4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7284u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 238u, depth + 1u); else { c.pc = 0x003EEA80u; return; } if (c.pc != 0x003E7284u) [[unlikely]] return; }
L_003E7284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[29].w[0])));  if (t) { goto L_003E72C4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E729Cu); set32(c.r[7], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00BE(c, 106u, depth + 1u); else { c.pc = 0x003F94A0u; return; } if (c.pc != 0x003E729Cu) [[unlikely]] return; }
L_003E729C:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E72B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E72B0u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E72B0u) [[unlikely]] return; }
L_003E72B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E72C4; } }
L_003E72B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E72C0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E72C0u) [[unlikely]] return; }
L_003E72C0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003E72C4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[20].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003E7334; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E72D4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 208u, depth + 1u); else { c.pc = 0x003EE4C0u; return; } if (c.pc != 0x003E72D4u) [[unlikely]] return; }
L_003E72D4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7268u | kUnwind; return; } goto L_003E7268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003E7334; } }
L_003E72E8:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E72F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 238u, depth + 1u); else { c.pc = 0x003EEA80u; return; } if (c.pc != 0x003E72F4u) [[unlikely]] return; }
L_003E72F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003E7334; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7304u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 238u, depth + 1u); else { c.pc = 0x003EEA80u; return; } if (c.pc != 0x003E7304u) [[unlikely]] return; }
L_003E7304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[29].w[0])));  if (t) { goto L_003E7334; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E731Cu); set32(c.r[7], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00BE(c, 106u, depth + 1u); else { c.pc = 0x003F94A0u; return; } if (c.pc != 0x003E731Cu) [[unlikely]] return; }
L_003E731C:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E7334; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7330u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E7330u) [[unlikely]] return; }
L_003E7330:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003E7334:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[20].d[0];  if (t) { goto L_003E7350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7344u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 170u, depth + 1u); else { c.pc = 0x003E9B88u; return; } if (c.pc != 0x003E7344u) [[unlikely]] return; }
L_003E7344:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E72E8u | kUnwind; return; } goto L_003E72E8; } }
L_003E7350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7358u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003E7358u) [[unlikely]] return; }
L_003E7358:
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
L_003E7368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7370u); c.r[8].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 182u, depth + 1u); else { c.pc = 0x003F7348u; return; } if (c.pc != 0x003E7370u) [[unlikely]] return; }
L_003E7370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003E7390; } }
L_003E7378:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E738Cu); c.r[8].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 182u, depth + 1u); else { c.pc = 0x003F7348u; return; } if (c.pc != 0x003E738Cu) [[unlikely]] return; }
L_003E738C:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003E7390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E73CC; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { goto L_003E73CC; } }
    set32(c.r[18], c.r[29].w[0] + 12u);
    c.budget -= 1;
L_003E73A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E73B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 162u, depth + 1u); else { c.pc = 0x003E9A20u; return; } if (c.pc != 0x003E73B0u) [[unlikely]] return; }
L_003E73B0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E73C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 179u, depth + 1u); else { c.pc = 0x003EDE98u; return; } if (c.pc != 0x003E73C0u) [[unlikely]] return; }
L_003E73C0:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E73A8u | kUnwind; return; } goto L_003E73A8; } }
L_003E73CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E73D4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003E73D4u) [[unlikely]] return; }
L_003E73D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003E7408:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 2216u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 2256u)));
    st32((c.r[17].w[0] + 2224u), c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7458u); st32((c.r[17].w[0] + 2260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 162u, depth + 1u); else { c.pc = 0x003E9A20u; return; } if (c.pc != 0x003E7458u) [[unlikely]] return; }
L_003E7458:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7464u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 274u, depth + 1u); else { c.pc = 0x003E3250u; return; } if (c.pc != 0x003E7464u) [[unlikely]] return; }
L_003E7464:
    set32(c.r[2], ld32((c.r[17].w[0] + 2392u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[17].w[0] + 2392u), c.r[2].w[0]);  if (t) { goto L_003E7480; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 2344u), c.r[2].w[0]);
    c.budget -= 2;
L_003E7480:
    set32(c.r[16], ld32((c.r[17].w[0] + 2228u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], c.r[22].w[0] - 22720u);  if (t) { goto L_003E7570; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E7570; } }
    c.r[21].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 20104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
L_003E74A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_003E74E0; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 8u);  if (t) { goto L_003E74DC; } }
    set32(c.r[5], 0u - 16385u);
    c.budget -= 1;
L_003E74C0:
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E74C0u | kUnwind; return; } goto L_003E74C0; } }
L_003E74DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_003E74E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E7500; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 2392u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E74FCu); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 196u, depth + 1u); else { c.pc = 0x003E23E0u; return; } if (c.pc != 0x003E74FCu) [[unlikely]] return; }
L_003E74FC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003E7500:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E7520; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E751Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 281u, depth + 1u); else { c.pc = 0x003E3488u; return; } if (c.pc != 0x003E751Cu) [[unlikely]] return; }
L_003E751C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003E7520:
    set32(c.r[2], ld32((c.r[21].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_003E7554; }
    if (c.r[20].d[0] != 0) c.r[18].d[0] = c.r[20].d[0];
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 400u)));  goto L_003E7540; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[18].w[0]);  if (t) { goto L_003E7548; } }
L_003E7540:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 400u), c.r[2].w[0]);
    c.budget -= 2;
L_003E7548:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
L_003E7554:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], c.r[22].w[0] - 22720u);  if (t) { goto L_003E7570; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E74A8u | kUnwind; return; } goto L_003E74A8; }
    set32(c.r[3], c.r[22].w[0] - 22720u);
    c.budget -= 1;
L_003E7570:
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003E7594; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 2224u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7590u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BC(c, 120u, depth + 1u); else { c.pc = 0x003F27E8u; return; } if (c.pc != 0x003E7590u) [[unlikely]] return; }
L_003E7590:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003E7594:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003E75C0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 22720u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st32((c.r[29].w[0] + 232u), c.f[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 224u), c.f[20]);
    st32((c.r[29].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    st32((c.r[29].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[2], c.r[4].w[0] << 2);
    st32((c.r[29].w[0] + 28u), c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[21] = ld32((c.r[4].w[0] - 19924u));
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 504u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7640u); st32((c.r[29].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_00B8(c, 182u, depth + 1u); else { c.pc = 0x003E2108u; return; } if (c.pc != 0x003E7640u) [[unlikely]] return; }
L_003E7640:
    st32((c.r[29].w[0] + 36u), 0u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 52u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 6;
L_003E7658:
    set32(c.r[4], c.r[22].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 22720u);
    set32(c.r[17], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 2392u)));
    set32(c.r[19], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 60u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 2392u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[21].w[0] << 2);  if (t) { goto L_003E792C; } }
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 1;
L_003E7688:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], c.r[4].w[0] - 20104u);
    set32(c.r[2], ld32((c.r[4].w[0] + 384u)));
    st32((c.r[29].w[0] + 40u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], c.r[4].w[0] - 22720u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 2392u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], c.r[4].w[0] - 20104u);
    st32((c.r[4].w[0] + 384u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 22720u);
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 2416u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 21;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003E7920; } }
    set32(c.r[30], c.r[29].w[0] + 8u);
    set32(c.r[23], c.r[29].w[0] + 12u);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
L_003E76E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[20], c.r[5].w[0] - 22720u);  if (t) { goto L_003E78EC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 2392u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E78EC; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 20104u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 396u)));
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[9], c.r[29].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 396u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7734u); set32(c.r[7], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_00B8(c, 285u, depth + 1u); else { c.pc = 0x003E35E0u; return; } if (c.pc != 0x003E7734u) [[unlikely]] return; }
L_003E7734:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], ld32((c.r[29].w[0])));  if (t) { goto L_003E788C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] >> 12);
    set32(c.r[5], c.r[5].w[0] >> 12);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], c.r[7].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[4], 0u + 1u);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_003E77BC; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E7894; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 2192u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[5], c.r[2].w[0] - 20288u);
    set32(c.r[8], ld32((c.r[17].w[0] + 56u)));
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E77A4u); c.r[10].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E77A4u) [[unlikely]] return; }
L_003E77A4:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E77B4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 104u, depth + 1u); else { c.pc = 0x003ED100u; return; } if (c.pc != 0x003E77B4u) [[unlikely]] return; }
L_003E77B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E788C; } }
L_003E77BC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[29].w[0] + 44u), c.r[7].w[0]);  goto L_003E7888; }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[4], c.r[19].w[0] << 2);  if (t) { goto L_003E7824; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003E788C; } }
    st32((c.r[6].w[0]), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  if (t) { goto L_003E7804; } }
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_003E7810; } }
L_003E7804:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_003E7810:
    set32(c.r[4], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003E788C; } }
L_003E7824:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7838u); c.r[7].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 72u, depth + 1u); else { c.pc = 0x003F5560u; return; } if (c.pc != 0x003E7838u) [[unlikely]] return; }
L_003E7838:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7850u); c.r[7].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 72u, depth + 1u); else { c.pc = 0x003F5560u; return; } if (c.pc != 0x003E7850u) [[unlikely]] return; }
L_003E7850:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[20] = c.f[0];  goto L_003E7860; }
L_003E7860:
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003E788C; } }
    c.f[21] = c.f[20];
    st32((c.r[29].w[0] + 32u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 52u), c.r[19].w[0]);  if (t) { goto L_003E788C; } }
L_003E7888:
    st32((c.r[29].w[0] + 40u), c.r[16].w[0]);
    c.budget -= 1;
L_003E788C:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E78F0; } }
L_003E7894:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E78F0; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E78F0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    set32(c.r[5], c.r[3].w[0] - 20184u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E78DCu); c.r[8].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E78DCu) [[unlikely]] return; }
L_003E78DC:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E78ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E78ECu) [[unlikely]] return; }
L_003E78EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003E78F0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 2416u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[18].d[0] = 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 12;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E76E8u | kUnwind; return; } goto L_003E76E8; }
L_003E7920:
    set32(c.r[17], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[19], ld32((c.r[29].w[0] + 44u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7688u | kUnwind; return; } goto L_003E7688; } }
L_003E792C:
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { set32(c.r[22], ld32((c.r[29].w[0] + 60u)));  goto L_003E7A18; }
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_003E797C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    set32(c.r[7], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    set32(c.r[5], c.r[3].w[0] - 20080u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7968u); set32(c.r[6], ld32((c.r[2].w[0] + 56u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E7968u) [[unlikely]] return; }
L_003E7968:
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7978u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E7978u) [[unlikely]] return; }
L_003E7978:
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 1;
L_003E797C:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[5], c.r[4].w[0] << 2);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] - 19976u);
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] - 2u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], c.r[3].w[0] - 20104u);
    set32(c.r[2], ld32((c.r[3].w[0] + 528u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E79E0u); st32((c.r[3].w[0] + 528u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 107u, depth + 1u); else { c.pc = 0x003ED148u; return; } if (c.pc != 0x003E79E0u) [[unlikely]] return; }
L_003E79E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], c.r[4].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], ld32((c.r[29].w[0] + 60u)));  if (t) { goto L_003E7A18; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] - 19944u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7A14u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 119u, depth + 1u); else { c.pc = 0x003F27E0u; return; } if (c.pc != 0x003E7A14u) [[unlikely]] return; }
L_003E7A14:
    set32(c.r[22], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_003E7A18:
    c.r[2].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7658u | kUnwind; return; } goto L_003E7658; } }
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_003E7A60:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[18], c.r[21].w[0] - 22720u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = ld64((c.r[18].w[0] + 96u));
    c.budget -= 13;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 96u)));  goto L_003E7AE0; }
    set32(c.r[17], ld32((c.r[18].w[0] + 2212u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);  if (t) { goto L_003E7C18; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);  goto L_003E7C1C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 1;
L_003E7AB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003E7AC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7AC0u); set32(c.r[4], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003E7AC0u) [[unlikely]] return; }
L_003E7AC0:
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_003E7AC4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);  goto L_003E7C18; }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 48u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7AB0u | kUnwind; return; } goto L_003E7AB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);  if (t) { goto L_003E7C18; } }
L_003E7AE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003E7AF8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);  if (t) { goto L_003E7C18; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E7AF8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7B04u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 215u, depth + 1u); else { c.pc = 0x003F7930u; return; } if (c.pc != 0x003E7B04u) [[unlikely]] return; }
L_003E7B04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[18].w[0] + 2324u));
    c.f[0] = ld32((c.r[2].w[0] - 19920u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[17], ld32((c.r[18].w[0] + 2212u)));  goto L_003E7B74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7B28u); c.f[12] = ld32((c.r[29].w[0]));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E7B28u) [[unlikely]] return; }
L_003E7B28:
    c.f[12] = ld32((c.r[18].w[0] + 2324u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7B34u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E7B34u) [[unlikely]] return; }
L_003E7B34:
    c.f[12] = ld32((c.r[18].w[0] + 504u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7B44u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E7B44u) [[unlikely]] return; }
L_003E7B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7B4Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 216u, depth + 1u); else { c.pc = 0x0040AA38u; return; } if (c.pc != 0x003E7B4Cu) [[unlikely]] return; }
L_003E7B4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7B58u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x003E7B58u) [[unlikely]] return; }
L_003E7B58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7B64u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x003E7B64u) [[unlikely]] return; }
L_003E7B64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7B6Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x003E7B6Cu) [[unlikely]] return; }
L_003E7B6C:
    st32((c.r[29].w[0]), c.f[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 2212u)));
    c.budget -= 2;
L_003E7B74:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E7BF0; } }
L_003E7B80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003E7BF0; }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] + 8u);  if (t) { goto L_003E7BE4; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], c.r[21].w[0] - 22720u);
    c.budget -= 3;
L_003E7BA0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7BACu); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003E7BACu) [[unlikely]] return; }
L_003E7BAC:
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_003E7BCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 100u)));  if (t) { goto L_003E7BD0; } }
L_003E7BCC:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 1;
L_003E7BD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] - 4u), 0u);  goto L_003E7BD8; }
L_003E7BD8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7BA0u | kUnwind; return; } goto L_003E7BA0; } }
L_003E7BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7BECu); set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  if (depth < kMaxDepth) unit_00BB(c, 198u, depth + 1u); else { c.pc = 0x003EE300u; return; } if (c.pc != 0x003E7BECu) [[unlikely]] return; }
L_003E7BEC:
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_003E7BF0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] - 20104u);  if (t) { goto L_003E7C08; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 48u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7B80u | kUnwind; return; } goto L_003E7B80; }
    set32(c.r[3], c.r[20].w[0] - 20104u);
    c.budget -= 1;
L_003E7C08:
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 72u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.budget -= 4;
L_003E7C18:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.budget -= 1;
L_003E7C1C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003E7C38:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[8], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[23].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[21], ld32((c.r[8].w[0] + 504u)));
    set32(c.r[4], ld32((c.r[8].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[2], c.r[21].w[0] - 1u);
    if (c.r[4].d[0] != 0) c.r[21].d[0] = c.r[2].d[0];
    st32((c.r[29].w[0] + 4u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 28;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = ld32((c.r[7].w[0] - 19804u));  if (t) { goto L_003E7D70; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 1564u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[8].w[0] + 2192u)));  goto L_003E7CC4; }
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] - 22720u);  if (t) { goto L_003E7CE4; } }
    set32(c.r[4], ld32((c.r[8].w[0] + 2192u)));
    c.budget -= 1;
L_003E7CC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7CD0u); set32(c.r[5], c.r[5].w[0] - 19912u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E7CD0u) [[unlikely]] return; }
L_003E7CD0:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7CE0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E7CE0u) [[unlikely]] return; }
L_003E7CE0:
    set32(c.r[2], c.r[16].w[0] - 22720u);
    c.budget -= 1;
L_003E7CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7CECu); set32(c.r[4], ld32((c.r[2].w[0] + 2208u)));  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003E7CECu) [[unlikely]] return; }
L_003E7CEC:
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[22], ld32((c.r[20].w[0] + 20u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0])));  goto L_003E7D7C; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 8u);  if (t) { goto L_003E7D78; } }
    c.budget -= 1;
L_003E7D18:
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[22].d[0]; set32(c.r[19], c.r[18].w[0] + 4u);  if (t) { goto L_003E7D5C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0])));  goto L_003E7D60; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { goto L_003E7D5C; } }
    c.budget -= 1;
L_003E7D40:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7D4Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E7D4Cu) [[unlikely]] return; }
L_003E7D4C:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7D40u | kUnwind; return; } goto L_003E7D40; } }
L_003E7D5C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003E7D60:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7D18u | kUnwind; return; } goto L_003E7D18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003E7D7C; } }
L_003E7D70:
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003E7D78:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003E7D7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 60u)));  goto L_003E7DC8; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { goto L_003E7DC4; } }
L_003E7D90:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7DA0u); set32(c.r[6], 0u - c.r[21].w[0]);  if (depth < kMaxDepth) unit_00BE(c, 132u, depth + 1u); else { c.pc = 0x003F98C0u; return; } if (c.pc != 0x003E7DA0u) [[unlikely]] return; }
L_003E7DA0:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[16], ld32((c.r[17].w[0])));  goto L_003E7DBC; }
    c.f[20] = c.f[0];
    c.r[23].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
L_003E7DBC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7D90u | kUnwind; return; } goto L_003E7D90; } }
L_003E7DC4:
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 1;
L_003E7DC8:
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E7DDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7DDCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003E7DDCu) [[unlikely]] return; }
L_003E7DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7DE4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E7DE4u) [[unlikely]] return; }
L_003E7DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7DECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 216u, depth + 1u); else { c.pc = 0x0040AA38u; return; } if (c.pc != 0x003E7DECu) [[unlikely]] return; }
L_003E7DEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7DF4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x003E7DF4u) [[unlikely]] return; }
L_003E7DF4:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
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
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003E7E38:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[3].w[0] - 22720u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[17], ld32((c.r[2].w[0] + 2212u)));
    c.budget -= 15;
    { const bool t = c.r[17].d[0] == 0ull; ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);  if (t) { goto L_003E7F24; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[23].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003E7F24; } }
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 2;
L_003E7E88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], c.r[17].w[0] + 44u);  if (t) { goto L_003E7F00; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 8u);  if (t) { goto L_003E7F00; } }
    set32(c.r[19], c.r[23].w[0] - 22720u);
    set32(c.r[20], c.r[22].w[0] - 20104u);
    c.budget -= 3;
L_003E7EA8:
    set32(c.r[2], ld32((c.r[19].w[0] + 2272u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[19].w[0] + 2272u), c.r[2].w[0]);  if (t) { goto L_003E7EC8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 500u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[18].w[0])));  goto L_003E7EF8; }
L_003E7EC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7ED8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003E7ED8u) [[unlikely]] return; }
L_003E7ED8:
    set32(c.r[2], ld32((c.r[20].w[0] + 648u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7EF4u); st32((c.r[20].w[0] + 648u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 373u, depth + 1u); else { c.pc = 0x003EBCB0u; return; } if (c.pc != 0x003E7EF4u) [[unlikely]] return; }
L_003E7EF4:
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003E7EF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7EA8u | kUnwind; return; } goto L_003E7EA8; } }
L_003E7F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7F08u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003E7F08u) [[unlikely]] return; }
L_003E7F08:
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);  goto L_003E7F24; }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7E88u | kUnwind; return; } goto L_003E7E88; }
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003E7F24:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003E7F50:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[17], c.r[18].w[0] - 22720u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7F8Cu); set32(c.r[4], ld32((c.r[17].w[0] + 2420u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E7F8Cu) [[unlikely]] return; }
L_003E7F8C:
    set32(c.r[16], ld32((c.r[17].w[0] + 512u)));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7F9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003E7F9Cu) [[unlikely]] return; }
L_003E7F9C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7FB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 170u, depth + 1u); else { c.pc = 0x003EDCD8u; return; } if (c.pc != 0x003E7FB0u) [[unlikely]] return; }
L_003E7FB0:
    set32(c.r[2], ld32((c.r[17].w[0] + 2396u)));
    set32(c.r[20], ld32((c.r[17].w[0] + 2212u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2396u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_00BA(c, 19u, depth); } }
    c.budget -= 1;
L_003E7FC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 48u)));  [[clang::musttail]] return unit_00BA(c, 8u, depth); }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 8u);  if (t) { [[clang::musttail]] return unit_00BA(c, 7u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[22], c.r[2].w[0] - 22720u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 5;
L_003E7FF0:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[22].w[0] + 2396u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[18], c.r[21].w[0] + 4u);  if (t) { [[clang::musttail]] return unit_00BA(c, 6u, depth); } }
    [[clang::musttail]] return unit_00BA(c, 1u, depth);
}

}
