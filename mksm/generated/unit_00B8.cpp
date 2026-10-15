#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B8[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30,
    0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34,
    0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 39,
    0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47,
    0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57,
    0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0,
    0, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0,
    0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0,
    0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0,
    164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 202, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208,
    0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0,
    0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261,
    0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0,
    0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0,
    0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0,
    0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B8(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003E0000;
    case 2u: goto L_003E003C;
    case 3u: goto L_003E005C;
    case 4u: goto L_003E00A8;
    case 5u: goto L_003E00B8;
    case 6u: goto L_003E0104;
    case 7u: goto L_003E0114;
    case 8u: goto L_003E0150;
    case 9u: goto L_003E0210;
    case 10u: goto L_003E0220;
    case 11u: goto L_003E0250;
    case 12u: goto L_003E0268;
    case 13u: goto L_003E02C8;
    case 14u: goto L_003E0324;
    case 15u: goto L_003E035C;
    case 16u: goto L_003E036C;
    case 17u: goto L_003E0398;
    case 18u: goto L_003E03A8;
    case 19u: goto L_003E03F8;
    case 20u: goto L_003E0408;
    case 21u: goto L_003E0444;
    case 22u: goto L_003E0454;
    case 23u: goto L_003E04AC;
    case 24u: goto L_003E0500;
    case 25u: goto L_003E0560;
    case 26u: goto L_003E0588;
    case 27u: goto L_003E05A0;
    case 28u: goto L_003E05B0;
    case 29u: goto L_003E05B8;
    case 30u: goto L_003E067C;
    case 31u: goto L_003E0698;
    case 32u: goto L_003E0708;
    case 33u: goto L_003E0740;
    case 34u: goto L_003E077C;
    case 35u: goto L_003E078C;
    case 36u: goto L_003E07C0;
    case 37u: goto L_003E07E8;
    case 38u: goto L_003E07F0;
    case 39u: goto L_003E07FC;
    case 40u: goto L_003E080C;
    case 41u: goto L_003E081C;
    case 42u: goto L_003E0830;
    case 43u: goto L_003E0840;
    case 44u: goto L_003E0858;
    case 45u: goto L_003E08C8;
    case 46u: goto L_003E0908;
    case 47u: goto L_003E097C;
    case 48u: goto L_003E098C;
    case 49u: goto L_003E09B8;
    case 50u: goto L_003E09E0;
    case 51u: goto L_003E09E8;
    case 52u: goto L_003E0A78;
    case 53u: goto L_003E0AC0;
    case 54u: goto L_003E0B30;
    case 55u: goto L_003E0BD0;
    case 56u: goto L_003E0BD8;
    case 57u: goto L_003E0BFC;
    case 58u: goto L_003E0C04;
    case 59u: goto L_003E0C0C;
    case 60u: goto L_003E0C1C;
    case 61u: goto L_003E0C38;
    case 62u: goto L_003E0C40;
    case 63u: goto L_003E0C70;
    case 64u: goto L_003E0C78;
    case 65u: goto L_003E0C8C;
    case 66u: goto L_003E0C94;
    case 67u: goto L_003E0C9C;
    case 68u: goto L_003E0CB0;
    case 69u: goto L_003E0CB8;
    case 70u: goto L_003E0CC0;
    case 71u: goto L_003E0CC8;
    case 72u: goto L_003E0CD0;
    case 73u: goto L_003E0CE8;
    case 74u: goto L_003E0D14;
    case 75u: goto L_003E0D24;
    case 76u: goto L_003E0D38;
    case 77u: goto L_003E0D48;
    case 78u: goto L_003E0D5C;
    case 79u: goto L_003E0D6C;
    case 80u: goto L_003E0D74;
    case 81u: goto L_003E0DC8;
    case 82u: goto L_003E0DDC;
    case 83u: goto L_003E0DF0;
    case 84u: goto L_003E0E0C;
    case 85u: goto L_003E0E50;
    case 86u: goto L_003E0E70;
    case 87u: goto L_003E0EB8;
    case 88u: goto L_003E0F9C;
    case 89u: goto L_003E0FB8;
    case 90u: goto L_003E0FC8;
    case 91u: goto L_003E1034;
    case 92u: goto L_003E1044;
    case 93u: goto L_003E109C;
    case 94u: goto L_003E10B8;
    case 95u: goto L_003E10C8;
    case 96u: goto L_003E10F0;
    case 97u: goto L_003E1118;
    case 98u: goto L_003E1160;
    case 99u: goto L_003E117C;
    case 100u: goto L_003E11B4;
    case 101u: goto L_003E11D0;
    case 102u: goto L_003E11EC;
    case 103u: goto L_003E11FC;
    case 104u: goto L_003E1218;
    case 105u: goto L_003E1288;
    case 106u: goto L_003E129C;
    case 107u: goto L_003E12BC;
    case 108u: goto L_003E12D0;
    case 109u: goto L_003E12F8;
    case 110u: goto L_003E1308;
    case 111u: goto L_003E1328;
    case 112u: goto L_003E1348;
    case 113u: goto L_003E1380;
    case 114u: goto L_003E13C8;
    case 115u: goto L_003E13D8;
    case 116u: goto L_003E1408;
    case 117u: goto L_003E1420;
    case 118u: goto L_003E1430;
    case 119u: goto L_003E1450;
    case 120u: goto L_003E1488;
    case 121u: goto L_003E14E0;
    case 122u: goto L_003E151C;
    case 123u: goto L_003E152C;
    case 124u: goto L_003E1558;
    case 125u: goto L_003E15B4;
    case 126u: goto L_003E15D0;
    case 127u: goto L_003E1618;
    case 128u: goto L_003E1638;
    case 129u: goto L_003E16DC;
    case 130u: goto L_003E1708;
    case 131u: goto L_003E171C;
    case 132u: goto L_003E172C;
    case 133u: goto L_003E1740;
    case 134u: goto L_003E1760;
    case 135u: goto L_003E1794;
    case 136u: goto L_003E17B8;
    case 137u: goto L_003E17D8;
    case 138u: goto L_003E17E8;
    case 139u: goto L_003E188C;
    case 140u: goto L_003E18B4;
    case 141u: goto L_003E18D0;
    case 142u: goto L_003E18FC;
    case 143u: goto L_003E1918;
    case 144u: goto L_003E1988;
    case 145u: goto L_003E19A8;
    case 146u: goto L_003E19E8;
    case 147u: goto L_003E19F0;
    case 148u: goto L_003E19FC;
    case 149u: goto L_003E1A60;
    case 150u: goto L_003E1A88;
    case 151u: goto L_003E1A90;
    case 152u: goto L_003E1AD0;
    case 153u: goto L_003E1AF4;
    case 154u: goto L_003E1B10;
    case 155u: goto L_003E1B20;
    case 156u: goto L_003E1B40;
    case 157u: goto L_003E1B6C;
    case 158u: goto L_003E1B84;
    case 159u: goto L_003E1BE8;
    case 160u: goto L_003E1C48;
    case 161u: goto L_003E1C84;
    case 162u: goto L_003E1D64;
    case 163u: goto L_003E1D78;
    case 164u: goto L_003E1D80;
    case 165u: goto L_003E1D94;
    case 166u: goto L_003E1DA8;
    case 167u: goto L_003E1DF8;
    case 168u: goto L_003E1E30;
    case 169u: goto L_003E1E50;
    case 170u: goto L_003E1E58;
    case 171u: goto L_003E1E94;
    case 172u: goto L_003E1EA4;
    case 173u: goto L_003E1F00;
    case 174u: goto L_003E1F08;
    case 175u: goto L_003E1F2C;
    case 176u: goto L_003E1F50;
    case 177u: goto L_003E1FF8;
    case 178u: goto L_003E2070;
    case 179u: goto L_003E20BC;
    case 180u: goto L_003E20CC;
    case 181u: goto L_003E20E4;
    case 182u: goto L_003E2108;
    case 183u: goto L_003E2150;
    case 184u: goto L_003E215C;
    case 185u: goto L_003E2168;
    case 186u: goto L_003E217C;
    case 187u: goto L_003E21A0;
    case 188u: goto L_003E21C4;
    case 189u: goto L_003E2208;
    case 190u: goto L_003E224C;
    case 191u: goto L_003E2260;
    case 192u: goto L_003E22B0;
    case 193u: goto L_003E22C8;
    case 194u: goto L_003E2328;
    case 195u: goto L_003E235C;
    case 196u: goto L_003E23E0;
    case 197u: goto L_003E2440;
    case 198u: goto L_003E2484;
    case 199u: goto L_003E24CC;
    case 200u: goto L_003E24DC;
    case 201u: goto L_003E24E8;
    case 202u: goto L_003E24F8;
    case 203u: goto L_003E257C;
    case 204u: goto L_003E25AC;
    case 205u: goto L_003E25BC;
    case 206u: goto L_003E25C8;
    case 207u: goto L_003E25E0;
    case 208u: goto L_003E25FC;
    case 209u: goto L_003E2604;
    case 210u: goto L_003E2610;
    case 211u: goto L_003E2620;
    case 212u: goto L_003E2690;
    case 213u: goto L_003E26F8;
    case 214u: goto L_003E2730;
    case 215u: goto L_003E2768;
    case 216u: goto L_003E27A8;
    case 217u: goto L_003E27C0;
    case 218u: goto L_003E27D0;
    case 219u: goto L_003E2860;
    case 220u: goto L_003E2888;
    case 221u: goto L_003E2898;
    case 222u: goto L_003E28C8;
    case 223u: goto L_003E28E4;
    case 224u: goto L_003E2904;
    case 225u: goto L_003E2938;
    case 226u: goto L_003E294C;
    case 227u: goto L_003E2978;
    case 228u: goto L_003E298C;
    case 229u: goto L_003E2A20;
    case 230u: goto L_003E2A88;
    case 231u: goto L_003E2AAC;
    case 232u: goto L_003E2AD8;
    case 233u: goto L_003E2AE0;
    case 234u: goto L_003E2B08;
    case 235u: goto L_003E2B20;
    case 236u: goto L_003E2B30;
    case 237u: goto L_003E2B88;
    case 238u: goto L_003E2BA8;
    case 239u: goto L_003E2BB8;
    case 240u: goto L_003E2BD4;
    case 241u: goto L_003E2C24;
    case 242u: goto L_003E2C2C;
    case 243u: goto L_003E2C3C;
    case 244u: goto L_003E2C48;
    case 245u: goto L_003E2C80;
    case 246u: goto L_003E2CA8;
    case 247u: goto L_003E2CE0;
    case 248u: goto L_003E2D18;
    case 249u: goto L_003E2D48;
    case 250u: goto L_003E2D78;
    case 251u: goto L_003E2DD8;
    case 252u: goto L_003E2DEC;
    case 253u: goto L_003E2E20;
    case 254u: goto L_003E2E80;
    case 255u: goto L_003E2EE0;
    case 256u: goto L_003E2EF8;
    case 257u: goto L_003E2F38;
    case 258u: goto L_003E2F78;
    case 259u: goto L_003E2FC0;
    case 260u: goto L_003E2FD8;
    case 261u: goto L_003E2FFC;
    case 262u: goto L_003E3020;
    case 263u: goto L_003E3038;
    case 264u: goto L_003E3044;
    case 265u: goto L_003E3090;
    case 266u: goto L_003E30B0;
    case 267u: goto L_003E30D8;
    case 268u: goto L_003E3108;
    case 269u: goto L_003E3124;
    case 270u: goto L_003E3158;
    case 271u: goto L_003E3178;
    case 272u: goto L_003E319C;
    case 273u: goto L_003E31F0;
    case 274u: goto L_003E3250;
    case 275u: goto L_003E32B0;
    case 276u: goto L_003E3324;
    case 277u: goto L_003E339C;
    case 278u: goto L_003E33C0;
    case 279u: goto L_003E3408;
    case 280u: goto L_003E341C;
    case 281u: goto L_003E3488;
    case 282u: goto L_003E34E8;
    case 283u: goto L_003E3510;
    case 284u: goto L_003E3538;
    case 285u: goto L_003E35E0;
    case 286u: goto L_003E3600;
    case 287u: goto L_003E3618;
    case 288u: goto L_003E3628;
    case 289u: goto L_003E3678;
    case 290u: goto L_003E36F0;
    case 291u: goto L_003E3700;
    case 292u: goto L_003E3730;
    case 293u: goto L_003E3798;
    case 294u: goto L_003E37E8;
    case 295u: goto L_003E3838;
    case 296u: goto L_003E3850;
    case 297u: goto L_003E386C;
    case 298u: goto L_003E3878;
    case 299u: goto L_003E38A8;
    case 300u: goto L_003E38C0;
    case 301u: goto L_003E38D0;
    case 302u: goto L_003E38F8;
    case 303u: goto L_003E3914;
    case 304u: goto L_003E393C;
    case 305u: goto L_003E3994;
    case 306u: goto L_003E39C0;
    case 307u: goto L_003E39CC;
    case 308u: goto L_003E39F4;
    case 309u: goto L_003E3A54;
    case 310u: goto L_003E3A8C;
    case 311u: goto L_003E3AB4;
    case 312u: goto L_003E3AC0;
    case 313u: goto L_003E3AD4;
    case 314u: goto L_003E3AE4;
    case 315u: goto L_003E3B18;
    case 316u: goto L_003E3B50;
    case 317u: goto L_003E3BF8;
    case 318u: goto L_003E3C18;
    case 319u: goto L_003E3C40;
    case 320u: goto L_003E3C5C;
    case 321u: goto L_003E3CBC;
    case 322u: goto L_003E3CD0;
    case 323u: goto L_003E3CF4;
    case 324u: goto L_003E3D54;
    case 325u: goto L_003E3D5C;
    case 326u: goto L_003E3D68;
    case 327u: goto L_003E3D94;
    case 328u: goto L_003E3DB0;
    case 329u: goto L_003E3DC0;
    case 330u: goto L_003E3DE8;
    case 331u: goto L_003E3E10;
    case 332u: goto L_003E3E5C;
    case 333u: goto L_003E3EB4;
    case 334u: goto L_003E3EC0;
    case 335u: goto L_003E3ED8;
    case 336u: goto L_003E3F28;
    case 337u: goto L_003E3F50;
    case 338u: goto L_003E3F90;
    case 339u: goto L_003E3FE0;
    default: bad_entry(c, 0x003E0000u); return;
    }
