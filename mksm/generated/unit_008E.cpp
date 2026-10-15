#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008E[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0,
    0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0,
    0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 94, 0, 0, 95, 0, 0, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 120, 121, 0, 122, 0, 123, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 130, 131, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 134, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 137, 0, 0, 0, 138, 0, 139, 0, 140, 0, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0,
    0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0,
    0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0,
    0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182,
    0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 187, 0, 188, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0,
    0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0,
    0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0,
    0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0,
    0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0,
    0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0,
    0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303,
    0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0,
    307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0,
    0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0,
    0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324,
    0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0,
    0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0,
    0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0,
    359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_008E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00338000;
    case 2u: goto L_00338004;
    case 3u: goto L_00338010;
    case 4u: goto L_00338040;
    case 5u: goto L_00338060;
    case 6u: goto L_00338080;
    case 7u: goto L_003380A4;
    case 8u: goto L_003380B8;
    case 9u: goto L_003380D8;
    case 10u: goto L_003380F8;
    case 11u: goto L_00338110;
    case 12u: goto L_00338138;
    case 13u: goto L_003381C0;
    case 14u: goto L_003381D0;
    case 15u: goto L_00338214;
    case 16u: goto L_00338250;
    case 17u: goto L_00338270;
    case 18u: goto L_00338284;
    case 19u: goto L_00338294;
    case 20u: goto L_003382D0;
    case 21u: goto L_00338308;
    case 22u: goto L_00338328;
    case 23u: goto L_0033834C;
    case 24u: goto L_00338360;
    case 25u: goto L_00338380;
    case 26u: goto L_003383A0;
    case 27u: goto L_003383C0;
    case 28u: goto L_003383E4;
    case 29u: goto L_00338404;
    case 30u: goto L_00338434;
    case 31u: goto L_0033844C;
    case 32u: goto L_0033845C;
    case 33u: goto L_003384A0;
    case 34u: goto L_003384B0;
    case 35u: goto L_003384EC;
    case 36u: goto L_00338508;
    case 37u: goto L_00338540;
    case 38u: goto L_00338560;
    case 39u: goto L_00338584;
    case 40u: goto L_00338598;
    case 41u: goto L_003385B8;
    case 42u: goto L_003385D8;
    case 43u: goto L_003385EC;
    case 44u: goto L_0033860C;
    case 45u: goto L_00338658;
    case 46u: goto L_003386A0;
    case 47u: goto L_00338748;
    case 48u: goto L_00338798;
    case 49u: goto L_003387D0;
    case 50u: goto L_00338848;
    case 51u: goto L_003388B4;
    case 52u: goto L_00338A0C;
    case 53u: goto L_00338A98;
    case 54u: goto L_00338AB0;
    case 55u: goto L_00338AD8;
    case 56u: goto L_00338AF0;
    case 57u: goto L_00338BA8;
    case 58u: goto L_00338BC8;
    case 59u: goto L_00338C5C;
    case 60u: goto L_00338C88;
    case 61u: goto L_00338C9C;
    case 62u: goto L_00338CC0;
    case 63u: goto L_00338CE4;
    case 64u: goto L_00338D18;
    case 65u: goto L_00338DBC;
    case 66u: goto L_00338DEC;
    case 67u: goto L_00338E58;
    case 68u: goto L_00338E60;
    case 69u: goto L_00338EA0;
    case 70u: goto L_00338F50;
    case 71u: goto L_00338FA0;
    case 72u: goto L_00338FF8;
    case 73u: goto L_00339068;
    case 74u: goto L_00339078;
    case 75u: goto L_00339094;
    case 76u: goto L_00339110;
    case 77u: goto L_00339160;
    case 78u: goto L_0033917C;
    case 79u: goto L_003391DC;
    case 80u: goto L_0033921C;
    case 81u: goto L_0033926C;
    case 82u: goto L_003392B0;
    case 83u: goto L_003392DC;
    case 84u: goto L_00339354;
    case 85u: goto L_00339390;
    case 86u: goto L_003393CC;
    case 87u: goto L_003393E4;
    case 88u: goto L_00339400;
    case 89u: goto L_0033942C;
    case 90u: goto L_003394A0;
    case 91u: goto L_003394E4;
    case 92u: goto L_00339500;
    case 93u: goto L_0033952C;
    case 94u: goto L_00339530;
    case 95u: goto L_0033953C;
    case 96u: goto L_0033954C;
    case 97u: goto L_00339554;
    case 98u: goto L_0033955C;
    case 99u: goto L_003395AC;
    case 100u: goto L_003395D0;
    case 101u: goto L_003395E4;
    case 102u: goto L_003395F8;
    case 103u: goto L_00339600;
    case 104u: goto L_00339628;
    case 105u: goto L_0033972C;
    case 106u: goto L_0033974C;
    case 107u: goto L_00339770;
    case 108u: goto L_00339788;
    case 109u: goto L_003397FC;
    case 110u: goto L_00339820;
    case 111u: goto L_0033984C;
    case 112u: goto L_00339858;
    case 113u: goto L_00339864;
    case 114u: goto L_00339880;
    case 115u: goto L_00339940;
    case 116u: goto L_003399E0;
    case 117u: goto L_00339A58;
    case 118u: goto L_00339AC4;
    case 119u: goto L_00339ACC;
    case 120u: goto L_00339AE4;
    case 121u: goto L_00339AE8;
    case 122u: goto L_00339AF0;
    case 123u: goto L_00339AF8;
    case 124u: goto L_00339B9C;
    case 125u: goto L_00339BD0;
    case 126u: goto L_00339BE8;
    case 127u: goto L_00339C00;
    case 128u: goto L_00339C2C;
    case 129u: goto L_00339C38;
    case 130u: goto L_00339C48;
    case 131u: goto L_00339C4C;
    case 132u: goto L_00339C54;
    case 133u: goto L_00339C5C;
    case 134u: goto L_00339C88;
    case 135u: goto L_00339C8C;
    case 136u: goto L_00339CF0;
    case 137u: goto L_00339D08;
    case 138u: goto L_00339D18;
    case 139u: goto L_00339D20;
    case 140u: goto L_00339D28;
    case 141u: goto L_00339D38;
    case 142u: goto L_00339D40;
    case 143u: goto L_00339D48;
    case 144u: goto L_00339D50;
    case 145u: goto L_00339DA0;
    case 146u: goto L_00339DDC;
    case 147u: goto L_00339DF0;
    case 148u: goto L_00339E0C;
    case 149u: goto L_00339E1C;
    case 150u: goto L_00339E28;
    case 151u: goto L_00339E30;
    case 152u: goto L_00339E5C;
    case 153u: goto L_00339E64;
    case 154u: goto L_00339E90;
    case 155u: goto L_00339E98;
    case 156u: goto L_00339EC0;
    case 157u: goto L_00339EC8;
    case 158u: goto L_00339ED8;
    case 159u: goto L_00339EE0;
    case 160u: goto L_00339EE8;
    case 161u: goto L_00339F20;
    case 162u: goto L_00339F6C;
    case 163u: goto L_00339F84;
    case 164u: goto L_00339FA0;
    case 165u: goto L_00339FB8;
    case 166u: goto L_00339FD4;
    case 167u: goto L_00339FEC;
    case 168u: goto L_0033A008;
    case 169u: goto L_0033A078;
    case 170u: goto L_0033A08C;
    case 171u: goto L_0033A0AC;
    case 172u: goto L_0033A0C4;
    case 173u: goto L_0033A0E4;
    case 174u: goto L_0033A168;
    case 175u: goto L_0033A184;
    case 176u: goto L_0033A1A0;
    case 177u: goto L_0033A214;
    case 178u: goto L_0033A248;
    case 179u: goto L_0033A288;
    case 180u: goto L_0033A2D0;
    case 181u: goto L_0033A2F0;
    case 182u: goto L_0033A2FC;
    case 183u: goto L_0033A304;
    case 184u: goto L_0033A30C;
    case 185u: goto L_0033A344;
    case 186u: goto L_0033A34C;
    case 187u: goto L_0033A384;
    case 188u: goto L_0033A38C;
    case 189u: goto L_0033A394;
    case 190u: goto L_0033A3A8;
    case 191u: goto L_0033A3DC;
    case 192u: goto L_0033A408;
    case 193u: goto L_0033A41C;
    case 194u: goto L_0033A440;
    case 195u: goto L_0033A48C;
    case 196u: goto L_0033A4A0;
    case 197u: goto L_0033A4C0;
    case 198u: goto L_0033A500;
    case 199u: goto L_0033A510;
    case 200u: goto L_0033A538;
    case 201u: goto L_0033A548;
    case 202u: goto L_0033A560;
    case 203u: goto L_0033A5B8;
    case 204u: goto L_0033A5D8;
    case 205u: goto L_0033A5F0;
    case 206u: goto L_0033A600;
    case 207u: goto L_0033A624;
    case 208u: goto L_0033A65C;
    case 209u: goto L_0033A678;
    case 210u: goto L_0033A6AC;
    case 211u: goto L_0033A6C0;
    case 212u: goto L_0033A6F0;
    case 213u: goto L_0033A700;
    case 214u: goto L_0033A734;
    case 215u: goto L_0033A748;
    case 216u: goto L_0033A778;
    case 217u: goto L_0033A788;
    case 218u: goto L_0033A820;
    case 219u: goto L_0033A830;
    case 220u: goto L_0033A848;
    case 221u: goto L_0033A858;
    case 222u: goto L_0033A888;
    case 223u: goto L_0033A8AC;
    case 224u: goto L_0033A90C;
    case 225u: goto L_0033A948;
    case 226u: goto L_0033A968;
    case 227u: goto L_0033A9D8;
    case 228u: goto L_0033AA00;
    case 229u: goto L_0033AA24;
    case 230u: goto L_0033AA58;
    case 231u: goto L_0033AA70;
    case 232u: goto L_0033AA90;
    case 233u: goto L_0033AAC0;
    case 234u: goto L_0033AADC;
    case 235u: goto L_0033AAFC;
    case 236u: goto L_0033AB30;
    case 237u: goto L_0033AB40;
    case 238u: goto L_0033AB50;
    case 239u: goto L_0033AB68;
    case 240u: goto L_0033AB98;
    case 241u: goto L_0033ABCC;
    case 242u: goto L_0033ABE8;
    case 243u: goto L_0033ABF8;
    case 244u: goto L_0033AC08;
    case 245u: goto L_0033AC18;
    case 246u: goto L_0033AC40;
    case 247u: goto L_0033AC50;
    case 248u: goto L_0033ACA0;
    case 249u: goto L_0033ACB0;
    case 250u: goto L_0033ACE0;
    case 251u: goto L_0033ACF0;
    case 252u: goto L_0033AD1C;
    case 253u: goto L_0033AD30;
    case 254u: goto L_0033AD60;
    case 255u: goto L_0033AD84;
    case 256u: goto L_0033ADB4;
    case 257u: goto L_0033ADD0;
    case 258u: goto L_0033AE00;
    case 259u: goto L_0033AE24;
    case 260u: goto L_0033AE50;
    case 261u: goto L_0033AE68;
    case 262u: goto L_0033AE8C;
    case 263u: goto L_0033AEC0;
    case 264u: goto L_0033AED8;
    case 265u: goto L_0033AF0C;
    case 266u: goto L_0033AF20;
    case 267u: goto L_0033AF50;
    case 268u: goto L_0033AF60;
    case 269u: goto L_0033AF94;
    case 270u: goto L_0033AFA8;
    case 271u: goto L_0033AFD8;
    case 272u: goto L_0033AFE8;
    case 273u: goto L_0033B008;
    case 274u: goto L_0033B038;
    case 275u: goto L_0033B040;
    case 276u: goto L_0033B080;
    case 277u: goto L_0033B0C8;
    case 278u: goto L_0033B0DC;
    case 279u: goto L_0033B0F8;
    case 280u: goto L_0033B108;
    case 281u: goto L_0033B120;
    case 282u: goto L_0033B150;
    case 283u: goto L_0033B160;
    case 284u: goto L_0033B1A8;
    case 285u: goto L_0033B1BC;
    case 286u: goto L_0033B1D8;
    case 287u: goto L_0033B230;
    case 288u: goto L_0033B240;
    case 289u: goto L_0033B270;
    case 290u: goto L_0033B2DC;
    case 291u: goto L_0033B2F0;
    case 292u: goto L_0033B360;
    case 293u: goto L_0033B370;
    case 294u: goto L_0033B3C0;
    case 295u: goto L_0033B418;
    case 296u: goto L_0033B458;
    case 297u: goto L_0033B470;
    case 298u: goto L_0033B488;
    case 299u: goto L_0033B4B8;
    case 300u: goto L_0033B4E4;
    case 301u: goto L_0033B520;
    case 302u: goto L_0033B568;
    case 303u: goto L_0033B57C;
    case 304u: goto L_0033B598;
    case 305u: goto L_0033B5C4;
    case 306u: goto L_0033B5F0;
    case 307u: goto L_0033B600;
    case 308u: goto L_0033B620;
    case 309u: goto L_0033B640;
    case 310u: goto L_0033B658;
    case 311u: goto L_0033B670;
    case 312u: goto L_0033B690;
    case 313u: goto L_0033B6CC;
    case 314u: goto L_0033B6EC;
    case 315u: goto L_0033B70C;
    case 316u: goto L_0033B728;
    case 317u: goto L_0033B774;
    case 318u: goto L_0033B794;
    case 319u: goto L_0033B7B4;
    case 320u: goto L_0033B7D0;
    case 321u: goto L_0033B800;
    case 322u: goto L_0033B828;
    case 323u: goto L_0033B840;
    case 324u: goto L_0033B87C;
    case 325u: goto L_0033B890;
    case 326u: goto L_0033B8D0;
    case 327u: goto L_0033B938;
    case 328u: goto L_0033B948;
    case 329u: goto L_0033B950;
    case 330u: goto L_0033B990;
    case 331u: goto L_0033B9B0;
    case 332u: goto L_0033B9CC;
    case 333u: goto L_0033B9DC;
    case 334u: goto L_0033BA28;
    case 335u: goto L_0033BA38;
    case 336u: goto L_0033BA60;
    case 337u: goto L_0033BB10;
    case 338u: goto L_0033BB28;
    case 339u: goto L_0033BB40;
    case 340u: goto L_0033BB68;
    case 341u: goto L_0033BBF4;
    case 342u: goto L_0033BC08;
    case 343u: goto L_0033BCA4;
    case 344u: goto L_0033BCB8;
    case 345u: goto L_0033BCC8;
    case 346u: goto L_0033BCD8;
    case 347u: goto L_0033BCE8;
    case 348u: goto L_0033BCF8;
    case 349u: goto L_0033BD28;
    case 350u: goto L_0033BD54;
    case 351u: goto L_0033BD6C;
    case 352u: goto L_0033BD88;
    case 353u: goto L_0033BDC0;
    case 354u: goto L_0033BDD8;
    case 355u: goto L_0033BDE8;
    case 356u: goto L_0033BE10;
    case 357u: goto L_0033BE54;
    case 358u: goto L_0033BE70;
    case 359u: goto L_0033BE80;
    case 360u: goto L_0033BEA8;
    case 361u: goto L_0033BEB8;
    case 362u: goto L_0033BEC0;
    case 363u: goto L_0033BF10;
    case 364u: goto L_0033BF2C;
    case 365u: goto L_0033BF40;
    default: bad_entry(c, 0x00338000u); return;
    }
