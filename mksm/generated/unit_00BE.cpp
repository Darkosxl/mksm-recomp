#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BE[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0,
    0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0,
    48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0,
    0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0,
    0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0,
    0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0,
    0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0,
    0, 193, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 198, 0,
    0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0,
    0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246,
    0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0,
    0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0,
    0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0,
    0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0,
    0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0,
    331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 337, 0, 338, 0, 0, 339,
    0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 350, 0,
    351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0,
    0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 359, 0, 360, 0, 0, 0, 361, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0,
    0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0,
    376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0,
};

void unit_00BE(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003F8000;
    case 2u: goto L_003F8064;
    case 3u: goto L_003F8070;
    case 4u: goto L_003F8090;
    case 5u: goto L_003F809C;
    case 6u: goto L_003F80AC;
    case 7u: goto L_003F80C4;
    case 8u: goto L_003F80F0;
    case 9u: goto L_003F8108;
    case 10u: goto L_003F8130;
    case 11u: goto L_003F8170;
    case 12u: goto L_003F81C8;
    case 13u: goto L_003F8234;
    case 14u: goto L_003F8254;
    case 15u: goto L_003F8264;
    case 16u: goto L_003F8274;
    case 17u: goto L_003F829C;
    case 18u: goto L_003F82C0;
    case 19u: goto L_003F842C;
    case 20u: goto L_003F8444;
    case 21u: goto L_003F8450;
    case 22u: goto L_003F845C;
    case 23u: goto L_003F8468;
    case 24u: goto L_003F8484;
    case 25u: goto L_003F8494;
    case 26u: goto L_003F84B8;
    case 27u: goto L_003F8518;
    case 28u: goto L_003F8598;
    case 29u: goto L_003F8600;
    case 30u: goto L_003F8680;
    case 31u: goto L_003F868C;
    case 32u: goto L_003F86AC;
    case 33u: goto L_003F86BC;
    case 34u: goto L_003F87B8;
    case 35u: goto L_003F87C4;
    case 36u: goto L_003F87D0;
    case 37u: goto L_003F87DC;
    case 38u: goto L_003F8808;
    case 39u: goto L_003F8818;
    case 40u: goto L_003F8840;
    case 41u: goto L_003F8898;
    case 42u: goto L_003F8930;
    case 43u: goto L_003F8990;
    case 44u: goto L_003F89F8;
    case 45u: goto L_003F8A40;
    case 46u: goto L_003F8B58;
    case 47u: goto L_003F8B6C;
    case 48u: goto L_003F8B80;
    case 49u: goto L_003F8B8C;
    case 50u: goto L_003F8B9C;
    case 51u: goto L_003F8BB8;
    case 52u: goto L_003F8BDC;
    case 53u: goto L_003F8BF8;
    case 54u: goto L_003F8C04;
    case 55u: goto L_003F8C14;
    case 56u: goto L_003F8C34;
    case 57u: goto L_003F8C48;
    case 58u: goto L_003F8C54;
    case 59u: goto L_003F8C64;
    case 60u: goto L_003F8C84;
    case 61u: goto L_003F8C8C;
    case 62u: goto L_003F8C9C;
    case 63u: goto L_003F8CAC;
    case 64u: goto L_003F8CB4;
    case 65u: goto L_003F8CC4;
    case 66u: goto L_003F8CD4;
    case 67u: goto L_003F8D10;
    case 68u: goto L_003F8D3C;
    case 69u: goto L_003F8D68;
    case 70u: goto L_003F8D88;
    case 71u: goto L_003F8DD8;
    case 72u: goto L_003F8E44;
    case 73u: goto L_003F8E60;
    case 74u: goto L_003F8EAC;
    case 75u: goto L_003F8EB8;
    case 76u: goto L_003F8EE0;
    case 77u: goto L_003F8EF0;
    case 78u: goto L_003F8F00;
    case 79u: goto L_003F8F1C;
    case 80u: goto L_003F8F48;
    case 81u: goto L_003F8F78;
    case 82u: goto L_003F8FC8;
    case 83u: goto L_003F8FE8;
    case 84u: goto L_003F9030;
    case 85u: goto L_003F9128;
    case 86u: goto L_003F9178;
    case 87u: goto L_003F9190;
    case 88u: goto L_003F9198;
    case 89u: goto L_003F91A8;
    case 90u: goto L_003F91D8;
    case 91u: goto L_003F91E0;
    case 92u: goto L_003F91F0;
    case 93u: goto L_003F9208;
    case 94u: goto L_003F9228;
    case 95u: goto L_003F9250;
    case 96u: goto L_003F9278;
    case 97u: goto L_003F92C0;
    case 98u: goto L_003F9308;
    case 99u: goto L_003F9340;
    case 100u: goto L_003F9378;
    case 101u: goto L_003F93C4;
    case 102u: goto L_003F93E8;
    case 103u: goto L_003F93F8;
    case 104u: goto L_003F9408;
    case 105u: goto L_003F9428;
    case 106u: goto L_003F94A0;
    case 107u: goto L_003F9508;
    case 108u: goto L_003F9528;
    case 109u: goto L_003F9580;
    case 110u: goto L_003F9590;
    case 111u: goto L_003F95A0;
    case 112u: goto L_003F95B8;
    case 113u: goto L_003F95C8;
    case 114u: goto L_003F95F0;
    case 115u: goto L_003F9640;
    case 116u: goto L_003F96A4;
    case 117u: goto L_003F96B8;
    case 118u: goto L_003F96C8;
    case 119u: goto L_003F9700;
    case 120u: goto L_003F9718;
    case 121u: goto L_003F9724;
    case 122u: goto L_003F9738;
    case 123u: goto L_003F9744;
    case 124u: goto L_003F9768;
    case 125u: goto L_003F9774;
    case 126u: goto L_003F9790;
    case 127u: goto L_003F97B0;
    case 128u: goto L_003F97F0;
    case 129u: goto L_003F9818;
    case 130u: goto L_003F9844;
    case 131u: goto L_003F9870;
    case 132u: goto L_003F98C0;
    case 133u: goto L_003F98E0;
    case 134u: goto L_003F9920;
    case 135u: goto L_003F9970;
    case 136u: goto L_003F9980;
    case 137u: goto L_003F99A0;
    case 138u: goto L_003F99AC;
    case 139u: goto L_003F99BC;
    case 140u: goto L_003F99D0;
    case 141u: goto L_003F9A10;
    case 142u: goto L_003F9A48;
    case 143u: goto L_003F9A60;
    case 144u: goto L_003F9A68;
    case 145u: goto L_003F9A78;
    case 146u: goto L_003F9A90;
    case 147u: goto L_003F9AB0;
    case 148u: goto L_003F9AB8;
    case 149u: goto L_003F9AC8;
    case 150u: goto L_003F9AE0;
    case 151u: goto L_003F9B00;
    case 152u: goto L_003F9B60;
    case 153u: goto L_003F9B98;
    case 154u: goto L_003F9BA8;
    case 155u: goto L_003F9BC0;
    case 156u: goto L_003F9C18;
    case 157u: goto L_003F9C80;
    case 158u: goto L_003F9CE0;
    case 159u: goto L_003F9CF8;
    case 160u: goto L_003F9D10;
    case 161u: goto L_003F9D18;
    case 162u: goto L_003F9DA0;
    case 163u: goto L_003F9DC0;
    case 164u: goto L_003F9E00;
    case 165u: goto L_003F9E88;
    case 166u: goto L_003F9EA8;
    case 167u: goto L_003F9EC8;
    case 168u: goto L_003F9F28;
    case 169u: goto L_003F9F38;
    case 170u: goto L_003F9F9C;
    case 171u: goto L_003F9FC0;
    case 172u: goto L_003F9FD0;
    case 173u: goto L_003F9FF0;
    case 174u: goto L_003FA010;
    case 175u: goto L_003FA028;
    case 176u: goto L_003FA038;
    case 177u: goto L_003FA080;
    case 178u: goto L_003FA0B4;
    case 179u: goto L_003FA0D4;
    case 180u: goto L_003FA0DC;
    case 181u: goto L_003FA0F0;
    case 182u: goto L_003FA110;
    case 183u: goto L_003FA11C;
    case 184u: goto L_003FA130;
    case 185u: goto L_003FA16C;
    case 186u: goto L_003FA184;
    case 187u: goto L_003FA19C;
    case 188u: goto L_003FA1B0;
    case 189u: goto L_003FA1CC;
    case 190u: goto L_003FA1DC;
    case 191u: goto L_003FA230;
    case 192u: goto L_003FA26C;
    case 193u: goto L_003FA284;
    case 194u: goto L_003FA294;
    case 195u: goto L_003FA29C;
    case 196u: goto L_003FA2D8;
    case 197u: goto L_003FA2E0;
    case 198u: goto L_003FA2F8;
    case 199u: goto L_003FA308;
    case 200u: goto L_003FA318;
    case 201u: goto L_003FA340;
    case 202u: goto L_003FA3C0;
    case 203u: goto L_003FA3F0;
    case 204u: goto L_003FA40C;
    case 205u: goto L_003FA43C;
    case 206u: goto L_003FA454;
    case 207u: goto L_003FA490;
    case 208u: goto L_003FA4C4;
    case 209u: goto L_003FA4E0;
    case 210u: goto L_003FA510;
    case 211u: goto L_003FA528;
    case 212u: goto L_003FA5B0;
    case 213u: goto L_003FA60C;
    case 214u: goto L_003FA658;
    case 215u: goto L_003FA6A8;
    case 216u: goto L_003FA6D4;
    case 217u: goto L_003FA6E4;
    case 218u: goto L_003FA708;
    case 219u: goto L_003FA71C;
    case 220u: goto L_003FA730;
    case 221u: goto L_003FA748;
    case 222u: goto L_003FA754;
    case 223u: goto L_003FA778;
    case 224u: goto L_003FA798;
    case 225u: goto L_003FA7A8;
    case 226u: goto L_003FA7D8;
    case 227u: goto L_003FA804;
    case 228u: goto L_003FA838;
    case 229u: goto L_003FA8AC;
    case 230u: goto L_003FA8E0;
    case 231u: goto L_003FA910;
    case 232u: goto L_003FA954;
    case 233u: goto L_003FA95C;
    case 234u: goto L_003FA990;
    case 235u: goto L_003FA9E0;
    case 236u: goto L_003FAA24;
    case 237u: goto L_003FAA38;
    case 238u: goto L_003FAB1C;
    case 239u: goto L_003FAB30;
    case 240u: goto L_003FAB3C;
    case 241u: goto L_003FAB6C;
    case 242u: goto L_003FABE8;
    case 243u: goto L_003FABF0;
    case 244u: goto L_003FAC28;
    case 245u: goto L_003FAC70;
    case 246u: goto L_003FAC7C;
    case 247u: goto L_003FACA0;
    case 248u: goto L_003FACD0;
    case 249u: goto L_003FACF8;
    case 250u: goto L_003FAD34;
    case 251u: goto L_003FAD44;
    case 252u: goto L_003FAD60;
    case 253u: goto L_003FAD78;
    case 254u: goto L_003FAD84;
    case 255u: goto L_003FADAC;
    case 256u: goto L_003FADE8;
    case 257u: goto L_003FAE00;
    case 258u: goto L_003FAE14;
    case 259u: goto L_003FAE24;
    case 260u: goto L_003FAE48;
    case 261u: goto L_003FAE6C;
    case 262u: goto L_003FAE98;
    case 263u: goto L_003FAEF0;
    case 264u: goto L_003FAF40;
    case 265u: goto L_003FAF80;
    case 266u: goto L_003FAFC8;
    case 267u: goto L_003FB000;
    case 268u: goto L_003FB03C;
    case 269u: goto L_003FB058;
    case 270u: goto L_003FB088;
    case 271u: goto L_003FB130;
    case 272u: goto L_003FB148;
    case 273u: goto L_003FB154;
    case 274u: goto L_003FB178;
    case 275u: goto L_003FB1A8;
    case 276u: goto L_003FB1B8;
    case 277u: goto L_003FB1D4;
    case 278u: goto L_003FB1F0;
    case 279u: goto L_003FB208;
    case 280u: goto L_003FB210;
    case 281u: goto L_003FB234;
    case 282u: goto L_003FB23C;
    case 283u: goto L_003FB278;
    case 284u: goto L_003FB29C;
    case 285u: goto L_003FB2D0;
    case 286u: goto L_003FB2D8;
    case 287u: goto L_003FB340;
    case 288u: goto L_003FB360;
    case 289u: goto L_003FB370;
    case 290u: goto L_003FB39C;
    case 291u: goto L_003FB3B8;
    case 292u: goto L_003FB3C8;
    case 293u: goto L_003FB3F0;
    case 294u: goto L_003FB40C;
    case 295u: goto L_003FB448;
    case 296u: goto L_003FB45C;
    case 297u: goto L_003FB480;
    case 298u: goto L_003FB49C;
    case 299u: goto L_003FB4E0;
    case 300u: goto L_003FB51C;
    case 301u: goto L_003FB540;
    case 302u: goto L_003FB558;
    case 303u: goto L_003FB57C;
    case 304u: goto L_003FB5A4;
    case 305u: goto L_003FB5C8;
    case 306u: goto L_003FB610;
    case 307u: goto L_003FB638;
    case 308u: goto L_003FB698;
    case 309u: goto L_003FB6D8;
    case 310u: goto L_003FB6F8;
    case 311u: goto L_003FB748;
    case 312u: goto L_003FB7A8;
    case 313u: goto L_003FB7B0;
    case 314u: goto L_003FB7B8;
    case 315u: goto L_003FB808;
    case 316u: goto L_003FB82C;
    case 317u: goto L_003FB860;
    case 318u: goto L_003FB878;
    case 319u: goto L_003FB8C0;
    case 320u: goto L_003FB928;
    case 321u: goto L_003FB938;
    case 322u: goto L_003FB978;
    case 323u: goto L_003FB988;
    case 324u: goto L_003FB9E8;
    case 325u: goto L_003FBA30;
    case 326u: goto L_003FBA9C;
    case 327u: goto L_003FBABC;
    case 328u: goto L_003FBACC;
    case 329u: goto L_003FBAE4;
    case 330u: goto L_003FBAEC;
    case 331u: goto L_003FBB00;
    case 332u: goto L_003FBB10;
    case 333u: goto L_003FBB30;
    case 334u: goto L_003FBB38;
    case 335u: goto L_003FBB48;
    case 336u: goto L_003FBB5C;
    case 337u: goto L_003FBB68;
    case 338u: goto L_003FBB70;
    case 339u: goto L_003FBB7C;
    case 340u: goto L_003FBB84;
    case 341u: goto L_003FBBD0;
    case 342u: goto L_003FBC20;
    case 343u: goto L_003FBC4C;
    case 344u: goto L_003FBC68;
    case 345u: goto L_003FBC94;
    case 346u: goto L_003FBCA8;
    case 347u: goto L_003FBCC8;
    case 348u: goto L_003FBCDC;
    case 349u: goto L_003FBCE4;
    case 350u: goto L_003FBCF8;
    case 351u: goto L_003FBD00;
    case 352u: goto L_003FBD30;
    case 353u: goto L_003FBD78;
    case 354u: goto L_003FBD98;
    case 355u: goto L_003FBDA0;
    case 356u: goto L_003FBDB0;
    case 357u: goto L_003FBDBC;
    case 358u: goto L_003FBDD4;
    case 359u: goto L_003FBDDC;
    case 360u: goto L_003FBDE4;
    case 361u: goto L_003FBDF4;
    case 362u: goto L_003FBE20;
    case 363u: goto L_003FBE44;
    case 364u: goto L_003FBE54;
    case 365u: goto L_003FBE70;
    case 366u: goto L_003FBE84;
    case 367u: goto L_003FBE94;
    case 368u: goto L_003FBEC8;
    case 369u: goto L_003FBED8;
    case 370u: goto L_003FBEE0;
    case 371u: goto L_003FBF10;
    case 372u: goto L_003FBF30;
    case 373u: goto L_003FBF38;
    case 374u: goto L_003FBF4C;
    case 375u: goto L_003FBF5C;
    case 376u: goto L_003FBF80;
    case 377u: goto L_003FBFA0;
    case 378u: goto L_003FBFB8;
    case 379u: goto L_003FBFC0;
    case 380u: goto L_003FBFE4;
    case 381u: goto L_003FBFF4;
    default: bad_entry(c, 0x003F8000u); return;
    }