L_003E0000:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E002C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x50200000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[16], c.r[18].w[0] - 22720u);  goto L_003E0060; }
L_003E002C:
    c.f[12] = c.f[20];
    set32(c.r[16], c.r[16].w[0] - 30928u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E003Cu); set32(c.r[17], c.r[18].w[0] - 22720u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E003Cu) [[unlikely]] return; }
L_003E003C:
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull | 33696ull;
    c.r[7].d[0] = c.r[7].d[0] << 47;
    c.r[8].d[0] = 0ull | 33728ull;
    c.r[8].d[0] = c.r[8].d[0] << 47;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E005Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E005Cu) [[unlikely]] return; }
L_003E005C:
    set32(c.r[16], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003E0060:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.f[3] = c.r[1].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.r[2].d[0] = c.r[23].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[0], c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[16].w[0] + 376u), c.f[1]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 372u), c.f[2]);  if (t) { goto L_003E00B8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 30632u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E00A8u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E00A8u) [[unlikely]] return; }
L_003E00A8:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E00B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E00B8u) [[unlikely]] return; }
L_003E00B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 348u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003E0128; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003E00F4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003E00F4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 476u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003E00F4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003E0114; } }
L_003E00F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0104u); set32(c.r[5], c.r[5].w[0] - 30544u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E0104u) [[unlikely]] return; }
L_003E0104:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0114u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E0114u) [[unlikely]] return; }
L_003E0114:
    set32(c.r[2], c.r[18].w[0] - 22720u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 332u), c.r[4].w[0]);
    c.budget -= 5;
L_003E0128:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[17], 0u + 27u);
    set32(c.r[19], c.r[2].w[0] - 22720u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[19].w[0] + 328u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 10;
L_003E0150:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 14u);  if (t) { goto L_003E0168; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003E0268; } }
L_003E0168:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003E017C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003E0268; } }
L_003E017C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 19u);  if (t) { goto L_003E018C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 18u);  if (t) { goto L_003E0198; } }
L_003E018C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_003E0268; } }
L_003E0198:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_003E01B8; }
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_003E01B8; }
    set32(c.r[4], ld32((c.r[19].w[0] + 2192u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[30].w[0] - 30456u);  if (t) { goto L_003E0208; } }
L_003E01B8:
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[18].w[0] - 22720u);  if (t) { goto L_003E01E8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 2192u)));  goto L_003E01E0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 476u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_003E01EC; }
    set32(c.r[4], ld32((c.r[4].w[0] + 2192u)));
    c.budget -= 1;
L_003E01E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[23].w[0] - 30368u);  if (t) { goto L_003E0208; } }
L_003E01E8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003E01EC:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[18].w[0] - 22720u);  if (t) { goto L_003E0228; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 476u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[22].w[0] - 30272u);  if (t) { goto L_003E0228; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 2192u)));
    c.budget -= 1;
L_003E0208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0210u); set32(c.r[16], c.r[16].w[0] - 4u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E0210u) [[unlikely]] return; }
L_003E0210:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0220u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E0220u) [[unlikely]] return; }
L_003E0220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_003E0270; } }
L_003E0228:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 25u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[18].w[0] - 22720u);  if (t) { goto L_003E0268; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 476u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] - 30192u);  if (t) { goto L_003E0258; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0250u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003E0250u) [[unlikely]] return; }
L_003E0250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 4u);  if (t) { goto L_003E026C; } }
L_003E0258:
    set32(c.r[4], c.r[20].w[0] - 30176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0268u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003E0268u) [[unlikely]] return; }
L_003E0268:
    set32(c.r[16], c.r[16].w[0] - 4u);
    c.budget -= 1;
L_003E026C:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003E0270:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0150u | kUnwind; return; } goto L_003E0150; }
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] - 22720u);  if (t) { goto L_003E02C8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E02CC; } }
    c.f[0] = ld32((c.r[3].w[0] + 2324u));
    c.f[1] = ld32((c.r[2].w[0] - 29484u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = ld64((c.r[3].w[0] + 96u));  goto L_003E02D0; }
    set32(c.r[2], ld32((c.r[3].w[0] + 216u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[3].w[0] + 96u));  goto L_003E02D0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E02C8u); set32(c.r[5], c.r[5].w[0] - 30160u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E02C8u) [[unlikely]] return; }
L_003E02C8:
    set32(c.r[3], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003E02CC:
    c.r[2].d[0] = ld64((c.r[3].w[0] + 96u));
    c.budget -= 1;
L_003E02D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003E0328; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003E0328; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 12u)));  if (t) { goto L_003E0300; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 336u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003E0308; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 1;
L_003E0300:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003E0324; } }
L_003E0308:
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 30048u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0324u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003E0324u) [[unlikely]] return; }
L_003E0324:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 1;
L_003E0328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] - 22720u);  if (t) { goto L_003E036C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 504u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));  goto L_003E0350; }
    set32(c.r[2], ld32((c.r[3].w[0] + 476u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003E0370; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.budget -= 1;
L_003E0350:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E035Cu); set32(c.r[5], c.r[5].w[0] - 30032u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E035Cu) [[unlikely]] return; }
L_003E035C:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E036Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E036Cu) [[unlikely]] return; }
L_003E036C:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_003E0370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[18].w[0] - 22720u);  if (t) { goto L_003E04B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 504u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 204u)));  goto L_003E03AC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0398u); set32(c.r[5], c.r[5].w[0] - 29912u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E0398u) [[unlikely]] return; }
L_003E0398:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E03A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E03A8u) [[unlikely]] return; }
L_003E03A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 1;
L_003E03AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] - 22720u);  if (t) { goto L_003E040C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 332u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] - 22720u);  if (t) { goto L_003E040C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E03F8u); set32(c.r[5], c.r[5].w[0] - 29832u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E03F8u) [[unlikely]] return; }
L_003E03F8:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0408u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E0408u) [[unlikely]] return; }
L_003E0408:
    set32(c.r[3], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003E040C:
    set32(c.r[2], ld32((c.r[3].w[0] + 476u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] - 22720u);  if (t) { goto L_003E0458; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 504u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));  goto L_003E0438; }
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], 0u + 4u);  goto L_003E045C; }
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.budget -= 1;
L_003E0438:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0444u); set32(c.r[5], c.r[5].w[0] - 29776u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E0444u) [[unlikely]] return; }
L_003E0444:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0454u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E0454u) [[unlikely]] return; }
L_003E0454:
    set32(c.r[4], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003E0458:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_003E045C:
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[18].w[0] - 22720u);  if (t) { goto L_003E04BC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003E04BC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[18].w[0] - 22720u);  if (t) { goto L_003E049C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 336u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E04A0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] - 22720u);  if (t) { goto L_003E04BC; } }
L_003E049C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003E04A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E04ACu); set32(c.r[5], c.r[5].w[0] - 29704u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E04ACu) [[unlikely]] return; }
L_003E04AC:
    st32((c.r[16].w[0] + 180u), 0u);
    st32((c.r[16].w[0] + 176u), 0u);
    st32((c.r[16].w[0] + 336u), 0u);
    c.budget -= 3;
L_003E04B8:
    set32(c.r[3], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003E04BC:
    set32(c.r[4], ld32((c.r[3].w[0] + 504u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] < 0; st32((c.r[3].w[0] + 184u), c.r[4].w[0]);  if (t) { goto L_003E0510; } }
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] - 1u);  if (t) { goto L_003E0508; } }
    st32((c.r[3].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_003E04F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);  if (t) { goto L_003E0528; } }
L_003E04F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0500u); set32(c.r[5], c.r[5].w[0] - 29568u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E0500u) [[unlikely]] return; }
L_003E0500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);  if (t) { goto L_003E0528; } }
L_003E0508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003E0520; } }
L_003E0510:
    set32(c.r[2], ld32((c.r[3].w[0] + 476u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] - 1u);  if (t) { goto L_003E0524; } }
    st32((c.r[3].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 1;
L_003E0520:
    st32((c.r[3].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_003E0524:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003E0528:
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
L_003E0560:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0588u); c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 81u, depth + 1u); else { c.pc = 0x00410B58u; return; } if (c.pc != 0x003E0588u) [[unlikely]] return; }
L_003E0588:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[6], 0u + 2512u);
    set32(c.r[16], c.r[16].w[0] - 22720u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E05A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x003E05A0u) [[unlikely]] return; }
L_003E05A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[16].w[0] + 1664u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E05B0u); set32(c.r[5], c.r[5].w[0] - 29480u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x003E05B0u) [[unlikely]] return; }
L_003E05B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E05B8u);  if (depth < kMaxDepth) unit_00BC(c, 24u, depth + 1u); else { c.pc = 0x003F1AD0u; return; } if (c.pc != 0x003E05B8u) [[unlikely]] return; }
L_003E05B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[2].w[0] - 29472u));
    set32(c.r[5], 0u + 1u);
    c.f[2] = ld32((c.r[3].w[0] - 29468u));
    set32(c.r[6], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.f[1] = c.r[1].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 2192u), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[16].w[0] + 2184u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[16].w[0] + 2188u), c.r[19].w[0]);
    set32(c.r[4], 0u + 1u);
    st32((c.r[16].w[0] + 1616u), c.f[2]);
    st32((c.r[16].w[0] + 1620u), c.f[1]);
    st32((c.r[16].w[0] + 396u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 136u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 2316u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 2324u), c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 2460u), c.f[0]);
    st32((c.r[16].w[0] + 2464u), c.f[0]);
    st32((c.r[16].w[0] + 2468u), c.f[0]);
    st32((c.r[16].w[0] + 120u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 140u), c.f[0]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    st32((c.r[16].w[0] + 1656u), c.f[0]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    st32((c.r[16].w[0] + 216u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    st32((c.r[16].w[0] + 2332u), 0u);
    st32((c.r[16].w[0] + 2336u), 0u);
    st32((c.r[16].w[0] + 1604u), 0u);
    st32((c.r[16].w[0] + 1612u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[16].w[0] + 2364u), 0u);
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 2384u), 0u);
    st32((c.r[16].w[0] + 2388u), 0u);
    st32((c.r[16].w[0] + 2244u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 448u), c.f[0]);
    st32((c.r[16].w[0] + 444u), c.r[6].w[0]);
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E067Cu); st32((c.r[16].w[0] + 2236u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BE(c, 158u, depth + 1u); else { c.pc = 0x003F9CE0u; return; } if (c.pc != 0x003E067Cu) [[unlikely]] return; }
L_003E067C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E0698:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    set32(c.r[3], ld32((c.r[5].w[0] + 48u)));
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[21], ld32((c.r[5].w[0] + 508u)));  if (t) { goto L_003E06EC; } }
    c.r[3].d[0] = ld64((c.r[5].w[0] + 352u));
    set32(c.r[2], c.r[21].w[0] + 1u);
    if (c.r[3].d[0] != 0) c.r[21].d[0] = c.r[2].d[0];
    c.budget -= 3;
L_003E06EC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003E0AF0; } }
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[23], c.r[2].w[0] - 4447u);
    set32(c.r[30], 0u + 98u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
L_003E0708:
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[29].w[0])));  goto L_003E0720; }
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 3;
L_003E0720:
    set32(c.r[2], 0u + 80u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 81u);  if (t) { goto L_003E08B8; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_003E0880; } }
    c.budget -= 1;
L_003E0740:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 68u);  if (t) { goto L_003E0754; } }
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[7], ld32((c.r[29].w[0])));  goto L_003E0884; }
L_003E0754:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E0784; } }
    set32(c.r[4], ld32((c.r[22].w[0] + 2192u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E077Cu); set32(c.r[5], c.r[3].w[0] - 29464u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E077Cu) [[unlikely]] return; }
L_003E077C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[29].w[0])));  if (t) { goto L_003E0884; } }
L_003E0784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E078Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 85u, depth + 1u); else { c.pc = 0x003E0E50u; return; } if (c.pc != 0x003E078Cu) [[unlikely]] return; }
L_003E078C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[20], c.r[3].w[0] - 22720u);
    set32(c.r[8], ld32((c.r[20].w[0] + 504u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_003E07C8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 2192u)));
    set32(c.r[5], c.r[5].w[0] - 29384u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E07C0u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E07C0u) [[unlikely]] return; }
L_003E07C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[29].w[0])));  if (t) { goto L_003E0884; } }
L_003E07C8:
    set32(c.r[3], 0u + 58u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_003E0860; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E07E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 83u, depth + 1u); else { c.pc = 0x003E0DF0u; return; } if (c.pc != 0x003E07E8u) [[unlikely]] return; }
L_003E07E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E07F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x003E07F0u) [[unlikely]] return; }
L_003E07F0:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E07FCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E07FCu) [[unlikely]] return; }
L_003E07FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E080Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x003E080Cu) [[unlikely]] return; }
L_003E080C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E0820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E081Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x003E081Cu) [[unlikely]] return; }
L_003E081C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003E0820:
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0830u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x003E0830u) [[unlikely]] return; }
L_003E0830:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[3], 0u + 100u);  if (t) { goto L_003E0868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0840u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E0840u) [[unlikely]] return; }
L_003E0840:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 2192u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0858u); set32(c.r[5], c.r[2].w[0] - 29312u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E0858u) [[unlikely]] return; }
L_003E0858:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[29].w[0])));  if (t) { goto L_003E0884; } }
L_003E0860:
    c.f[20] = 0u;
    set32(c.r[3], 0u + 100u);
    c.budget -= 2;
L_003E0868:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[22].w[0] + 1572u)));  goto L_003E0874; }
    set32(c.r[3], ld32((c.r[22].w[0] + 1576u)));
    c.budget -= 1;
L_003E0874:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[20]);
    c.budget -= 3;