L_00338000:
    c.budget -= 1;
L_00338004:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00338014; } }
L_00338010:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00338014:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00338040; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 60u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 156u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00338040u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00338040u) [[unlikely]] return; }
L_00338040:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] - 17168u);
    set32(c.r[16], ld32((c.r[3].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338060u);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x00338060u) [[unlikely]] return; }
L_00338060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00338080; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00338080; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338080u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x00338080u) [[unlikely]] return; }
L_00338080:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], c.r[19].w[0] - 17168u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 168u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003380A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003380A4u) [[unlikely]] return; }
L_003380A4:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003380B8u);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x003380B8u) [[unlikely]] return; }
L_003380B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003380D8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003380D8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003380D8u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x003380D8u) [[unlikely]] return; }
L_003380D8:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 180u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003380F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003380F8u) [[unlikely]] return; }
L_003380F8:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338110u);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x00338110u) [[unlikely]] return; }
L_00338110:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00338138:
    set32(c.r[29], c.r[29].w[0] - 352u);
    set32(c.r[2], 0u + 3u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033819C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00338188; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00338658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338258; } }
L_00338188:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003383EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338658; } }
L_0033819C:
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 60u)));
    ld128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003381C0u);  if (depth < kMaxDepth) unit_00C2(c, 186u, depth + 1u); else { c.pc = 0x0040A480u; return; } if (c.pc != 0x003381C0u) [[unlikely]] return; }
L_003381C0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003381D0u);  if (depth < kMaxDepth) unit_008C(c, 3u, depth + 1u); else { c.pc = 0x00330060u; return; } if (c.pc != 0x003381D0u) [[unlikely]] return; }
L_003381D0:
    c.f[1] = ld32((c.r[16].w[0] + 176u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 180u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 184u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 56u), c.f[1]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[20].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00338214u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00338214u) [[unlikely]] return; }
L_00338214:
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    set32(c.r[6], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 144u), c.f[1]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 148u), c.f[2]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    st32((c.r[29].w[0] + 156u), 0u);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338250u);  if (depth < kMaxDepth) unit_008E(c, 49u, depth + 1u); else { c.pc = 0x003387D0u; return; } if (c.pc != 0x00338250u) [[unlikely]] return; }
L_00338250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338658; } }
L_00338258:
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00338270u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00338270u) [[unlikely]] return; }
L_00338270:
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338284u);  if (depth < kMaxDepth) unit_008C(c, 4u, depth + 1u); else { c.pc = 0x003300D8u; return; } if (c.pc != 0x00338284u) [[unlikely]] return; }
L_00338284:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338294u);  if (depth < kMaxDepth) unit_00C2(c, 177u, depth + 1u); else { c.pc = 0x0040A1E0u; return; } if (c.pc != 0x00338294u) [[unlikely]] return; }
L_00338294:
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    set32(c.r[6], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 144u), c.f[1]);
    set32(c.r[7], 0u + 1u);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    st32((c.r[29].w[0] + 156u), 0u);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003382D0u);  if (depth < kMaxDepth) unit_008E(c, 49u, depth + 1u); else { c.pc = 0x003387D0u; return; } if (c.pc != 0x003382D0u) [[unlikely]] return; }
L_003382D0:
    c.f[0] = ld32((c.r[18].w[0] + 96u));
    c.f[1] = ld32((c.r[18].w[0] + 100u));
    c.f[2] = ld32((c.r[18].w[0] + 104u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    st32((c.r[29].w[0] + 164u), c.f[1]);
    st32((c.r[29].w[0] + 168u), c.f[2]);
    st32((c.r[29].w[0] + 172u), 0u);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    set32(c.r[16], ld32((c.r[3].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338308u);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x00338308u) [[unlikely]] return; }
L_00338308:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00338328; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00338328; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338328u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x00338328u) [[unlikely]] return; }
L_00338328:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[17], c.r[18].w[0] + 80u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 168u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033834Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033834Cu) [[unlikely]] return; }
L_0033834C:
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338360u);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x00338360u) [[unlikely]] return; }
L_00338360:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00338380; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00338380; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338380u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x00338380u) [[unlikely]] return; }
L_00338380:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 180u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003383A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003383A0u) [[unlikely]] return; }
L_003383A0:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_003383C8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003383C0u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x003383C0u) [[unlikely]] return; }
L_003383C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338658; } }
L_003383C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00338658; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003383E4u);  if (depth < kMaxDepth) unit_00A2(c, 69u, depth + 1u); else { c.pc = 0x00388AC0u; return; } if (c.pc != 0x003383E4u) [[unlikely]] return; }
L_003383E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338658; } }
L_003383EC:
    set32(c.r[16], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033841C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338404u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x00338404u) [[unlikely]] return; }