L_003F8000:
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 18;
    { const bool t = c.r[2].sd[0] <= 0; c.r[30].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F80D4; } }
    set32(c.r[20], ld32((c.r[4].w[0] + 2192u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], c.r[6].w[0] - 1952u);
    set32(c.r[5], c.r[5].w[0] - 2320u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8064u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F8064u) [[unlikely]] return; }
L_003F8064:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003F80D4; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 1;
L_003F8070:
    set32(c.r[22], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    c.budget -= 4;
    { const bool t = c.r[19].sd[0] <= 0; set32(c.r[17], ld32((c.r[2].w[0])));  if (t) { goto L_003F80B4; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0]));
    c.budget -= 4;
L_003F8090:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F809Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F809Cu) [[unlikely]] return; }
L_003F809C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F80ACu); set32(c.r[5], c.r[21].w[0] - 2312u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F80ACu) [[unlikely]] return; }
L_003F80AC:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.f[12] = ld32((c.r[17].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8090u | kUnwind; return; } goto L_003F8090; }
L_003F80B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F80C4u); set32(c.r[5], c.r[2].w[0] - 2304u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F80C4u) [[unlikely]] return; }
L_003F80C4:
    c.r[3].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8070u | kUnwind; return; } goto L_003F8070; } }
L_003F80D4:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[30].d[0] == 0ull; set32(c.r[2], c.r[30].w[0] - 1u);  if (t) { goto L_003F8198; } }
    set32(c.r[12], c.r[19].w[0] << 2);
    set32(c.r[9], c.r[19].w[0] - 1u);
    set32(c.r[14], c.r[12].w[0] + c.r[23].w[0]);
    set32(c.r[13], 0u - 1u);
    c.budget -= 4;
L_003F80F0:
    set32(c.r[10], c.r[2].w[0] - 1u);
    set32(c.r[5], ld32((c.r[14].w[0])));
    c.budget -= 4;
    { const bool t = c.r[19].sd[0] <= 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003F8164; } }
    set32(c.r[11], 0u - 1u);
    c.budget -= 2;
L_003F8108:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[8], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[9].d[0] + 0ull;
    c.f[2] = 0u;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[11].d[0]; set32(c.r[6], c.r[5].w[0] + 4u);  if (t) { goto L_003F8150; } }
    set32(c.r[7], 0u - 1u);
    c.budget -= 1;
L_003F8130:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[1] = ld32((c.r[18].w[0]));
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[7].d[0]; c.f[2] = fp::add(c.f[2], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8130u | kUnwind; return; } goto L_003F8130; } }
L_003F8150:
    st32((c.r[5].w[0]), c.f[2]);
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8108u | kUnwind; return; } goto L_003F8108; } }
L_003F8164:
    c.r[3].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[13].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_003F818C; } }
L_003F8170:
    set32(c.r[5], c.r[5].w[0] - 4u);
    set32(c.r[18], c.r[18].w[0] - 4u);
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[18].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8170u | kUnwind; return; } goto L_003F8170; } }
L_003F818C:
    c.r[2].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[13].d[0]; set32(c.r[4], c.r[4].w[0] + c.r[12].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F80F0u | kUnwind; return; } goto L_003F80F0; } }
L_003F8198:
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
L_003F81C8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    set32(c.r[17], c.r[3].w[0] - 22720u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 520u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003F8280; } }
    set32(c.r[19], ld32((c.r[17].w[0] + 512u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 504u)));
    set32(c.r[6], 0u + 6u);
    set32(c.r[5], ld32((c.r[3].w[0] + 8208u)));
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[20], ld32((c.r[17].w[0] + 516u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[18], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8234u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F8234u) [[unlikely]] return; }
L_003F8234:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003F8268; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 3904u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8254u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F8254u) [[unlikely]] return; }
L_003F8254:
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8264u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F8264u) [[unlikely]] return; }
L_003F8264:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003F8268:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8274u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 199u, depth + 1u); else { c.pc = 0x0020B638u; return; } if (c.pc != 0x003F8274u) [[unlikely]] return; }
L_003F8274:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 516u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 520u), c.r[2].w[0]);
    c.budget -= 3;
L_003F8280:
    set32(c.r[2], c.r[21].w[0] - 22720u);
    set32(c.r[8], ld32((c.r[2].w[0] + 1580u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 516u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 512u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 504u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F829Cu); set32(c.r[7], ld32((c.r[2].w[0] + 1584u)));  if (depth < kMaxDepth) unit_00BE(c, 27u, depth + 1u); else { c.pc = 0x003F8518u; return; } if (c.pc != 0x003F829Cu) [[unlikely]] return; }
L_003F829C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003F82C0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 184u), c.f[23]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 176u), c.f[22]);
    c.f[23] = c.f[12];
    st32((c.r[29].w[0] + 160u), c.f[20]);
    c.f[22] = c.f[13];
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.f[20] = c.f[14];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.f[3] = fp::sub(c.f[22], c.f[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 192u), c.f[24]);
    st32((c.r[29].w[0] + 168u), c.f[21]);
    c.f[2] = ld32((c.r[2].w[0] + 1620u));
    st32((c.r[29].w[0]), 0u);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[2]));
    st32((c.r[2].w[0] + 2460u), c.f[23]);
    st32((c.r[2].w[0] + 2464u), c.f[22]);
    c.budget -= 33;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[2].w[0] + 2468u), c.f[20]);  if (t) { goto L_003F83B8; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F83B8; } }
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = c.f[20];  if (t) { goto L_003F8374; } }
    c.f[1] = c.f[20] ^ fp::kSign;
    c.budget -= 1;
L_003F8374:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.f[3];  if (t) { goto L_003F8388; } }
    c.f[0] = c.f[3] ^ fp::kSign;
    c.budget -= 1;
L_003F8388:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003F83AC; } }
    fpu_div(c, 21u, c.f[20], c.f[3]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), 0u);  if (t) { goto L_003F8404; } }
L_003F83AC:
    c.f[21] = c.f[2];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_003F8404; } }
L_003F83B8:
    fpu_div(c, 1u, c.f[3], c.f[20]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F83E8; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003F83FC; } }
L_003F83E8:
    fpu_div(c, 21u, c.f[20], c.f[3]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), 0u);  if (t) { goto L_003F8404; } }
L_003F83FC:
    c.f[21] = 0u;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003F8404:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[24] = fp::sub(c.f[22], c.f[23]);  if (t) { goto L_003F8494; } }
    set32(c.r[20], c.r[7].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F8434; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F842Cu); set32(c.r[5], c.r[5].w[0] - 1912u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F842Cu) [[unlikely]] return; }
L_003F842C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003F8488; } }
L_003F8434:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8444u); set32(c.r[16], c.r[16].w[0] - 1768u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F8444u) [[unlikely]] return; }
L_003F8444:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8450u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F8450u) [[unlikely]] return; }
L_003F8450:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F845Cu); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F845Cu) [[unlikely]] return; }
L_003F845C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8468u); c.f[12] = c.f[24];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F8468u) [[unlikely]] return; }
L_003F8468:
    set32(c.r[4], ld32((c.r[20].w[0] + 2192u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8484u); c.r[9].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F8484u) [[unlikely]] return; }
L_003F8484:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_003F8488:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8494u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F8494u) [[unlikely]] return; }
L_003F8494:
    c.f[0] = c.f[23] ^ fp::kSign;
    set32(c.r[6], c.r[22].w[0] << 2);
    set32(c.r[2], c.r[23].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[21].w[0] - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    fpu_div(c, 12u, c.f[0], c.f[24]);
    c.budget -= 8;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] - 4u);  if (t) { goto L_003F84D4; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_003F84B8:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F84B8u | kUnwind; return; } goto L_003F84B8; } }
L_003F84D4:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[24] = ld32((c.r[29].w[0] + 192u));
    c.f[23] = ld32((c.r[29].w[0] + 184u));
    c.f[22] = ld32((c.r[29].w[0] + 176u));
    c.f[21] = ld32((c.r[29].w[0] + 168u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003F8518:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 232u), c.f[27]);
    st32((c.r[29].w[0] + 224u), c.f[26]);
    st32((c.r[29].w[0] + 216u), c.f[25]);
    st32((c.r[29].w[0] + 208u), c.f[24]);
    st32((c.r[29].w[0] + 200u), c.f[23]);
    st32((c.r[29].w[0] + 192u), c.f[22]);
    st32((c.r[29].w[0] + 184u), c.f[21]);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    st32((c.r[29].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[8].w[0]);
    c.budget -= 27;
    { const bool t = c.r[20].sd[0] <= 0; st32((c.r[29].w[0]), 0u);  if (t) { goto L_003F88DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[27] = ld32((c.r[2].w[0] - 1428u));
    c.f[26] = ld32((c.r[4].w[0] - 1424u));
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 5;
L_003F8598:
    set32(c.r[3], c.r[19].w[0] << 2);
    c.r[21].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.f[21] = ld32((c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    fpu_compare(c, fp::key(c.f[27]) < fp::key(c.f[21]));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = ld32((c.r[3].w[0]));  if (t) { goto L_003F85CC; } }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[26]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[22], c.r[19].w[0] + 1u);  if (t) { goto L_003F88CC; } }
L_003F85CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[25] = ld32((c.r[2].w[0] - 1420u));
    set32(c.r[4], c.r[30].w[0] + c.r[21].w[0]);
    c.f[24] = ld32((c.r[3].w[0] - 1416u));
    set32(c.r[2], c.r[23].w[0] - 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[22], c.r[19].w[0] + 1u);  if (t) { goto L_003F8630; } }
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
L_003F8600:
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[25]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[25] = c.f[0];  goto L_003F8614; }
L_003F8614:
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[24] = c.f[0];  goto L_003F8624; }
L_003F8624:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8600u | kUnwind; return; } goto L_003F8600; } }
L_003F8630:
    fpu_compare(c, fp::key(c.f[27]) < fp::key(c.f[21]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[21] = c.f[24];  goto L_003F8640; }
L_003F8640:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[26]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[20] = c.f[25];  goto L_003F8650; }
L_003F8650:
    set32(c.r[17], c.r[6].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[20].w[0] - 1u);  if (t) { goto L_003F86BC; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003F86C0; } }
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[20]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = fp::sub(c.f[21], c.f[20]);  goto L_003F86C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8680u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F8680u) [[unlikely]] return; }
L_003F8680:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F868Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F868Cu) [[unlikely]] return; }
L_003F868C:
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] - 1632u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F86ACu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F86ACu) [[unlikely]] return; }
L_003F86AC:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F86BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F86BCu) [[unlikely]] return; }
L_003F86BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003F86C0:
    c.f[1] = fp::sub(c.f[21], c.f[20]);
    c.budget -= 1;
L_003F86C4:
    set32(c.r[3], c.r[3].w[0] - 22720u);
    c.f[4] = fp::sub(c.f[24], c.f[25]);
    c.f[3] = ld32((c.r[3].w[0] + 1620u));
    c.r[2].d[0] = c.r[29].d[0] + 0ull;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[23] = c.f[4];  if (t) { goto L_003F8758; } }
    c.f[0] = c.f[3] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F8758; } }
    c.f[3] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = c.f[1];  if (t) { goto L_003F8714; } }
    c.f[2] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_003F8714:
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.f[23];  if (t) { goto L_003F8728; } }
    c.f[0] = c.f[23] ^ fp::kSign;
    c.budget -= 1;
L_003F8728:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 1u);  if (t) { goto L_003F874C; } }
    fpu_div(c, 22u, c.f[1], c.f[23]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), 0u);  if (t) { goto L_003F87A4; } }
L_003F874C:
    c.f[22] = c.f[3];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.r[4].w[0]);  if (t) { goto L_003F87A4; } }
L_003F8758:
    fpu_div(c, 2u, c.f[4], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F8788; } }
    c.f[0] = c.f[3] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_003F879C; } }
L_003F8788:
    fpu_div(c, 22u, c.f[1], c.f[4]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_003F87A4; } }
L_003F879C:
    c.f[22] = 0u;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003F87A4:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[1] = fp::mul(c.f[25], c.f[21]);  goto L_003F881C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F87B8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F87B8u) [[unlikely]] return; }
L_003F87B8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F87C4u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F87C4u) [[unlikely]] return; }
L_003F87C4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F87D0u); c.f[12] = c.f[25];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F87D0u) [[unlikely]] return; }
L_003F87D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F87DCu); c.f[12] = c.f[24];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F87DCu) [[unlikely]] return; }
L_003F87DC:
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 22720u);
    set32(c.r[5], c.r[3].w[0] - 1536u);
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8808u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F8808u) [[unlikely]] return; }
L_003F8808:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8818u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F8818u) [[unlikely]] return; }
L_003F8818:
    c.f[1] = fp::mul(c.f[25], c.f[21]);
    c.budget -= 1;
L_003F881C:
    c.f[0] = fp::mul(c.f[20], c.f[24]);
    set32(c.r[2], c.r[23].w[0] - 1u);
    set32(c.r[3], 0u - 1u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_div(c, 1u, c.f[0], c.f[23]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[30].w[0] + c.r[21].w[0]);  if (t) { goto L_003F885C; } }
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[5], 0u - 1u);
    c.budget -= 2;
L_003F8840:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8840u | kUnwind; return; } goto L_003F8840; } }
L_003F885C:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[30].w[0] + c.r[21].w[0]);  if (t) { goto L_003F8878; } }
    c.f[1] = c.f[20];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[21];  if (t) { goto L_003F8880; } }