L_003E0880:
    set32(c.r[7], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003E0884:
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003E0A9C; } }
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] - 4447u);
    set32(c.r[4], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[17].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0740u | kUnwind; return; } goto L_003E0740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003E0AA0; } }
L_003E08B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_003E0A54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_003E0A20; } }
L_003E08C8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[30].d[0]; set32(c.r[2], 0u + 66u);  if (t) { goto L_003E0948; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[5].w[0] + 2u);  if (t) { goto L_003E0934; } }
    set32(c.r[5], c.r[21].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_003E0A20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[6], c.r[2].w[0] - 22720u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 8;
L_003E0908:
    set32(c.r[2], ld32((c.r[6].w[0] + 1584u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[1]);
    set32(c.r[3], ld32((c.r[6].w[0] + 1580u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[7].d[0]; st32((c.r[4].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0908u | kUnwind; return; } goto L_003E0908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0])));  if (t) { goto L_003E0A24; } }
L_003E0934:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[17].d[0]; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_003E0954; } }
    set32(c.r[2], c.r[5].w[0] + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_003E0A20; } }
L_003E0948:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[5], ld32((c.r[29].w[0])));  if (t) { goto L_003E0A24; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003E0954:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E0984; } }
    set32(c.r[4], ld32((c.r[22].w[0] + 2192u)));
    set32(c.r[5], c.r[5].w[0] - 29232u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E097Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E097Cu) [[unlikely]] return; }
L_003E097C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0])));  if (t) { goto L_003E0A24; } }
L_003E0984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E098Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 85u, depth + 1u); else { c.pc = 0x003E0E50u; return; } if (c.pc != 0x003E098Cu) [[unlikely]] return; }
L_003E098C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_003E09C0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[22].w[0] + 2192u)));
    set32(c.r[5], c.r[5].w[0] - 29160u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E09B8u); c.r[8].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E09B8u) [[unlikely]] return; }
L_003E09B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0])));  if (t) { goto L_003E0A24; } }
L_003E09C0:
    set32(c.r[3], 0u + 58u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_003E09F0; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E09E0u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 83u, depth + 1u); else { c.pc = 0x003E0DF0u; return; } if (c.pc != 0x003E09E0u) [[unlikely]] return; }
L_003E09E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E09E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x003E09E8u) [[unlikely]] return; }
L_003E09E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_003E0A08; } }
L_003E09F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[30].d[0]) { set32(c.r[3], ld32((c.r[22].w[0] + 1580u)));  goto L_003E0A14; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 2;
L_003E0A08:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[30].d[0]) { set32(c.r[3], ld32((c.r[22].w[0] + 1580u)));  goto L_003E0A14; }
    set32(c.r[3], ld32((c.r[22].w[0] + 1584u)));
    c.budget -= 1;
L_003E0A14:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[20]);
    c.budget -= 3;
L_003E0A20:
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003E0A24:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + 1u);  if (t) { goto L_003E0A9C; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + c.r[23].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E08C8u | kUnwind; return; } goto L_003E08C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (t) { goto L_003E0AA4; } }
L_003E0A54:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);  if (t) { goto L_003E0A9C; } }
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003E0AB8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[3].w[0] - 4447u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 3;
L_003E0A78:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_003E0A9C; } }
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0A78u | kUnwind; return; } goto L_003E0A78; } }
L_003E0A9C:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003E0AA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 1;
L_003E0AA4:
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003E0AE0; } }
L_003E0AB8:
    set32(c.r[5], c.r[2].w[0] - 4447u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 2;
L_003E0AC0:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0AC0u | kUnwind; return; } goto L_003E0AC0; } }
L_003E0AE0:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0708u | kUnwind; return; } goto L_003E0708; }
L_003E0AF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], c.r[2].w[0] - 22720u);
    set32(c.r[5], ld32((c.r[3].w[0] + 504u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E0B9C; } }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.f[2] = ld32((c.r[2].w[0] - 29092u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[7].w[0] + 1576u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    c.f[1] = ld32((c.r[3].w[0] - 29088u));
    set32(c.r[9], 0u + 1u);
    set32(c.r[8], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 9;
L_003E0B30:
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[5].w[0] << 2);  if (t) { goto L_003E0B74; } }
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[7].w[0] + 1572u)));
    st32((c.r[7].w[0] + 72u), c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[5], c.r[5].w[0] - 1u);  goto L_003E0B94; }
    st32((c.r[7].w[0] + 420u), c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 72u), 0u);  if (t) { goto L_003E0B9C; } }
L_003E0B74:
    set32(c.r[2], ld32((c.r[7].w[0] + 1572u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[7].w[0] + 72u), c.r[9].w[0]);  goto L_003E0B90; }
L_003E0B90:
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 1;
L_003E0B94:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[8].d[0]; set32(c.r[4], c.r[4].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0B30u | kUnwind; return; } goto L_003E0B30; } }
L_003E0B9C:
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003E0BD0:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_003E0BD8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 22720u);
    set32(c.r[17], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0BFCu); st32((c.r[16].w[0] + 2356u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00B7(c, 32u, depth + 1u); else { c.pc = 0x003DC498u; return; } if (c.pc != 0x003E0BFCu) [[unlikely]] return; }
L_003E0BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0C04u);  if (depth < kMaxDepth) unit_00B7(c, 14u, depth + 1u); else { c.pc = 0x003DC278u; return; } if (c.pc != 0x003E0C04u) [[unlikely]] return; }
L_003E0C04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0C0Cu);  if (depth < kMaxDepth) unit_00BC(c, 86u, depth + 1u); else { c.pc = 0x003F2390u; return; } if (c.pc != 0x003E0C0Cu) [[unlikely]] return; }
L_003E0C0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0C1Cu); set32(c.r[6], 0u + 2512u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x003E0C1Cu) [[unlikely]] return; }
L_003E0C1C:
    st32((c.r[16].w[0] + 2356u), c.r[17].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E0C38:
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 2;
L_003E0C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 4u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[2].w[0] - 22720u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 18u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0C70u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_00B8(c, 104u, depth + 1u); else { c.pc = 0x003E1218u; return; } if (c.pc != 0x003E0C70u) [[unlikely]] return; }
L_003E0C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0C78u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_00B8(c, 121u, depth + 1u); else { c.pc = 0x003E14E0u; return; } if (c.pc != 0x003E0C78u) [[unlikely]] return; }
L_003E0C78:
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E0C94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0C8Cu); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_00B8(c, 121u, depth + 1u); else { c.pc = 0x003E14E0u; return; } if (c.pc != 0x003E0C8Cu) [[unlikely]] return; }
L_003E0C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0C94u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_00B8(c, 121u, depth + 1u); else { c.pc = 0x003E14E0u; return; } if (c.pc != 0x003E0C94u) [[unlikely]] return; }
L_003E0C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0C9Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_00B8(c, 121u, depth + 1u); else { c.pc = 0x003E14E0u; return; } if (c.pc != 0x003E0C9Cu) [[unlikely]] return; }
L_003E0C9C:
    set32(c.r[16], ld32((c.r[17].w[0] + 504u)));
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] << 2);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0CB0u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00B8(c, 121u, depth + 1u); else { c.pc = 0x003E14E0u; return; } if (c.pc != 0x003E0CB0u) [[unlikely]] return; }
L_003E0CB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0CB8u); set32(c.r[4], ld32((c.r[17].w[0] + 2200u)));  if (depth < kMaxDepth) unit_00B8(c, 121u, depth + 1u); else { c.pc = 0x003E14E0u; return; } if (c.pc != 0x003E0CB8u) [[unlikely]] return; }
L_003E0CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0CC0u); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_00B8(c, 121u, depth + 1u); else { c.pc = 0x003E14E0u; return; } if (c.pc != 0x003E0CC0u) [[unlikely]] return; }
L_003E0CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0CC8u);  if (depth < kMaxDepth) unit_00BC(c, 121u, depth + 1u); else { c.pc = 0x003F27F0u; return; } if (c.pc != 0x003E0CC8u) [[unlikely]] return; }
L_003E0CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0CD0u);  if (depth < kMaxDepth) unit_00B8(c, 112u, depth + 1u); else { c.pc = 0x003E1348u; return; } if (c.pc != 0x003E0CD0u) [[unlikely]] return; }
L_003E0CD0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E0CE8:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 29080u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0D14u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 100u, depth + 1u); else { c.pc = 0x0020A608u; return; } if (c.pc != 0x003E0D14u) [[unlikely]] return; }
L_003E0D14:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E0D38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0D24u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x003E0D24u) [[unlikely]] return; }
L_003E0D24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0D38u); set32(c.r[5], c.r[5].w[0] - 29072u);  if (depth < kMaxDepth) unit_0042(c, 100u, depth + 1u); else { c.pc = 0x0020A608u; return; } if (c.pc != 0x003E0D38u) [[unlikely]] return; }
L_003E0D38:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E0D6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0D48u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x003E0D48u) [[unlikely]] return; }
L_003E0D48:
    c.f[12] = ld32((c.r[17].w[0]));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[17], c.r[29].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0D5Cu); set32(c.r[16], c.r[16].w[0] - 29064u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E0D5Cu) [[unlikely]] return; }
L_003E0D5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0D6Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 100u, depth + 1u); else { c.pc = 0x0020A608u; return; } if (c.pc != 0x003E0D6Cu) [[unlikely]] return; }
L_003E0D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0D74u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 174u, depth + 1u); else { c.pc = 0x0020B398u; return; } if (c.pc != 0x003E0D74u) [[unlikely]] return; }
L_003E0D74:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 511u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[16], c.r[4].w[0] - c.r[7].w[0]);
    set32(c.r[8], c.r[2].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[8].w[0] + 1556u)));
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = 0ull;
    c.r[4].d[0] = c.r[3].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[8].w[0] + 1556u), c.r[3].w[0]);  if (t) { goto L_003E0DC8; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E0DC8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[8].w[0] + 1556u), c.r[7].w[0]);
    set32(c.r[4], c.r[8].w[0] + 1044u);
    set32(c.r[5], c.r[5].w[0] - 29056u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0DC8u); set32(c.r[16], c.r[16].w[0] - 1u);  if (depth < kMaxDepth) unit_00DD(c, 79u, depth + 1u); else { c.pc = 0x00475020u; return; } if (c.pc != 0x003E0DC8u) [[unlikely]] return; }
L_003E0DC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 21676u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0DDCu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 79u, depth + 1u); else { c.pc = 0x00475020u; return; } if (c.pc != 0x003E0DDCu) [[unlikely]] return; }
L_003E0DDC:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_003E0DF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0E0Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 61u, depth + 1u); else { c.pc = 0x00478718u; return; } if (c.pc != 0x003E0E0Cu) [[unlikely]] return; }
L_003E0E0C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003E0E34; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] - 1u)));
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  if (t) { goto L_003E0E38; } }
    set32(c.r[2], c.r[4].w[0] - 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003E0E34:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003E0E38:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E0E50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 10u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0E70u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 51u, depth + 1u); else { c.pc = 0x0047D240u; return; } if (c.pc != 0x003E0E70u) [[unlikely]] return; }
L_003E0E70:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[16].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_003E0E9C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] - 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  if (t) { goto L_003E0EA0; } }
    set32(c.r[2], c.r[4].w[0] - 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003E0E9C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003E0EA0:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E0EB8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[3].w[0] - 20208u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003E1018; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E0F34; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_003E10F4; } }
L_003E0F34:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[4].d[0] = c.r[4].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_003E0FF4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], ld32((c.r[20].w[0] - 20208u)));  if (t) { goto L_003E0F68; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003E0F68:
    set32(c.r[17], c.r[20].w[0] - 20208u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[3].w[0] + 8208u)));
    set32(c.r[6], 0u + 6u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0F9Cu); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E0F9Cu) [[unlikely]] return; }
L_003E0F9C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_003E0FCC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0FB8u); set32(c.r[5], c.r[5].w[0] - 29040u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E0FB8u) [[unlikely]] return; }
L_003E0FB8:
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0FC8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E0FC8u) [[unlikely]] return; }
L_003E0FC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_003E0FCC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[18].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 44u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 10;
L_003E0FF4:
    set32(c.r[3], c.r[20].w[0] - 20208u);
    set32(c.r[16], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[5], c.r[16].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - c.r[19].w[0]);
    st32((c.r[3].w[0] + 40u), c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 44u), c.r[4].w[0]);  if (t) { goto L_003E10F4; } }
L_003E1018:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 68u)));  goto L_003E1048; }
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1034u); set32(c.r[5], c.r[5].w[0] - 28992u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E1034u) [[unlikely]] return; }
L_003E1034:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1044u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E1044u) [[unlikely]] return; }
L_003E1044:
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 1;
L_003E1048:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[18].w[0]);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 88u), c.r[5].w[0]);  if (t) { goto L_003E1078; } }
    st32((c.r[17].w[0] + 92u), c.r[5].w[0]);
    c.budget -= 1;
L_003E1078:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], 0u + 6u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E109Cu); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E109Cu) [[unlikely]] return; }
L_003E109C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 56u)));  goto L_003E10CC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E10B8u); set32(c.r[5], c.r[5].w[0] - 29040u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E10B8u) [[unlikely]] return; }
L_003E10B8:
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E10C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E10C8u) [[unlikely]] return; }
L_003E10C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_003E10CC:
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E10F4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[5], c.r[5].w[0] - 28920u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E10F0u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E10F0u) [[unlikely]] return; }
L_003E10F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E10F4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003E1118:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 20208u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 17;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003E1184; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 8208u)));
    c.budget -= 1;
L_003E1160:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E117Cu); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E117Cu) [[unlikely]] return; }
L_003E117C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 8208u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1160u | kUnwind; return; } goto L_003E1160; } }
L_003E1184:
    set32(c.r[17], c.r[18].w[0] - 20208u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 36u), 0u);  if (t) { goto L_003E11EC; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 8208u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E11B4u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E11B4u) [[unlikely]] return; }