L_00338404:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033841C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338420; } }
L_0033841C:
    set32(c.r[19], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_00338420:
    set32(c.r[16], c.r[29].w[0] + 176u);
    set32(c.r[4], ld32((c.r[18].w[0] + 112u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338434u);  if (depth < kMaxDepth) unit_008D(c, 30u, depth + 1u); else { c.pc = 0x003342E8u; return; } if (c.pc != 0x00338434u) [[unlikely]] return; }
L_00338434:
    set32(c.r[17], c.r[29].w[0] + 64u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 256u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033844Cu);  if (depth < kMaxDepth) unit_00C2(c, 191u, depth + 1u); else { c.pc = 0x0040A620u; return; } if (c.pc != 0x0033844Cu) [[unlikely]] return; }
L_0033844C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033845Cu);  if (depth < kMaxDepth) unit_00C2(c, 177u, depth + 1u); else { c.pc = 0x0040A1E0u; return; } if (c.pc != 0x0033845Cu) [[unlikely]] return; }
L_0033845C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.f[3] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.f[2] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[7], 0u + 1u);
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 144u), c.f[3]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    st32((c.r[29].w[0] + 152u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003384A0u);  if (depth < kMaxDepth) unit_008E(c, 49u, depth + 1u); else { c.pc = 0x003387D0u; return; } if (c.pc != 0x003384A0u) [[unlikely]] return; }
L_003384A0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003384B0u);  if (depth < kMaxDepth) unit_008C(c, 3u, depth + 1u); else { c.pc = 0x00330060u; return; } if (c.pc != 0x003384B0u) [[unlikely]] return; }
L_003384B0:
    c.f[3] = ld32((c.r[29].w[0] + 144u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    c.f[1] = ld32((c.r[29].w[0] + 152u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    st32((c.r[29].w[0] + 48u), c.f[3]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    st32((c.r[29].w[0] + 56u), c.f[1]);
    st32((c.r[29].w[0] + 60u), c.f[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[20].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003384ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003384ECu) [[unlikely]] return; }
L_003384EC:
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00338508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338508u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x00338508u) [[unlikely]] return; }
L_00338508:
    c.f[0] = ld32((c.r[18].w[0] + 96u));
    c.f[1] = ld32((c.r[18].w[0] + 100u));
    c.f[2] = ld32((c.r[18].w[0] + 104u));
    st32((c.r[29].w[0] + 240u), c.f[0]);
    st32((c.r[29].w[0] + 244u), c.f[1]);
    st32((c.r[29].w[0] + 248u), c.f[2]);
    st32((c.r[29].w[0] + 252u), 0u);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[16], ld32((c.r[3].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338540u);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x00338540u) [[unlikely]] return; }
L_00338540:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00338560; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00338560; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338560u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x00338560u) [[unlikely]] return; }
L_00338560:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[17], c.r[18].w[0] + 80u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 168u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00338584u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00338584u) [[unlikely]] return; }
L_00338584:
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338598u);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x00338598u) [[unlikely]] return; }
L_00338598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003385B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003385B8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003385B8u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x003385B8u) [[unlikely]] return; }
L_003385B8:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 180u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003385D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003385D8u) [[unlikely]] return; }
L_003385D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003385ECu);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x003385ECu) [[unlikely]] return; }
L_003385EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033860C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033860C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033860Cu);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x0033860Cu) [[unlikely]] return; }
L_0033860C:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033862C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00338630; } }
L_0033862C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00338630:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00338658; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 164u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00338658u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00338658u) [[unlikely]] return; }
L_00338658:
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00338720; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[2].w[0] + 28u);
    set32(c.r[4], ld32((c.r[3].w[0] - 11308u)));
    set32(c.r[2], c.r[2].w[0] + 12u);
    if (c.r[2].d[0] == 0) c.r[5].d[0] = 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[7], ld32((c.r[4].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003386A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003386A0u) [[unlikely]] return; }
L_003386A0:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    st32((c.r[2].w[0] + 64u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[2].w[0] + 68u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[3].w[0] + 72u), c.f[1]);
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    st32((c.r[2].w[0] + 76u), c.f[3]);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[2].w[0] + 80u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[2].w[0] + 84u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 88u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    st32((c.r[2].w[0] + 92u), c.f[3]);
    c.budget -= 32;
L_00338720:
    st32((c.r[18].w[0] + 8u), 0u);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 352u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00338748:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[2] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[3] = ld32((c.r[2].w[0] + 48u));
    c.f[1] = ld32((c.r[2].w[0] + 52u));
    c.f[0] = ld32((c.r[2].w[0] + 56u));
    c.f[3] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[29].w[0]), c.f[3]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338798u);  if (depth < kMaxDepth) unit_008C(c, 4u, depth + 1u); else { c.pc = 0x003300D8u; return; } if (c.pc != 0x00338798u) [[unlikely]] return; }
L_00338798:
    ld128((c.r[29].w[0]) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[4]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[5]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 528u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 512u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 480u) & ~15u, c.r[4]);
    st128((c.r[16].w[0] + 496u) & ~15u, c.r[5]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003387D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    set32(c.r[4], c.r[18].w[0] + 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[3] = ld32((c.r[19].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 28u), 0u);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 16u), c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[3]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338848u);  if (depth < kMaxDepth) unit_00C2(c, 186u, depth + 1u); else { c.pc = 0x0040A480u; return; } if (c.pc != 0x00338848u) [[unlikely]] return; }
L_00338848:
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[18].w[0] + 112u)));
    st128((c.r[18].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033889C; } }
    c.f[1] = ld32((c.r[2].w[0] + 176u));
    set32(c.r[21], c.r[18].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[17], c.r[18].w[0] + 32u);
    st32((c.r[18].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 180u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 184u));
    st32((c.r[18].w[0] + 28u), c.f[2]);
    st32((c.r[18].w[0] + 24u), c.f[1]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003388BC; } }
L_0033889C:
    set32(c.r[16], c.r[18].w[0] + 16u);
    set32(c.r[17], c.r[18].w[0] + 32u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003388B4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x003388B4u) [[unlikely]] return; }
L_003388B4:
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 2;
L_003388BC:
    st128((c.r[18].w[0] + 64u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[19].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 76u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    set32(c.r[2], c.f[0]);
    ld128((c.r[18].w[0] + 64u) & ~15u, c.vu0.vf[4]);
    c.vu0.vf[5] = c.r[2];
    st32((c.r[18].w[0] + 32u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F7F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65534ull;
    c.f[3] = c.r[1].w[0];
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[18].w[0] + 44u), c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[3]);
    vu::opmula(c.vu0, 4u, 3u);
    vu::opmsub(c.vu0, 1u, 3u, 4u);
    vu::mul(c.vu0, 15u, 2u, 3u, 4u);
    vu::addbc(c.vu0, 8u, 6u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddabc(c.vu0, 8u, 6u, c.vu0.vf[2].w[2]);
    vu::maddbc(c.vu0, 8u, 2u, 6u, c.vu0.vf[2].w[3]);
    c.r[2] = c.vu0.vf[2];
    st128((c.r[18].w[0] + 48u) & ~15u, c.vu0.vf[3]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[2], c.f[0]);
    c.vu0.vf[2] = c.r[2];
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 1u, 4u, c.vu0.vf[2].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 1u, 3u, c.vu0.vf[5].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 28u), c.f[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 15u, 3u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddabc(c.vu0, 8u, 2u, c.vu0.vf[3].w[2]);
    vu::maddbc(c.vu0, 8u, 3u, 2u, c.vu0.vf[3].w[3]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[3].w[0]);
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.q);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 64;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003389C8; } }
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338A7C; } }
L_003389C8:
    c.f[1] = c.f[0];
    c.f[0] = c.f[1] & fp::kAbs;
    c.f[12] = c.f[1];
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00338A04; } }
    c.f[0] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00338A04; } }
    c.f[12] = c.f[4];
    c.budget -= 1;
L_00338A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338A0Cu);  if (depth < kMaxDepth) unit_00C2(c, 223u, depth + 1u); else { c.pc = 0x0040AB48u; return; } if (c.pc != 0x00338A0Cu) [[unlikely]] return; }
L_00338A0C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.f[2] = fp::add(c.f[0], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 28u));
    c.f[0] = 0u;
    vu::move(c.vu0, 15u, 4u, 1u);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    vu::mul(c.vu0, 14u, 3u, 4u, 4u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 2u, c.vu0.vf[3].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[3].w[0]);
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.q);
    st128((c.r[18].w[0] + 80u) & ~15u, c.vu0.vf[4]);
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00338A60; } }
    vu::mulabc(c.vu0, 15u, 0u, c.vu0.vf[0].w[0]);
    vu::msubbc(c.vu0, 15u, 1u, 4u, c.vu0.vf[0].w[3]);
    st128((c.r[18].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    c.budget -= 3;
L_00338A60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[1].w[0];
    ld128((c.r[18].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[1] = c.r[2];
    vu::mulbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[1].w[0]);
    c.budget -= 7;
L_00338A7C:
    st128((c.r[18].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    set32(c.r[16], c.r[18].w[0] + 96u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338A98u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00338A98u) [[unlikely]] return; }
L_00338A98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338AB0u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00338AB0u) [[unlikely]] return; }
L_00338AB0:
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
L_00338AD8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00338AF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[3] = c.r[1].w[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[16].w[0] + 4288u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 12u), 0u);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    set32(c.r[17], ld32((c.r[16].w[0] + 4320u)));
    st32((c.r[29].w[0] + 8u), c.f[0]);
    st32((c.r[29].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 4u), c.f[2]);
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 12u), 0u);
    st128((c.r[16].w[0] + 4288u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    st32((c.r[29].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 4u), c.f[2]);
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 4304u) & ~15u, c.r[2]);
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 548u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 4320u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 46;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00338BA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00338BA8u) [[unlikely]] return; }
L_00338BA8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00338BC8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], c.r[5].w[0] - 16u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    if (c.r[5].d[0] != 0) c.r[20].d[0] = c.r[2].d[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    set32(c.r[19], ld32((c.r[20].w[0])));
    c.budget -= 14;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00338CE8; } }
    set32(c.r[18], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00338C60; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00338C50; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00338C44; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00338C60; } }
L_00338C44:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338C60; } }
L_00338C50:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00338C5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00338C5Cu) [[unlikely]] return; }
L_00338C5C:
    c.r[4].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_00338C60:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00338CE8; } }
    st32((c.r[29].w[0] + 36u), 0u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 16u);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[17], c.r[2].w[0] + 32u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338C88u);  if (depth < kMaxDepth) unit_00C2(c, 196u, depth + 1u); else { c.pc = 0x0040A6B0u; return; } if (c.pc != 0x00338C88u) [[unlikely]] return; }