L_003F8878:
    c.f[1] = c.f[21];
    c.f[12] = c.f[20];
    c.budget -= 2;
L_003F8880:
    set32(c.r[2], c.r[23].w[0] - 1u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[19].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003F88D0; } }
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[5], 0u - 1u);
    c.budget -= 2;
L_003F8898:
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[4].w[0]), c.f[12]);  goto L_003F88AC; }
L_003F88AC:
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[4].w[0]), c.f[1]);  goto L_003F88C0; }
L_003F88C0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8898u | kUnwind; return; } goto L_003F8898; } }
L_003F88CC:
    c.r[19].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_003F88D0:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8598u | kUnwind; return; } goto L_003F8598; }
L_003F88DC:
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
    c.f[27] = ld32((c.r[29].w[0] + 232u));
    c.f[26] = ld32((c.r[29].w[0] + 224u));
    c.f[25] = ld32((c.r[29].w[0] + 216u));
    c.f[24] = ld32((c.r[29].w[0] + 208u));
    c.f[23] = ld32((c.r[29].w[0] + 200u));
    c.f[22] = ld32((c.r[29].w[0] + 192u));
    c.f[21] = ld32((c.r[29].w[0] + 184u));
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_003F8930:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[19].d[0] = c.r[21].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[17], c.r[20].w[0] - 1u);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 22;
    { const bool t = c.r[20].d[0] == 0ull; c.f[20] = ld32((c.r[23].w[0]));  if (t) { goto L_003F89B0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_003F8990:
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.f[1] = ld32((c.r[16].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8990u | kUnwind; return; } goto L_003F8990; } }
L_003F89B0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[21], c.r[30].w[0] - 22720u);  goto L_003F8BC4; }
    set32(c.r[2], c.r[30].w[0] - 22720u);
    c.f[0] = ld32((c.r[2].w[0] + 1624u));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003F8A1C; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[17], c.r[20].w[0] - 1u);  if (t) { goto L_003F8B2C; } }
    c.f[12] = c.f[20] ^ fp::kSign;
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
L_003F89F8:
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    fpu_div(c, 0u, c.f[0], c.f[12]);
    st32((c.r[19].w[0]), c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F89F8u | kUnwind; return; } goto L_003F89F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[19].w[0]);  if (t) { goto L_003F8B30; } }
L_003F8A1C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[17], c.r[20].w[0] - 1u);  if (t) { goto L_003F8B2C; } }
    c.f[4] = c.f[20] ^ fp::kSign;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u - 1u);
    c.f[2] = ld32((c.r[18].w[0]));
    c.budget -= 7;
L_003F8A40:
    c.f[1] = ld32((c.r[8].w[0] + 1620u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_003F8AC4; } }
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F8AC4; } }
    c.f[3] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = c.f[2];  if (t) { goto L_003F8A84; } }
    c.f[1] = c.f[2] ^ fp::kSign;
    c.budget -= 1;
L_003F8A84:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.f[4];  if (t) { goto L_003F8A98; } }
    c.f[0] = c.f[20];
    c.budget -= 1;
L_003F8A98:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.f[3];  if (t) { goto L_003F8ABC; } }
    fpu_div(c, 0u, c.f[2], c.f[4]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), 0u);  if (t) { goto L_003F8B0C; } }
L_003F8ABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.r[4].w[0]);  if (t) { goto L_003F8B0C; } }
L_003F8AC4:
    fpu_div(c, 3u, c.f[4], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F8AF4; } }
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[3].w[0]), c.r[4].w[0]);  goto L_003F8B08; }
L_003F8AF4:
    fpu_div(c, 0u, c.f[2], c.f[4]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), 0u);  if (t) { goto L_003F8B0C; } }
L_003F8B08:
    c.f[0] = 0u;
    c.budget -= 1;
L_003F8B0C:
    st32((c.r[19].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { goto L_003F8BC0; } }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[5].d[0]) { c.f[2] = ld32((c.r[18].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8A40u | kUnwind; return; } goto L_003F8A40; }
L_003F8B2C:
    st32((c.r[6].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_003F8B30:
    set32(c.r[18], c.r[30].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F8CD8; } }
    c.f[12] = ld32((c.r[23].w[0]));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[16].w[0] - 1408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8B58u); c.r[19].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F8B58u) [[unlikely]] return; }
L_003F8B58:
    set32(c.r[17], c.r[20].w[0] - 1u);
    set32(c.r[4], ld32((c.r[18].w[0] + 2192u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8B6Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F8B6Cu) [[unlikely]] return; }
L_003F8B6C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[20].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F8BA4; } }
    set32(c.r[16], 0u - 1u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[12] = ld32((c.r[19].w[0]));
    c.budget -= 3;
L_003F8B80:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8B8Cu); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F8B8Cu) [[unlikely]] return; }
L_003F8B8C:
    set32(c.r[4], ld32((c.r[20].w[0] + 2192u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8B9Cu); set32(c.r[5], c.r[18].w[0] - 1352u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F8B9Cu) [[unlikely]] return; }
L_003F8B9C:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[16].d[0]) { c.f[12] = ld32((c.r[19].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8B80u | kUnwind; return; } goto L_003F8B80; }
L_003F8BA4:
    set32(c.r[2], c.r[30].w[0] - 22720u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8BB8u); set32(c.r[5], c.r[3].w[0] - 2304u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F8BB8u) [[unlikely]] return; }
L_003F8BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F8CD8; } }
L_003F8BC0:
    set32(c.r[21], c.r[30].w[0] - 22720u);
    c.budget -= 1;
L_003F8BC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[21].w[0] + 2192u)));
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8BDCu); set32(c.r[5], c.r[5].w[0] - 1344u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F8BDCu) [[unlikely]] return; }
L_003F8BDC:
    set32(c.r[17], c.r[20].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F8C1C; } }
    c.r[22].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[21], 0u - 1u);
    c.f[12] = ld32((c.r[16].w[0]));
    c.budget -= 4;
L_003F8BF8:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8C04u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F8C04u) [[unlikely]] return; }
L_003F8C04:
    set32(c.r[4], ld32((c.r[22].w[0] + 2192u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8C14u); set32(c.r[5], c.r[19].w[0] - 1256u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F8C14u) [[unlikely]] return; }
L_003F8C14:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[21].d[0]) { c.f[12] = ld32((c.r[16].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8BF8u | kUnwind; return; } goto L_003F8BF8; }
L_003F8C1C:
    set32(c.r[16], c.r[30].w[0] - 22720u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    set32(c.r[5], c.r[5].w[0] - 1248u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8C34u); set32(c.r[17], c.r[20].w[0] - 1u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F8C34u) [[unlikely]] return; }
L_003F8C34:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[20].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F8C6C; } }
    set32(c.r[16], 0u - 1u);
    c.f[12] = ld32((c.r[18].w[0]));
    c.budget -= 3;
L_003F8C48:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8C54u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F8C54u) [[unlikely]] return; }
L_003F8C54:
    set32(c.r[4], ld32((c.r[20].w[0] + 2192u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8C64u); set32(c.r[5], c.r[19].w[0] - 1256u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F8C64u) [[unlikely]] return; }
L_003F8C64:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[16].d[0]) { c.f[12] = ld32((c.r[18].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8C48u | kUnwind; return; } goto L_003F8C48; }
L_003F8C6C:
    set32(c.r[16], c.r[30].w[0] - 22720u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    set32(c.r[5], c.r[5].w[0] - 1224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8C84u); set32(c.r[17], c.r[19].w[0] - 1256u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F8C84u) [[unlikely]] return; }
L_003F8C84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8C8Cu); c.f[12] = ld32((c.r[23].w[0]));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F8C8Cu) [[unlikely]] return; }
L_003F8C8C:
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8C9Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F8C9Cu) [[unlikely]] return; }
L_003F8C9C:
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8CACu); set32(c.r[5], c.r[5].w[0] - 1200u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F8CACu) [[unlikely]] return; }
L_003F8CAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8CB4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F8CB4u) [[unlikely]] return; }
L_003F8CB4:
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8CC4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F8CC4u) [[unlikely]] return; }
L_003F8CC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8CD4u); set32(c.r[5], c.r[2].w[0] - 2304u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F8CD4u) [[unlikely]] return; }
L_003F8CD4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F8CD8:
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
L_003F8D10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[16].w[0] - 22720u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 504u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8D3Cu); set32(c.r[4], c.r[4].w[0] << 2);  if (depth < kMaxDepth) unit_00B8(c, 87u, depth + 1u); else { c.pc = 0x003E0EB8u; return; } if (c.pc != 0x003F8D3Cu) [[unlikely]] return; }
L_003F8D3C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 2224u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[12].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F8E34; } }
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[8].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F8E34; } }
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[11], 0u - 1u);
    c.budget -= 3;
L_003F8D68:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[10].d[0]; set32(c.r[5], ld32((c.r[16].w[0] + 504u)));  if (t) { goto L_003F8DC4; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[11].d[0]; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { goto L_003F8E14; } }
    c.f[1] = 0u;
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[9], 0u - 1u);
    c.budget -= 3;
L_003F8D88:
    set32(c.r[2], ld32((c.r[8].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[7], 0u + 1u);  if (t) { goto L_003F8DAC; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F8DAC:
    st32((c.r[6].w[0]), c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[9].d[0]; set32(c.r[6], c.r[6].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8D88u | kUnwind; return; } goto L_003F8D88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8E14; } }
L_003F8DC4:
    set32(c.r[9], 0u - 1u);
    c.f[1] = 0u;
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 5;
L_003F8DD8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[9].d[0]; set32(c.r[6], c.r[6].w[0] - 4u);  if (t) { goto L_003F8E14; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[7], 0u + 1u);  if (t) { goto L_003F8E04; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F8E04:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[7].d[0]) { set32(c.r[5], c.r[5].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8DD8u | kUnwind; return; } goto L_003F8DD8; }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_003F8E14:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[2], c.r[12].w[0] - 22720u);  if (t) { goto L_003F8E38; } }
    set32(c.r[8], ld32((c.r[8].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[8].d[0] == 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 504u)));  goto L_003F8E3C; }
    set32(c.r[2], ld32((c.r[8].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8D68u | kUnwind; return; } goto L_003F8D68; } }
L_003F8E34:
    set32(c.r[2], c.r[12].w[0] - 22720u);
    c.budget -= 1;
L_003F8E38:
    set32(c.r[5], ld32((c.r[2].w[0] + 504u)));
    c.budget -= 1;
L_003F8E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8E44u); set32(c.r[5], c.r[5].w[0] << 2);  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003F8E44u) [[unlikely]] return; }
L_003F8E44:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F8E60:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8EACu); set32(c.r[4], ld32((c.r[16].w[0] + 2204u)));  if (depth < kMaxDepth) unit_00B8(c, 87u, depth + 1u); else { c.pc = 0x003E0EB8u; return; } if (c.pc != 0x003F8EACu) [[unlikely]] return; }
L_003F8EAC:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8EB8u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003F8EB8u) [[unlikely]] return; }
L_003F8EB8:
    set32(c.r[6], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;  if (t) { goto L_003F8ECC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.r[22].w[0]);  if (t) { goto L_003F8F1C; } }
L_003F8ECC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F8EF8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8EE0u); set32(c.r[5], c.r[5].w[0] - 1080u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F8EE0u) [[unlikely]] return; }
L_003F8EE0:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8EF0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F8EF0u) [[unlikely]] return; }
L_003F8EF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003F8F20; } }
L_003F8EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8F00u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003F8F00u) [[unlikely]] return; }
L_003F8F00:
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8F1Cu); c.r[8].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 182u, depth + 1u); else { c.pc = 0x003F7348u; return; } if (c.pc != 0x003F8F1Cu) [[unlikely]] return; }
L_003F8F1C:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003F8F20:
    set32(c.r[3], c.r[20].w[0] - 22720u);
    set32(c.r[6], ld32((c.r[3].w[0] + 2428u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[21], c.r[29].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[17].sd[0] <= 0; set32(c.r[19], c.r[29].w[0] + 8u);  if (t) { goto L_003F8FB0; } }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 2432u)));
    c.budget -= 3;
L_003F8F48:
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[9], c.r[4].w[0] + 1u);  if (t) { goto L_003F8FA0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { goto L_003F8FA0; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] + c.r[18].w[0]);
    c.budget -= 2;
L_003F8F78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0]; set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_003F8F94; } }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 5;
L_003F8F94:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8F78u | kUnwind; return; } goto L_003F8F78; } }
L_003F8FA0:
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[7].w[0] + 2432u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8F48u | kUnwind; return; } goto L_003F8F48; }
L_003F8FB0:
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003F901C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[9], c.r[2].w[0] - 22720u);
    c.budget -= 3;
L_003F8FC8:
    c.f[1] = 0u;
    set32(c.r[8], c.r[6].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] <= 0; set32(c.r[16], c.r[7].w[0] + 1u);  if (t) { goto L_003F9008; } }
    set32(c.r[5], ld32((c.r[9].w[0] + 2432u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_003F8FE8:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.f[1] = fp::add(c.f[1], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8FE8u | kUnwind; return; } goto L_003F8FE8; } }
L_003F9008:
    st32((c.r[6].w[0]), c.f[1]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8FC8u | kUnwind; return; } goto L_003F8FC8; } }
L_003F901C:
    set32(c.r[16], c.r[20].w[0] - 22720u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 2432u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9030u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 89u, depth + 1u); else { c.pc = 0x003F59B8u; return; } if (c.pc != 0x003F9030u) [[unlikely]] return; }
L_003F9030:
    c.f[1] = ld32((c.r[16].w[0] + 1624u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = c.f[0];  if (t) { goto L_003F90B0; } }
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F90B0; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = c.f[2];  if (t) { goto L_003F9080; } }
    c.f[1] = c.f[2] ^ fp::kSign;
    c.budget -= 1;
L_003F9080:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003F90A4; } }
    fpu_div(c, 20u, c.f[4], c.f[2]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 8u), 0u);  if (t) { goto L_003F90FC; } }
L_003F90A4:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003F90FC; } }
L_003F90B0:
    fpu_div(c, 3u, c.f[2], c.f[4]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F90E0; } }
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003F90F4; } }
L_003F90E0:
    fpu_div(c, 20u, c.f[4], c.f[2]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), 0u);  if (t) { goto L_003F90FC; } }
L_003F90F4:
    c.f[20] = 0u;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003F90FC:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9210; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] - 1u);  if (t) { goto L_003F9144; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC1210000u);
    c.r[1].d[0] = c.r[1].d[0] | 40370ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 6;
L_003F9128:
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[2].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9128u | kUnwind; return; } goto L_003F9128; } }
L_003F9144:
    set32(c.r[4], c.r[20].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F932C; } }
    set32(c.r[17], ld32((c.r[4].w[0] + 2192u)));
    set32(c.r[6], c.r[2].w[0] - 976u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[16], ld32((c.r[29].w[0])));  if (t) { goto L_003F91BC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 2296u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9178u); c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F9178u) [[unlikely]] return; }