L_003E11B4:
    set32(c.r[6], ld32((c.r[16].w[0] + 8208u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E11D0u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E11D0u) [[unlikely]] return; }
L_003E11D0:
    set32(c.r[6], ld32((c.r[16].w[0] + 8208u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E11ECu); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E11ECu) [[unlikely]] return; }
L_003E11EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E11FCu); set32(c.r[6], 0u + 104u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x003E11FCu) [[unlikely]] return; }
L_003E11FC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E1218:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[18], c.r[2].w[0] - 20208u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[19].w[0] - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 56u), c.r[4].w[0]);
    st32((c.r[2].w[0] - 20208u), c.r[7].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[16].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[7], ld32((c.r[17].w[0] + 8208u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 6u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 28;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1288u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E1288u) [[unlikely]] return; }
L_003E1288:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E129Cu); st32((c.r[18].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x003E129Cu) [[unlikely]] return; }
L_003E129C:
    set32(c.r[7], ld32((c.r[17].w[0] + 8208u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 6u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E12BCu); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E12BCu) [[unlikely]] return; }
L_003E12BC:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E12D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x003E12D0u) [[unlikely]] return; }
L_003E12D0:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 52u)));  goto L_003E12EC; }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] - 20208u);  if (t) { goto L_003E130C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 1;
L_003E12EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E12F8u); set32(c.r[5], c.r[5].w[0] - 28672u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E12F8u) [[unlikely]] return; }
L_003E12F8:
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1308u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E1308u) [[unlikely]] return; }
L_003E1308:
    set32(c.r[3], c.r[20].w[0] - 20208u);
    c.budget -= 1;
L_003E130C:
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E1328; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[5], c.r[5].w[0] - 28624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1328u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E1328u) [[unlikely]] return; }
L_003E1328:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003E1348:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[7], c.r[7].w[0] + 6104u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[16].w[0] - 20208u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 4u);
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1380u); set32(c.r[5], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00DD(c, 258u, depth + 1u); else { c.pc = 0x00476E00u; return; } if (c.pc != 0x003E1380u) [[unlikely]] return; }
L_003E1380:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[7], ld32((c.r[16].w[0] - 20208u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] - 4u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[6].w[0]);  if (t) { goto L_003E13B4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003E13DC; } }
L_003E13B4:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E13C8u); set32(c.r[5], c.r[5].w[0] - 28560u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E13C8u) [[unlikely]] return; }
L_003E13C8:
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E13D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E13D8u) [[unlikely]] return; }
L_003E13D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 1;
L_003E13DC:
    set32(c.r[16], c.r[18].w[0] - 20208u);
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], 0u + 6u);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1408u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E1408u) [[unlikely]] return; }
L_003E1408:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_003E1430; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1420u); set32(c.r[5], c.r[5].w[0] - 28464u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E1420u) [[unlikely]] return; }
L_003E1420:
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1430u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E1430u) [[unlikely]] return; }
L_003E1430:
    set32(c.r[7], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[7].d[0] == c.r[2].d[0]) { set32(c.r[16], c.r[18].w[0] - 20208u);  goto L_003E1470; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    c.budget -= 4;
L_003E1450:
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 7;
    if (c.r[7].d[0] != c.r[4].d[0]) { set32(c.r[3], ld32((c.r[5].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1450u | kUnwind; return; } goto L_003E1450; }
    set32(c.r[16], c.r[18].w[0] - 20208u);
    c.budget -= 1;
L_003E1470:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003E14C8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 2;
L_003E1488:
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_003E14B0; }
L_003E14B0:
    st32((c.r[6].w[0]), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1488u | kUnwind; return; } goto L_003E1488; }
L_003E14C8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E14E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[3].w[0] - 20208u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003E152C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E151Cu); set32(c.r[5], c.r[5].w[0] - 28416u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E151Cu) [[unlikely]] return; }
L_003E151C:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E152Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E152Cu) [[unlikely]] return; }
L_003E152C:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; c.r[16].d[0] = c.r[3].d[0] & c.r[2].d[0];  if (t) { goto L_003E1574; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_003E1558:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);  goto L_003E15B8; }
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[3], c.r[3].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1558u | kUnwind; return; } goto L_003E1558; } }
L_003E1574:
    set32(c.r[5], c.r[18].w[0] - 20208u);
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 2);  if (t) { goto L_003E15A4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_003E15B4; } }
L_003E15A4:
    set32(c.r[4], ld32((c.r[5].w[0] + 52u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E15B4u); set32(c.r[5], c.r[5].w[0] - 28360u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E15B4u) [[unlikely]] return; }
L_003E15B4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003E15B8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E15D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 20208u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.lo.d[0] = 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003E1670; } }
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[8].w[0] + 24u)));
    c.budget -= 4;
L_003E1618:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[16], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[9].w[0]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003E1654; } }
    c.budget -= 1;
L_003E1638:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1638u | kUnwind; return; } goto L_003E1638; } }
L_003E1654:
    set32(c.r[2], ld32((c.r[8].w[0] + 28u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; mmi::madd(c, 0, c.r[3].w[0], c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1618u | kUnwind; return; } goto L_003E1618; } }
L_003E1670:
    set32(c.r[17], c.r[11].w[0] - 20208u);
    set32(c.r[15], ld32((c.r[11].w[0] - 20208u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[5], c.r[5].w[0] - 28288u);
    set32(c.r[11], ld32((c.r[17].w[0] + 84u)));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[17].w[0] + 80u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[13], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[11], c.r[11].w[0] - c.r[3].w[0]);
    set32(c.r[12], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] - c.r[10].w[0]);
    set32(c.r[14], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[11], c.r[11].w[0] - c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[9], ld32((c.r[17].w[0] + 76u)));
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[13].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[12].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[15].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[14].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E16DCu); st32((c.r[29].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E16DCu) [[unlikely]] return; }
L_003E16DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E172C; } }
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[12] = ld32((c.r[17].w[0] + 100u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    fpu_div(c, 12u, c.f[12], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1708u); set32(c.r[16], c.r[16].w[0] - 27944u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E1708u) [[unlikely]] return; }
L_003E1708:
    set32(c.r[6], ld32((c.r[17].w[0] + 96u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E171Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E171Cu) [[unlikely]] return; }
L_003E171C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E172Cu); set32(c.r[5], c.r[5].w[0] - 27888u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E172Cu) [[unlikely]] return; }
L_003E172C:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003E17A8; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    c.budget -= 2;
L_003E1740:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003E177C; } }
    c.budget -= 1;
L_003E1760:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1760u | kUnwind; return; } goto L_003E1760; } }
L_003E177C:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], c.r[19].w[0] - 27856u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1794u); set32(c.r[6], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E1794u) [[unlikely]] return; }
L_003E1794:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1740u | kUnwind; return; } goto L_003E1740; } }
L_003E17A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E17B8u); set32(c.r[5], c.r[5].w[0] - 27848u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E17B8u) [[unlikely]] return; }
L_003E17B8:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003E17D8:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);  c.pc = t; return; }
L_003E17E8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003E18B4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[16], c.r[3].w[0] - 20208u);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 80u)));  goto L_003E1858; }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[18].w[0]);  if (t) { goto L_003E18B4; } }
L_003E1858:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 8208u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E188Cu); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E188Cu) [[unlikely]] return; }
L_003E188C:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);  goto L_003E18B8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[5], c.r[5].w[0] - 28880u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E18B4u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E18B4u) [[unlikely]] return; }
L_003E18B4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003E18B8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E18D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 104u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[16], c.r[16].w[0] - 20208u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E18FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x003E18FCu) [[unlikely]] return; }
L_003E18FC:
    st32((c.r[16].w[0] + 52u), c.r[17].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E1918:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    set32(c.r[5], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[5].w[0] + 2344u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 2392u)));
    set32(c.r[18], ld32((c.r[5].w[0] + 2228u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 21;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[5].w[0] + 2392u), c.r[3].w[0]);  if (t) { goto L_003E1A34; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[30].w[0] - 22720u);  if (t) { goto L_003E1A38; } }
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    c.r[22].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[23].w[0] + 2392u)));
    c.budget -= 3;
L_003E1988:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[18].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003E1A10; } }
    set32(c.r[17], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[19], c.r[3].w[0] + 8u);  if (t) { goto L_003E1A08; } }
    set32(c.r[21], c.r[22].w[0] - 22720u);
    set32(c.r[20], 0u + 8192u);
    c.budget -= 2;
L_003E19A8:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[18].d[0]) { set32(c.r[16], ld32((c.r[17].w[0] + 8u)));  goto L_003E19B4; }
L_003E19B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 2392u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  if (t) { goto L_003E19D0; } }
    c.r[2].d[0] = c.r[4].d[0] & 10240ull;
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[20].d[0]) { set32(c.r[17], ld32((c.r[19].w[0])));  goto L_003E1A00; }
L_003E19D0:
    c.r[2].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E19E8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E19E8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 204u, depth + 1u); else { c.pc = 0x003EE420u; return; } if (c.pc != 0x003E19E8u) [[unlikely]] return; }
L_003E19E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E19F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003E19F0u) [[unlikely]] return; }
L_003E19F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E19FCu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003E19FCu) [[unlikely]] return; }
L_003E19FC:
    set32(c.r[17], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_003E1A00:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E19A8u | kUnwind; return; } goto L_003E19A8; } }
L_003E1A08:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 2;
L_003E1A10:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[18], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[3], c.r[30].w[0] - 22720u);  if (t) { goto L_003E1A38; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[23].w[0] + 2392u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1988u | kUnwind; return; } goto L_003E1988; }
L_003E1A34:
    set32(c.r[3], c.r[30].w[0] - 22720u);
    c.budget -= 1;
L_003E1A38:
    set32(c.r[19], ld32((c.r[3].w[0] + 2224u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[5], c.r[30].w[0] - 22720u);  if (t) { goto L_003E1BB8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 340u)));  goto L_003E1BBC; }
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 4;
L_003E1A60:
    set32(c.r[20], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[20].w[0] + 40u)));  if (t) { goto L_003E1B28; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E1ADC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[5].w[0] + 4u);  if (t) { goto L_003E1A8C; } }
    c.budget -= 1;
L_003E1A88:
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E1A8C:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003E1A90:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_003E1ADC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1A90u | kUnwind; return; } goto L_003E1A90; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[7], c.r[17].w[0] - 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1A88u | kUnwind; return; } goto L_003E1A88; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1AD0u); set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 2));  if (depth < kMaxDepth) unit_00BB(c, 231u, depth + 1u); else { c.pc = 0x003EE900u; return; } if (c.pc != 0x003E1AD0u) [[unlikely]] return; }
L_003E1AD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1A90u | kUnwind; return; } goto L_003E1A90; }
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E1ADC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003E1AFC; } }
    st32((c.r[18].w[0] + 16u), c.r[19].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1AF4u); set32(c.r[4], ld32((c.r[20].w[0] + 40u)));  if (depth < kMaxDepth) unit_00BB(c, 254u, depth + 1u); else { c.pc = 0x003EEC60u; return; } if (c.pc != 0x003E1AF4u) [[unlikely]] return; }
L_003E1AF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[19].w[0] + 28u)));  if (t) { goto L_003E1BA0; } }
L_003E1AFC:
    set32(c.r[4], ld32((c.r[22].w[0] + 2192u)));
    set32(c.r[5], c.r[21].w[0] - 27840u);
    set32(c.r[6], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1B10u); set32(c.r[7], ld32((c.r[19].w[0] + 56u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E1B10u) [[unlikely]] return; }
L_003E1B10:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1B20u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 104u, depth + 1u); else { c.pc = 0x003ED100u; return; } if (c.pc != 0x003E1B20u) [[unlikely]] return; }
L_003E1B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[19].w[0] + 28u)));  if (t) { goto L_003E1BA0; } }
L_003E1B28:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[18], c.r[20].w[0] + 40u);  if (t) { goto L_003E1B78; } }
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[5].w[0] + 8u);  if (t) { goto L_003E1B78; } }
    c.budget -= 1;
L_003E1B40:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0])));  goto L_003E1B70; }
    st32((c.r[16].w[0] + 16u), c.r[19].w[0]);
    set32(c.r[5], c.r[17].w[0] - 8u);
    set32(c.r[17], c.r[17].w[0] - 4u);
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[5], c.r[5].w[0] - c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1B6Cu); set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 2));  if (depth < kMaxDepth) unit_00BB(c, 210u, depth + 1u); else { c.pc = 0x003EE538u; return; } if (c.pc != 0x003E1B6Cu) [[unlikely]] return; }
L_003E1B6C:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003E1B70:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1B40u | kUnwind; return; } goto L_003E1B40; } }
L_003E1B78:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1B84u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E1B84u) [[unlikely]] return; }
L_003E1B84:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[20].d[0]) { st32((c.r[17].w[0] + 4u), c.r[19].w[0]);  goto L_003E1B9C; }
    st32((c.r[17].w[0] + 8u), c.r[19].w[0]);
    c.budget -= 1;
L_003E1B9C:
    set32(c.r[19], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 1;
L_003E1BA0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[5], c.r[30].w[0] - 22720u);  if (t) { goto L_003E1BB8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 40u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1A60u | kUnwind; return; } goto L_003E1A60; }
    set32(c.r[5], c.r[30].w[0] - 22720u);
    c.budget -= 1;
L_003E1BB8:
    set32(c.r[2], ld32((c.r[5].w[0] + 340u)));
    c.budget -= 1;
L_003E1BBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);  if (t) { goto L_003E1C1C; } }
    set32(c.r[18], ld32((c.r[5].w[0] + 2228u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);  goto L_003E1C20; }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E1C1C; } }
    set32(c.r[3], c.r[2].w[0] - 20104u);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 2;
L_003E1BE8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[18].w[0] + 28u)));  goto L_003E1C00; }
    set32(c.r[2], ld32((c.r[3].w[0] + 400u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 400u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 4;
L_003E1C00:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);  goto L_003E1C1C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1BE8u | kUnwind; return; } goto L_003E1BE8; }
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003E1C1C:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.budget -= 1;
L_003E1C20:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003E1C48:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[17].w[0] + 2240u)));
    c.budget -= 10;
    if (c.r[16].d[0] == c.r[2].d[0]) { st32((c.r[17].w[0] + 2240u), 0u);  goto L_003E1C70; }