L_00338C88:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338C9Cu);  if (depth < kMaxDepth) unit_00C2(c, 196u, depth + 1u); else { c.pc = 0x0040A6B0u; return; } if (c.pc != 0x00338C9Cu) [[unlikely]] return; }
L_00338C9C:
    st32((c.r[29].w[0] + 36u), 0u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00338CC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00338CC0u) [[unlikely]] return; }
L_00338CC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00338CE8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[2].w[0] + 32u), c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338CE4u);  if (depth < kMaxDepth) unit_00C2(c, 197u, depth + 1u); else { c.pc = 0x0040A700u; return; } if (c.pc != 0x00338CE4u) [[unlikely]] return; }
L_00338CE4:
    st32((c.r[16].w[0] + 72u), c.r[18].w[0]);
    c.budget -= 1;
L_00338CE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00338D18:
    set32(c.r[29], c.r[29].w[0] - 288u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    set32(c.r[11], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] - 7288u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    set32(c.r[6], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 272u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[20], c.r[2].w[0] - 6936u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    set32(c.r[10], c.r[29].w[0] + 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    ld128((c.r[17].w[0]) & ~15u, c.r[4]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    ld128((c.r[18].w[0]) & ~15u, c.r[5]);
    st32((c.r[11].w[0] + 20u), c.f[20]);
    st128((c.r[29].w[0]) & ~15u, c.r[4]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[5]);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[6].w[0] + 32u), 0u);
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[3]);
    st32((c.r[6].w[0] + 32u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[6].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[10].w[0] + 64u), c.r[11].w[0]);
    st32((c.r[29].w[0] + 164u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 168u), 0u);
    c.budget -= 41;
L_00338DBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 11308u)));
    c.r[7].d[0] = c.r[10].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[8], ld32((c.r[3].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00338DECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00338DECu) [[unlikely]] return; }
L_00338DEC:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00338E48; } }
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[2], c.f[0]);
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[1]);
    c.vu0.vf[2] = c.r[2];
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    vu::mulabc(c.vu0, 15u, 3u, c.vu0.vf[0].w[3]);
    vu::msubabc(c.vu0, 15u, 3u, c.vu0.vf[2].w[0]);
    vu::maddbc(c.vu0, 15u, 2u, 1u, c.vu0.vf[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[2]);
    st32((c.r[16].w[0] + 12u), c.f[20]);
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    st32((c.r[29].w[0] + 96u), c.r[20].w[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338E74; } }
L_00338E48:
    st32((c.r[29].w[0] + 96u), c.r[20].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338E74; } }
L_00338E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338E60u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00338E60u) [[unlikely]] return; }
L_00338E60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 6936u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00338E58u | kUnwind; return; } goto L_00338E58; } }
L_00338E74:
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[20] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[29], c.r[29].w[0] + 288u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00338EA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[0] = c.r[1].w[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[6] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.f[5] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[7], c.r[29].w[0] + 32u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[6] = fp::mul(c.f[6], c.f[0]);
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[5] = fp::mul(c.f[5], c.f[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[4] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 40u), c.f[5]);
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    st32((c.r[29].w[0] + 16u), c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[6]);
    st32((c.r[29].w[0] + 32u), c.f[3]);
    st32((c.r[29].w[0] + 36u), c.f[4]);
    st32((c.r[29].w[0] + 28u), 0u);
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 60u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[10]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[10]);
    c.budget -= 44;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338F50u);  if (depth < kMaxDepth) unit_008E(c, 64u, depth + 1u); else { c.pc = 0x00338D18u; return; } if (c.pc != 0x00338F50u) [[unlikely]] return; }
L_00338F50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00338F88; } }
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    c.f[2] = ld32((c.r[29].w[0] + 36u));
    c.f[3] = ld32((c.r[29].w[0] + 40u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[16].w[0]), c.f[1]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[3]);
    c.budget -= 12;
L_00338F88:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00338FA0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[23].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    if (c.r[21].d[0] == 0) c.r[23].d[0] = c.r[22].d[0];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[30].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[6].w[0] + 428u)));
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.budget -= 21;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00339278; } }
    c.budget -= 1;
L_00338FF8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[20], 0u + 1u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339040; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0033903C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0033903C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00339040; } }
L_0033903C:
    set32(c.r[20], 0u + 1u);
    c.budget -= 1;
L_00339040:
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003391E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 7552u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00339068:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 6));
    c.r[18].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003391E0; } }
L_00339078:
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003390AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339094u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x00339094u) [[unlikely]] return; }
L_00339094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003390AC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003390B0; } }
L_003390AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_003390B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003390D8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003390D8; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.r[17].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_003390D8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_003390F4; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003390F8; } }
L_003390F4:
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_003390F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00339128; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339110u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x00339110u) [[unlikely]] return; }
L_00339110:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339128; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033912C; } }
L_00339128:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_0033912C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339154; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339154; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.r[17].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00339154:
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003391E0; } }
L_00339160:
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00339194; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033917Cu);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x0033917Cu) [[unlikely]] return; }
L_0033917C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339194; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339198; } }
L_00339194:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_00339198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003391C0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003391C0; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.r[17].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_003391C0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_003391DC; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003391E0; } }
L_003391DC:
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_003391E0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0033926C; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0033921C; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0033920C; } }
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033921C; } }
L_0033920C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[21].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033921Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033921Cu) [[unlikely]] return; }
L_0033921C:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_00339238; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033926C; } }
L_00339238:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0033926C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033926C; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033926Cu);  if (depth < kMaxDepth) unit_008E(c, 71u, depth + 1u); else { c.pc = 0x00338FA0u; return; } if (c.pc != 0x0033926Cu) [[unlikely]] return; }
L_0033926C:
    set32(c.r[16], ld32((c.r[16].w[0] + 424u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00338FF8u | kUnwind; return; } goto L_00338FF8; } }
L_00339278:
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
L_003392B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003392F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003392DCu);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x003392DCu) [[unlikely]] return; }
L_003392DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003392F4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003392F8; } }
L_003392F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_003392F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339320; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339320; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.r[17].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00339320:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003393E4; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003393E4; } }
    c.r[2].d[0] = c.r[3].d[0] | 136ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033936C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339354u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x00339354u) [[unlikely]] return; }
L_00339354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033936C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339370; } }
L_0033936C:
    set32(c.r[3], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_00339370:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003393A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339390u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x00339390u) [[unlikely]] return; }
L_00339390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003393A8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003393AC; } }
L_003393A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_003393AC:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    st32((c.r[16].w[0] + 416u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003393CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 11308u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003393CCu);  if (depth < kMaxDepth) unit_00A4(c, 72u, depth + 1u); else { c.pc = 0x00391028u; return; } if (c.pc != 0x003393CCu) [[unlikely]] return; }
L_003393CC:
    set32(c.r[4], c.r[16].w[0] + 128u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003393E4u);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x003393E4u) [[unlikely]] return; }
L_003393E4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00339400:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00339444; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033942Cu);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x0033942Cu) [[unlikely]] return; }
L_0033942C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339444; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339448; } }
L_00339444:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_00339448:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339460; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00339460:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003394E4; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003394E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.r[2].d[0] = c.r[2].d[0] | 65527ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003394B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003394A0u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x003394A0u) [[unlikely]] return; }
L_003394A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003394B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003394BC; } }
L_003394B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_003394BC:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003394E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 11308u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003394E4u);  if (depth < kMaxDepth) unit_00A4(c, 65u, depth + 1u); else { c.pc = 0x00390EE0u; return; } if (c.pc != 0x003394E4u) [[unlikely]] return; }
L_003394E4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00339500:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[19], c.r[16].w[0] + 624u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[18], 0u + 18u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
L_0033952C:
    set32(c.r[20], 0u - 1u);
    c.budget -= 1;
L_00339530:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033953Cu);  if (depth < kMaxDepth) unit_008F(c, 47u, depth + 1u); else { c.pc = 0x0033C840u; return; } if (c.pc != 0x0033953Cu) [[unlikely]] return; }
L_0033953C:
    set32(c.r[17], c.r[17].w[0] + 192u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[20].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339530u | kUnwind; return; } goto L_00339530; } }
L_0033954C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033955C; } }
L_00339554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033955Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0033955Cu) [[unlikely]] return; }
L_0033955C:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 540u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 4328u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 284u), 0u);
    st32((c.r[16].w[0] + 576u), 0u);
    st32((c.r[16].w[0] + 596u), 0u);
    st32((c.r[16].w[0] + 4272u), 0u);
    st32((c.r[16].w[0] + 600u), 0u);
    st32((c.r[16].w[0] + 604u), 0u);
    st32((c.r[16].w[0] + 608u), 0u);
    st32((c.r[16].w[0] + 544u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 548u), 0u);
    st32((c.r[16].w[0] + 4276u), 0u);
    st32((c.r[16].w[0] + 612u), 0u);
    st32((c.r[16].w[0] + 4324u), 0u);
    c.budget -= 20;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339600; } }
L_003395AC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339554u | kUnwind; return; } goto L_00339554; } }
    set32(c.r[2], 0u + 18u);
    set32(c.r[3], 0u + 192u);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[4].w[0] + c.r[19].w[0]);
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339554u | kUnwind; return; } goto L_00339554; } }
L_003395D0:
    set32(c.r[16], c.r[16].w[0] - 192u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003395E4u);  if (depth < kMaxDepth) unit_008F(c, 332u, depth + 1u); else { c.pc = 0x0033EEA0u; return; } if (c.pc != 0x003395E4u) [[unlikely]] return; }
L_003395E4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003395D0u | kUnwind; return; } goto L_003395D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339554u | kUnwind; return; } goto L_00339554; } }
    c.budget -= 1;
L_003395F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339600u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x00339600u) [[unlikely]] return; }
L_00339600:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00339628:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003396B8; } }
    st32((c.r[29].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[3].d[0] | 256ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[3] = c.r[1].w[0];
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 12u), 0u);
    st128((c.r[4].w[0] + 448u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    st32((c.r[29].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 4u), c.f[2]);
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 464u) & ~15u, c.r[2]);
    c.budget -= 28;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339770; } }