L_003F9178:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F9200; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { goto L_003F91FC; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003F9190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9198u);  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003F9198u) [[unlikely]] return; }
L_003F9198:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F91A8u); set32(c.r[5], c.r[18].w[0] - 2288u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F91A8u) [[unlikely]] return; }
L_003F91A8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9190u | kUnwind; return; } goto L_003F9190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F9200; } }
L_003F91BC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F91FC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { goto L_003F91FC; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 2;
L_003F91D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F91E0u);  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003F91E0u) [[unlikely]] return; }
L_003F91E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F91F0u); set32(c.r[5], c.r[18].w[0] - 2280u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F91F0u) [[unlikely]] return; }
L_003F91F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F91D8u | kUnwind; return; } goto L_003F91D8; } }
L_003F91FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F9200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9208u); set32(c.r[5], c.r[19].w[0] - 2304u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F9208u) [[unlikely]] return; }
L_003F9208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003F9330; } }
L_003F9210:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003F932C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[20], c.r[2].w[0] - 22720u);
    c.budget -= 4;
L_003F9228:
    set32(c.r[6], ld32((c.r[20].w[0] + 2428u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[19], c.r[7].w[0] << 2);
    c.budget -= 6;
    { const bool t = c.r[17].sd[0] <= 0; set32(c.r[16], c.r[7].w[0] + 1u);  if (t) { goto L_003F92F8; } }
    set32(c.r[11], c.r[30].w[0] - 22720u);
    set32(c.r[10], 0u - 1u);
    set32(c.r[3], ld32((c.r[11].w[0] + 2432u)));
    c.budget -= 4;
L_003F9250:
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[7].d[0]; st32((c.r[2].w[0]), c.r[6].w[0]);  if (t) { goto L_003F929C; } }
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[10].d[0]; set32(c.r[9], c.r[7].w[0] + 1u);  if (t) { goto L_003F92E8; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F9278:
    c.f[0] = ld32((c.r[8].w[0]));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[8], c.r[8].w[0] + 4u);
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9278u | kUnwind; return; } goto L_003F9278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003F92EC; } }
L_003F929C:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[9], c.r[4].w[0] + 1u);  if (t) { goto L_003F92E8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { goto L_003F92E8; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] + c.r[18].w[0]);
    c.budget -= 3;
L_003F92C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0]; set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_003F92DC; } }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 5;
L_003F92DC:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F92C0u | kUnwind; return; } goto L_003F92C0; } }
L_003F92E8:
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 1;
L_003F92EC:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[11].w[0] + 2432u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9250u | kUnwind; return; } goto L_003F9250; }
L_003F92F8:
    set32(c.r[4], ld32((c.r[20].w[0] + 2432u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9308u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 89u, depth + 1u); else { c.pc = 0x003F59B8u; return; } if (c.pc != 0x003F9308u) [[unlikely]] return; }
L_003F9308:
    set32(c.r[2], c.r[19].w[0] + c.r[18].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] + c.r[23].w[0]);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9228u | kUnwind; return; } goto L_003F9228; } }
L_003F932C:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003F9330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[22].d[0]; c.r[2].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_003F9344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9340u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003F9340u) [[unlikely]] return; }
L_003F9340:
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_003F9344:
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
L_003F9378:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[6], 0u + 6u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[18], c.r[5].w[0] << 2);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F93C4u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F93C4u) [[unlikely]] return; }
L_003F93C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003F93FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    set32(c.r[5], c.r[5].w[0] - 3904u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F93E8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F93E8u) [[unlikely]] return; }
L_003F93E8:
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F93F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F93F8u) [[unlikely]] return; }
L_003F93F8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003F93FC:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9408u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 199u, depth + 1u); else { c.pc = 0x0020B638u; return; } if (c.pc != 0x003F9408u) [[unlikely]] return; }
L_003F9408:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F9428:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_003F9498; } }
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[7].w[0]), c.f[1]);
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = ld32((c.r[6].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 8u), c.f[0]);
    c.budget -= 25;
L_003F9498:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F94A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 20104u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[13].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], c.r[8].w[0] - 22720u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 188u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[8].w[0] + 2432u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 188u), c.r[3].w[0]);
    c.budget -= 19;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[8], ld32((c.r[8].w[0] + 2428u)));  if (t) { goto L_003F9560; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { goto L_003F9560; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[12], 0u - 1u);  if (t) { goto L_003F9560; } }
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[9].w[0]), c.r[8].w[0]);
    c.budget -= 2;
L_003F9508:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[12].d[0]; set32(c.r[10], c.r[5].w[0] + 4u);  if (t) { goto L_003F954C; } }
    set32(c.r[11], 0u - 1u);
    c.budget -= 1;
L_003F9528:
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[1] = ld32((c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[8].w[0]), c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[11].d[0]; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9528u | kUnwind; return; } goto L_003F9528; } }
L_003F954C:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_003F9560; } }
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[16].d[0]) { st32((c.r[9].w[0]), c.r[8].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9508u | kUnwind; return; } goto L_003F9508; }
L_003F9560:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[13].w[0] - 22720u);  if (t) { goto L_003F9590; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    set32(c.r[5], c.r[5].w[0] - 3272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9580u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F9580u) [[unlikely]] return; }
L_003F9580:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9590u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F9590u) [[unlikely]] return; }
L_003F9590:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F95A0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 89u, depth + 1u); else { c.pc = 0x003F59B8u; return; } if (c.pc != 0x003F95A0u) [[unlikely]] return; }
L_003F95A0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F95B8:
    c.f[2] = ld32((c.r[7].w[0]));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] - 1u);  if (t) { goto L_003F95E8; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003F95C8:
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[1] = ld32((c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.f[2] = fp::add(c.f[2], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F95C8u | kUnwind; return; } goto L_003F95C8; } }
L_003F95E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = c.f[2];  c.pc = t; return; }
L_003F95F0:
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::sqrt(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[13];  goto L_003F9614; }
L_003F9614:
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34000000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F810000u);
    c.r[1].d[0] = c.r[1].d[0] | 18350ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[12]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::mul(c.f[0], c.f[2]);  c.pc = t; return; }
L_003F9640:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[14]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F96C0; } }
    c.f[0] = c.f[14] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F96C0; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = c.f[12];  if (t) { goto L_003F9680; } }
    c.f[2] = c.f[12] ^ fp::kSign;
    c.budget -= 1;
L_003F9680:
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = c.f[13];  if (t) { goto L_003F9694; } }
    c.f[1] = c.f[13] ^ fp::kSign;
    c.budget -= 1;
L_003F9694:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003F96B8; } }
L_003F96A4:
    fpu_div(c, 0u, c.f[12], c.f[13]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), 0u);  c.pc = t; return; }
L_003F96B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003F96C0:
    c.budget -= 2;
L_003F96C8:
    fpu_div(c, 1u, c.f[13], c.f[12]);
    fpu_compare(c, fp::key(c.f[14]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F96A4u | kUnwind; return; } goto L_003F96A4; } }
    c.f[0] = c.f[14] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F96A4u | kUnwind; return; } goto L_003F96A4; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003F9700:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9718u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003F9718u) [[unlikely]] return; }
L_003F9718:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9724u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003F9724u) [[unlikely]] return; }
L_003F9724:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_003F9754; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { goto L_003F9754; } }
L_003F9738:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9744u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003F9744u) [[unlikely]] return; }
L_003F9744:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9738u | kUnwind; return; } goto L_003F9738; } }
L_003F9754:
    set32(c.r[2], c.r[17].w[0] - 22720u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 504u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9768u); set32(c.r[4], c.r[4].w[0] - 1u);  if (depth < kMaxDepth) unit_00BE(c, 73u, depth + 1u); else { c.pc = 0x003F8E60u; return; } if (c.pc != 0x003F9768u) [[unlikely]] return; }
L_003F9768:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9774u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003F9774u) [[unlikely]] return; }
L_003F9774:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F9790:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.f[1] = ld32((c.r[2].w[0] - 940u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F97E4; } }
    c.f[2] = 0u;
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
L_003F97B0:
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[0] ^ fp::kSign;  goto L_003F97C4; }
L_003F97C4:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[3].w[0] - 1u);  if (t) { goto L_003F97DC; } }
    c.f[1] = c.f[0];
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_003F97DC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F97B0u | kUnwind; return; } goto L_003F97B0; } }
L_003F97E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F97F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.f[1] = ld32((c.r[2].w[0] + 1600u));
    c.f[0] = ld32((c.r[2].w[0] + 2332u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[1];  goto L_003F9810; }
L_003F9810:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::add(c.f[0], c.f[1]);  c.pc = t; return; }
L_003F9818:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[17], c.r[2].w[0] - 22720u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9844u); set32(c.r[4], ld32((c.r[17].w[0] + 2196u)));  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003F9844u) [[unlikely]] return; }
L_003F9844:
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u - 1u);  if (t) { goto L_003F98A4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 504u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[5], 0u - 1u);  if (t) { goto L_003F9890; } }
L_003F9870:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; st32((c.r[2].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9870u | kUnwind; return; } goto L_003F9870; } }
L_003F9890:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[2], 0u + 1u);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_003F98A8; } }
L_003F98A4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F98A8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F98C0:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[3].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003F98CC; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_003F98CC:
    c.f[2] = 0u;
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003F9904; } }
L_003F98E0:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[1] = ld32((c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[2] = fp::add(c.f[2], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F98E0u | kUnwind; return; } goto L_003F98E0; } }
L_003F9904:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] <= 0; c.f[0] = c.f[2];  if (t) { goto L_003F9918; } }
    c.f[0] = fp::sqrt(c.f[2]);
    c.budget -= 3;
L_003F9918:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F9920:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[5].w[0] - 2320u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9970u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F9970u) [[unlikely]] return; }
L_003F9970:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] <= 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003F99E0; } }
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 2;
L_003F9980:
    set32(c.r[20], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    c.budget -= 4;
    { const bool t = c.r[21].sd[0] <= 0; set32(c.r[17], ld32((c.r[2].w[0])));  if (t) { goto L_003F99C4; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0]));
    c.budget -= 4;
L_003F99A0:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F99ACu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003F99ACu) [[unlikely]] return; }
L_003F99AC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F99BCu); set32(c.r[5], c.r[18].w[0] - 2312u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F99BCu) [[unlikely]] return; }
L_003F99BC:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.f[12] = ld32((c.r[17].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F99A0u | kUnwind; return; } goto L_003F99A0; }
L_003F99C4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F99D0u); set32(c.r[5], c.r[30].w[0] - 2304u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F99D0u) [[unlikely]] return; }
L_003F99D0:
    c.r[3].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9980u | kUnwind; return; } goto L_003F9980; } }
L_003F99E0:
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
L_003F9A10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003F9A98; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A48u); set32(c.r[5], c.r[5].w[0] - 2296u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F9A48u) [[unlikely]] return; }
L_003F9A48:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F9A84; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { goto L_003F9A84; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003F9A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A68u);  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003F9A68u) [[unlikely]] return; }
L_003F9A68:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A78u); set32(c.r[5], c.r[18].w[0] - 2288u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F9A78u) [[unlikely]] return; }
L_003F9A78:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9A60u | kUnwind; return; } goto L_003F9A60; } }
L_003F9A84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A90u); set32(c.r[5], c.r[19].w[0] - 2304u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F9A90u) [[unlikely]] return; }
L_003F9A90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);  if (t) { goto L_003F9AE4; } }
L_003F9A98:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F9AD4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { goto L_003F9AD4; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003F9AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9AB8u);  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003F9AB8u) [[unlikely]] return; }
L_003F9AB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9AC8u); set32(c.r[5], c.r[18].w[0] - 2280u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F9AC8u) [[unlikely]] return; }
L_003F9AC8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9AB0u | kUnwind; return; } goto L_003F9AB0; } }
L_003F9AD4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9AE0u); set32(c.r[5], c.r[19].w[0] - 2304u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F9AE0u) [[unlikely]] return; }
L_003F9AE0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003F9AE4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F9B00:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 22;
    { const bool t = c.r[18].sd[0] <= 0; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_003F9B7C; } }
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_003F9B60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9B60u | kUnwind; return; } goto L_003F9B60; } }
L_003F9B7C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[19].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003F9BA8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    set32(c.r[5], c.r[5].w[0] - 2040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9B98u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F9B98u) [[unlikely]] return; }
L_003F9B98:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9BA8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F9BA8u) [[unlikely]] return; }
L_003F9BA8:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003F9C50; } }
    set32(c.r[9], 0u - 1u);
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[21].w[0] + c.r[7].w[0]);
    c.budget -= 4;
L_003F9BC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[9].d[0]; set32(c.r[2], c.r[22].w[0] << 2);  if (t) { goto L_003F9BD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_003F9C34; } }
L_003F9BD4:
    set32(c.r[4], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[10].d[0]; set32(c.r[22], c.r[22].w[0] + 1u);  if (t) { goto L_003F9BF4; } }
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_003F9C40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_003F9C00; } }
L_003F9BF4:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_003F9C00:
    set32(c.r[2], c.r[30].w[0] - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[9].d[0]) { c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  goto L_003F9C38; }
    set32(c.r[6], c.r[19].w[0] << 2);
    set32(c.r[5], c.r[17].w[0] << 2);
    set32(c.r[8], 0u - 1u);
    c.budget -= 3;
L_003F9C18:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[8].d[0]; set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9C18u | kUnwind; return; } goto L_003F9C18; } }
L_003F9C34:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003F9C38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);  goto L_003F9C54; }
L_003F9C40:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[21].w[0] + c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9BC0u | kUnwind; return; } goto L_003F9BC0; } }
L_003F9C50:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003F9C54:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003F9C80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 62237ull;
    set32(c.r[2], ld32((c.r[2].w[0] - 964u)));
    set32(c.r[7], 0u + 16807u);
    set32(c.r[6], 0u + 2836u);
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003F9CA0u);  goto L_003F9CA4; }
L_003F9CA4:
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] | 62237ull;
    c.r[5].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[7].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] > 0; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F9CD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_003F9CD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[8].w[0] - 964u), c.r[2].w[0]);  c.pc = t; return; }
L_003F9CE0:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] > 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_003F9CF8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 964u), c.r[2].w[0]);  c.pc = t; return; }
L_003F9CF8:
    c.r[3].d[0] = c.r[3].d[0] | 65534ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003F9D10; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] - 964u), c.r[3].w[0]);  c.pc = t; return; }
L_003F9D10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] - 964u), c.r[4].w[0]);  c.pc = t; return; }
L_003F9D18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 964u)));
    c.r[3].d[0] = c.r[3].d[0] | 62237ull;
    set32(c.r[7], 0u + 16807u);
    set32(c.r[6], 0u + 2836u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003F9D40u);  goto L_003F9D44; }
L_003F9D44:
    c.r[2].d[0] = c.r[2].d[0] | 62237ull;
    c.r[5].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[7].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003F9D74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 4;