L_003E1C70:
    set32(c.r[2], ld32((c.r[17].w[0] + 2320u)));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { st32((c.r[17].w[0] + 2320u), 0u);  goto L_003E1C7C; }
L_003E1C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1C84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 292u, depth + 1u); else { c.pc = 0x003E3730u; return; } if (c.pc != 0x003E1C84u) [[unlikely]] return; }
L_003E1C84:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    set32(c.r[4], 0u + 512u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_003E1D5C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E1CF0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2200u)));
    set32(c.r[2], c.r[2].w[0] - 20208u);
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    st32((c.r[2].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 17;
L_003E1CF0:
    set32(c.r[3], ld32((c.r[17].w[0] + 2312u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_003E1D10; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E1D5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 2204u)));  if (t) { goto L_003E1D1C; } }
L_003E1D10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E1D5C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2200u)));
    c.budget -= 1;
L_003E1D1C:
    set32(c.r[2], c.r[2].w[0] - 20208u);
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    st32((c.r[2].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 16;
L_003E1D5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1D64u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003E1D64u) [[unlikely]] return; }
L_003E1D64:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E1D78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1D78u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003E1D78u) [[unlikely]] return; }
L_003E1D78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1D80u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003E1D80u) [[unlikely]] return; }
L_003E1D80:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 48u)));  goto L_003E1D98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1D94u); set32(c.r[4], c.r[16].w[0] + 44u);  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003E1D94u) [[unlikely]] return; }
L_003E1D94:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_003E1D98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E1DA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1DA8u); set32(c.r[4], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003E1DA8u) [[unlikely]] return; }
L_003E1DA8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E1DE0; } }
    set32(c.r[3], c.r[3].w[0] - 20208u);
    set32(c.r[4], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], ld32((c.r[3].w[0] + 24u)));
    st32((c.r[3].w[0] + 76u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 256u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[16].w[0]);
    c.budget -= 12;
L_003E1DE0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E1DF8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[16].w[0] - 22720u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1E30u); set32(c.r[4], ld32((c.r[16].w[0] + 2424u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E1E30u) [[unlikely]] return; }
L_003E1E30:
    set32(c.r[3], ld32((c.r[16].w[0] + 2228u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003E1E74; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[20].w[0] - 22720u);  if (t) { goto L_003E1E78; } }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_003E1E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1E58u); set32(c.r[16], ld32((c.r[3].w[0] + 28u)));  if (depth < kMaxDepth) unit_00B8(c, 160u, depth + 1u); else { c.pc = 0x003E1C48u; return; } if (c.pc != 0x003E1E58u) [[unlikely]] return; }
L_003E1E58:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E1E74; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1E50u | kUnwind; return; } goto L_003E1E50; } }
L_003E1E74:
    set32(c.r[16], c.r[20].w[0] - 22720u);
    c.budget -= 1;
L_003E1E78:
    set32(c.r[6], ld32((c.r[16].w[0] + 2232u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[6].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E1EA4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    set32(c.r[5], c.r[5].w[0] - 27720u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1E94u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E1E94u) [[unlikely]] return; }
L_003E1E94:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1EA4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E1EA4u) [[unlikely]] return; }
L_003E1EA4:
    st32((c.r[16].w[0] + 2232u), 0u);
    set32(c.r[4], c.r[19].w[0] - 20104u);
    set32(c.r[2], ld32((c.r[4].w[0] + 852u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 856u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 852u), c.r[2].w[0]);  if (t) { goto L_003E1EC8; } }
    st32((c.r[4].w[0] + 856u), c.r[17].w[0]);
    c.budget -= 1;
L_003E1EC8:
    set32(c.r[2], ld32((c.r[4].w[0] + 180u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 180u), c.r[2].w[0]);  if (t) { goto L_003E1EE4; } }
    st32((c.r[4].w[0] + 184u), c.r[18].w[0]);
    c.budget -= 1;
L_003E1EE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 2424u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[20].w[0] - 22720u);  goto L_003E1F20; }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 8u);  if (t) { goto L_003E1F1C; } }
    c.budget -= 1;
L_003E1F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1F08u);  if (depth < kMaxDepth) unit_00BA(c, 138u, depth + 1u); else { c.pc = 0x003E9718u; return; } if (c.pc != 0x003E1F08u) [[unlikely]] return; }
L_003E1F08:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1F00u | kUnwind; return; } goto L_003E1F00; } }
L_003E1F1C:
    set32(c.r[2], c.r[20].w[0] - 22720u);
    c.budget -= 1;
L_003E1F20:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1F2Cu); set32(c.r[4], ld32((c.r[2].w[0] + 2424u)));  if (depth < kMaxDepth) unit_00BB(c, 162u, depth + 1u); else { c.pc = 0x003EDB50u; return; } if (c.pc != 0x003E1F2Cu) [[unlikely]] return; }
L_003E1F2C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003E1F50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[10], ld32((c.r[16].w[0] + 40u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[10].w[0] + 4u)));
    set32(c.r[11], ld32((c.r[2].w[0] + 504u)));
    c.budget -= 22;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[9].w[0] + 4u);  if (t) { goto L_003E1FB4; } }
    set32(c.r[6], c.r[9].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_003E2018; } }
L_003E1FB4:
    set32(c.r[2], ld32((c.r[10].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[10].w[0] + 12u)));  goto L_003E1FC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003E1FD4; } }
L_003E1FC8:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[5], 0u + 3u);  goto L_003E1FE0; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003E1FD4:
    set32(c.r[6], c.r[9].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_003E2018; } }
L_003E1FE0:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[9].w[0] + 8u);  if (t) { goto L_003E2018; } }
    set32(c.r[2], ld32((c.r[10].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[10].w[0] + 20u);  if (t) { goto L_003E200C; } }
L_003E1FF8:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0])));  goto L_003E201C; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_003E200C:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1FF8u | kUnwind; return; } goto L_003E1FF8; }
    st32((c.r[18].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_003E2018:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_003E201C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003E2030; } }
    st32((c.r[7].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;  if (t) { goto L_003E2090; } }
L_003E2030:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003E2044; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003E2054; } }
L_003E2044:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003E2060; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003E2054:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[2].w[0]);  if (t) { goto L_003E2090; } }
L_003E2060:
    set32(c.r[8], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;  if (t) { goto L_003E2074; } }
    c.budget -= 1;
L_003E2070:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_003E2074:
    c.r[2].d[0] = c.r[8].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E2090; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2070u | kUnwind; return; } goto L_003E2070; } }
    st32((c.r[7].w[0]), c.r[8].w[0]);
    c.budget -= 1;
L_003E2090:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[8].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;  if (t) { goto L_003E20A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] - 22720u);  if (t) { goto L_003E20D0; } }
L_003E20A0:
    set32(c.r[2], c.r[20].w[0] - 22720u);
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E20BCu); set32(c.r[5], c.r[5].w[0] - 27624u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E20BCu) [[unlikely]] return; }
L_003E20BC:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E20CCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 104u, depth + 1u); else { c.pc = 0x003ED100u; return; } if (c.pc != 0x003E20CCu) [[unlikely]] return; }
L_003E20CC:
    set32(c.r[2], c.r[20].w[0] - 22720u);
    c.budget -= 1;
L_003E20D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E20E4u); set32(c.r[5], ld32((c.r[2].w[0] + 504u)));  if (depth < kMaxDepth) unit_00BB(c, 119u, depth + 1u); else { c.pc = 0x003ED450u; return; } if (c.pc != 0x003E20E4u) [[unlikely]] return; }
L_003E20E4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003E2108:
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] - 1u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003E21F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 27536u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x003E0000u < 16384u) { entry = entries_00B8[(t - 0x003E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003E2150:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] - c.r[8].d[0];  if (t) { goto L_003E2240; } }
L_003E215C:
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[7].w[0])));  if (t) { goto L_003E21EC; } }
L_003E2168:
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];  if (t) { goto L_003E2194; } }
L_003E217C:
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    set32(c.r[4], ld32((c.r[7].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] + c.r[5].d[0];
    c.budget -= 6;
L_003E2194:
    c.r[2].d[0] = c.r[2].d[0] + c.r[4].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] - c.r[8].d[0];  if (t) { goto L_003E2240; } }
L_003E21A0:
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    set32(c.r[5], ld32((c.r[7].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] + c.r[4].d[0];
    set32(c.r[3], ld32((c.r[7].w[0] + 16u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] + c.r[5].d[0];  if (t) { goto L_003E21EC; } }
L_003E21C4:
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    set32(c.r[5], ld32((c.r[7].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] + c.r[4].d[0];
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] + c.r[5].d[0];
    set32(c.r[3], ld32((c.r[7].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] + c.r[6].d[0];
    c.budget -= 10;
L_003E21EC:
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] - c.r[8].d[0];  if (t) { goto L_003E2240; } }
L_003E21F8:
    set32(c.r[6], 0u + 3u);
    set32(c.r[10], 0u + 32u);
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.budget -= 4;
L_003E2208:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[8].d[0]; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { goto L_003E2234; } }
    set32(c.r[2], c.r[10].w[0] - c.r[6].w[0]);
    c.r[3].d[0] = c.r[4].d[0] << (c.r[6].w[0] & 63u);
    c.r[2].d[0] = c.r[4].d[0] >> (c.r[2].w[0] & 63u);
    set32(c.r[6], c.r[6].w[0] + 3u);
    c.r[3].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[4].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    set32(c.r[2], c.r[6].w[0] - 32u);
    c.r[5].d[0] = c.r[5].d[0] ^ c.r[3].d[0];
    if (c.r[4].d[0] == 0) c.r[6].d[0] = c.r[2].d[0];
    c.budget -= 9;
L_003E2234:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[7].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2208u | kUnwind; return; } goto L_003E2208; }
L_003E2240:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E224Cu); c.r[5].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 45u, depth + 1u); else { c.pc = 0x00489328u; return; } if (c.pc != 0x003E224Cu) [[unlikely]] return; }
L_003E224C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E2260:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.budget -= 15;
    { const bool t = c.r[18].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003E2320; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[18].w[0] + 8u);  if (t) { goto L_003E2320; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[19], c.r[21].w[0] - 22720u);
    c.budget -= 2;
L_003E22B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[20].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0])));  goto L_003E2318; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E22C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 293u, depth + 1u); else { c.pc = 0x003E3798u; return; } if (c.pc != 0x003E22C8u) [[unlikely]] return; }
L_003E22C8:
    set32(c.r[5], c.r[21].w[0] - 22720u);
    set32(c.r[4], ld32((c.r[5].w[0] + 2256u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 2260u)));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[2].d[0]) { st32((c.r[5].w[0] + 2260u), c.r[16].w[0]);  goto L_003E22DC; }
L_003E22DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[20].d[0];
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { st32((c.r[5].w[0] + 2252u), c.r[16].w[0]);  goto L_003E2304; }
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_003E2304:
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 2268u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 2268u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 5;
L_003E2318:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E22B0u | kUnwind; return; } goto L_003E22B0; } }
L_003E2320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2328u);  if (depth < kMaxDepth) unit_00B8(c, 250u, depth + 1u); else { c.pc = 0x003E2D78u; return; } if (c.pc != 0x003E2328u) [[unlikely]] return; }
L_003E2328:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u - 4097u);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[23].d[0] & 1ull;
    set32(c.r[2], c.r[2].w[0] << 12);
    st32((c.r[16].w[0] + 32u), c.r[18].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[16].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_003E235C; } }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E235Cu); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E235Cu) [[unlikely]] return; }
L_003E235C:
    set32(c.r[4], c.r[21].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[4].w[0] + 2216u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 2224u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { st32((c.r[4].w[0] + 2224u), c.r[16].w[0]);  goto L_003E2370; }
L_003E2370:
    set32(c.r[2], ld32((c.r[4].w[0] + 2220u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st32((c.r[4].w[0] + 2220u), c.r[16].w[0]);  goto L_003E237C; }
L_003E237C:
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { st32((c.r[4].w[0] + 2212u), c.r[16].w[0]);  goto L_003E2398; }
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 1;
L_003E2398:
    st32((c.r[3].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[4], c.r[21].w[0] - 22720u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    set32(c.r[3], ld32((c.r[4].w[0] + 2264u)));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[4].w[0] + 2264u), c.r[3].w[0]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003E23E0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[30].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E2644; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[22], c.r[2].w[0] + 8u);  if (t) { goto L_003E2644; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[21], c.r[2].w[0] - 20208u);
    c.budget -= 3;
L_003E2440:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[19].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E2450; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_003E2450:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[30].w[0] - 22720u);  if (t) { goto L_003E24BC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_003E2630; }
    set32(c.r[3], ld32((c.r[3].w[0] + 2392u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_003E2630; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2484u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003E2484u) [[unlikely]] return; }
L_003E2484:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_003E2630; }
    set32(c.r[3], ld32((c.r[21].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], ld32((c.r[21].w[0] + 24u)));
    st32((c.r[21].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[17].w[0]);  if (t) { goto L_003E262C; } }
L_003E24BC:
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[19].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 504u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E24CCu); c.r[20].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00BB(c, 116u, depth + 1u); else { c.pc = 0x003ED338u; return; } if (c.pc != 0x003E24CCu) [[unlikely]] return; }
L_003E24CC:
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E24DCu); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E24DCu) [[unlikely]] return; }
L_003E24DC:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E24E8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 187u, depth + 1u); else { c.pc = 0x003EE068u; return; } if (c.pc != 0x003E24E8u) [[unlikely]] return; }
L_003E24E8:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E24F8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 191u, depth + 1u); else { c.pc = 0x003E2260u; return; } if (c.pc != 0x003E24F8u) [[unlikely]] return; }
L_003E24F8:
    set32(c.r[3], ld32((c.r[23].w[0])));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[23].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);  if (t) { goto L_003E2550; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 16u)));  goto L_003E2544; }
    st32((c.r[18].w[0] + 16u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[18].w[0]);  if (t) { goto L_003E2550; } }
L_003E2544:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[18].w[0]);
    c.budget -= 3;