L_003396B8:
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.r[17].d[0] = c.r[29].d[0] + 0ull;
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[0] = c.r[1].w[0];
    c.f[5] = ld32((c.r[6].w[0] + 8u));
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[4] = ld32((c.r[6].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[29].w[0] + 16u), c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[3]);
    st32((c.r[29].w[0] + 28u), 0u);
    st32((c.r[29].w[0] + 32u), c.f[4]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    st32((c.r[29].w[0] + 40u), c.f[5]);
    st32((c.r[29].w[0] + 44u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033972Cu);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x0033972Cu) [[unlikely]] return; }
L_0033972C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033974C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033974C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033974Cu);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x0033974Cu) [[unlikely]] return; }
L_0033974C:
    set32(c.r[7], ld32((c.r[16].w[0] + 60u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 200u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 204u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00339770u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00339770u) [[unlikely]] return; }
L_00339770:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00339788:
    set32(c.r[2], ld32((c.r[4].w[0] + 4272u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003397FC; } }
    set32(c.r[2], 0u + 192u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 656u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003397FC; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 68u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[6].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    st32((c.r[6].w[0] + 12u), c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003397FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[6].w[0]), 0u);
    st32((c.r[6].w[0] + 12u), c.f[0]);
    st32((c.r[6].w[0] + 4u), 0u);
    st32((c.r[6].w[0] + 8u), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00339820:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[8].w[0] + 540u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00339864; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339868; } }
L_0033984C:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00339858:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00339864:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00339868:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339A48; } }
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[8].w[0] + 540u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003398D8; } }
L_00339880:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_003398A4; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], c.r[8].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003398A8; } }
L_003398A4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003398A8:
    set32(c.r[2], 0u + 36u);
    set32(c.r[3], ld32((c.r[3].w[0] + 264u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033984Cu | kUnwind; return; } goto L_0033984C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033984Cu | kUnwind; return; } goto L_0033984C; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_003398D8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_003398FC; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339900; } }
L_003398FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00339900:
    set32(c.r[2], ld32((c.r[2].w[0] + 260u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339880u | kUnwind; return; } goto L_00339880; } }
    set32(c.r[11], 0u + 268u);
    c.r[4].d[0] = ~(0ull | c.r[7].d[0]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[11].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[12].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u - 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[3].w[0] + 4u);
    set32(c.r[2], c.r[8].w[0] + c.r[9].w[0]);
    if (c.r[4].d[0] == 0) c.r[2].d[0] = 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 252u)));
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003399AC; } }
L_00339940:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[10].d[0];  if (t) { goto L_0033995C; } }
    mmi::mult(c, 0, c.r[7].w[0], c.r[11].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339960; } }
L_0033995C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00339960:
    set32(c.r[2], ld32((c.r[2].w[0] + 256u)));
    set32(c.r[3], c.r[6].w[0] << 7);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 152u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339858u | kUnwind; return; } goto L_00339858; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339858u | kUnwind; return; } goto L_00339858; } }
    c.r[2].d[0] = c.r[12].d[0] ^ c.r[10].d[0];
    set32(c.r[3], c.r[8].w[0] + c.r[9].w[0]);
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 252u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339940u | kUnwind; return; } goto L_00339940; } }
L_003399AC:
    c.r[10].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[13], 0u + 268u);
    mmi::mult(c, 0, c.r[10].w[0], c.r[13].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = ~(0ull | c.r[10].d[0]);
    set32(c.r[12], 0u - 1u);
    c.r[11].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[3].w[0] + 4u);
    set32(c.r[2], c.r[8].w[0] + c.r[9].w[0]);
    if (c.r[4].d[0] == 0) c.r[2].d[0] = 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 236u)));
    c.budget -= 13;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00339A48; } }
L_003399E0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[12].d[0];  if (t) { goto L_003399FC; } }
    mmi::mult(c, 0, c.r[7].w[0], c.r[13].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339A00; } }
L_003399FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00339A00:
    set32(c.r[2], ld32((c.r[2].w[0] + 240u)));
    set32(c.r[4], c.r[2].w[0] + c.r[11].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 152u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339858u | kUnwind; return; } goto L_00339858; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339858u | kUnwind; return; } goto L_00339858; } }
    set32(c.r[2], c.r[8].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = c.r[10].d[0] ^ c.r[12].d[0];
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 236u)));
    set32(c.r[11], c.r[11].w[0] + 544u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003399E0u | kUnwind; return; } goto L_003399E0; } }
L_00339A48:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00339A58:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    set32(c.r[16], 0u + 32u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[21]);
    set32(c.r[6], 0u + 30u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    set32(c.r[5], 0u + 32u);
    set32(c.r[10], ld32((c.r[17].w[0] + 8208u)));
    set32(c.r[3], ld32((c.r[10].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[10].w[0] + c.r[4].w[0]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00339AC4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00339AC4u) [[unlikely]] return; }
L_00339AC4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 2;
L_00339ACC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[12] = ld32((c.r[2].w[0] - 1104u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339AE4u);  if (depth < kMaxDepth) unit_00A9(c, 42u, depth + 1u); else { c.pc = 0x003A4518u; return; } if (c.pc != 0x00339AE4u) [[unlikely]] return; }
L_00339AE4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00339AE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339AF8; } }
L_00339AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339AF8u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00339AF8u) [[unlikely]] return; }
L_00339AF8:
    set32(c.r[3], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[3] = c.r[1].w[0];
    set32(c.r[16], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[1]);
    st8((c.r[29].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    st32((c.r[29].w[0] + 168u), c.f[3]);
    st32((c.r[29].w[0] + 172u), c.f[1]);
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[29].w[0] + 4u), 0u);
    st8((c.r[29].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 60u), c.f[4]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 164u), 0u);
    st8((c.r[29].w[0] + 181u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 41;
L_00339B9C:
    st32((c.r[29].w[0] + 8u), c.r[20].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 7u);
    ld128((c.r[22].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 276u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 60u), c.f[4]);
    st8((c.r[29].w[0] + 180u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339BD0u);  if (depth < kMaxDepth) unit_008E(c, 253u, depth + 1u); else { c.pc = 0x0033AD30u; return; } if (c.pc != 0x00339BD0u) [[unlikely]] return; }
L_00339BD0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 276u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339BE8u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x00339BE8u) [[unlikely]] return; }
L_00339BE8:
    st32((c.r[19].w[0] + 8u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[19].w[0] + 52u), c.r[21].w[0]);
    st32((c.r[19].w[0] + 80u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339C00u);  if (depth < kMaxDepth) unit_0090(c, 81u, depth + 1u); else { c.pc = 0x00340A78u; return; } if (c.pc != 0x00339C00u) [[unlikely]] return; }
L_00339C00:
    set32(c.r[7], ld32((c.r[17].w[0] + 8208u)));
    set32(c.r[5], 0u + 160u);
    st32((c.r[19].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[6], 0u + 36u);
    st32((c.r[19].w[0] + 160u), 0u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00339C2Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00339C2Cu) [[unlikely]] return; }
L_00339C2C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 160u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00339C38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339C48u);  if (depth < kMaxDepth) unit_00A2(c, 104u, depth + 1u); else { c.pc = 0x003891A0u; return; } if (c.pc != 0x00339C48u) [[unlikely]] return; }
L_00339C48:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00339C4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339C5C; } }
L_00339C54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339C5Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00339C5Cu) [[unlikely]] return; }
L_00339C5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    set32(c.r[7], c.r[7].w[0] - 8008u);
    set32(c.r[8], c.r[8].w[0] - 8200u);
    set32(c.r[5], 0u + 544u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 486u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339C88u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00339C88u) [[unlikely]] return; }
L_00339C88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00339C8C:
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] - 7144u);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[17], c.r[16].w[0] + 40u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    c.budget -= 25;
L_00339CF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[16].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] - 7200u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339D08u);  if (depth < kMaxDepth) unit_008E(c, 203u, depth + 1u); else { c.pc = 0x0033A5B8u; return; } if (c.pc != 0x00339D08u) [[unlikely]] return; }
L_00339D08:
    st32((c.r[16].w[0] + 420u), 0u);
    st32((c.r[16].w[0] + 424u), 0u);
    st32((c.r[16].w[0] + 428u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 4;
L_00339D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339D5C; } }
L_00339D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339D28u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00339D28u) [[unlikely]] return; }
L_00339D28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339D38u);  if (depth < kMaxDepth) unit_008F(c, 26u, depth + 1u); else { c.pc = 0x0033C4D0u; return; } if (c.pc != 0x00339D38u) [[unlikely]] return; }
L_00339D38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339D20u | kUnwind; return; } goto L_00339D20; } }
L_00339D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339D48u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x00339D48u) [[unlikely]] return; }
L_00339D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339D50u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00339D50u) [[unlikely]] return; }
L_00339D50:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339DC4; } }
L_00339D5C:
    st32((c.r[16].w[0] + 12u), c.r[30].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[16].w[0] + 16u), c.r[23].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[30].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[23].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[18].w[0]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00339DF0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[6], 0u + 100u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00339DC0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00339DA0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339D50u | kUnwind; return; } goto L_00339D50; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339DA0u | kUnwind; return; } goto L_00339DA0; } }
L_00339DC0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00339DC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339DDC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339DDCu);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00395C58u; return; } if (c.pc != 0x00339DDCu) [[unlikely]] return; }
L_00339DDC:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 100u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339DF0u);  if (depth < kMaxDepth) unit_00A5(c, 138u, depth + 1u); else { c.pc = 0x00395B98u; return; } if (c.pc != 0x00339DF0u) [[unlikely]] return; }
L_00339DF0:
    st32((c.r[16].w[0] + 400u), c.r[20].w[0]);
    set32(c.r[2], c.r[17].w[0] - 11856u);
    st32((c.r[20].w[0] + 8u), c.r[16].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 548u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339E0Cu);  if (depth < kMaxDepth) unit_00A5(c, 62u, depth + 1u); else { c.pc = 0x00394BA0u; return; } if (c.pc != 0x00339E0Cu) [[unlikely]] return; }