L_003F9D74:
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    st32((c.r[8].w[0] - 964u), c.r[4].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 372u));
    c.f[2] = ld32((c.r[2].w[0] + 376u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::add(c.f[0], c.f[2]);  c.pc = t; return; }
L_003F9DA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[13].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[13].sd[0] <= 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003F9E74; } }
    st32((c.r[6].w[0]), c.r[12].w[0]);
    c.budget -= 2;
L_003F9DC0:
    set32(c.r[24], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[13].sd[0] <= 0; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { goto L_003F9E64; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.f[2] = c.r[1].w[0];
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[8].d[0] = c.r[8].d[0] | 62237ull;
    c.r[14].d[0] = 0ull + 0ull;
    set32(c.r[16], 0u + 16807u);
    set32(c.r[25], 0u + 2836u);
    c.r[11].d[0] = c.r[11].d[0] | 65535ull;
    c.r[10].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 13;
L_003F9E00:
    set32(c.r[2], ld32((c.r[15].w[0] - 964u)));
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[14].d[0]) { breakpoint(c, 0x003F9E08u);  goto L_003F9E0C; }
L_003F9E0C:
    c.budget -= 2;
    if (c.r[8].d[0] == c.r[14].d[0]) { breakpoint(c, 0x003F9E10u);  goto L_003F9E14; }
L_003F9E14:
    set32(c.r[10], c.r[10].w[0] - 1u);
    mmi::div(c, 0, c.r[2].w[0], c.r[8].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[25].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].sd[0] < 1ll ? 1ull : 0ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[11].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[15].w[0] - 964u), c.r[2].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[12].w[0]), c.f[0]);
    c.budget -= 20;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9E00u | kUnwind; return; } goto L_003F9E00; } }
L_003F9E64:
    c.r[3].d[0] = c.r[24].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[6].w[0]), c.r[12].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9DC0u | kUnwind; return; } goto L_003F9DC0; }
L_003F9E74:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[6].w[0]), c.r[12].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F9E88:
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] <= 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003F9EF8; } }
    set32(c.r[9], 0u - 1u);
    c.budget -= 1;
L_003F9EA8:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[6].w[0] - 3u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[9].d[0]; c.f[1] = fp::mul(c.f[0], c.f[0]);  if (t) { goto L_003F9EE4; } }
    set32(c.r[7], 0u - 1u);
    c.budget -= 2;
L_003F9EC8:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[7].d[0]; c.f[1] = fp::add(c.f[1], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9EC8u | kUnwind; return; } goto L_003F9EC8; } }
L_003F9EE4:
    st32((c.r[4].w[0]), c.f[1]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9EA8u | kUnwind; return; } goto L_003F9EA8; } }
L_003F9EF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.f[0] = ld32((c.r[3].w[0] - 932u));
    c.f[12] = ld32((c.r[2].w[0] + 2460u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003F9F28; } }
    c.f[14] = ld32((c.r[2].w[0] + 2468u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9F28u); c.f[13] = ld32((c.r[2].w[0] + 2464u));  if (depth < kMaxDepth) unit_00BE(c, 18u, depth + 1u); else { c.pc = 0x003F82C0u; return; } if (c.pc != 0x003F9F28u) [[unlikely]] return; }
L_003F9F28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F9F38:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[19], c.r[4].w[0] - 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    mmi::mult(c, 0, c.r[18].w[0], c.r[19].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[6], 0u + 6u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    set32(c.r[5], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9F9Cu); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F9F9Cu) [[unlikely]] return; }
L_003F9F9C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F9FD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    set32(c.r[5], c.r[5].w[0] - 1184u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9FC0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003F9FC0u) [[unlikely]] return; }
L_003F9FC0:
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9FD0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003F9FD0u) [[unlikely]] return; }
L_003F9FD0:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F9FD4:
    st32((c.r[29].w[0]), c.r[20].w[0]);
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003FA048; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[21], c.r[19].w[0] << 2);
    set32(c.r[23], c.r[2].w[0] - 22720u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
L_003F9FF0:
    set32(c.r[17], c.r[6].w[0] + c.r[21].w[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA010u); c.r[9].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 42u, depth + 1u); else { c.pc = 0x003F8930u; return; } if (c.pc != 0x003FA010u) [[unlikely]] return; }
L_003FA010:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_003FA03C; }
    set32(c.r[4], ld32((c.r[23].w[0] + 2192u)));
    set32(c.r[5], c.r[22].w[0] - 1112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA028u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FA028u) [[unlikely]] return; }
L_003FA028:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA038u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003FA038u) [[unlikely]] return; }
L_003FA038:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003FA03C:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9FF0u | kUnwind; return; } goto L_003F9FF0; } }
L_003FA048:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003FA080:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] - 20208u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA0B4u); set32(c.r[4], ld32((c.r[2].w[0] + 48u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FA0B4u) [[unlikely]] return; }
L_003FA0B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[16].w[0] + 476u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003FA0DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA0D4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00BA(c, 131u, depth + 1u); else { c.pc = 0x003E95D0u; return; } if (c.pc != 0x003FA0D4u) [[unlikely]] return; }
L_003FA0D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA0DCu);  if (depth < kMaxDepth) unit_00BA(c, 116u, depth + 1u); else { c.pc = 0x003E93B0u; return; } if (c.pc != 0x003FA0DCu) [[unlikely]] return; }
L_003FA0DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 456u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[19].w[0] - 22720u);  goto L_003FA114; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA0F0u);  if (depth < kMaxDepth) unit_00BA(c, 59u, depth + 1u); else { c.pc = 0x003E89B0u; return; } if (c.pc != 0x003FA0F0u) [[unlikely]] return; }
L_003FA0F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 468u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[19].w[0] - 22720u);  goto L_003FA114; }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[19].w[0] - 22720u);  goto L_003FA114; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA110u); set32(c.r[4], ld32((c.r[16].w[0] + 2212u)));  if (depth < kMaxDepth) unit_00B9(c, 133u, depth + 1u); else { c.pc = 0x003E5628u; return; } if (c.pc != 0x003FA110u) [[unlikely]] return; }
L_003FA110:
    set32(c.r[16], c.r[19].w[0] - 22720u);
    c.budget -= 1;
L_003FA114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA11Cu); set32(c.r[4], ld32((c.r[16].w[0] + 2212u)));  if (depth < kMaxDepth) unit_00B9(c, 200u, depth + 1u); else { c.pc = 0x003E6370u; return; } if (c.pc != 0x003FA11Cu) [[unlikely]] return; }
L_003FA11C:
    set32(c.r[2], ld32((c.r[16].w[0] + 496u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 92u)));  goto L_003FA134; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA130u); set32(c.r[4], ld32((c.r[16].w[0] + 2212u)));  if (depth < kMaxDepth) unit_00BD(c, 145u, depth + 1u); else { c.pc = 0x003F6958u; return; } if (c.pc != 0x003FA130u) [[unlikely]] return; }
L_003FA130:
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 1;
L_003FA134:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] - 22720u);  if (t) { goto L_003FA164; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] - 22720u);  if (t) { goto L_003FA164; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = ld32((c.r[2].w[0] - 716u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[19].w[0] - 22720u);  if (t) { goto L_003FA16C; } }
L_003FA164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA16Cu); set32(c.r[4], ld32((c.r[2].w[0] + 2212u)));  if (depth < kMaxDepth) unit_00BE(c, 299u, depth + 1u); else { c.pc = 0x003FB4E0u; return; } if (c.pc != 0x003FA16Cu) [[unlikely]] return; }
L_003FA16C:
    set32(c.r[3], c.r[19].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 344u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 220u)));  goto L_003FA18C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA184u); set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));  if (depth < kMaxDepth) unit_00BB(c, 29u, depth + 1u); else { c.pc = 0x003EC4E8u; return; } if (c.pc != 0x003FA184u) [[unlikely]] return; }
L_003FA184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003FA1A0; } }
L_003FA18C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003FA1A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA19Cu); set32(c.r[4], ld32((c.r[3].w[0] + 2188u)));  if (depth < kMaxDepth) unit_00BB(c, 29u, depth + 1u); else { c.pc = 0x003EC4E8u; return; } if (c.pc != 0x003FA19Cu) [[unlikely]] return; }
L_003FA19C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003FA1A0:
    set32(c.r[17], 0u + 27u);
    set32(c.r[18], c.r[2].w[0] - 22720u);
    set32(c.r[16], c.r[18].w[0] + 220u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 4;
L_003FA1B0:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 2188u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 2212u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA1CCu); set32(c.r[17], c.r[17].w[0] - 1u);  if (depth < kMaxDepth) unit_00C0(c, 22u, depth + 1u); else { c.pc = 0x00400200u; return; } if (c.pc != 0x003FA1CCu) [[unlikely]] return; }
L_003FA1CC:
    c.budget -= 2;
    if (c.r[17].sd[0] >= 0) { set32(c.r[5], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA1B0u | kUnwind; return; } goto L_003FA1B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA1DCu);  if (depth < kMaxDepth) unit_00BC(c, 84u, depth + 1u); else { c.pc = 0x003F2358u; return; } if (c.pc != 0x003FA1DCu) [[unlikely]] return; }
L_003FA1DC:
    set32(c.r[3], c.r[19].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 216u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[19].w[0] - 22720u);  if (t) { goto L_003FA234; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 468u)));  goto L_003FA238; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 2324u));
    c.f[0] = ld32((c.r[2].w[0] - 716u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003FA220; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 392u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003FA234; } }
L_003FA220:
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    set32(c.r[5], ld32((c.r[2].w[0] - 17204u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA230u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 78u, depth + 1u); else { c.pc = 0x003F21D0u; return; } if (c.pc != 0x003FA230u) [[unlikely]] return; }
L_003FA230:
    set32(c.r[4], c.r[19].w[0] - 22720u);
    c.budget -= 1;
L_003FA234:
    set32(c.r[2], ld32((c.r[4].w[0] + 468u)));
    c.budget -= 1;
L_003FA238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003FA26C; } }
    set32(c.r[5], c.r[2].w[0] - 20104u);
    set32(c.r[3], ld32((c.r[5].w[0] + 712u)));
    c.budget -= 4;
    if (c.r[3].sd[0] > 0) { set32(c.r[4], ld32((c.r[4].w[0] + 2192u)));  goto L_003FA260; }
    set32(c.r[2], ld32((c.r[5].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[17], c.r[19].w[0] - 22720u);  if (t) { goto L_003FA270; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 2192u)));
    c.budget -= 1;
L_003FA260:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA26Cu); set32(c.r[5], ld32((c.r[5].w[0] + 2904u)));  if (depth < kMaxDepth) unit_00BC(c, 78u, depth + 1u); else { c.pc = 0x003F21D0u; return; } if (c.pc != 0x003FA26Cu) [[unlikely]] return; }
L_003FA26C:
    set32(c.r[17], c.r[19].w[0] - 22720u);
    c.budget -= 1;
L_003FA270:
    set32(c.r[2], ld32((c.r[17].w[0] + 340u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[21].w[0] - 20208u);  if (t) { goto L_003FA2D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA284u);  if (depth < kMaxDepth) unit_00BC(c, 8u, depth + 1u); else { c.pc = 0x003F1508u; return; } if (c.pc != 0x003FA284u) [[unlikely]] return; }
L_003FA284:
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA294u); set32(c.r[5], c.r[5].w[0] - 928u);  if (depth < kMaxDepth) unit_00BC(c, 38u, depth + 1u); else { c.pc = 0x003F1C10u; return; } if (c.pc != 0x003FA294u) [[unlikely]] return; }
L_003FA294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA29Cu); set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));  if (depth < kMaxDepth) unit_00B8(c, 126u, depth + 1u); else { c.pc = 0x003E15D0u; return; } if (c.pc != 0x003FA29Cu) [[unlikely]] return; }
L_003FA29C:
    set32(c.r[11], ld32((c.r[17].w[0] + 504u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    set32(c.r[5], c.r[5].w[0] - 920u);
    set32(c.r[11], c.r[11].w[0] - 1u);
    set32(c.r[10], ld32((c.r[17].w[0] + 2200u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[6], 0u + 16u);
    set32(c.r[2], c.r[11].w[0] + 12u);
    set32(c.r[7], 0u + 16u);
    set32(c.r[11], c.r[11].w[0] + 8u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[8], 0u + 24u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA2D8u); set32(c.r[9], 0u + 64u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FA2D8u) [[unlikely]] return; }
L_003FA2D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA2E0u); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FA2E0u) [[unlikely]] return; }
L_003FA2E0:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[20].d[0]) { ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);  goto L_003FA31C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA2F8u); set32(c.r[16], c.r[16].w[0] - 792u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FA2F8u) [[unlikely]] return; }
L_003FA2F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 2192u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA308u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FA308u) [[unlikely]] return; }
L_003FA308:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA318u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003FA318u) [[unlikely]] return; }
L_003FA318:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003FA31C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003FA340:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[23].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[30].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[6].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[10].w[0]);
    c.budget -= 25;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 20u), c.r[11].w[0]);  if (t) { goto L_003FA470; } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FA470; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[17].d[0] = c.r[17].d[0] | 512ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
L_003FA3C0:
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003FA3DC; } }
    set32(c.r[3], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 2344u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 52u), 0u);  goto L_003FA458; }
L_003FA3DC:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_003FA400; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA3F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 439u, depth + 1u); else { c.pc = 0x004035B8u; return; } if (c.pc != 0x003FA3F0u) [[unlikely]] return; }
L_003FA3F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_003FA400; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), 0u);  if (t) { goto L_003FA458; } }
L_003FA400:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA40Cu); st32((c.r[16].w[0] + 52u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FA40Cu) [[unlikely]] return; }
L_003FA40C:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[21], c.r[21].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & c.r[17].d[0];  if (t) { goto L_003FA434; } }
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[3], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[17].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[20].d[0] = c.r[3].d[0];  if (t) { goto L_003FA440; } }
L_003FA434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA43Cu); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FA43Cu) [[unlikely]] return; }
L_003FA43C:
    set32(c.r[30], c.r[30].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_003FA440:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_003FA45C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA454u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FA454u) [[unlikely]] return; }
L_003FA454:
    set32(c.r[23], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_003FA458:
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_003FA45C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003FA470; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA3C0u | kUnwind; return; } goto L_003FA3C0; }
L_003FA470:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003FA53C; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { goto L_003FA53C; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[17].d[0] = c.r[17].d[0] | 512ull;
    c.budget -= 3;
L_003FA490:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003FA4B0; } }
    set32(c.r[3], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 2344u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 52u), 0u);  goto L_003FA52C; }
L_003FA4B0:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_003FA4D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA4C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 439u, depth + 1u); else { c.pc = 0x004035B8u; return; } if (c.pc != 0x003FA4C4u) [[unlikely]] return; }
L_003FA4C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_003FA4D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), 0u);  if (t) { goto L_003FA52C; } }
L_003FA4D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA4E0u); st32((c.r[16].w[0] + 52u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FA4E0u) [[unlikely]] return; }
L_003FA4E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[21], c.r[21].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & c.r[17].d[0];  if (t) { goto L_003FA508; } }
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[3], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[17].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[20].d[0] = c.r[3].d[0];  if (t) { goto L_003FA514; } }
L_003FA508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA510u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FA510u) [[unlikely]] return; }
L_003FA510:
    set32(c.r[30], c.r[30].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_003FA514:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[18].w[0])));  goto L_003FA530; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA528u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FA528u) [[unlikely]] return; }