L_003E2550:
    set32(c.r[4], c.r[30].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 60u)));  goto L_003E2584; }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_003E2630; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E257Cu); set32(c.r[4], c.r[18].w[0] + 36u);  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E257Cu) [[unlikely]] return; }
L_003E257C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  if (t) { goto L_003E2630; } }
L_003E2584:
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 8192ull;  if (t) { goto L_003E25D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E25BC; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 2192u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[5], c.r[2].w[0] - 27512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E25ACu); set32(c.r[7], ld32((c.r[19].w[0] + 56u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E25ACu) [[unlikely]] return; }
L_003E25AC:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E25BCu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 104u, depth + 1u); else { c.pc = 0x003ED100u; return; } if (c.pc != 0x003E25BCu) [[unlikely]] return; }
L_003E25BC:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E25C8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E25C8u) [[unlikely]] return; }
L_003E25C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  if (t) { goto L_003E25E4; } }
L_003E25D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E25E0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 254u, depth + 1u); else { c.pc = 0x003EEC60u; return; } if (c.pc != 0x003E25E0u) [[unlikely]] return; }
L_003E25E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_003E25E4:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 36u);  if (t) { goto L_003E2618; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E25FCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 204u, depth + 1u); else { c.pc = 0x003EE420u; return; } if (c.pc != 0x003E25FCu) [[unlikely]] return; }
L_003E25FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2604u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003E2604u) [[unlikely]] return; }
L_003E2604:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2610u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003E2610u) [[unlikely]] return; }
L_003E2610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  if (t) { goto L_003E2630; } }
L_003E2618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2620u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E2620u) [[unlikely]] return; }
L_003E2620:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), c.r[18].w[0]);  goto L_003E262C; }
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 1;
L_003E262C:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_003E2630:
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[22].w[0])));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2440u | kUnwind; return; } goto L_003E2440; } }
L_003E2644:
    set32(c.r[2], c.r[30].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[2].w[0] + 156u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003E2660; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    st32((c.r[2].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_003E2660:
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
L_003E2690:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    set32(c.r[2], c.r[19].w[0] << 2);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    set32(c.r[22], c.r[3].w[0] - 22720u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[22].w[0] + 504u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E26F8u); st32((c.r[29].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_00B8(c, 182u, depth + 1u); else { c.pc = 0x003E2108u; return; } if (c.pc != 0x003E26F8u) [[unlikely]] return; }
L_003E26F8:
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], c.r[2].w[0] - 20104u);
    set32(c.r[18], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 384u)));
    set32(c.r[3], ld32((c.r[22].w[0] + 2416u)));
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 384u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E29BC; } }
    c.r[30].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_003E2730:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[17].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 396u)));  goto L_003E2744; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003E2998; } }
L_003E2744:
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[9], c.r[29].w[0] + 4u);
    st32((c.r[20].w[0] + 396u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2768u); set32(c.r[7], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_00B8(c, 285u, depth + 1u); else { c.pc = 0x003E35E0u; return; } if (c.pc != 0x003E2768u) [[unlikely]] return; }
L_003E2768:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003E2998; } }
    set32(c.r[5], c.r[19].w[0] << 2);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 11;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  goto L_003E27D4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E27A8u); set32(c.r[4], c.r[4].w[0] - 27416u);  if (depth < kMaxDepth) unit_00BB(c, 107u, depth + 1u); else { c.pc = 0x003ED148u; return; } if (c.pc != 0x003E27A8u) [[unlikely]] return; }
L_003E27A8:
    set32(c.r[4], ld32((c.r[30].w[0] + 2192u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[5], c.r[3].w[0] - 27376u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E27C0u); set32(c.r[7], ld32((c.r[17].w[0] + 56u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E27C0u) [[unlikely]] return; }
L_003E27C0:
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E27D0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 104u, depth + 1u); else { c.pc = 0x003ED100u; return; } if (c.pc != 0x003E27D0u) [[unlikely]] return; }
L_003E27D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_003E27D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] >> 12);
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[4].w[0] >> 12);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.budget -= 14;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[5].w[0])));  if (t) { goto L_003E2834; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E2838; } }
    st32((c.r[5].w[0]), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.r[3].w[0]);  if (t) { goto L_003E29EC; } }
L_003E2834:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003E2838:
    set32(c.r[19], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[19].w[0] + 172u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_003E289C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_003E289C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2860u); set32(c.r[4], c.r[4].w[0] - 27280u);  if (depth < kMaxDepth) unit_00BB(c, 107u, depth + 1u); else { c.pc = 0x003ED148u; return; } if (c.pc != 0x003E2860u) [[unlikely]] return; }
L_003E2860:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[5], c.r[2].w[0] - 27240u);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull; c.r[8].d[0] = c.r[8].d[0] | 65535ull;  if (t) { goto L_003E2878; } }
    set32(c.r[8], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 1;
L_003E2878:
    set32(c.r[4], ld32((c.r[19].w[0] + 2192u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2888u); set32(c.r[7], ld32((c.r[17].w[0] + 56u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E2888u) [[unlikely]] return; }
L_003E2888:
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2898u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 104u, depth + 1u); else { c.pc = 0x003ED100u; return; } if (c.pc != 0x003E2898u) [[unlikely]] return; }
L_003E2898:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_003E289C:
    set32(c.r[19], 0u + 1u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[20].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_003E28C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E28C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 25u, depth + 1u); else { c.pc = 0x003F4650u; return; } if (c.pc != 0x003E28C8u) [[unlikely]] return; }
L_003E28C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[22], c.r[3].w[0] - 22720u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[22].w[0] + 2416u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E28E4u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 121u, depth + 1u); else { c.pc = 0x003E94B8u; return; } if (c.pc != 0x003E28E4u) [[unlikely]] return; }
L_003E28E4:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E2904; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2904u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 25u, depth + 1u); else { c.pc = 0x003F4650u; return; } if (c.pc != 0x003E2904u) [[unlikely]] return; }
L_003E2904:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[19].d[0]; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003E29EC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[20].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_003E2938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2938u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 25u, depth + 1u); else { c.pc = 0x003F4650u; return; } if (c.pc != 0x003E2938u) [[unlikely]] return; }
L_003E2938:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);  goto L_003E29F0; }
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E294Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 241u, depth + 1u); else { c.pc = 0x003EEAC0u; return; } if (c.pc != 0x003E294Cu) [[unlikely]] return; }
L_003E294C:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[20].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_003E2978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2978u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 25u, depth + 1u); else { c.pc = 0x003F4650u; return; } if (c.pc != 0x003E2978u) [[unlikely]] return; }
L_003E2978:
    set32(c.r[5], ld32((c.r[22].w[0] + 2416u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E298Cu); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 121u, depth + 1u); else { c.pc = 0x003E94B8u; return; } if (c.pc != 0x003E298Cu) [[unlikely]] return; }
L_003E298C:
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 2u);  if (t) { goto L_003E29E8; } }
L_003E2998:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[30].w[0] + 2416u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[18].d[0] = 0ull;
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2730u | kUnwind; return; } goto L_003E2730; } }
L_003E29BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0])));  goto L_003E29E4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[2].w[0] + 2416u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 7;
L_003E29E4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_003E29E8:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003E29EC:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003E29F0:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003E2A20:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 504u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 2224u)));
    c.budget -= 20;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0]), 0u);  if (t) { goto L_003E2AC4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[22].w[0] - 22720u);  goto L_003E2AC8; }
    set32(c.r[20], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
L_003E2A88:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[18].w[0] << 2);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[3].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2AACu); st32((c.r[3].w[0] + 4u), c.r[20].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x003E2AACu) [[unlikely]] return; }
L_003E2AAC:
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], c.r[22].w[0] - 22720u);  goto L_003E2AC8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 40u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2A88u | kUnwind; return; } goto L_003E2A88; }
L_003E2AC4:
    set32(c.r[18], c.r[22].w[0] - 22720u);
    c.budget -= 1;
L_003E2AC8:
    set32(c.r[4], ld32((c.r[18].w[0] + 504u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2AD8u); mmi::mult(c, 0, c.r[19].w[0], c.r[4].w[0]); c.r[4].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_00BA(c, 158u, depth + 1u); else { c.pc = 0x003E9980u; return; } if (c.pc != 0x003E2AD8u) [[unlikely]] return; }
L_003E2AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2AE0u); set32(c.r[4], ld32((c.r[18].w[0] + 2416u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E2AE0u) [[unlikely]] return; }
L_003E2AE0:
    set32(c.r[17], ld32((c.r[18].w[0] + 2224u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003E2B5C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003E2B60; } }
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.r[20].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 504u)));
    c.budget -= 4;
L_003E2B08:
    set32(c.r[18], 0u + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003E2B48; }
    set32(c.r[19], c.r[20].w[0] - 22720u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_003E2B20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2B30u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 212u, depth + 1u); else { c.pc = 0x003E2690u; return; } if (c.pc != 0x003E2B30u) [[unlikely]] return; }
L_003E2B30:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 504u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2B20u | kUnwind; return; } goto L_003E2B20; } }
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_003E2B48:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003E2B60; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 504u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2B08u | kUnwind; return; } goto L_003E2B08; }
L_003E2B5C:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003E2B60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] - 22720u);  if (t) { goto L_003E2C3C; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 2224u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[6], ld32((c.r[29].w[0])));  if (t) { goto L_003E2C0C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E2C0C; } }
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 2;
L_003E2B88:
    c.r[2].d[0] = c.r[2].d[0] & c.r[23].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003E2BF4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003E2BF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2BA8u); set32(c.r[18], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E2BA8u) [[unlikely]] return; }
L_003E2BA8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003E2BF0; } }
    set32(c.r[20], 0u + 1u);
    c.budget -= 1;
L_003E2BB8:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[20].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_003E2BD8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2BD4u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 330u, depth + 1u); else { c.pc = 0x003E75C0u; return; } if (c.pc != 0x003E2BD4u) [[unlikely]] return; }
L_003E2BD4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003E2BD8:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2BB8u | kUnwind; return; } goto L_003E2BB8; } }
L_003E2BF0:
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_003E2BF4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[6], ld32((c.r[29].w[0])));  if (t) { goto L_003E2C0C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2B88u | kUnwind; return; } goto L_003E2B88; }
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003E2C0C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[16], c.r[22].w[0] - 22720u);  if (t) { goto L_003E2C3C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2C24u); set32(c.r[5], c.r[5].w[0] - 27128u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E2C24u) [[unlikely]] return; }
L_003E2C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2C2Cu); set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));  if (depth < kMaxDepth) unit_00BA(c, 29u, depth + 1u); else { c.pc = 0x003E83C0u; return; } if (c.pc != 0x003E2C2Cu) [[unlikely]] return; }
L_003E2C2C:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2C3Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003E2C3Cu) [[unlikely]] return; }
L_003E2C3C:
    set32(c.r[4], c.r[30].w[0] - 20304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2C48u); set32(c.r[16], c.r[4].w[0] - 2416u);  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003E2C48u) [[unlikely]] return; }
L_003E2C48:
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  goto L_003E2C64; }
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_003E2D38; }
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 1;
L_003E2C64:
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 2224u)));  goto L_003E2C84; }
    set32(c.r[4], ld32((c.r[16].w[0] + 2224u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2C80u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BC(c, 120u, depth + 1u); else { c.pc = 0x003F27E8u; return; } if (c.pc != 0x003E2C80u) [[unlikely]] return; }
L_003E2C80:
    set32(c.r[17], ld32((c.r[16].w[0] + 2224u)));
    c.budget -= 1;
L_003E2C84:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);  goto L_003E2D4C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E2D48; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
L_003E2CA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_003E2D18; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[18].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003E2D1C; }
    set32(c.r[16], c.r[21].w[0] - 20104u);
    set32(c.r[4], ld32((c.r[19].w[0] + 2196u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2CE0u); st32((c.r[16].w[0] + 192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003E2CE0u) [[unlikely]] return; }
L_003E2CE0:
    c.f[0] = ld32((c.r[19].w[0] + 1600u));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[20].w[0] - 27736u);  if (t) { goto L_003E2D18; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[18].d[0];
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 316u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2D18u); st32((c.r[16].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 107u, depth + 1u); else { c.pc = 0x003ED148u; return; } if (c.pc != 0x003E2D18u) [[unlikely]] return; }
L_003E2D18:
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_003E2D1C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);  goto L_003E2D4C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2CA8u | kUnwind; return; } goto L_003E2CA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);  if (t) { goto L_003E2D4C; } }
L_003E2D38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);  goto L_003E2D4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2D48u); set32(c.r[4], ld32((c.r[16].w[0] + 2224u)));  if (depth < kMaxDepth) unit_00B9(c, 124u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x003E2D48u) [[unlikely]] return; }
L_003E2D48:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003E2D4C:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003E2D78:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[2].w[0] - 20208u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 256u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 15;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E2DD0; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003E2DDC; } }
L_003E2DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2DD8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_00B8(c, 87u, depth + 1u); else { c.pc = 0x003E0EB8u; return; } if (c.pc != 0x003E2DD8u) [[unlikely]] return; }
L_003E2DD8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003E2DDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2DECu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x003E2DECu) [[unlikely]] return; }
L_003E2DEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[17], c.r[3].w[0] - 22720u);
    set32(c.r[4], ld32((c.r[17].w[0] + 2280u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 2236u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003E2E08; } }
    st32((c.r[17].w[0] + 2240u), c.r[16].w[0]);
    c.budget -= 1;
L_003E2E08:
    set32(c.r[2], ld32((c.r[17].w[0] + 2280u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 504u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2E20u); st32((c.r[17].w[0] + 2280u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 116u, depth + 1u); else { c.pc = 0x003ED338u; return; } if (c.pc != 0x003E2E20u) [[unlikely]] return; }
L_003E2E20:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003E2E48; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003E2E48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 12u));  if (t) { goto L_003E2E4C; } }
L_003E2E48:
    c.f[0] = ld32((c.r[2].w[0] + 1600u));
    c.budget -= 1;