L_00339E0C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339E1Cu);  if (depth < kMaxDepth) unit_008B(c, 337u, depth + 1u); else { c.pc = 0x0032FA68u; return; } if (c.pc != 0x00339E1Cu) [[unlikely]] return; }
L_00339E1C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339EE8; } }
L_00339E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339E30u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00339E30u) [[unlikely]] return; }
L_00339E30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 30u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00339E5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00339E5Cu) [[unlikely]] return; }
L_00339E5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339AF0u | kUnwind; return; } goto L_00339AF0; } }
L_00339E64:
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
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00339E90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00339E90u) [[unlikely]] return; }
L_00339E90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339C54u | kUnwind; return; } goto L_00339C54; } }
L_00339E98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 8008u);
    set32(c.r[7], c.r[7].w[0] - 8192u);
    set32(c.r[8], 0u + 486u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339EC0u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x00339EC0u) [[unlikely]] return; }
L_00339EC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339D48u | kUnwind; return; } goto L_00339D48; } }
L_00339EC8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339ED8u);  if (depth < kMaxDepth) unit_008B(c, 337u, depth + 1u); else { c.pc = 0x0032FA68u; return; } if (c.pc != 0x00339ED8u) [[unlikely]] return; }
L_00339ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339E28u | kUnwind; return; } goto L_00339E28; } }
L_00339EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339EE8u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x00339EE8u) [[unlikely]] return; }
L_00339EE8:
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
    set32(c.r[29], c.r[29].w[0] + 352u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00339F20:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    set32(c.r[3], ld32((c.r[2].w[0] - 9192u)));
    set32(c.r[18], 0u + 100u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033A008; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 548u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033A008; } }
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 116u);
    set32(c.r[7], c.r[29].w[0] + 120u);
    set32(c.r[18], 0u + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339F6Cu);  if (depth < kMaxDepth) unit_00A5(c, 102u, depth + 1u); else { c.pc = 0x00395290u; return; } if (c.pc != 0x00339F6Cu) [[unlikely]] return; }
L_00339F6C:
    set32(c.r[6], ld32((c.r[29].w[0] + 112u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 7528u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339F84u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x00339F84u) [[unlikely]] return; }
L_00339F84:
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], 0u + 100u);
    set32(c.r[4], 0u + 50u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339FA0u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x00339FA0u) [[unlikely]] return; }
L_00339FA0:
    set32(c.r[6], ld32((c.r[29].w[0] + 116u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 7512u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339FB8u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x00339FB8u) [[unlikely]] return; }
L_00339FB8:
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], 0u + 120u);
    set32(c.r[4], 0u + 50u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339FD4u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x00339FD4u) [[unlikely]] return; }
L_00339FD4:
    set32(c.r[6], ld32((c.r[29].w[0] + 120u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 7488u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339FECu);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x00339FECu) [[unlikely]] return; }
L_00339FEC:
    set32(c.r[4], 0u + 50u);
    set32(c.r[5], 0u + 140u);
    set32(c.r[6], 0u + 128u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A008u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x0033A008u) [[unlikely]] return; }
L_0033A008:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 9196u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033A08C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 9200u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 23016u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0033A02Cu);  goto L_0033A030; }
L_0033A030:
    mmi::divu(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033A08C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[17], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 8232u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 56u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[16], c.r[16].w[0] + 56u);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[17], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A078u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033A078u) [[unlikely]] return; }
L_0033A078:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A08Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033A08Cu) [[unlikely]] return; }
L_0033A08C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 9188u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033A184; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A0ACu);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x0033A0ACu) [[unlikely]] return; }
L_0033A0AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 7472u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A0C4u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0033A0C4u) [[unlikely]] return; }
L_0033A0C4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], 0u + 50u);
    set32(c.r[6], 0u + 128u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 20u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A0E4u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x0033A0E4u) [[unlikely]] return; }
L_0033A0E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], c.r[2].w[0] - 11856u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 540u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033A118; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033A11C; } }
L_0033A118:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033A11C:
    set32(c.r[4], c.r[6].w[0] - 11856u);
    set32(c.r[6], ld32((c.r[2].w[0] + 236u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 540u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033A14C; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033A150; } }
L_0033A14C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033A150:
    set32(c.r[7], ld32((c.r[2].w[0] + 252u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 7440u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A168u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0033A168u) [[unlikely]] return; }
L_0033A168:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], 0u + 50u);
    set32(c.r[6], 0u + 128u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A184u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x0033A184u) [[unlikely]] return; }
L_0033A184:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A1A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[20], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[18], c.r[16].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[4].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033A214; } }
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[6], 0u + 4u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[18].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A214u);  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x0033A214u) [[unlikely]] return; }
L_0033A214:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[20].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0033A264; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 3;
L_0033A248:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A248u | kUnwind; return; } goto L_0033A248; } }
L_0033A264:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0033A2A4; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_0033A288:
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] - 4u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A288u | kUnwind; return; } goto L_0033A288; } }
L_0033A2A4:
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
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
L_0033A2D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[6].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 8;
L_0033A2F0:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A2FCu);  if (depth < kMaxDepth) unit_008E(c, 176u, depth + 1u); else { c.pc = 0x0033A1A0u; return; } if (c.pc != 0x0033A2FCu) [[unlikely]] return; }
L_0033A2FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033A30C; } }
L_0033A304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A30Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0033A30Cu) [[unlikely]] return; }
L_0033A30C:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0033A394; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A344u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033A344u) [[unlikely]] return; }
L_0033A344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033A394; } }
L_0033A34C:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A304u | kUnwind; return; } goto L_0033A304; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A384u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033A384u) [[unlikely]] return; }
L_0033A384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A304u | kUnwind; return; } goto L_0033A304; } }
L_0033A38C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A394u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0033A394u) [[unlikely]] return; }
L_0033A394:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A3A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0033A424; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033A3E4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A3DCu);  if (depth < kMaxDepth) unit_008E(c, 92u, depth + 1u); else { c.pc = 0x00339500u; return; } if (c.pc != 0x0033A3DCu) [[unlikely]] return; }
L_0033A3DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033A424; } }
L_0033A3E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 11856u);
    set32(c.r[3], c.r[2].w[0] + 624u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033A424; } }
    set32(c.r[16], c.r[2].w[0] + 4272u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0033A424; } }
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0033A408:
    set32(c.r[16], c.r[16].w[0] - 192u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A41Cu);  if (depth < kMaxDepth) unit_008F(c, 332u, depth + 1u); else { c.pc = 0x0033EEA0u; return; } if (c.pc != 0x0033A41Cu) [[unlikely]] return; }
L_0033A41C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A408u | kUnwind; return; } goto L_0033A408; } }
L_0033A424:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 6904u);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033A48C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 14u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A48Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033A48Cu) [[unlikely]] return; }
L_0033A48C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A4A0:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 20624u);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A4C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0033A500; } }
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
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A500u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033A500u) [[unlikely]] return; }
L_0033A500:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A510:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - 6936u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033A538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A538u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x0033A538u) [[unlikely]] return; }
L_0033A538:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A548:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A560u);  if (depth < kMaxDepth) unit_008E(c, 196u, depth + 1u); else { c.pc = 0x0033A4A0u; return; } if (c.pc != 0x0033A560u) [[unlikely]] return; }
L_0033A560:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 31088u);
    set32(c.r[4], c.r[4].w[0] + 31064u);
    set32(c.r[5], c.r[5].w[0] + 31040u);
    set32(c.r[6], c.r[6].w[0] + 31016u);
    set32(c.r[7], c.r[7].w[0] + 30960u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[7].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A5B8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 256u), 0u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 112u), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A5D8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A5F0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A624u);  if (depth < kMaxDepth) unit_00A3(c, 103u, depth + 1u); else { c.pc = 0x0038DDC0u; return; } if (c.pc != 0x0033A624u) [[unlikely]] return; }
L_0033A624:
    c.r[16].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033A65C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 14u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A65Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033A65Cu) [[unlikely]] return; }
L_0033A65C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A678:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] - 8008u);
    set32(c.r[8], c.r[8].w[0] - 8200u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 406u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A6ACu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0033A6ACu) [[unlikely]] return; }
L_0033A6AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A6C0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 8008u);
    set32(c.r[7], c.r[7].w[0] - 8192u);
    set32(c.r[8], 0u + 406u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A6F0u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0033A6F0u) [[unlikely]] return; }
L_0033A6F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A700:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] - 8008u);
    set32(c.r[8], c.r[8].w[0] - 8184u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 406u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A734u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0033A734u) [[unlikely]] return; }
L_0033A734:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A748:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 8008u);
    set32(c.r[7], c.r[7].w[0] - 8176u);
    set32(c.r[8], 0u + 406u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A778u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0033A778u) [[unlikely]] return; }
L_0033A778:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A788:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 7144u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], c.r[16].w[0] + 40u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    c.f[0] = 0u;
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 76u), c.f[0]);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    st32((c.r[16].w[0] + 92u), c.f[0]);
    st32((c.r[16].w[0] + 88u), c.f[0]);
    st32((c.r[16].w[0] + 84u), c.f[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 37;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A820:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A830:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A848:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A858:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0033A8A8; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 40u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_0033A888:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0033A8EC; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A888u | kUnwind; return; } goto L_0033A888; } }
L_0033A8A8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0033A8AC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0033A92C; } }
    set32(c.r[16], c.r[4].w[0] + 40u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[17].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0033A90C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033A8F8; } }
    set32(c.r[5], c.r[5].w[0] << 1);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033A8FC; } }
L_0033A8EC:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A8ACu | kUnwind; return; } goto L_0033A8AC; } }
L_0033A8F8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0033A8FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A90Cu);  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x0033A90Cu) [[unlikely]] return; }
L_0033A90C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
L_0033A92C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A948:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0033A994; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 40u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0033A968:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0033A980; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033A998; } }
L_0033A980:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A968u | kUnwind; return; } goto L_0033A968; } }
L_0033A994:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0033A998:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033A9CC; } }
    set32(c.r[3], c.r[4].w[0] + 40u);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 11;
L_0033A9CC:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A9D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[4].w[0] + 40u);
    st32((c.r[16].w[0] + 4u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033AA00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AA24u);  if (depth < kMaxDepth) unit_008F(c, 26u, depth + 1u); else { c.pc = 0x0033C4D0u; return; } if (c.pc != 0x0033AA24u) [[unlikely]] return; }
L_0033AA24:
    c.r[16].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033AA58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 8008u);
    set32(c.r[7], c.r[7].w[0] - 8192u);
    set32(c.r[8], 0u + 486u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AA58u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0033AA58u) [[unlikely]] return; }