L_003FA528:
    set32(c.r[23], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_003FA52C:
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003FA530:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA490u | kUnwind; return; } goto L_003FA490; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003FA53C:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[3].w[0] - 22720u);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    set32(c.r[3], ld32((c.r[2].w[0] + 2392u)));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 2392u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[19].w[0]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    st32((c.r[3].w[0]), c.r[22].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    st32((c.r[2].w[0]), c.r[21].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[3].w[0]), c.r[30].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    st32((c.r[2].w[0]), c.r[23].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st32((c.r[2].w[0]), c.r[20].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003FA5B0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[16].w[0] - 22720u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 208u), c.f[20]);
    set32(c.r[4], ld32((c.r[16].w[0] + 2208u)));
    st32((c.r[29].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 4u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA60Cu); st32((c.r[29].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003FA60Cu) [[unlikely]] return; }
L_003FA60C:
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[3], c.r[29].w[0] + 12u);
    st32((c.r[29].w[0] + 36u), c.r[4].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 2428u)));
    set32(c.r[19], c.r[3].w[0] - 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 20u), 0u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 15;
    { const bool t = c.r[19].sd[0] <= 0; set32(c.r[22], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_003FA690; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
L_003FA658:
    set32(c.r[3], ld32((c.r[23].w[0] + 8u)));
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[4], ld32((c.r[30].w[0] + 8u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[6].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[7].w[0]), c.f[0]);
    c.budget -= 14;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA658u | kUnwind; return; } goto L_003FA658; } }
L_003FA690:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;  if (t) { goto L_003FA6F4; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { goto L_003FA6F4; } }
    c.budget -= 1;
L_003FA6A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_003FA6C0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_003FA6E4; } }
L_003FA6C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  goto L_003FA6DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA6D4u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_00BE(c, 119u, depth + 1u); else { c.pc = 0x003F9700u; return; } if (c.pc != 0x003FA6D4u) [[unlikely]] return; }
L_003FA6D4:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 2;
L_003FA6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA6E4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003FA6E4u) [[unlikely]] return; }
L_003FA6E4:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA6A8u | kUnwind; return; } goto L_003FA6A8; } }
    c.r[2].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003FA6F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003FA75C; } }
    set32(c.r[2], c.r[3].w[0] - 22720u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA708u); set32(c.r[4], ld32((c.r[2].w[0] + 2208u)));  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003FA708u) [[unlikely]] return; }
L_003FA708:
    set32(c.r[16], c.r[29].w[0] + 4u);
    set32(c.r[5], ld32((c.r[23].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA71Cu); st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003FA71Cu) [[unlikely]] return; }
L_003FA71C:
    set32(c.r[4], ld32((c.r[29].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FA730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA730u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003FA730u) [[unlikely]] return; }
L_003FA730:
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA748u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 182u, depth + 1u); else { c.pc = 0x003F7348u; return; } if (c.pc != 0x003FA748u) [[unlikely]] return; }
L_003FA748:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA754u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 210u, depth + 1u); else { c.pc = 0x003EE538u; return; } if (c.pc != 0x003FA754u) [[unlikely]] return; }
L_003FA754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003FA7AC; } }
L_003FA75C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[19].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FA784; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003FA778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA778u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003FA778u) [[unlikely]] return; }
L_003FA778:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003FA7A8; } }
L_003FA784:
    set32(c.r[2], c.r[3].w[0] - 22720u);
    set32(c.r[5], c.r[5].w[0] - 712u);
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA798u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FA798u) [[unlikely]] return; }
L_003FA798:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA7A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003FA7A8u) [[unlikely]] return; }
L_003FA7A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_003FA7AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], c.r[4].w[0] - 22720u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[3].w[0] + 2428u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 8u), 0u);  if (t) { goto L_003FA878; } }
    set32(c.r[16], c.r[2].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 8u), c.r[17].w[0]);  if (t) { goto L_003FA878; } }
    c.r[21].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_003FA7D8:
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003FA808; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[21].w[0] + 2192u)));
    set32(c.r[5], c.r[2].w[0] - 648u);
    set32(c.r[6], c.r[29].w[0] + 8u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA804u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 134u, depth + 1u); else { c.pc = 0x003F9920u; return; } if (c.pc != 0x003FA804u) [[unlikely]] return; }
L_003FA804:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 1;
L_003FA808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; set32(c.r[5], c.r[16].w[0] + 4u);  if (t) { goto L_003FA864; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 2432u)));
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[19].w[0] - 1u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; st32((c.r[2].w[0]), c.r[18].w[0]);  if (t) { goto L_003FA864; } }
    c.budget -= 1;
L_003FA838:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA838u | kUnwind; return; } goto L_003FA838; } }
L_003FA864:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA7D8u | kUnwind; return; } goto L_003FA7D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003FA878:
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[16], c.r[4].w[0] - 22720u);
    set32(c.r[10], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 2432u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 2432u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA8ACu); set32(c.r[9], ld32((c.r[29].w[0] + 32u)));  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F57F0u; return; } if (c.pc != 0x003FA8ACu) [[unlikely]] return; }
L_003FA8AC:
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[30].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[23].w[0] + 8u)));  goto L_003FA8BC; }
L_003FA8BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], c.r[2].w[0] - 20104u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA8E0u); st32((c.r[3].w[0] + 204u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BE(c, 112u, depth + 1u); else { c.pc = 0x003F95B8u; return; } if (c.pc != 0x003FA8E0u) [[unlikely]] return; }
L_003FA8E0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = ld32((c.r[29].w[0] + 12u));  if (t) { goto L_003FA92C; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] - 1u);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 12u), c.f[0]);  if (t) { goto L_003FA92C; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003FA910:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA910u | kUnwind; return; } goto L_003FA910; } }
L_003FA92C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[16], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[16].w[0] + 468u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FA94C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 340u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = ld32((c.r[29].w[0] + 12u));  if (t) { goto L_003FABCC; } }
L_003FA94C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA954u); set32(c.r[4], ld32((c.r[23].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003FA954u) [[unlikely]] return; }
L_003FA954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA95Cu); set32(c.r[4], ld32((c.r[30].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003FA95Cu) [[unlikely]] return; }
L_003FA95C:
    set32(c.r[4], ld32((c.r[29].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003FAAF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[16], c.r[2].w[0] - 20104u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA990u); st32((c.r[16].w[0] + 212u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BE(c, 112u, depth + 1u); else { c.pc = 0x003F95B8u; return; } if (c.pc != 0x003FA990u) [[unlikely]] return; }
L_003FA990:
    c.f[1] = 0u;
    c.f[2] = c.f[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = c.f[2] ^ fp::kSign;  goto L_003FA9A8; }
L_003FA9A8:
    c.f[0] = ld32((c.r[16].w[0] + 744u));
    set32(c.r[2], ld32((c.r[16].w[0] + 736u)));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 736u), c.r[2].w[0]);  if (t) { goto L_003FA9C4; } }
    st32((c.r[16].w[0] + 744u), c.f[2]);
    c.budget -= 1;
L_003FA9C4:
    c.f[0] = ld32((c.r[16].w[0] + 740u));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[29].w[0] + 20u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 6;
    { const bool t = c.r[19].sd[0] <= 0; st32((c.r[16].w[0] + 740u), c.f[0]);  if (t) { goto L_003FAA14; } }
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_003FA9E0:
    set32(c.r[3], ld32((c.r[30].w[0] + 8u)));
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[4], ld32((c.r[23].w[0] + 8u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[6].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[7].w[0]), c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA9E0u | kUnwind; return; } goto L_003FA9E0; } }
L_003FAA14:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAA24u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 77u, depth + 1u); else { c.pc = 0x003F56E0u; return; } if (c.pc != 0x003FAA24u) [[unlikely]] return; }
L_003FAA24:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAA38u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 112u, depth + 1u); else { c.pc = 0x003F95B8u; return; } if (c.pc != 0x003FAA38u) [[unlikely]] return; }
L_003FAA38:
    c.f[1] = 0u;
    c.f[2] = c.f[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FAA60; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[2] = fp::add(c.f[2], c.f[0]);  if (t) { goto L_003FAA70; } }
L_003FAA60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 4;
L_003FAA70:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = fp::sub(c.f[2], c.f[2]);  goto L_003FAA88; }
L_003FAA88:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003FAAC4; } }
    set32(c.r[3], c.r[4].w[0] - 20104u);
    c.f[0] = ld32((c.r[3].w[0] + 732u));
    set32(c.r[2], ld32((c.r[3].w[0] + 724u)));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0] + 724u), c.r[2].w[0]);  if (t) { goto L_003FAAB4; } }
    st32((c.r[3].w[0] + 732u), c.f[2]);
    c.budget -= 1;
L_003FAAB4:
    c.f[0] = ld32((c.r[3].w[0] + 728u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 728u), c.f[0]);  if (t) { goto L_003FAAF4; } }
L_003FAAC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], c.r[2].w[0] - 20104u);
    c.f[0] = ld32((c.r[3].w[0] + 756u));
    set32(c.r[2], ld32((c.r[3].w[0] + 748u)));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0] + 748u), c.r[2].w[0]);  if (t) { goto L_003FAAE8; } }
    st32((c.r[3].w[0] + 756u), c.f[2]);
    c.budget -= 1;
L_003FAAE8:
    c.f[0] = ld32((c.r[3].w[0] + 752u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 752u), c.f[0]);
    c.budget -= 3;
L_003FAAF4:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_003FAAF8:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; c.f[0] = ld32((c.r[29].w[0] + 12u));  if (t) { goto L_003FABCC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 8u), 0u);  if (t) { goto L_003FABC8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAB1Cu); st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FAB1Cu) [[unlikely]] return; }
L_003FAB1C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] <= 0; c.f[0] = ld32((c.r[29].w[0] + 12u));  if (t) { goto L_003FABCC; } }
    c.f[20] = 0u;
    c.budget -= 2;
L_003FAB30:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAB3Cu); set32(c.r[5], ld32((c.r[29].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BB(c, 238u, depth + 1u); else { c.pc = 0x003EEA80u; return; } if (c.pc != 0x003FAB3Cu) [[unlikely]] return; }
L_003FAB3C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_003FABAC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[16], c.r[3].w[0] - 20104u);
    set32(c.r[7], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAB6Cu); st32((c.r[16].w[0] + 212u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BE(c, 112u, depth + 1u); else { c.pc = 0x003F95B8u; return; } if (c.pc != 0x003FAB6Cu) [[unlikely]] return; }
L_003FAB6C:
    c.f[2] = c.f[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[20]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = c.f[2] ^ fp::kSign;  goto L_003FAB80; }
L_003FAB80:
    c.f[0] = ld32((c.r[16].w[0] + 720u));
    set32(c.r[2], ld32((c.r[16].w[0] + 712u)));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.r[2].w[0]);  if (t) { goto L_003FAB9C; } }
    st32((c.r[16].w[0] + 720u), c.f[2]);
    c.budget -= 1;
L_003FAB9C:
    c.f[0] = ld32((c.r[16].w[0] + 716u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 716u), c.f[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 4;
L_003FABAC:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[17].w[0] << 2);
    c.r[5].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FAB30u | kUnwind; return; } goto L_003FAB30; } }
L_003FABC8:
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    c.budget -= 1;
L_003FABCC:
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[4].w[0]), c.f[0]);  if (t) { goto L_003FABE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FABE8u); c.r[4].d[0] = c.r[29].d[0] | 4ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003FABE8u) [[unlikely]] return; }
L_003FABE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FABF0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003FABF0u) [[unlikely]] return; }
L_003FABF0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
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
    c.f[20] = ld32((c.r[29].w[0] + 208u));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003FAC28:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    set32(c.r[16], c.r[16].w[0] - 22720u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[20], 0u + 1u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAC70u); set32(c.r[4], ld32((c.r[16].w[0] + 2208u)));  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003FAC70u) [[unlikely]] return; }
L_003FAC70:
    set32(c.r[4], ld32((c.r[16].w[0] + 2208u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAC7Cu); st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003FAC7Cu) [[unlikely]] return; }
L_003FAC7C:
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_003FACBC; } }
    set32(c.r[16], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 8u);  if (t) { goto L_003FACBC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.budget -= 3;
L_003FACA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FACA0u | kUnwind; return; } goto L_003FACA0; } }
L_003FACBC:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003FACF0; } }
    set32(c.r[17], c.r[2].w[0] + 4u);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_003FACD0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_003FACF0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FACD0u | kUnwind; return; } goto L_003FACD0; }
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003FACF0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] - 22720u);  if (t) { goto L_003FADC0; } }
L_003FACF8:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[3].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 40u)));  goto L_003FAD64; }
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 512ull;  if (t) { goto L_003FAD4C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 4u);  if (t) { goto L_003FAD3C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAD34u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 273u, depth + 1u); else { c.pc = 0x003EEFA0u; return; } if (c.pc != 0x003FAD34u) [[unlikely]] return; }
L_003FAD34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 4u);  if (t) { goto L_003FAD60; } }
L_003FAD3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAD44u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003FAD44u) [[unlikely]] return; }
L_003FAD44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 40u)));  if (t) { goto L_003FAD64; } }
L_003FAD4C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 4u);  if (t) { goto L_003FAD60; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAD60u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003FAD60u) [[unlikely]] return; }
L_003FAD60:
    set32(c.r[5], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 1;
L_003FAD64:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003FADB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[5].w[0] + 4u);  if (t) { goto L_003FAD80; } }
    c.budget -= 1;
L_003FAD78:
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_003FAD80:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003FAD84:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_003FADB4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FAD84u | kUnwind; return; } goto L_003FAD84; }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FADACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 238u, depth + 1u); else { c.pc = 0x003EEA80u; return; } if (c.pc != 0x003FADACu) [[unlikely]] return; }
L_003FADAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FAD78u | kUnwind; return; } goto L_003FAD78; }
L_003FADB4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FACF8u | kUnwind; return; } goto L_003FACF8; } }
    set32(c.r[2], c.r[22].w[0] - 22720u);
    c.budget -= 1;