L_003E2E4C:
    st32((c.r[16].w[0] + 4u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = c.r[3].d[0] | 9216ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st32((c.r[16].w[0] + 60u), c.r[4].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E2E80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[2].w[0] - 20208u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 15;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E2ED8; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003E2EE4; } }
L_003E2ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2EE0u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_00B8(c, 87u, depth + 1u); else { c.pc = 0x003E0EB8u; return; } if (c.pc != 0x003E2EE0u) [[unlikely]] return; }
L_003E2EE0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003E2EE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2EF8u); c.r[16].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x003E2EF8u) [[unlikely]] return; }
L_003E2EF8:
    c.r[16].d[0] = c.r[16].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], c.r[3].w[0] - 20104u);
    set32(c.r[18], c.r[4].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 792u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 2284u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[16].d[0]; st32((c.r[3].w[0] + 792u), c.r[2].w[0]);  if (t) { goto L_003E2F38; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 2192u)));
    set32(c.r[5], c.r[5].w[0] - 27048u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2F38u); c.r[6].d[0] = c.r[6].d[0] | 65535ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E2F38u) [[unlikely]] return; }
L_003E2F38:
    set32(c.r[4], ld32((c.r[18].w[0] + 2284u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] & c.r[16].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 2284u), c.r[4].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E2F78:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] - 22720u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 1564u)));
    c.budget -= 15;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[3].w[0] + 2228u)));  goto L_003E31AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 2260u)));  if (t) { goto L_003E3000; } }
    c.budget -= 1;
L_003E2FC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E2FF4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 8u);  if (t) { goto L_003E2FF4; } }
    c.budget -= 1;
L_003E2FD8:
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[4].w[0] - 4u), 0u);  goto L_003E2FE8; }
L_003E2FE8:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2FD8u | kUnwind; return; } goto L_003E2FD8; } }
L_003E2FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2FFCu); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_00BB(c, 198u, depth + 1u); else { c.pc = 0x003EE300u; return; } if (c.pc != 0x003E2FFCu) [[unlikely]] return; }
L_003E2FFC:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003E3000:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] - 22720u);  if (t) { goto L_003E3018; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2FC0u | kUnwind; return; } goto L_003E2FC0; }
    set32(c.r[2], c.r[19].w[0] - 22720u);
    c.budget -= 1;
L_003E3018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 2224u)));  if (t) { goto L_003E3058; } }
L_003E3020:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003E3058; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 8u);  if (t) { goto L_003E3054; } }
    c.budget -= 1;
L_003E3038:
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3044u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E3044u) [[unlikely]] return; }
L_003E3044:
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3038u | kUnwind; return; } goto L_003E3038; } }
L_003E3054:
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_003E3058:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] - 22720u);  if (t) { goto L_003E3070; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3020u | kUnwind; return; } goto L_003E3020; }
    set32(c.r[2], c.r[19].w[0] - 22720u);
    c.budget -= 1;
L_003E3070:
    set32(c.r[17], ld32((c.r[2].w[0] + 2228u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);  goto L_003E31C8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);  goto L_003E31C8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_003E3090:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003E3134; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 8u);  if (t) { goto L_003E3130; } }
    c.r[22].sd[0] = static_cast<std::int32_t>(0x18000000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
L_003E30B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[22].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[18].w[0] + 4u);  if (t) { goto L_003E3124; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003E30F4; } }
    set32(c.r[4], c.r[2].w[0] + 4u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 2;
L_003E30D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003E3110; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E30D8u | kUnwind; return; } goto L_003E30D8; }
L_003E30F4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] | c.r[21].d[0];  if (t) { goto L_003E3114; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3108u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 204u, depth + 1u); else { c.pc = 0x003EE420u; return; } if (c.pc != 0x003E3108u) [[unlikely]] return; }
L_003E3108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0])));  if (t) { goto L_003E3128; } }
L_003E3110:
    c.r[2].d[0] = c.r[5].d[0] | c.r[21].d[0];
    c.budget -= 1;
L_003E3114:
    set32(c.r[4], c.r[20].w[0] - 20296u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3124u); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E3124u) [[unlikely]] return; }
L_003E3124:
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003E3128:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[18].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E30B0u | kUnwind; return; } goto L_003E30B0; } }
L_003E3130:
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_003E3134:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);  goto L_003E31C8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3090u | kUnwind; return; } goto L_003E3090; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);  if (t) { goto L_003E31C8; } }
    c.budget -= 1;
L_003E3158:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003E31AC; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 8u);  if (t) { goto L_003E31A8; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x18000000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
L_003E3178:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[21].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[18].w[0])));  goto L_003E31A0; }
    c.r[2].d[0] = c.r[3].d[0] | c.r[20].d[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E319Cu); set32(c.r[4], c.r[19].w[0] - 20296u);  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003E319Cu) [[unlikely]] return; }
L_003E319C:
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003E31A0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3178u | kUnwind; return; } goto L_003E3178; } }
L_003E31A8:
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_003E31AC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);  goto L_003E31C8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3158u | kUnwind; return; } goto L_003E3158; }
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003E31C8:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003E31F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[6], c.r[2].w[0] - 22720u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[6].w[0] + 2216u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 2224u)));
    c.budget -= 7;
    if (c.r[5].d[0] == c.r[2].d[0]) { st32((c.r[6].w[0] + 2224u), c.r[4].w[0]);  goto L_003E320C; }
L_003E320C:
    set32(c.r[2], ld32((c.r[6].w[0] + 2220u)));
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { st32((c.r[6].w[0] + 2220u), c.r[4].w[0]);  goto L_003E3218; }
L_003E3218:
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { st32((c.r[6].w[0] + 2212u), c.r[4].w[0]);  goto L_003E3234; }
    st32((c.r[2].w[0] + 28u), c.r[4].w[0]);
    c.budget -= 1;
L_003E3234:
    st32((c.r[5].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 2264u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 2264u), c.r[2].w[0]);  c.pc = t; return; }
L_003E3250:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[6], c.r[2].w[0] - 22720u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[6].w[0] + 2256u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 2260u)));
    c.budget -= 7;
    if (c.r[5].d[0] == c.r[2].d[0]) { st32((c.r[6].w[0] + 2260u), c.r[4].w[0]);  goto L_003E326C; }
L_003E326C:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { st32((c.r[6].w[0] + 2252u), c.r[4].w[0]);  goto L_003E3298; }
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_003E3298:
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], c.r[7].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 2268u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 2268u), c.r[2].w[0]);  c.pc = t; return; }
L_003E32B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003E32F8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E32FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E33A0; } }
L_003E32F8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003E32FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[7], c.r[16].w[0] - 20104u);
    set32(c.r[19], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[7].w[0] + 192u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 2196u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3324u); st32((c.r[7].w[0] + 192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003E3324u) [[unlikely]] return; }
L_003E3324:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.f[0] = ld32((c.r[29].w[0]));  if (t) { goto L_003E3330; } }
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 1;
L_003E3330:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.f[1] = ld32((c.r[29].w[0]));  if (t) { goto L_003E3358; } }
    c.f[0] = ld32((c.r[19].w[0] + 1600u));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[18].w[0] + 60u)));  goto L_003E3374; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003E33A0; } }
L_003E3358:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 1u);  goto L_003E33A0; }
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 1;
L_003E3374:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[16].w[0] - 20104u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] - 27736u);
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 316u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E339Cu); st32((c.r[5].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 107u, depth + 1u); else { c.pc = 0x003ED148u; return; } if (c.pc != 0x003E339Cu) [[unlikely]] return; }
L_003E339C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E33A0:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E33C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[2].w[0] + 2224u)));
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E3434; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] - 22720u);  if (t) { goto L_003E3438; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
L_003E3408:
    c.r[2].d[0] = c.r[2].d[0] & c.r[17].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_003E3420; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E341Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 25u, depth + 1u); else { c.pc = 0x003F4650u; return; } if (c.pc != 0x003E341Cu) [[unlikely]] return; }
L_003E341C:
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_003E3420:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] - 22720u);  if (t) { goto L_003E3438; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3408u | kUnwind; return; } goto L_003E3408; }
L_003E3434:
    set32(c.r[3], c.r[19].w[0] - 22720u);
    c.budget -= 1;
L_003E3438:
    c.f[1] = ld32((c.r[18].w[0] - 26924u));
    c.f[0] = ld32((c.r[3].w[0] + 2324u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E346C; } }
    c.f[1] = ld32((c.r[3].w[0] + 2340u));
    c.f[0] = ld32((c.r[2].w[0] - 19540u));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[3].w[0] + 2340u), c.f[0]);  goto L_003E346C; }
L_003E346C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E3488:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003E35AC; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { goto L_003E35AC; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[23], c.r[20].w[0] - 22720u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.budget -= 4;
L_003E34E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 18432ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0])));  goto L_003E35A4; }
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3510u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00B8(c, 176u, depth + 1u); else { c.pc = 0x003E1F50u; return; } if (c.pc != 0x003E3510u) [[unlikely]] return; }
L_003E3510:
    st32((c.r[2].w[0] + 4u), c.r[21].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.r[5].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3538u); if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_00B8(c, 191u, depth + 1u); else { c.pc = 0x003E2260u; return; } if (c.pc != 0x003E3538u) [[unlikely]] return; }
L_003E3538:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[30].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] - 22720u);  if (t) { goto L_003E3580; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 60u)));  goto L_003E3574; }
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[23].w[0] + 156u)));  goto L_003E3584; }
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 1;
L_003E3574:
    st32((c.r[4].w[0] + 16u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[22].d[0];
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
L_003E3580:
    set32(c.r[2], ld32((c.r[23].w[0] + 156u)));
    c.budget -= 1;
L_003E3584:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0])));  goto L_003E35A4; }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 6;
L_003E35A4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E34E8u | kUnwind; return; } goto L_003E34E8; } }
L_003E35AC:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003E35E0:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[11], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[10], c.r[7].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 8;
L_003E3600:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[11].d[0]) { set32(c.r[5], c.r[5].w[0] + 4u);  goto L_003E3638; }
    set32(c.r[2], ld32((c.r[10].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[10], c.r[10].w[0] + 4u);  if (t) { goto L_003E3634; } }
L_003E3618:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_003E3628; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003E3628:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[10], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3618u | kUnwind; return; } goto L_003E3618; } }
L_003E3634:
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 1;
L_003E3638:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3600u | kUnwind; return; } goto L_003E3600; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[10].w[0] + 4u);  goto L_003E364C; }
L_003E364C:
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.r[4].d[0] = c.r[6].d[0] & 1ull;
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.r[5].d[0] = c.r[3].d[0] & 1ull;
    st32((c.r[8].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] ^ c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[9].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_003E3678:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003E3694; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 3u);  if (t) { goto L_003E3718; } }
L_003E3694:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[6], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[6].w[0] + 2196u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[7].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003E36B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 2u);  if (t) { goto L_003E3718; } }
L_003E36B0:
    set32(c.r[4], ld32((c.r[6].w[0] + 516u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[7].w[0] - 22720u);  if (t) { goto L_003E36F8; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 512u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 504u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);  if (t) { goto L_003E36F8; } }
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E36F0u); c.r[4].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 466u, depth + 1u); else { c.pc = 0x00487D20u; return; } if (c.pc != 0x003E36F0u) [[unlikely]] return; }
L_003E36F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003E3718; } }
L_003E36F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3700u); set32(c.r[4], ld32((c.r[16].w[0] + 2420u)));  if (depth < kMaxDepth) unit_00BB(c, 241u, depth + 1u); else { c.pc = 0x003EEAC0u; return; } if (c.pc != 0x003E3700u) [[unlikely]] return; }
L_003E3700:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);  goto L_003E371C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 512u)));
    c.r[4].d[0] = c.r[4].d[0] + c.r[2].d[0];
    c.budget -= 2;
L_003E3718:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003E371C:
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E3730:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[6].w[0] + 2224u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[7], ld32((c.r[4].w[0] + 24u)));  if (t) { goto L_003E3750; } }
    st32((c.r[6].w[0] + 2224u), c.r[5].w[0]);
    c.budget -= 1;
L_003E3750:
    set32(c.r[2], ld32((c.r[6].w[0] + 2220u)));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { st32((c.r[6].w[0] + 2220u), c.r[5].w[0]);  goto L_003E375C; }
L_003E375C:
    set32(c.r[2], ld32((c.r[6].w[0] + 2228u)));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { st32((c.r[6].w[0] + 2228u), c.r[5].w[0]);  goto L_003E3768; }
L_003E3768:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { st32((c.r[6].w[0] + 2212u), c.r[5].w[0]);  goto L_003E377C; }
    st32((c.r[7].w[0] + 28u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 24u), c.r[7].w[0]);  if (t) { goto L_003E3780; } }
L_003E377C:
    st32((c.r[5].w[0] + 24u), 0u);
    c.budget -= 1;
L_003E3780:
    set32(c.r[3], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 2264u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 2264u), c.r[2].w[0]);  c.pc = t; return; }
L_003E3798:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[7].w[0] + 2260u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_003E37B8; } }
    st32((c.r[7].w[0] + 2260u), c.r[6].w[0]);
    c.budget -= 1;
L_003E37B8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0])));  goto L_003E37CC; }
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 4u), c.r[5].w[0]);  if (t) { goto L_003E37D4; } }
L_003E37CC:
    st32((c.r[7].w[0] + 2252u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 2;
L_003E37D4:
    set32(c.r[3], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 2268u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 2268u), c.r[2].w[0]);  c.pc = t; return; }
L_003E37E8:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[29].w[0] + 200u), c.f[21]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    set32(c.r[16], c.r[16].w[0] - 22720u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[30].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), 0u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3838u); c.f[21] = ld32((c.r[2].w[0] - 26400u));  if (depth < kMaxDepth) unit_00BE(c, 128u, depth + 1u); else { c.pc = 0x003F97F0u; return; } if (c.pc != 0x003E3838u) [[unlikely]] return; }
L_003E3838:
    st32((c.r[29].w[0] + 16u), 0u);
    c.f[1] = ld32((c.r[16].w[0] + 1600u));
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3850u); c.f[20] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00B9(c, 380u, depth + 1u); else { c.pc = 0x003E7F50u; return; } if (c.pc != 0x003E3850u) [[unlikely]] return; }
L_003E3850:
    set32(c.r[3], ld32((c.r[16].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_003E38A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E386Cu); set32(c.r[18], c.r[3].w[0] - 26912u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E386Cu) [[unlikely]] return; }
L_003E386C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3878u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E3878u) [[unlikely]] return; }
L_003E3878:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E3890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[2].w[0] - 26816u);  if (t) { goto L_003E3898; } }
L_003E3890:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], c.r[2].w[0] - 26808u);
    c.budget -= 2;