L_0033AA58:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033AA70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AA90u);  if (depth < kMaxDepth) unit_008F(c, 57u, depth + 1u); else { c.pc = 0x0033C8E8u; return; } if (c.pc != 0x0033AA90u) [[unlikely]] return; }
L_0033AA90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033AAA4; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[17].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0033AAA4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033AAC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AADCu);  if (depth < kMaxDepth) unit_008F(c, 59u, depth + 1u); else { c.pc = 0x0033C978u; return; } if (c.pc != 0x0033AADCu) [[unlikely]] return; }
L_0033AADC:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033AB0C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AAFCu);  if (depth < kMaxDepth) unit_008F(c, 59u, depth + 1u); else { c.pc = 0x0033C978u; return; } if (c.pc != 0x0033AAFCu) [[unlikely]] return; }
L_0033AAFC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033AB10; } }
L_0033AB0C:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_0033AB10:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033AB30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033AB40:
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033AB50:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033AB68:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 7256u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AB98u);  if (depth < kMaxDepth) unit_008F(c, 26u, depth + 1u); else { c.pc = 0x0033C4D0u; return; } if (c.pc != 0x0033AB98u) [[unlikely]] return; }
L_0033AB98:
    c.r[16].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033ABCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 8008u);
    set32(c.r[7], c.r[7].w[0] - 8192u);
    set32(c.r[8], 0u + 610u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ABCCu);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0033ABCCu) [[unlikely]] return; }
L_0033ABCC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033ABE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033ABF8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033AC08:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033AC18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - 6936u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033AC40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AC40u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x0033AC40u) [[unlikely]] return; }
L_0033AC40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033AC50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[9], c.r[4].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - 7288u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[9].w[0] + 32u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[8]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    st32((c.r[9].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0] + 36u)));
    st32((c.r[9].w[0] + 36u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 72u), 0u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033ACA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033ACB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ACE0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033ACE0u) [[unlikely]] return; }
L_0033ACE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033ACF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AD1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033AD1Cu) [[unlikely]] return; }
L_0033AD1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033AD30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20748u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0033AD78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AD60u);  if (depth < kMaxDepth) unit_0044(c, 33u, depth + 1u); else { c.pc = 0x00210EC8u; return; } if (c.pc != 0x0033AD60u) [[unlikely]] return; }
L_0033AD60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033AD78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 9216u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033AD8C; } }
L_0033AD78:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AD84u);  if (depth < kMaxDepth) unit_00DD(c, 232u, depth + 1u); else { c.pc = 0x00476988u; return; } if (c.pc != 0x0033AD84u) [[unlikely]] return; }
L_0033AD84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033ADB4; } }
L_0033AD8C:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20748u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 7856u);
    set32(c.r[8], c.r[8].w[0] - 7808u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 126u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ADB4u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0033ADB4u) [[unlikely]] return; }
L_0033ADB4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033ADD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20748u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0033AE18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AE00u);  if (depth < kMaxDepth) unit_0044(c, 33u, depth + 1u); else { c.pc = 0x00210EC8u; return; } if (c.pc != 0x0033AE00u) [[unlikely]] return; }
L_0033AE00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033AE18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 9216u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033AE2C; } }
L_0033AE18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AE24u);  if (depth < kMaxDepth) unit_00DD(c, 236u, depth + 1u); else { c.pc = 0x004769D8u; return; } if (c.pc != 0x0033AE24u) [[unlikely]] return; }
L_0033AE24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033AE50; } }
L_0033AE2C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20748u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 7856u);
    set32(c.r[7], c.r[7].w[0] - 7792u);
    set32(c.r[8], 0u + 144u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AE50u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0033AE50u) [[unlikely]] return; }
L_0033AE50:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033AE68:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AE8Cu);  if (depth < kMaxDepth) unit_00E3(c, 28u, depth + 1u); else { c.pc = 0x0048C4A8u; return; } if (c.pc != 0x0033AE8Cu) [[unlikely]] return; }
L_0033AE8C:
    c.r[16].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033AEC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 7856u);
    set32(c.r[7], c.r[7].w[0] - 8192u);
    set32(c.r[8], 0u + 353u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AEC0u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0033AEC0u) [[unlikely]] return; }
L_0033AEC0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033AED8:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] - 7856u);
    set32(c.r[8], c.r[8].w[0] - 8200u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 353u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AF0Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0033AF0Cu) [[unlikely]] return; }
L_0033AF0C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033AF20:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 7856u);
    set32(c.r[7], c.r[7].w[0] - 8192u);
    set32(c.r[8], 0u + 353u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AF50u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0033AF50u) [[unlikely]] return; }
L_0033AF50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033AF60:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] - 7856u);
    set32(c.r[8], c.r[8].w[0] - 8184u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 353u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AF94u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0033AF94u) [[unlikely]] return; }
L_0033AF94:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033AFA8:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 7856u);
    set32(c.r[7], c.r[7].w[0] - 8176u);
    set32(c.r[8], 0u + 353u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AFD8u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0033AFD8u) [[unlikely]] return; }
L_0033AFD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033AFE8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B008u);  if (depth < kMaxDepth) unit_008E(c, 196u, depth + 1u); else { c.pc = 0x0033A4A0u; return; } if (c.pc != 0x0033B008u) [[unlikely]] return; }
L_0033B008:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] - 7400u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B038:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033B0DC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[6], 0u + 100u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0033B0AC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_0033B080:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0033B098; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B0B0; } }
L_0033B098:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B080u | kUnwind; return; } goto L_0033B080; } }
L_0033B0AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033B0B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B0C8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B0C8u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00395C58u; return; } if (c.pc != 0x0033B0C8u) [[unlikely]] return; }
L_0033B0C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 100u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B0DCu);  if (depth < kMaxDepth) unit_00A5(c, 138u, depth + 1u); else { c.pc = 0x00395B98u; return; } if (c.pc != 0x0033B0DCu) [[unlikely]] return; }
L_0033B0DC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B0F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B108u);  if (depth < kMaxDepth) unit_008C(c, 43u, depth + 1u); else { c.pc = 0x00330BF0u; return; } if (c.pc != 0x0033B108u) [[unlikely]] return; }
L_0033B108:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B120:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 28392u)));
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033B150; } }
    st32((c.r[8].w[0] + 588u), c.r[5].w[0]);
    st32((c.r[8].w[0] + 592u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 584u), c.r[7].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B150u);  if (depth < kMaxDepth) unit_008C(c, 46u, depth + 1u); else { c.pc = 0x00330D30u; return; } if (c.pc != 0x0033B150u) [[unlikely]] return; }
L_0033B150:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 8232u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 56u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[16], c.r[16].w[0] + 56u);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[17], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B1A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033B1A8u) [[unlikely]] return; }
L_0033B1A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B1BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033B1BCu) [[unlikely]] return; }
L_0033B1BC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B1D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 540u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033B214; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B218; } }
L_0033B214:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033B218:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B254; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4272u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0033B254; } }
L_0033B230:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B240u);  if (depth < kMaxDepth) unit_008E(c, 289u, depth + 1u); else { c.pc = 0x0033B270u; return; } if (c.pc != 0x0033B240u) [[unlikely]] return; }
L_0033B240:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 4272u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B230u | kUnwind; return; } goto L_0033B230; } }
L_0033B254:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4272u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B2DC; } }
    set32(c.r[4], 0u + 192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 624u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    st32((c.r[29].w[0] + 28u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B2DCu);  if (depth < kMaxDepth) unit_008F(c, 223u, depth + 1u); else { c.pc = 0x0033DEC8u; return; } if (c.pc != 0x0033B2DCu) [[unlikely]] return; }
L_0033B2DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B2F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[7], ld32((c.r[2].w[0] - 4u)));
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 400u)));
    c.budget -= 13;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_0033B360; } }
    c.r[2].d[0] = ld16((c.r[7].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033B360; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0033B360; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B360u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033B360u) [[unlikely]] return; }
L_0033B360:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B458; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4276u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B440; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4280u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0033B3E0; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0033B3C0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0033B458; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B3C0u | kUnwind; return; } goto L_0033B3C0; } }
L_0033B3E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0033B418; } }
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[2], 0u + 1u);
    if (c.r[4].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    set32(c.r[6], 0u + 4u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B418u);  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x0033B418u) [[unlikely]] return; }
L_0033B418:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B458; } }
L_0033B440:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0033B44C; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 548u)));
    c.budget -= 1;
L_0033B44C:
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B458u);  if (depth < kMaxDepth) unit_00A5(c, 59u, depth + 1u); else { c.pc = 0x00394B58u; return; } if (c.pc != 0x0033B458u) [[unlikely]] return; }
L_0033B458:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B470:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4280u)));
    st32((c.r[4].w[0] + 4276u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B488:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 4276u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4280u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0033B4FC; } }
    c.budget -= 1;
L_0033B4B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4280u)));
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033B4E4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 548u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B4E4u);  if (depth < kMaxDepth) unit_00A5(c, 59u, depth + 1u); else { c.pc = 0x00394B58u; return; } if (c.pc != 0x0033B4E4u) [[unlikely]] return; }
L_0033B4E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4280u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B4B8u | kUnwind; return; } goto L_0033B4B8; } }
L_0033B4FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4280u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B520:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4272u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B57C; } }
    set32(c.r[16], 0u + 192u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 636u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B568u);  if (depth < kMaxDepth) unit_0044(c, 275u, depth + 1u); else { c.pc = 0x00213C98u; return; } if (c.pc != 0x0033B568u) [[unlikely]] return; }
L_0033B568:
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B57Cu);  if (depth < kMaxDepth) unit_008F(c, 337u, depth + 1u); else { c.pc = 0x0033EF60u; return; } if (c.pc != 0x0033B57Cu) [[unlikely]] return; }
L_0033B57C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B598:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B5C4u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x0033B5C4u) [[unlikely]] return; }
L_0033B5C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4272u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B600; } }
    set32(c.r[4], 0u + 192u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + 656u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B5F0u);  if (depth < kMaxDepth) unit_008F(c, 342u, depth + 1u); else { c.pc = 0x0033F0A8u; return; } if (c.pc != 0x0033B5F0u) [[unlikely]] return; }