L_003FADC0:
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 12u)));  goto L_003FAE34; }
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 12u)));  goto L_003FAE34; }
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[5].w[0] + 8u);  if (t) { goto L_003FAE30; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003FADE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0])));  goto L_003FAE28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAE00u); set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003FAE00u) [[unlikely]] return; }
L_003FAE00:
    set32(c.r[7], ld32((c.r[16].w[0] + 56u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAE14u); set32(c.r[5], c.r[18].w[0] - 608u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FAE14u) [[unlikely]] return; }
L_003FAE14:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAE24u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003FAE24u) [[unlikely]] return; }
L_003FAE24:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003FAE28:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FADE8u | kUnwind; return; } goto L_003FADE8; } }
L_003FAE30:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 1;
L_003FAE34:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FAE64; } }
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[4].w[0] + 8u);  if (t) { goto L_003FAE64; } }
L_003FAE48:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FAE48u | kUnwind; return; } goto L_003FAE48; } }
L_003FAE64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAE6Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003FAE6Cu) [[unlikely]] return; }
L_003FAE6C:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003FAE98:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st32((c.r[29].w[0] + 24u), c.r[6].w[0]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 2208u)));
    st32((c.r[29].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 28u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[9].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAEF0u); st32((c.r[29].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003FAEF0u) [[unlikely]] return; }
L_003FAEF0:
    set32(c.r[3], ld32((c.r[17].w[0] + 2396u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 2264u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 2396u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[3].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_003FAF60; } }
    set32(c.r[17], ld32((c.r[17].w[0] + 2252u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 24u)));  if (t) { goto L_003FAF64; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  goto L_003FAF68; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
L_003FAF40:
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 24u)));  if (t) { goto L_003FAF64; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FAF40u | kUnwind; return; } goto L_003FAF40; }
L_003FAF60:
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 1;
L_003FAF64:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_003FAF68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FB294; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[21], c.r[2].w[0] + 8u);  if (t) { goto L_003FAFA8; } }
    c.budget -= 1;
L_003FAF80:
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0])));  goto L_003FAFA0; }
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.budget -= 4;
L_003FAFA0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FAF80u | kUnwind; return; } goto L_003FAF80; } }
L_003FAFA8:
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FB294; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[21], c.r[2].w[0] + 8u);  if (t) { goto L_003FB254; } }
    c.budget -= 1;
L_003FAFC8:
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[21].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 44u), c.r[4].w[0]);  if (t) { goto L_003FB248; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0])));  goto L_003FB24C; }
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[30], c.r[2].w[0] + 8u);  if (t) { goto L_003FB248; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[23], c.r[2].w[0] - 22720u);
    c.budget -= 3;
L_003FB000:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[30].w[0] + 4u);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[23].w[0] + 2396u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);  if (t) { goto L_003FB23C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[30].w[0])));  goto L_003FB240; }
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[6].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB03Cu); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 162u, depth + 1u); else { c.pc = 0x003EDB50u; return; } if (c.pc != 0x003FB03Cu) [[unlikely]] return; }
L_003FB03C:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_003FB0B4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 8u);  if (t) { goto L_003FB0B4; } }
    c.budget -= 1;
L_003FB058:
    set32(c.r[4], ld32((c.r[3].w[0] + 60u)));
    c.r[2].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_003FB0AC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] & 512ull;  if (t) { goto L_003FB098; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_003FB0A8; }
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB088u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 273u, depth + 1u); else { c.pc = 0x003EEFA0u; return; } if (c.pc != 0x003FB088u) [[unlikely]] return; }
L_003FB088:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_003FB0AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_003FB0A8; } }
L_003FB098:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_003FB0AC; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003FB0A8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003FB0AC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB058u | kUnwind; return; } goto L_003FB058; } }
L_003FB0B4:
    set32(c.r[2], ld32((c.r[23].w[0] + 504u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[30].w[0])));  goto L_003FB240; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 28u)));  if (t) { goto L_003FB0E4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[17], ld32((c.r[30].w[0])));  goto L_003FB240; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 36u), 0u);  if (t) { goto L_003FB0F8; } }
L_003FB0E4:
    set32(c.r[3], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[17], ld32((c.r[30].w[0])));  goto L_003FB240; }
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 1;
L_003FB0F8:
    set32(c.r[4], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 40u), c.r[4].w[0]);  if (t) { goto L_003FB23C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003FB13C; } }
    set32(c.r[3], ld32((c.r[23].w[0] + 504u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[23].w[0] + 2208u)));  goto L_003FB140; }
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB130u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 244u, depth + 1u); else { c.pc = 0x003FAC28u; return; } if (c.pc != 0x003FB130u) [[unlikely]] return; }
L_003FB130:
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[29].w[0] + 12u);  if (t) { goto L_003FB218; } }
L_003FB13C:
    set32(c.r[4], ld32((c.r[23].w[0] + 2208u)));
    c.budget -= 1;
L_003FB140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB148u); set32(c.r[22], 0u + 1u);  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003FB148u) [[unlikely]] return; }
L_003FB148:
    set32(c.r[4], ld32((c.r[23].w[0] + 2208u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB154u); st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003FB154u) [[unlikely]] return; }
L_003FB154:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[19], c.r[29].w[0] + 4u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[20], c.r[29].w[0] + 12u);  if (t) { goto L_003FB1E0; } }
    set32(c.r[16], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], c.r[3].w[0] + 8u);  if (t) { goto L_003FB1E0; } }
    c.budget -= 1;
L_003FB178:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[18].w[0])));  goto L_003FB1D8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 512ull;  if (t) { goto L_003FB1C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FB1B0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB1A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 273u, depth + 1u); else { c.pc = 0x003EEFA0u; return; } if (c.pc != 0x003FB1A8u) [[unlikely]] return; }
L_003FB1A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FB1D4; } }
L_003FB1B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB1B8u); set32(c.r[4], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003FB1B8u) [[unlikely]] return; }
L_003FB1B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0])));  if (t) { goto L_003FB1D8; } }
L_003FB1C0:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FB1D4; } }
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB1D4u); set32(c.r[4], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003FB1D4u) [[unlikely]] return; }
L_003FB1D4:
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003FB1D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB178u | kUnwind; return; } goto L_003FB178; } }
L_003FB1E0:
    set32(c.r[16], ld32((c.r[29].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB1F0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FB1F0u) [[unlikely]] return; }
L_003FB1F0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB208u); set32(c.r[7], c.r[2].w[0] + 9832u);  if (depth < kMaxDepth) unit_00DD(c, 258u, depth + 1u); else { c.pc = 0x00476E00u; return; } if (c.pc != 0x003FB208u) [[unlikely]] return; }
L_003FB208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB210u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003FB210u) [[unlikely]] return; }
L_003FB210:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_003FB218:
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB234u); set32(c.r[5], ld32((c.r[29].w[0] + 24u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FB234u) [[unlikely]] return; }
L_003FB234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB23Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003FB23Cu) [[unlikely]] return; }
L_003FB23C:
    set32(c.r[17], ld32((c.r[30].w[0])));
    c.budget -= 1;
L_003FB240:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[30], ld32((c.r[29].w[0] + 48u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB000u | kUnwind; return; } goto L_003FB000; } }
L_003FB248:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_003FB24C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], ld32((c.r[29].w[0] + 44u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FAFC8u | kUnwind; return; } goto L_003FAFC8; } }
L_003FB254:
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FB294; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[21], c.r[4].w[0] + 8u);  if (t) { goto L_003FB294; } }
    set32(c.r[4], 0u - 16385u);
    c.budget -= 2;
L_003FB278:
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB278u | kUnwind; return; } goto L_003FB278; } }
L_003FB294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB29Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003FB29Cu) [[unlikely]] return; }
L_003FB29C:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003FB2D0:
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 2;
L_003FB2D8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 2396u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 2212u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 20;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st32((c.r[17].w[0] + 2396u), c.r[3].w[0]);  if (t) { goto L_003FB390; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] - 22720u);  if (t) { goto L_003FB394; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_003FB394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB340u); set32(c.r[4], ld32((c.r[17].w[0] + 2268u)));  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003FB340u) [[unlikely]] return; }
L_003FB340:
    set32(c.r[16], ld32((c.r[17].w[0] + 2252u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_003FB430; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FB430; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 2396u)));
    c.budget -= 2;
L_003FB360:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB370u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003FB370u) [[unlikely]] return; }
L_003FB370:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003FB430; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 2396u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB360u | kUnwind; return; } goto L_003FB360; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB430; } }
L_003FB390:
    set32(c.r[2], c.r[19].w[0] - 22720u);
    c.budget -= 1;
L_003FB394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB39Cu); set32(c.r[4], ld32((c.r[2].w[0] + 2208u)));  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003FB39Cu) [[unlikely]] return; }
L_003FB39C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_003FB430; } }
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FB430; } }
    c.r[22].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003FB3B8:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 32u)));  goto L_003FB3D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB3C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 439u, depth + 1u); else { c.pc = 0x004035B8u; return; } if (c.pc != 0x003FB3C8u) [[unlikely]] return; }
L_003FB3C8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[18].w[0] + 28u)));  goto L_003FB41C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 1;
L_003FB3D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[18].w[0] + 28u)));  goto L_003FB41C; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { goto L_003FB418; } }
    set32(c.r[19], c.r[22].w[0] - 22720u);
    c.budget -= 2;
L_003FB3F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 2396u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FB40C; } }
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB40Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003FB40Cu) [[unlikely]] return; }
L_003FB40C:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB3F0u | kUnwind; return; } goto L_003FB3F0; } }
L_003FB418:
    set32(c.r[18], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_003FB41C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003FB430; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB3B8u | kUnwind; return; } goto L_003FB3B8; } }
L_003FB430:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003FB4B8; } }
    set32(c.r[18], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[19], c.r[20].w[0] + 8u);  if (t) { goto L_003FB4B8; } }
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003FB448:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 32u)));  goto L_003FB468; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB45Cu); set32(c.r[20], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_00C0(c, 439u, depth + 1u); else { c.pc = 0x004035B8u; return; } if (c.pc != 0x003FB45Cu) [[unlikely]] return; }
L_003FB45C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[19].w[0])));  goto L_003FB4AC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 1;
L_003FB468:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[20], c.r[19].w[0] + 4u);  if (t) { goto L_003FB4A8; } }
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[4].w[0] + 8u);  if (t) { goto L_003FB4A8; } }
    set32(c.r[18], c.r[22].w[0] - 22720u);
    c.budget -= 1;
L_003FB480:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 2396u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FB49C; } }
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB49Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003FB49Cu) [[unlikely]] return; }
L_003FB49C:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB480u | kUnwind; return; } goto L_003FB480; } }
L_003FB4A8:
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_003FB4AC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[19].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB448u | kUnwind; return; } goto L_003FB448; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003FB4B8:
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
L_003FB4E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB51Cu); set32(c.r[4], ld32((c.r[2].w[0] + 2264u)));  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003FB51Cu) [[unlikely]] return; }
L_003FB51C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_003FB570; } }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_003FB570; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[17].d[0] = c.r[17].d[0] | 2048ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
L_003FB540:
    c.r[2].d[0] = c.r[2].d[0] & c.r[17].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_003FB55C; }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB558u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003FB558u) [[unlikely]] return; }
L_003FB558:
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_003FB55C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_003FB574; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB540u | kUnwind; return; } goto L_003FB540; }
L_003FB570:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003FB574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB57Cu); set32(c.r[16], c.r[20].w[0] - 22720u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FB57Cu) [[unlikely]] return; }
L_003FB57C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_003FB5E8; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[7], c.r[7].w[0] + 9696u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB5A4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00DD(c, 258u, depth + 1u); else { c.pc = 0x00476E00u; return; } if (c.pc != 0x003FB5A4u) [[unlikely]] return; }
L_003FB5A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[4], c.r[17].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003FB5E8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[20].w[0] - 22720u);  if (t) { goto L_003FB5EC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    set32(c.r[3], c.r[2].w[0] + 4u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.budget -= 3;
L_003FB5C8:
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { goto L_003FB5E8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB5C8u | kUnwind; return; } goto L_003FB5C8; } }
L_003FB5E8:
    set32(c.r[16], c.r[20].w[0] - 22720u);
    c.budget -= 1;
L_003FB5EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_003FB658; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[7], c.r[7].w[0] + 9800u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB610u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00DD(c, 258u, depth + 1u); else { c.pc = 0x00476E00u; return; } if (c.pc != 0x003FB610u) [[unlikely]] return; }
L_003FB610:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[17].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003FB658; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[20].w[0] - 22720u);  goto L_003FB65C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    set32(c.r[3], c.r[2].w[0] + 4u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.budget -= 4;
L_003FB638:
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { goto L_003FB658; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB638u | kUnwind; return; } goto L_003FB638; } }
L_003FB658:
    set32(c.r[4], c.r[20].w[0] - 22720u);
    c.budget -= 1;
L_003FB65C:
    c.f[1] = ld32((c.r[21].w[0] - 536u));
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003FB6D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FB6D0; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] + 8u);  if (t) { goto L_003FB6D0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.budget -= 4;
L_003FB698:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] & c.r[5].d[0];  if (t) { goto L_003FB6C0; } }
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = ld32((c.r[7].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[16], ld32((c.r[3].w[0])));  goto L_003FB6C8; }
L_003FB6C0:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_003FB6C8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB698u | kUnwind; return; } goto L_003FB698; } }
L_003FB6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB6D8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003FB6D8u) [[unlikely]] return; }
L_003FB6D8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003FB718; } }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[20].w[0] - 22720u);  if (t) { goto L_003FB71C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 2;
L_003FB6F8:
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];  if (t) { goto L_003FB718; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB6F8u | kUnwind; return; } goto L_003FB6F8; }
L_003FB718:
    set32(c.r[2], c.r[20].w[0] - 22720u);
    c.budget -= 1;
L_003FB71C:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[2].w[0] + 2276u), c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003FB748:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    set32(c.r[16], c.r[3].w[0] - 22720u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 2376u)));
    st32((c.r[29].w[0]), c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB7A8u); st32((c.r[16].w[0] + 2376u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 131u, depth + 1u); else { c.pc = 0x003E95D0u; return; } if (c.pc != 0x003FB7A8u) [[unlikely]] return; }
L_003FB7A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB7B0u);  if (depth < kMaxDepth) unit_00BA(c, 116u, depth + 1u); else { c.pc = 0x003E93B0u; return; } if (c.pc != 0x003FB7B0u) [[unlikely]] return; }
L_003FB7B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB7B8u);  if (depth < kMaxDepth) unit_00BA(c, 20u, depth + 1u); else { c.pc = 0x003E8268u; return; } if (c.pc != 0x003FB7B8u) [[unlikely]] return; }
L_003FB7B8:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 2392u)));  goto L_003FB7E0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 512u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 2392u)));
    c.budget -= 6;
L_003FB7E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 2264u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 2392u), c.r[2].w[0]);  if (t) { goto L_003FB7F8; } }
    st32((c.r[16].w[0] + 2392u), c.r[4].w[0]);
    c.budget -= 1;
L_003FB7F8:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[16].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003FB848; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 2;
L_003FB808:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003FB848; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FB848; } }
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_003FB838; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB82Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 439u, depth + 1u); else { c.pc = 0x004035B8u; return; } if (c.pc != 0x003FB82Cu) [[unlikely]] return; }
L_003FB82C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB808u | kUnwind; return; } goto L_003FB808; }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_003FB838:
    c.r[2].d[0] = c.r[2].d[0] & c.r[17].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB808u | kUnwind; return; } goto L_003FB808; }
    set32(c.r[21], 0u + 1u);
    c.budget -= 1;