L_003E3898:
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E38A8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E38A8u) [[unlikely]] return; }
L_003E38A8:
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[23], c.r[29].w[0] + 12u);  if (t) { goto L_003E3A4C; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E38C0u); set32(c.r[16], ld32((c.r[5].w[0] + 4u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E38C0u) [[unlikely]] return; }
L_003E38C0:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003E3A4C; } }
    c.budget -= 1;
L_003E38D0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003E38E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[21], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    set32(c.r[16], ld32((c.r[2].w[0] + 2212u)));
    c.budget -= 4;
L_003E38E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E38F8u); set32(c.r[20], c.r[3].w[0] - 22720u);  if (depth < kMaxDepth) unit_00BA(c, 170u, depth + 1u); else { c.pc = 0x003E9B88u; return; } if (c.pc != 0x003E38F8u) [[unlikely]] return; }
L_003E38F8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003E3A30; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3914u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003E3914u) [[unlikely]] return; }
L_003E3914:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], 0u + 1u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E393Cu); set32(c.r[9], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00BC(c, 167u, depth + 1u); else { c.pc = 0x003F33B0u; return; } if (c.pc != 0x003E393Cu) [[unlikely]] return; }
L_003E393C:
    c.f[1] = ld32((c.r[29].w[0]));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003E3954; } }
    c.f[21] = c.f[1];
    c.budget -= 1;
L_003E3954:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003E3A08; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_003E39B0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.f[12] = ld32((c.r[29].w[0]));  if (t) { goto L_003E39B4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3994u); set32(c.r[7], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00BD(c, 136u, depth + 1u); else { c.pc = 0x003F6750u; return; } if (c.pc != 0x003E3994u) [[unlikely]] return; }
L_003E3994:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.f[0] = ld32((c.r[29].w[0]));  if (t) { goto L_003E3A30; } }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_003E3A34; }
L_003E39B0:
    c.f[12] = ld32((c.r[29].w[0]));
    c.budget -= 1;
L_003E39B4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E39C0u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E39C0u) [[unlikely]] return; }
L_003E39C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E39CCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E39CCu) [[unlikely]] return; }
L_003E39CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 22720u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[5], c.r[2].w[0] - 26800u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E39F4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E39F4u) [[unlikely]] return; }
L_003E39F4:
    c.budget -= 2;
    if (c.r[30].d[0] == c.r[17].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_003E3A34; }
    st32((c.r[29].w[0] + 20u), c.r[30].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E3A30; } }
L_003E3A08:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_003E3A34; }
    c.f[0] = ld32((c.r[20].w[0] + 112u));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], ld32((c.r[29].w[0] + 24u)));  if (t) { goto L_003E3A30; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 2;
L_003E3A30:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_003E3A34:
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[3], c.r[19].w[0] << 2);
    c.r[4].d[0] = c.r[19].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E38D0u | kUnwind; return; } goto L_003E38D0; } }
L_003E3A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3A54u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003E3A54u) [[unlikely]] return; }
L_003E3A54:
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E3A8C; } }
    set32(c.r[3], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  goto L_003E3A90; }
    set32(c.r[2], ld32((c.r[3].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 24u)));  if (t) { goto L_003E3A8C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3A8Cu); set32(c.r[5], c.r[5].w[0] - 26704u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E3A8Cu) [[unlikely]] return; }
L_003E3A8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003E3A90:
    set32(c.r[18], c.r[3].w[0] - 22720u);
    c.f[1] = ld32((c.r[18].w[0] + 1656u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E3AEC; } }
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3AB4u); set32(c.r[16], c.r[16].w[0] - 26536u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E3AB4u) [[unlikely]] return; }
L_003E3AB4:
    c.f[12] = ld32((c.r[18].w[0] + 1656u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3AC0u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E3AC0u) [[unlikely]] return; }
L_003E3AC0:
    set32(c.r[4], ld32((c.r[18].w[0] + 2192u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3AD4u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E3AD4u) [[unlikely]] return; }
L_003E3AD4:
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3AE4u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00BB(c, 104u, depth + 1u); else { c.pc = 0x003ED100u; return; } if (c.pc != 0x003E3AE4u) [[unlikely]] return; }
L_003E3AE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { goto L_003E3B1C; } }
L_003E3AEC:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003E3B18; } }
    c.f[0] = ld32((c.r[2].w[0] - 26396u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], ld32((c.r[29].w[0] + 20u)));  if (t) { goto L_003E3B18; } }
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3B18u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00BB(c, 104u, depth + 1u); else { c.pc = 0x003ED100u; return; } if (c.pc != 0x003E3B18u) [[unlikely]] return; }
L_003E3B18:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003E3B1C:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 200u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003E3B50:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    set32(c.r[4], c.r[2].w[0] - 22720u);
    st32((c.r[29].w[0] + 200u), c.f[21]);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), c.f[20]);
    set32(c.r[2], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[20] = 0u;
    set32(c.r[3], ld32((c.r[4].w[0] + 1564u)));
    c.f[21] = c.f[20];
    st32((c.r[29].w[0] + 8u), 0u);
    c.budget -= 23;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_003E3D54; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E3BF0; } }
    c.r[2].d[0] = ld64((c.r[4].w[0] + 96u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E3BF0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 436u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E3BF0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 340u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 23u);  if (t) { goto L_003E3BF0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E3BF0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E3D54; } }
L_003E3BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3BF8u);  if (depth < kMaxDepth) unit_00BA(c, 20u, depth + 1u); else { c.pc = 0x003E8268u; return; } if (c.pc != 0x003E3BF8u) [[unlikely]] return; }
L_003E3BF8:
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[23].w[0] - 22720u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[19], ld32((c.r[3].w[0] + 2252u)));
    set32(c.r[3], c.r[29].w[0] + 4u);
    st32((c.r[29].w[0] + 24u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_003E3D04; } }
L_003E3C18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], ld32((c.r[19].w[0])));  goto L_003E3D04; }
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[20], c.r[2].w[0] + 8u);  if (t) { goto L_003E3D00; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[22], c.r[2].w[0] - 20104u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[21].d[0] = c.r[21].d[0] | 65535ull;
    c.budget -= 5;
L_003E3C40:
    set32(c.r[2], ld32((c.r[22].w[0] + 216u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[22].w[0] + 216u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3C5Cu); set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003E3C5Cu) [[unlikely]] return; }
L_003E3C5C:
    c.f[2] = ld32((c.r[29].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[21]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[21] = c.f[2];  goto L_003E3C70; }
L_003E3C70:
    c.f[0] = c.f[2] ^ fp::kSign;
    set32(c.r[3], c.r[23].w[0] - 22720u);
    c.f[1] = ld32((c.r[3].w[0] + 448u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E3CB4; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E3CB4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 2240u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_003E3CB4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 2248u)));
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[18], ld32((c.r[20].w[0])));  goto L_003E3CF8; }
L_003E3CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3CBCu); set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003E3CBCu) [[unlikely]] return; }
L_003E3CBC:
    set32(c.r[16], ld32((c.r[19].w[0] + 20u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3CD0u); c.r[16].d[0] = c.r[16].d[0] & c.r[21].d[0];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E3CD0u) [[unlikely]] return; }
L_003E3CD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[9], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] - 22720u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3CF4u); set32(c.r[5], c.r[30].w[0] - 26392u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E3CF4u) [[unlikely]] return; }
L_003E3CF4:
    set32(c.r[18], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_003E3CF8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3C40u | kUnwind; return; } goto L_003E3C40; } }
L_003E3D00:
    set32(c.r[19], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_003E3D04:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[3], c.r[23].w[0] - 22720u);  if (t) { goto L_003E3D1C; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3C18u | kUnwind; return; } goto L_003E3C18; }
    set32(c.r[3], c.r[23].w[0] - 22720u);
    c.budget -= 1;
L_003E3D1C:
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003E3D44; } }
    c.f[1] = ld32((c.r[3].w[0] + 2340u));
    set32(c.r[2], c.r[4].w[0] - 20104u);
    c.f[0] = ld32((c.r[2].w[0] + 520u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[2].w[0] + 520u), c.f[1]);  goto L_003E3D44; }
L_003E3D44:
    set32(c.r[2], c.r[23].w[0] - 22720u);
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3D54u); st32((c.r[2].w[0] + 2340u), c.f[21]);  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003E3D54u) [[unlikely]] return; }
L_003E3D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3D5Cu);  if (depth < kMaxDepth) unit_00B9(c, 380u, depth + 1u); else { c.pc = 0x003E7F50u; return; } if (c.pc != 0x003E3D5Cu) [[unlikely]] return; }
L_003E3D5C:
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], c.r[23].w[0] - 22720u);
    c.budget -= 3;
L_003E3D68:
    c.f[0] = ld32((c.r[2].w[0] + 2332u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[20];  goto L_003E3D7C; }
L_003E3D7C:
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.f[21] = fp::add(c.f[0], c.f[0]);  if (t) { goto L_003E3EF4; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3D94u); set32(c.r[16], ld32((c.r[5].w[0] + 4u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003E3D94u) [[unlikely]] return; }
L_003E3D94:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].sd[0] <= 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003E3EF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[22], c.r[2].w[0] - 20104u);
    c.budget -= 4;
L_003E3DB0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003E3ED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3DC0u); set32(c.r[19], c.r[23].w[0] - 22720u);  if (depth < kMaxDepth) unit_00BA(c, 170u, depth + 1u); else { c.pc = 0x003E9B88u; return; } if (c.pc != 0x003E3DC0u) [[unlikely]] return; }
L_003E3DC0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003E3ED8; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 772u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3DE8u); st32((c.r[22].w[0] + 772u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003E3DE8u) [[unlikely]] return; }
L_003E3DE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3E10u); set32(c.r[9], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00BC(c, 167u, depth + 1u); else { c.pc = 0x003F33B0u; return; } if (c.pc != 0x003E3E10u) [[unlikely]] return; }
L_003E3E10:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.f[0] = ld32((c.r[29].w[0]));  if (t) { goto L_003E3E7C; } }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[19], c.r[23].w[0] - 22720u);  goto L_003E3E80; }
    set32(c.r[2], ld32((c.r[19].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_003E3E78; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.f[20] = ld32((c.r[29].w[0]));  goto L_003E3E7C; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3E5Cu); set32(c.r[7], c.r[29].w[0] + 12u);  if (depth < kMaxDepth) unit_00BD(c, 136u, depth + 1u); else { c.pc = 0x003F6750u; return; } if (c.pc != 0x003E3E5Cu) [[unlikely]] return; }
L_003E3E5C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.f[0] = ld32((c.r[29].w[0]));  if (t) { goto L_003E3E7C; } }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[19], c.r[23].w[0] - 22720u);  if (t) { goto L_003E3E80; } }
L_003E3E78:
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 1;
L_003E3E7C:
    set32(c.r[19], c.r[23].w[0] - 22720u);
    c.budget -= 1;
L_003E3E80:
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 448u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E3EAC; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_003E3EDC; }
    set32(c.r[2], ld32((c.r[19].w[0] + 2240u)));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_003E3EDC; }
L_003E3EAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3EB4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003E3EB4u) [[unlikely]] return; }
L_003E3EB4:
    c.f[12] = ld32((c.r[29].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3EC0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003E3EC0u) [[unlikely]] return; }
L_003E3EC0:
    set32(c.r[4], ld32((c.r[19].w[0] + 2192u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[17].w[0] + 56u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3ED8u); set32(c.r[5], c.r[30].w[0] - 26344u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003E3ED8u) [[unlikely]] return; }
L_003E3ED8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_003E3EDC:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    c.r[4].d[0] = c.r[20].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3DB0u | kUnwind; return; } goto L_003E3DB0; } }
L_003E3EF4:
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[23].w[0] - 22720u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3D68u | kUnwind; return; } goto L_003E3D68; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[16], c.r[4].w[0] - 20104u);
    set32(c.r[17], c.r[23].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3F28u); st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003E3F28u) [[unlikely]] return; }
L_003E3F28:
    c.f[2] = ld32((c.r[17].w[0] + 2332u));
    c.f[0] = ld32((c.r[16].w[0] + 432u));
    c.f[1] = fp::sub(c.f[20], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 428u), c.f[1]);  if (t) { goto L_003E3F48; } }
    st32((c.r[16].w[0] + 432u), c.f[2]);
    c.budget -= 1;
L_003E3F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3F50u); st32((c.r[17].w[0] + 2332u), c.f[20]);  if (depth < kMaxDepth) unit_00B9(c, 346u, depth + 1u); else { c.pc = 0x003E7A60u; return; } if (c.pc != 0x003E3F50u) [[unlikely]] return; }
L_003E3F50:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 2328u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 200u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003E3F90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.f[0] = ld32((c.r[2].w[0] - 25444u));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st32((c.r[29].w[0] + 208u), c.f[22]);
    c.r[30].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 192u), c.f[20]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 200u), c.f[21]);
    st32((c.r[29].w[0] + 16u), 0u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3FE0u); st32((c.r[29].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_00BE(c, 128u, depth + 1u); else { c.pc = 0x003F97F0u; return; } if (c.pc != 0x003E3FE0u) [[unlikely]] return; }
L_003E3FE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.f[1] = ld32((c.r[2].w[0] + 1600u));
    set32(c.r[3], ld32((c.r[2].w[0] + 2276u)));
    c.f[20] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.f[22] = c.f[20];  if (t) { [[clang::musttail]] return unit_00B9(c, 2u, depth); } }
    c.f[1] = c.r[3].w[0];
    c.budget -= 1;
    [[clang::musttail]] return unit_00B9(c, 1u, depth);
}

}