L_0033B5F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B600u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x0033B600u) [[unlikely]] return; }
L_0033B600:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B620:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B640u);  if (depth < kMaxDepth) unit_008D(c, 284u, depth + 1u); else { c.pc = 0x00337448u; return; } if (c.pc != 0x0033B640u) [[unlikely]] return; }
L_0033B640:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033B658; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B658u);  if (depth < kMaxDepth) unit_008D(c, 288u, depth + 1u); else { c.pc = 0x00337530u; return; } if (c.pc != 0x0033B658u) [[unlikely]] return; }
L_0033B658:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B670:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[16].w[0] + 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B690u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0033B690u) [[unlikely]] return; }
L_0033B690:
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    c.r[17].d[0] = c.r[29].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 100u));
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    st32((c.r[29].w[0] + 28u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    set32(c.r[16], ld32((c.r[3].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B6CCu);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x0033B6CCu) [[unlikely]] return; }
L_0033B6CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033B6EC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B6EC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B6ECu);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x0033B6ECu) [[unlikely]] return; }
L_0033B6EC:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 168u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B70Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033B70Cu) [[unlikely]] return; }
L_0033B70C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B728:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st32((c.r[29].w[0] + 12u), 0u);
    set32(c.r[17], c.r[4].w[0] + 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    st128((c.r[4].w[0] + 80u) & ~15u, c.r[2]);
    set32(c.r[16], ld32((c.r[3].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B774u);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x0033B774u) [[unlikely]] return; }
L_0033B774:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033B794; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B794; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B794u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x0033B794u) [[unlikely]] return; }
L_0033B794:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 180u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B7B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033B7B4u) [[unlikely]] return; }
L_0033B7B4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B7D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B800u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x0033B800u) [[unlikely]] return; }
L_0033B800:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0033B828; } }
    set32(c.r[7], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[16].w[0] + 128u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B828u);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x0033B828u) [[unlikely]] return; }
L_0033B828:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[7].w[0]);
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00340000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 11856u);
    set32(c.r[5], c.r[5].w[0] - 18480u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B87Cu);  if (depth < kMaxDepth) unit_008E(c, 71u, depth + 1u); else { c.pc = 0x00338FA0u; return; } if (c.pc != 0x0033B87Cu) [[unlikely]] return; }
L_0033B87C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B890:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B918; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B8D0u);  if (depth < kMaxDepth) unit_008F(c, 33u, depth + 1u); else { c.pc = 0x0033C660u; return; } if (c.pc != 0x0033B8D0u) [[unlikely]] return; }
L_0033B8D0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0033B8F4; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[2], c.r[2].w[0] << (c.r[17].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B908; } }
L_0033B8F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << (c.r[17].w[0] & 31u));
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
L_0033B908:
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033B918; } }
    st32((c.r[4].w[0] + 112u), c.r[19].w[0]);
    c.budget -= 1;
L_0033B918:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B938:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B948:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B950:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4272u)));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0033B9FC; } }
    set32(c.r[20], c.r[18].w[0] + 656u);
    set32(c.r[19], c.r[18].w[0] + 800u);
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0033B990:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033B9DC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B9B0u);  if (depth < kMaxDepth) unit_008E(c, 55u, depth + 1u); else { c.pc = 0x00338AD8u; return; } if (c.pc != 0x0033B9B0u) [[unlikely]] return; }
L_0033B9B0:
    set32(c.r[16], c.r[21].w[0] + 624u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B9CC; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B9CCu);  if (depth < kMaxDepth) unit_008F(c, 238u, depth + 1u); else { c.pc = 0x0033E188u; return; } if (c.pc != 0x0033B9CCu) [[unlikely]] return; }
L_0033B9CC:
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B9DCu);  if (depth < kMaxDepth) unit_008F(c, 228u, depth + 1u); else { c.pc = 0x0033E008u; return; } if (c.pc != 0x0033B9DCu) [[unlikely]] return; }
L_0033B9DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4272u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 192u);
    set32(c.r[19], c.r[19].w[0] + 192u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[21], c.r[21].w[0] + 192u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B990u | kUnwind; return; } goto L_0033B990; } }
L_0033B9FC:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033BA28:
    set32(c.r[2], ld32((c.r[4].w[0] + 4272u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0033BA50; } }
    c.budget -= 1;
L_0033BA38:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033BA38u | kUnwind; return; } goto L_0033BA38; } }
L_0033BA50:
    st32((c.r[4].w[0] + 4272u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033BA60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[8].w[0] + 540u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033BA9C; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033BAA0; } }
L_0033BA9C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033BAA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033BB10; } }
    set32(c.r[2], ld32((c.r[10].w[0] + 104u)));
    set32(c.r[7], ld32((c.r[8].w[0] + 4272u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033BB10; } }
    c.r[2].d[0] = c.r[7].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033BB10; } }
    set32(c.r[2], 0u + 192u);
    set32(c.r[3], c.r[7].w[0] + 1u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[8].w[0] + 4272u), c.r[3].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));
    set32(c.r[3], 0u + 11u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    set32(c.r[4], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 656u);
    st32((c.r[2].w[0] + 632u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 800u), c.r[10].w[0]);
    st32((c.r[2].w[0] + 628u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 624u), c.r[7].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BB10u);  if (depth < kMaxDepth) unit_008F(c, 156u, depth + 1u); else { c.pc = 0x0033D708u; return; } if (c.pc != 0x0033BB10u) [[unlikely]] return; }
L_0033BB10:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033BB28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BB40u);  if (depth < kMaxDepth) unit_00A3(c, 123u, depth + 1u); else { c.pc = 0x0038E288u; return; } if (c.pc != 0x0033BB40u) [[unlikely]] return; }
L_0033BB40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 7088u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033BB68:
    set32(c.r[3], 0u + 13248u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 10372u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033BBF4; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 156u)));
    c.r[3].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033BBBC; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033BBF4; } }
L_0033BBBC:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033BBF4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 10372u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033BBF4; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 104u)));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BBF4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033BBF4u) [[unlikely]] return; }
L_0033BBF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033BC08:
    set32(c.r[3], 0u + 13248u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 10372u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033BCA4; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 156u)));
    c.r[3].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033BC64; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0033BCA4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033BCA4; } }
L_0033BC64:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033BCA4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0033BC84; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[5].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0033BC84:
    set32(c.r[2], ld32((c.r[4].w[0] + 10372u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033BCA4; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 104u)));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BCA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033BCA4u) [[unlikely]] return; }
L_0033BCA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033BCB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BCC8u);  if (depth < kMaxDepth) unit_00A3(c, 113u, depth + 1u); else { c.pc = 0x0038E040u; return; } if (c.pc != 0x0033BCC8u) [[unlikely]] return; }
L_0033BCC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033BCD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BCE8u);  if (depth < kMaxDepth) unit_00A3(c, 117u, depth + 1u); else { c.pc = 0x0038E138u; return; } if (c.pc != 0x0033BCE8u) [[unlikely]] return; }
L_0033BCE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033BCF8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BD28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033BD28u) [[unlikely]] return; }
L_0033BD28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033BD6C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033BD5C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BD54u);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033BD88u; return; } if (c.pc != 0x0033BD54u) [[unlikely]] return; }
L_0033BD54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033BD6C; } }
L_0033BD5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BD6Cu);  if (depth < kMaxDepth) unit_008E(c, 356u, depth + 1u); else { c.pc = 0x0033BE10u; return; } if (c.pc != 0x0033BD6Cu) [[unlikely]] return; }
L_0033BD6C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033BD88:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033BDB4; } }
    c.r[2].d[0] = c.r[3].d[0] | 132ull;
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0033BDB4:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BDC0u);  if (depth < kMaxDepth) unit_008F(c, 40u, depth + 1u); else { c.pc = 0x0033C768u; return; } if (c.pc != 0x0033BDC0u) [[unlikely]] return; }
L_0033BDC0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033BDF4; } }
    set32(c.r[16], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033BDF4; } }
L_0033BDD8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BDE8u);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033BD88u; return; } if (c.pc != 0x0033BDE8u) [[unlikely]] return; }
L_0033BDE8:
    set32(c.r[16], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033BDD8u | kUnwind; return; } goto L_0033BDD8; } }
L_0033BDF4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033BE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033BE48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65531ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_0033BE48:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BE54u);  if (depth < kMaxDepth) unit_008F(c, 40u, depth + 1u); else { c.pc = 0x0033C768u; return; } if (c.pc != 0x0033BE54u) [[unlikely]] return; }
L_0033BE54:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033BE8C; } }
    set32(c.r[16], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033BE8C; } }
    c.budget -= 1;
L_0033BE70:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BE80u);  if (depth < kMaxDepth) unit_008E(c, 356u, depth + 1u); else { c.pc = 0x0033BE10u; return; } if (c.pc != 0x0033BE80u) [[unlikely]] return; }
L_0033BE80:
    set32(c.r[16], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033BE70u | kUnwind; return; } goto L_0033BE70; } }
L_0033BE8C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033BEA8:
    st32((c.r[5].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033BEB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033BEC0:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 13248u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 10372u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033BEF4; } }
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_0033BEF4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033BF18; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BF10u);  if (depth < kMaxDepth) unit_008E(c, 365u, depth + 1u); else { c.pc = 0x0033BF40u; return; } if (c.pc != 0x0033BF10u) [[unlikely]] return; }
L_0033BF10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033BF2C; } }
L_0033BF18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BF2Cu);  if (depth < kMaxDepth) unit_008F(c, 4u, depth + 1u); else { c.pc = 0x0033C038u; return; } if (c.pc != 0x0033BF2Cu) [[unlikely]] return; }
L_0033BF2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033BF40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[7].w[0] + 540u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033BF7C; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033BF80; } }
L_0033BF7C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033BF80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033BFBC; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 540u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033BFB0; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033BFB4; } }
L_0033BFB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033BFB4:
    set32(c.r[2], ld32((c.r[2].w[0] + 232u)));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0033BFBC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_008F(c, 3u, depth); } }
    set32(c.r[2], ld32((c.r[7].w[0] + 4272u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_008F(c, 3u, depth); } }
    set32(c.r[2], 0u + 192u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 624u);
    set32(c.r[4], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_008F(c, 3u, depth); } }
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 2;
    [[clang::musttail]] return unit_008F(c, 1u, depth);
}

}