L_003FB848:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003FB898; } }
    set32(c.r[17], c.r[20].w[0] + 4u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 4;
L_003FB860:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_003FB894; } }
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_003FB884; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB878u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 439u, depth + 1u); else { c.pc = 0x004035B8u; return; } if (c.pc != 0x003FB878u) [[unlikely]] return; }
L_003FB878:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB860u | kUnwind; return; } goto L_003FB860; }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_003FB884:
    c.r[2].d[0] = c.r[2].d[0] & c.r[18].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB860u | kUnwind; return; } goto L_003FB860; }
    set32(c.r[21], 0u + 1u);
    c.budget -= 1;
L_003FB894:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003FB898:
    set32(c.r[3], c.r[2].w[0] - 22720u);
    set32(c.r[16], ld32((c.r[3].w[0] + 2212u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003FB910; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FB910; } }
    set32(c.r[4], 0u - 16385u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
L_003FB8C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 2392u)));  goto L_003FB8E4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] >> 17);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[21].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 2392u)));  goto L_003FB8E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), 0u);  if (t) { goto L_003FB8E8; } }
L_003FB8E4:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_003FB8E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003FB910; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB8C0u | kUnwind; return; } goto L_003FB8C0; }
L_003FB910:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_003FB960; } }
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FB960; } }
L_003FB928:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { st32((c.r[16].w[0] + 52u), c.r[18].w[0]);  goto L_003FB944; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB938u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 439u, depth + 1u); else { c.pc = 0x004035B8u; return; } if (c.pc != 0x003FB938u) [[unlikely]] return; }
L_003FB938:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_003FB94C; }
    st32((c.r[16].w[0] + 52u), c.r[18].w[0]);
    c.budget -= 1;
L_003FB944:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 2;
L_003FB94C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003FB960; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB928u | kUnwind; return; } goto L_003FB928; } }
L_003FB960:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[30].w[0]), c.r[21].w[0]);  goto L_003FB9A8; }
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[20].w[0] + 8u);  if (t) { goto L_003FB9A4; } }
    c.budget -= 1;
L_003FB978:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { st32((c.r[16].w[0] + 52u), c.r[18].w[0]);  goto L_003FB994; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB988u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 439u, depth + 1u); else { c.pc = 0x004035B8u; return; } if (c.pc != 0x003FB988u) [[unlikely]] return; }
L_003FB988:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0])));  goto L_003FB99C; }
    st32((c.r[16].w[0] + 52u), c.r[18].w[0]);
    c.budget -= 1;
L_003FB994:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_003FB99C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB978u | kUnwind; return; } goto L_003FB978; } }
L_003FB9A4:
    st32((c.r[30].w[0]), c.r[21].w[0]);
    c.budget -= 1;
L_003FB9A8:
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[29].w[0])));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st32((c.r[3].w[0]), c.r[18].w[0]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003FB9E8:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 16;
    { const bool t = c.r[7].d[0] != 0ull; st32((c.r[29].w[0] + 192u), c.f[20]);  if (t) { goto L_003FBA38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBA30u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 439u, depth + 1u); else { c.pc = 0x004035B8u; return; } if (c.pc != 0x003FBA30u) [[unlikely]] return; }
L_003FBA30:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  [[clang::musttail]] return unit_00BF(c, 30u, depth); }
L_003FBA38:
    set32(c.r[2], ld32((c.r[21].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003FBA60; } }
    set32(c.r[2], c.r[3].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[2].w[0] + 2344u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003FBA60; } }
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  [[clang::musttail]] return unit_00BF(c, 30u, depth); }
L_003FBA60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] - 22720u);
    c.r[4].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(25ll) ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 2376u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[2].w[0] + 2376u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BF(c, 29u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 256u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x003F8000u < 16384u) { entry = entries_00BE[(t - 0x003F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FBA9C:
    set32(c.r[2], ld32((c.r[21].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FBAD4; } }
    c.f[12] = ld32((c.r[21].w[0] + 16u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBABCu); set32(c.r[16], c.r[16].w[0] - 448u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FBABCu) [[unlikely]] return; }
L_003FBABC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBACCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FBACCu) [[unlikely]] return; }
L_003FBACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { [[clang::musttail]] return unit_00BF(c, 11u, depth); } }
L_003FBAD4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBAE4u); set32(c.r[5], c.r[5].w[0] - 432u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FBAE4u) [[unlikely]] return; }
L_003FBAE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { [[clang::musttail]] return unit_00BF(c, 30u, depth); } }
L_003FBAEC:
    set32(c.r[4], ld32((c.r[21].w[0] + 48u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[16].w[0] - 424u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBB00u); c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FBB00u) [[unlikely]] return; }
L_003FBB00:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBB10u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FBB10u) [[unlikely]] return; }
L_003FBB10:
    set32(c.r[4], ld32((c.r[21].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[22].d[0] + 0ull;  goto L_003FBFB0; }
    set32(c.r[17], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[18], c.r[4].w[0] + 8u);  if (t) { goto L_003FBFAC; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 2;
L_003FBB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBB38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003FBB38u) [[unlikely]] return; }
L_003FBB38:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBB48u); set32(c.r[5], c.r[16].w[0] - 416u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FBB48u) [[unlikely]] return; }
L_003FBB48:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBB30u | kUnwind; return; } goto L_003FBB30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003FBFB0; } }
L_003FBB5C:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBB68u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 323u, depth + 1u); else { c.pc = 0x004026C0u; return; } if (c.pc != 0x003FBB68u) [[unlikely]] return; }
L_003FBB68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { [[clang::musttail]] return unit_00BF(c, 30u, depth); } }
L_003FBB70:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBB7Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 361u, depth + 1u); else { c.pc = 0x003FF6B8u; return; } if (c.pc != 0x003FBB7Cu) [[unlikely]] return; }
L_003FBB7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { [[clang::musttail]] return unit_00BF(c, 30u, depth); } }
L_003FBB84:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { [[clang::musttail]] return unit_00BF(c, 29u, depth); } }
    set32(c.r[2], c.r[3].w[0] - 22720u);
    set32(c.r[16], ld32((c.r[2].w[0] + 504u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_003FBC14; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], 0u - 1u);
    c.budget -= 10;
L_003FBBD0:
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[2].w[0]), c.f[0]);  if (t) { goto L_003FBBF0; } }
    st32((c.r[2].w[0]), c.f[2]);
    c.budget -= 1;
L_003FBBF0:
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[2].w[0]), c.f[1]);  goto L_003FBC04; }
L_003FBC04:
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[4].d[0]; set32(c.r[2], c.r[2].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBBD0u | kUnwind; return; } goto L_003FBBD0; } }
L_003FBC14:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBC20u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 436u, depth + 1u); else { c.pc = 0x00403508u; return; } if (c.pc != 0x003FBC20u) [[unlikely]] return; }
L_003FBC20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[16], c.r[2].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 504u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003FBC4C; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBC4Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 17u, depth + 1u); else { c.pc = 0x003F4270u; return; } if (c.pc != 0x003FBC4Cu) [[unlikely]] return; }
L_003FBC4C:
    set32(c.r[3], ld32((c.r[16].w[0] + 504u)));
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003FBC70; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBC68u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 213u, depth + 1u); else { c.pc = 0x003FDF00u; return; } if (c.pc != 0x003FBC68u) [[unlikely]] return; }
L_003FBC68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { [[clang::musttail]] return unit_00BF(c, 30u, depth); } }
L_003FBC70:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], ld32((c.r[21].w[0] + 60u)));  if (t) { goto L_003FBCB0; } }
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003FBC9C; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBC94u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 279u, depth + 1u); else { c.pc = 0x003FE9F8u; return; } if (c.pc != 0x003FBC94u) [[unlikely]] return; }
L_003FBC94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { [[clang::musttail]] return unit_00BF(c, 30u, depth); } }
L_003FBC9C:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBCA8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 237u, depth + 1u); else { c.pc = 0x003FE3A0u; return; } if (c.pc != 0x003FBCA8u) [[unlikely]] return; }
L_003FBCA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { [[clang::musttail]] return unit_00BF(c, 30u, depth); } }
L_003FBCB0:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003FBCD0; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBCC8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 334u, depth + 1u); else { c.pc = 0x003FF248u; return; } if (c.pc != 0x003FBCC8u) [[unlikely]] return; }
L_003FBCC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { [[clang::musttail]] return unit_00BF(c, 30u, depth); } }
L_003FBCD0:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBCDCu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 317u, depth + 1u); else { c.pc = 0x003FEF60u; return; } if (c.pc != 0x003FBCDCu) [[unlikely]] return; }
L_003FBCDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { [[clang::musttail]] return unit_00BF(c, 30u, depth); } }
L_003FBCE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 56u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBCF8u); set32(c.r[5], c.r[5].w[0] - 408u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FBCF8u) [[unlikely]] return; }
L_003FBCF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { [[clang::musttail]] return unit_00BF(c, 30u, depth); } }
L_003FBD00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], c.r[3].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[2].w[0] + 504u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 60u)));  goto L_003FBD3C; }
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003FBD38; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBD30u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 341u, depth + 1u); else { c.pc = 0x004028B0u; return; } if (c.pc != 0x003FBD30u) [[unlikely]] return; }
L_003FBD30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { [[clang::musttail]] return unit_00BF(c, 30u, depth); } }
L_003FBD38:
    set32(c.r[2], ld32((c.r[21].w[0] + 60u)));
    c.budget -= 1;
L_003FBD3C:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003FBD6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[8], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[8].w[0] + 504u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 16u);  if (t) { goto L_003FBD6C; } }
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[8].w[0] + 2372u)));  goto L_003FBD80; }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_003FBD6C:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBD78u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 350u, depth + 1u); else { c.pc = 0x00402978u; return; } if (c.pc != 0x003FBD78u) [[unlikely]] return; }
L_003FBD78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { [[clang::musttail]] return unit_00BF(c, 30u, depth); } }
L_003FBD80:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBD98u); st32((c.r[8].w[0] + 2372u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 350u, depth + 1u); else { c.pc = 0x003FF518u; return; } if (c.pc != 0x003FBD98u) [[unlikely]] return; }
L_003FBD98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { [[clang::musttail]] return unit_00BF(c, 30u, depth); } }
L_003FBDA0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBDB0u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00BD(c, 215u, depth + 1u); else { c.pc = 0x003F7930u; return; } if (c.pc != 0x003FBDB0u) [[unlikely]] return; }
L_003FBDB0:
    c.f[1] = ld32((c.r[21].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 16u));  if (t) { goto L_003FBDFC; } }
L_003FBDBC:
    set32(c.r[6], ld32((c.r[21].w[0] + 60u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 408u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBDD4u); c.r[6].d[0] = c.r[6].d[0] & 511ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FBDD4u) [[unlikely]] return; }
L_003FBDD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { [[clang::musttail]] return unit_00BF(c, 30u, depth); } }
L_003FBDDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[21].w[0] + 8u));  if (t) { goto L_003FBE00; } }
L_003FBDE4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBDF4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 215u, depth + 1u); else { c.pc = 0x003F7930u; return; } if (c.pc != 0x003FBDF4u) [[unlikely]] return; }
L_003FBDF4:
    c.f[1] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    c.budget -= 2;
L_003FBDFC:
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 1;
L_003FBE00:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003FBE28; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 56u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBE20u); set32(c.r[5], c.r[5].w[0] - 400u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FBE20u) [[unlikely]] return; }
L_003FBE20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { [[clang::musttail]] return unit_00BF(c, 30u, depth); } }
L_003FBE28:
    set32(c.r[17], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FBE54; } }
    c.f[12] = c.f[20] ^ fp::kSign;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBE44u); set32(c.r[16], c.r[16].w[0] - 448u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FBE44u) [[unlikely]] return; }
L_003FBE44:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBE54u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FBE54u) [[unlikely]] return; }
L_003FBE54:
    set32(c.r[2], ld32((c.r[17].w[0] + 504u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FBEA4; } }
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
L_003FBE70:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBE84u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FBE84u) [[unlikely]] return; }
L_003FBE84:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBE94u); set32(c.r[5], c.r[17].w[0] - 448u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FBE94u) [[unlikely]] return; }
L_003FBE94:
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBE70u | kUnwind; return; } goto L_003FBE70; }
L_003FBEA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[3].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003FBFB0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBEC8u); set32(c.r[16], c.r[16].w[0] - 448u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FBEC8u) [[unlikely]] return; }
L_003FBEC8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBED8u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FBED8u) [[unlikely]] return; }
L_003FBED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003FBFB0; } }
L_003FBEE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[7], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[7].w[0] + 504u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], ld32((c.r[7].w[0] + 2372u)));  if (t) { goto L_003FBF18; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBF10u); st32((c.r[7].w[0] + 2372u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 224u, depth + 1u); else { c.pc = 0x003FE1F0u; return; } if (c.pc != 0x003FBF10u) [[unlikely]] return; }
L_003FBF10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { [[clang::musttail]] return unit_00BF(c, 30u, depth); } }
L_003FBF18:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBF30u); st32((c.r[7].w[0] + 2372u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 296u, depth + 1u); else { c.pc = 0x003FED70u; return; } if (c.pc != 0x003FBF30u) [[unlikely]] return; }
L_003FBF30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { [[clang::musttail]] return unit_00BF(c, 30u, depth); } }
L_003FBF38:
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[16].w[0] - 424u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBF4Cu); c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FBF4Cu) [[unlikely]] return; }
L_003FBF4C:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBF5Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FBF5Cu) [[unlikely]] return; }
L_003FBF5C:
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[22].d[0] + 0ull;  goto L_003FBFB0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + 8u);  if (t) { goto L_003FBFAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[17], c.r[2].w[0] - 416u);
    c.budget -= 3;
L_003FBF80:
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[2].w[0] - 1u);  if (t) { goto L_003FBF94; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[6], 0u - c.r[2].w[0]);
    c.budget -= 2;
L_003FBF94:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBFA0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FBFA0u) [[unlikely]] return; }
L_003FBFA0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBF80u | kUnwind; return; } goto L_003FBF80; } }
L_003FBFAC:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_003FBFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBFB8u); set32(c.r[5], c.r[19].w[0] - 440u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FBFB8u) [[unlikely]] return; }
L_003FBFB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { [[clang::musttail]] return unit_00BF(c, 30u, depth); } }
L_003FBFC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[23], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[23].w[0] + 492u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[21].w[0] + 8u));  goto L_003FBFF8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBFE4u); set32(c.r[5], c.r[5].w[0] - 368u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FBFE4u) [[unlikely]] return; }
L_003FBFE4:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBFF4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003FBFF4u) [[unlikely]] return; }
L_003FBFF4:
    c.f[1] = ld32((c.r[21].w[0] + 8u));
    c.budget -= 1;
L_003FBFF8:
    c.f[0] = 0u;
    c.budget -= 2;
    [[clang::musttail]] return unit_00BF(c, 1u, depth);
}

}
