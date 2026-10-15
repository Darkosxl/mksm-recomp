#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0,
    0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0,
    0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0,
    46, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60,
    0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0,
    0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0,
    0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159,
    0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0,
    0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 228, 0, 229, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0,
    273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0,
};

void unit_001A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00168000;
    case 2u: goto L_00168028;
    case 3u: goto L_00168030;
    case 4u: goto L_00168080;
    case 5u: goto L_001680F8;
    case 6u: goto L_00168190;
    case 7u: goto L_001681A8;
    case 8u: goto L_001681EC;
    case 9u: goto L_00168210;
    case 10u: goto L_00168268;
    case 11u: goto L_00168278;
    case 12u: goto L_001682B8;
    case 13u: goto L_001682F8;
    case 14u: goto L_0016832C;
    case 15u: goto L_00168350;
    case 16u: goto L_001683A8;
    case 17u: goto L_001683B8;
    case 18u: goto L_001683F8;
    case 19u: goto L_00168438;
    case 20u: goto L_00168478;
    case 21u: goto L_00168490;
    case 22u: goto L_001684AC;
    case 23u: goto L_001684BC;
    case 24u: goto L_0016854C;
    case 25u: goto L_001685A0;
    case 26u: goto L_00168638;
    case 27u: goto L_00168668;
    case 28u: goto L_001686A0;
    case 29u: goto L_001686B4;
    case 30u: goto L_001686C4;
    case 31u: goto L_001686E4;
    case 32u: goto L_00168708;
    case 33u: goto L_00168720;
    case 34u: goto L_00168734;
    case 35u: goto L_0016874C;
    case 36u: goto L_00168774;
    case 37u: goto L_00168784;
    case 38u: goto L_00168798;
    case 39u: goto L_001687B0;
    case 40u: goto L_001687C4;
    case 41u: goto L_001687D8;
    case 42u: goto L_001687EC;
    case 43u: goto L_00168804;
    case 44u: goto L_00168848;
    case 45u: goto L_00168874;
    case 46u: goto L_00168880;
    case 47u: goto L_00168888;
    case 48u: goto L_001688A4;
    case 49u: goto L_001688C4;
    case 50u: goto L_001688F0;
    case 51u: goto L_0016890C;
    case 52u: goto L_00168920;
    case 53u: goto L_001689A0;
    case 54u: goto L_001689B0;
    case 55u: goto L_001689F0;
    case 56u: goto L_00168A48;
    case 57u: goto L_00168A60;
    case 58u: goto L_00168A94;
    case 59u: goto L_00168AB8;
    case 60u: goto L_00168AFC;
    case 61u: goto L_00168B18;
    case 62u: goto L_00168B38;
    case 63u: goto L_00168B48;
    case 64u: goto L_00168B78;
    case 65u: goto L_00168BD8;
    case 66u: goto L_00168C34;
    case 67u: goto L_00168C4C;
    case 68u: goto L_00168C78;
    case 69u: goto L_00168C98;
    case 70u: goto L_00168CA8;
    case 71u: goto L_00168CB0;
    case 72u: goto L_00168CE0;
    case 73u: goto L_00168CF8;
    case 74u: goto L_00168D08;
    case 75u: goto L_00168D44;
    case 76u: goto L_00168D5C;
    case 77u: goto L_00168D70;
    case 78u: goto L_00168D94;
    case 79u: goto L_00168DB4;
    case 80u: goto L_00168DC0;
    case 81u: goto L_00168DE8;
    case 82u: goto L_00168E00;
    case 83u: goto L_00168E10;
    case 84u: goto L_00168E58;
    case 85u: goto L_00168E70;
    case 86u: goto L_00168F18;
    case 87u: goto L_00168F30;
    case 88u: goto L_00168FF0;
    case 89u: goto L_0016905C;
    case 90u: goto L_001690F4;
    case 91u: goto L_0016918C;
    case 92u: goto L_00169200;
    case 93u: goto L_00169228;
    case 94u: goto L_00169258;
    case 95u: goto L_00169270;
    case 96u: goto L_00169280;
    case 97u: goto L_001692A0;
    case 98u: goto L_001692D0;
    case 99u: goto L_001692E0;
    case 100u: goto L_001692F8;
    case 101u: goto L_00169308;
    case 102u: goto L_00169338;
    case 103u: goto L_00169374;
    case 104u: goto L_00169388;
    case 105u: goto L_001693D4;
    case 106u: goto L_001693E0;
    case 107u: goto L_001693F0;
    case 108u: goto L_00169418;
    case 109u: goto L_00169490;
    case 110u: goto L_001694B0;
    case 111u: goto L_001694D0;
    case 112u: goto L_001694F8;
    case 113u: goto L_00169540;
    case 114u: goto L_00169568;
    case 115u: goto L_001695A8;
    case 116u: goto L_001695B0;
    case 117u: goto L_001695DC;
    case 118u: goto L_00169618;
    case 119u: goto L_00169690;
    case 120u: goto L_001696C0;
    case 121u: goto L_001696E0;
    case 122u: goto L_00169740;
    case 123u: goto L_00169780;
    case 124u: goto L_001697C0;
    case 125u: goto L_001697D8;
    case 126u: goto L_00169810;
    case 127u: goto L_001698A0;
    case 128u: goto L_001698C8;
    case 129u: goto L_001698F8;
    case 130u: goto L_00169924;
    case 131u: goto L_0016992C;
    case 132u: goto L_00169940;
    case 133u: goto L_001699BC;
    case 134u: goto L_001699D8;
    case 135u: goto L_001699E8;
    case 136u: goto L_00169A00;
    case 137u: goto L_00169A10;
    case 138u: goto L_00169A54;
    case 139u: goto L_00169A6C;
    case 140u: goto L_00169A88;
    case 141u: goto L_00169AA4;
    case 142u: goto L_00169AD8;
    case 143u: goto L_00169B3C;
    case 144u: goto L_00169B50;
    case 145u: goto L_00169B84;
    case 146u: goto L_00169BE4;
    case 147u: goto L_00169BF8;
    case 148u: goto L_00169C20;
    case 149u: goto L_00169C90;
    case 150u: goto L_00169CA0;
    case 151u: goto L_00169CB8;
    case 152u: goto L_00169CE4;
    case 153u: goto L_00169CF4;
    case 154u: goto L_00169D08;
    case 155u: goto L_00169D80;
    case 156u: goto L_00169D9C;
    case 157u: goto L_00169DBC;
    case 158u: goto L_00169DC8;
    case 159u: goto L_00169DFC;
    case 160u: goto L_00169E0C;
    case 161u: goto L_00169E38;
    case 162u: goto L_00169E44;
    case 163u: goto L_00169E50;
    case 164u: goto L_00169E5C;
    case 165u: goto L_00169E68;
    case 166u: goto L_00169E88;
    case 167u: goto L_00169EA8;
    case 168u: goto L_00169EB8;
    case 169u: goto L_00169EC0;
    case 170u: goto L_00169F08;
    case 171u: goto L_00169F24;
    case 172u: goto L_00169F60;
    case 173u: goto L_00169F98;
    case 174u: goto L_00169FBC;
    case 175u: goto L_00169FC8;
    case 176u: goto L_00169FE8;
    case 177u: goto L_0016A00C;
    case 178u: goto L_0016A018;
    case 179u: goto L_0016A038;
    case 180u: goto L_0016A058;
    case 181u: goto L_0016A078;
    case 182u: goto L_0016A080;
    case 183u: goto L_0016A0B8;
    case 184u: goto L_0016A0D4;
    case 185u: goto L_0016A0F4;
    case 186u: goto L_0016A100;
    case 187u: goto L_0016A134;
    case 188u: goto L_0016A144;
    case 189u: goto L_0016A178;
    case 190u: goto L_0016A1A8;
    case 191u: goto L_0016A1C8;
    case 192u: goto L_0016A1E0;
    case 193u: goto L_0016A1F8;
    case 194u: goto L_0016A210;
    case 195u: goto L_0016A230;
    case 196u: goto L_0016A268;
    case 197u: goto L_0016A284;
    case 198u: goto L_0016A2A4;
    case 199u: goto L_0016A2B0;
    case 200u: goto L_0016A2E4;
    case 201u: goto L_0016A2F4;
    case 202u: goto L_0016A328;
    case 203u: goto L_0016A360;
    case 204u: goto L_0016A380;
    case 205u: goto L_0016A3A0;
    case 206u: goto L_0016A3D0;
    case 207u: goto L_0016A3F0;
    case 208u: goto L_0016A410;
    case 209u: goto L_0016A428;
    case 210u: goto L_0016A438;
    case 211u: goto L_0016A458;
    case 212u: goto L_0016A478;
    case 213u: goto L_0016A490;
    case 214u: goto L_0016A4A0;
    case 215u: goto L_0016A4D0;
    case 216u: goto L_0016A508;
    case 217u: goto L_0016A540;
    case 218u: goto L_0016A578;
    case 219u: goto L_0016A5B0;
    case 220u: goto L_0016A5E8;
    case 221u: goto L_0016A638;
    case 222u: goto L_0016A658;
    case 223u: goto L_0016A668;
    case 224u: goto L_0016A680;
    case 225u: goto L_0016A690;
    case 226u: goto L_0016A6BC;
    case 227u: goto L_0016A6D0;
    case 228u: goto L_0016A6D8;
    case 229u: goto L_0016A6E0;
    case 230u: goto L_0016A6F0;
    case 231u: goto L_0016A714;
    case 232u: goto L_0016A728;
    case 233u: goto L_0016A740;
    case 234u: goto L_0016A750;
    case 235u: goto L_0016A7E8;
    case 236u: goto L_0016AC20;
    case 237u: goto L_0016AC90;
    case 238u: goto L_0016ACD4;
    case 239u: goto L_0016AD64;
    case 240u: goto L_0016AD98;
    case 241u: goto L_0016ADB4;
    case 242u: goto L_0016ADF0;
    case 243u: goto L_0016AE48;
    case 244u: goto L_0016AE84;
    case 245u: goto L_0016AEA8;
    case 246u: goto L_0016AEE0;
    case 247u: goto L_0016AF00;
    case 248u: goto L_0016AF24;
    case 249u: goto L_0016AF44;
    case 250u: goto L_0016AF80;
    case 251u: goto L_0016B020;
    case 252u: goto L_0016B03C;
    case 253u: goto L_0016B070;
    case 254u: goto L_0016B07C;
    case 255u: goto L_0016B100;
    case 256u: goto L_0016B138;
    case 257u: goto L_0016B1B8;
    case 258u: goto L_0016B1CC;
    case 259u: goto L_0016B1F8;
    case 260u: goto L_0016B260;
    case 261u: goto L_0016B2B0;
    case 262u: goto L_0016B2BC;
    case 263u: goto L_0016B330;
    case 264u: goto L_0016B380;
    case 265u: goto L_0016B38C;
    case 266u: goto L_0016B3C0;
    case 267u: goto L_0016B400;
    case 268u: goto L_0016B450;
    case 269u: goto L_0016B45C;
    case 270u: goto L_0016B48C;
    case 271u: goto L_0016B5B0;
    case 272u: goto L_0016B5F8;
    case 273u: goto L_0016B600;
    case 274u: goto L_0016B60C;
    case 275u: goto L_0016B638;
    case 276u: goto L_0016B660;
    case 277u: goto L_0016B6B0;
    case 278u: goto L_0016B6BC;
    case 279u: goto L_0016B718;
    case 280u: goto L_0016B768;
    case 281u: goto L_0016B774;
    case 282u: goto L_0016B7C0;
    case 283u: goto L_0016B824;
    case 284u: goto L_0016B838;
    case 285u: goto L_0016B880;
    case 286u: goto L_0016B890;
    case 287u: goto L_0016B950;
    case 288u: goto L_0016BC38;
    case 289u: goto L_0016BC5C;
    case 290u: goto L_0016BC88;
    case 291u: goto L_0016BC98;
    case 292u: goto L_0016BCFC;
    case 293u: goto L_0016BD44;
    case 294u: goto L_0016BD88;
    case 295u: goto L_0016BDD4;
    case 296u: goto L_0016BE20;
    case 297u: goto L_0016BE70;
    case 298u: goto L_0016BEC0;
    case 299u: goto L_0016BF10;
    case 300u: goto L_0016BF48;
    case 301u: goto L_0016BF98;
    case 302u: goto L_0016BFC4;
    case 303u: goto L_0016BFF4;
    default: bad_entry(c, 0x00168000u); return;
    }
L_00168000:
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0016802C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
L_00168028:
    st32((c.r[16].w[0] + 12872u), c.f[0]);
    c.budget -= 1;
L_0016802C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00168030:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x456A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00168070; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43AA0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001680DC; } }
L_00168070:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 12912u));
    c.f[2] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 4;
L_00168080:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    st32((c.r[16].w[0] + 12872u), c.f[2]);
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001680A8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001680D4; } }
L_001680A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001680D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 4;
L_001680D4:
    st32((c.r[16].w[0] + 12872u), c.f[0]);
    c.budget -= 1;
L_001680D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001680DC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[21] = ld32((c.r[29].w[0] + 56u));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001680F8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[20], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_00168574; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 142u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00168440; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 11824u)));
    set32(c.r[20], c.r[16].w[0] + 11824u);
    set32(c.r[19], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[18], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001681B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[20].w[0] + 16u));
    c.f[1] = ld32((c.r[2].w[0] - 23036u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBA030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001681B0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168190u);  if (depth < kMaxDepth) unit_0089(c, 55u, depth + 1u); else { c.pc = 0x00324D40u; return; } if (c.pc != 0x00168190u) [[unlikely]] return; }
L_00168190:
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001681B0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001681A8u);  if (depth < kMaxDepth) unit_003A(c, 230u, depth + 1u); else { c.pc = 0x001EA468u; return; } if (c.pc != 0x001681A8u) [[unlikely]] return; }
L_001681A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00168570; } }
L_001681B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 12820u)));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[3].d[0];  if (t) { goto L_00168300; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00168570; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001681ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001681ECu) [[unlikely]] return; }
L_001681EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001682E8; } }
    set32(c.r[21], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 13136u), c.r[21].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168210u);  if (depth < kMaxDepth) unit_0019(c, 157u, depth + 1u); else { c.pc = 0x00165C70u; return; } if (c.pc != 0x00168210u) [[unlikely]] return; }
L_00168210:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[4], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[6], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[19], c.r[5].w[0] - 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { goto L_00168250; } }
    st32((c.r[16].w[0] + 13024u), 0u);
    st32((c.r[16].w[0] + 13028u), 0u);
    st32((c.r[16].w[0] + 13032u), 0u);
    c.budget -= 3;
L_00168250:
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168268u);  if (depth < kMaxDepth) unit_0080(c, 176u, depth + 1u); else { c.pc = 0x00302C48u; return; } if (c.pc != 0x00168268u) [[unlikely]] return; }
L_00168268:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168278u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x00168278u) [[unlikely]] return; }
L_00168278:
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 10u);
    set32(c.r[5], 0u + 80u);
    set32(c.r[6], 0u - 3u);
    set32(c.r[7], 0u + 16u);
    set32(c.r[8], 0u + 16u);
    st32((c.r[16].w[0] + 13080u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 8940u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 9020u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 7676u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 9924u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st64((c.r[16].w[0] + 560u), c.r[8].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001682B8u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x001682B8u) [[unlikely]] return; }
L_001682B8:
    set32(c.r[2], 0u + 2u);
    c.f[0] = ld32((c.r[16].w[0] + 13024u));
    st16((c.r[16].w[0] + 11352u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 13032u));
    c.f[2] = ld32((c.r[17].w[0] + 68u));
    st32((c.r[16].w[0] + 212u), 0u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 208u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 68u));
    st32((c.r[16].w[0] + 13128u), c.r[21].w[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 216u), c.f[1]);
    c.budget -= 12;
L_001682E8:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001682F8u);  if (depth < kMaxDepth) unit_006E(c, 205u, depth + 1u); else { c.pc = 0x002BAFB8u; return; } if (c.pc != 0x001682F8u) [[unlikely]] return; }
L_001682F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00168570; } }
L_00168300:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00168570; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016832Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016832Cu) [[unlikely]] return; }
L_0016832C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00168428; } }
    set32(c.r[21], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 13136u), c.r[21].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168350u);  if (depth < kMaxDepth) unit_0019(c, 157u, depth + 1u); else { c.pc = 0x00165C70u; return; } if (c.pc != 0x00168350u) [[unlikely]] return; }
L_00168350:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[4], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[6], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[19], c.r[5].w[0] - 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { goto L_00168390; } }
    st32((c.r[16].w[0] + 13024u), 0u);
    st32((c.r[16].w[0] + 13028u), 0u);
    st32((c.r[16].w[0] + 13032u), 0u);
    c.budget -= 3;
L_00168390:
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001683A8u);  if (depth < kMaxDepth) unit_0080(c, 176u, depth + 1u); else { c.pc = 0x00302C48u; return; } if (c.pc != 0x001683A8u) [[unlikely]] return; }
L_001683A8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001683B8u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x001683B8u) [[unlikely]] return; }
L_001683B8:
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 10u);
    set32(c.r[5], 0u + 80u);
    set32(c.r[6], 0u - 3u);
    set32(c.r[7], 0u + 16u);
    set32(c.r[8], 0u + 16u);
    st32((c.r[16].w[0] + 13080u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 8940u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 9020u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 7676u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 9924u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st64((c.r[16].w[0] + 560u), c.r[8].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001683F8u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x001683F8u) [[unlikely]] return; }
L_001683F8:
    set32(c.r[2], 0u + 2u);
    c.f[0] = ld32((c.r[16].w[0] + 13024u));
    st16((c.r[16].w[0] + 11352u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 13032u));
    c.f[2] = ld32((c.r[17].w[0] + 68u));
    st32((c.r[16].w[0] + 212u), 0u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 208u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 68u));
    st32((c.r[16].w[0] + 13128u), c.r[21].w[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 216u), c.f[1]);
    c.budget -= 12;
L_00168428:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168438u);  if (depth < kMaxDepth) unit_006E(c, 205u, depth + 1u); else { c.pc = 0x002BAFB8u; return; } if (c.pc != 0x00168438u) [[unlikely]] return; }
L_00168438:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00168570; } }
L_00168440:
    set32(c.r[18], c.r[16].w[0] + 11744u);
    set32(c.r[2], 0u + 118u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016845C; } }
    set32(c.r[2], 0u + 147u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00168574; } }
L_0016845C:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00168478u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00168478u) [[unlikely]] return; }
L_00168478:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[20].d[0];  if (t) { goto L_00168574; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168490u);  if (depth < kMaxDepth) unit_0089(c, 58u, depth + 1u); else { c.pc = 0x00324D98u; return; } if (c.pc != 0x00168490u) [[unlikely]] return; }
L_00168490:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 11744u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00168570; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001684ACu);  if (depth < kMaxDepth) unit_0089(c, 55u, depth + 1u); else { c.pc = 0x00324D40u; return; } if (c.pc != 0x001684ACu) [[unlikely]] return; }
L_001684AC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001684BCu);  if (depth < kMaxDepth) unit_001A(c, 62u, depth + 1u); else { c.pc = 0x00168B38u; return; } if (c.pc != 0x001684BCu) [[unlikely]] return; }
L_001684BC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[19].d[0];  if (t) { goto L_00168570; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_00168570; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_00168570; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.f[1] = ld32((c.r[2].w[0] - 23044u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBA030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00168554; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13168u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00168564; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13140u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00168570; } }
    c.f[0] = ld32((c.r[16].w[0] + 12888u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12892u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016854Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016854Cu) [[unlikely]] return; }
L_0016854C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00168574; } }
L_00168554:
    set32(c.r[2], ld32((c.r[16].w[0] + 13168u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00168570; } }
L_00168564:
    st32((c.r[16].w[0] + 13140u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00168574; } }
L_00168570:
    st32((c.r[16].w[0] + 13140u), 0u);
    c.budget -= 1;
L_00168574:
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
L_001685A0:
    set32(c.r[29], c.r[29].w[0] - 352u);
    set32(c.r[2], 0u + 141u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[23]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 344u), c.f[23]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 336u), c.f[22]);
    c.f[23] = c.f[13];
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[16]);
    c.f[22] = c.f[12];
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 328u), c.f[21]);
    st32((c.r[29].w[0] + 320u), c.f[20]);
    set32(c.r[3], ld32((c.r[20].w[0] + 7700u)));
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00168670; } }
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[13] = c.r[1].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = fp::sub(c.f[0], c.f[13]);
    c.f[12] = ld32((c.r[19].w[0]));
    c.f[14] = ld32((c.r[19].w[0] + 8u));
    c.f[15] = c.f[20];
    c.f[22] = 0u;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168638u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00168638u) [[unlikely]] return; }
L_00168638:
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[13] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.f[12] = ld32((c.r[19].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = fp::add(c.f[0], c.f[13]);
    c.f[14] = ld32((c.r[19].w[0] + 8u));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168668u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00168668u) [[unlikely]] return; }
L_00168668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00168734; } }
L_00168670:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[17], c.r[29].w[0] + 32u);
    c.f[12] = ld32((c.r[19].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = ld32((c.r[19].w[0] + 4u));
    c.f[15] = c.f[21];
    c.f[14] = ld32((c.r[19].w[0] + 8u));
    c.f[20] = 0u;
    c.r[22].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001686A0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001686A0u) [[unlikely]] return; }
L_001686A0:
    set32(c.r[18], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[20].w[0] + 11424u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001686B4u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x001686B4u) [[unlikely]] return; }
L_001686B4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001686C4u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x001686C4u) [[unlikely]] return; }
L_001686C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[13] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[21];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001686E4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001686E4u) [[unlikely]] return; }
L_001686E4:
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.f[12] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[13] = c.r[1].w[0];
    c.f[15] = c.f[21];
    c.f[14] = c.f[12];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168708u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00168708u) [[unlikely]] return; }
L_00168708:
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168720u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x00168720u) [[unlikely]] return; }
L_00168720:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168734u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x00168734u) [[unlikely]] return; }
L_00168734:
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016874Cu);  if (depth < kMaxDepth) unit_0070(c, 51u, depth + 1u); else { c.pc = 0x002C0AA8u; return; } if (c.pc != 0x0016874Cu) [[unlikely]] return; }
L_0016874C:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001687F4; } }
    set32(c.r[16], c.r[29].w[0] + 144u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168774u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00168774u) [[unlikely]] return; }
L_00168774:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168784u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00168784u) [[unlikely]] return; }
L_00168784:
    c.f[12] = c.f[22];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168798u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00168798u) [[unlikely]] return; }
L_00168798:
    set32(c.r[17], c.r[29].w[0] + 160u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001687B0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x001687B0u) [[unlikely]] return; }
L_001687B0:
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001687C4u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001687C4u) [[unlikely]] return; }
L_001687C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[23];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001687D8u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x001687D8u) [[unlikely]] return; }
L_001687D8:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001687ECu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x001687ECu) [[unlikely]] return; }
L_001687EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00168804; } }
L_001687F4:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168804u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00168804u) [[unlikely]] return; }
L_00168804:
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[23] = ld32((c.r[29].w[0] + 344u));
    c.f[22] = ld32((c.r[29].w[0] + 336u));
    c.f[21] = ld32((c.r[29].w[0] + 328u));
    c.f[20] = ld32((c.r[29].w[0] + 320u));
    set32(c.r[29], c.r[29].w[0] + 352u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168848:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00168874; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00168874; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 12856u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168874u);  if (depth < kMaxDepth) unit_0019(c, 356u, depth + 1u); else { c.pc = 0x00167CF8u; return; } if (c.pc != 0x00168874u) [[unlikely]] return; }
L_00168874:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168880:
    c.budget -= 1;
    c.pc = 0x00168884u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00168888:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001688A4u);  if (depth < kMaxDepth) unit_006E(c, 177u, depth + 1u); else { c.pc = 0x002BA720u; return; } if (c.pc != 0x001688A4u) [[unlikely]] return; }
L_001688A4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001688D4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001688C4u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x001688C4u) [[unlikely]] return; }
L_001688C4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001688D8; } }
L_001688D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001688D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001688F0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 12856u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016890Cu);  if (depth < kMaxDepth) unit_001A(c, 52u, depth + 1u); else { c.pc = 0x00168920u; return; } if (c.pc != 0x0016890Cu) [[unlikely]] return; }
L_0016890C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168920:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[6], 0u + 880u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] - 4440u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[18], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 22;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { goto L_00168984; } }
    st32((c.r[16].w[0] + 13024u), 0u);
    st32((c.r[16].w[0] + 13028u), 0u);
    st32((c.r[16].w[0] + 13032u), 0u);
    c.budget -= 3;
L_00168984:
    c.f[20] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001689A0u);  if (depth < kMaxDepth) unit_0080(c, 176u, depth + 1u); else { c.pc = 0x00302C48u; return; } if (c.pc != 0x001689A0u) [[unlikely]] return; }
L_001689A0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001689B0u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x001689B0u) [[unlikely]] return; }
L_001689B0:
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 10u);
    set32(c.r[5], 0u + 80u);
    set32(c.r[6], 0u - 3u);
    set32(c.r[7], 0u + 16u);
    set32(c.r[8], 0u + 16u);
    st32((c.r[16].w[0] + 13080u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 8940u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 9020u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 7676u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 9924u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st64((c.r[16].w[0] + 560u), c.r[8].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001689F0u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x001689F0u) [[unlikely]] return; }
L_001689F0:
    set32(c.r[2], 0u + 2u);
    c.f[0] = ld32((c.r[16].w[0] + 13024u));
    st16((c.r[16].w[0] + 11352u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    c.f[1] = ld32((c.r[16].w[0] + 13032u));
    c.f[2] = ld32((c.r[19].w[0] + 68u));
    st32((c.r[16].w[0] + 212u), c.f[20]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0] + 208u), c.f[0]);
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    c.f[2] = ld32((c.r[19].w[0] + 68u));
    st32((c.r[16].w[0] + 13128u), c.r[3].w[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st32((c.r[16].w[0] + 216u), c.f[1]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168A48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168A60u);  if (depth < kMaxDepth) unit_0019(c, 358u, depth + 1u); else { c.pc = 0x00167DC0u; return; } if (c.pc != 0x00168A60u) [[unlikely]] return; }
L_00168A60:
    c.f[0] = ld32((c.r[16].w[0] + 12912u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 12856u);
    st32((c.r[16].w[0] + 148u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168A94u);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x00168A94u) [[unlikely]] return; }
L_00168A94:
    set32(c.r[2], 0u + 142u);
    st32((c.r[16].w[0] + 13136u), 0u);
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168AB8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 118u);
    c.f[2] = ld32((c.r[16].w[0] + 128u));
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    st32((c.r[16].w[0] + 12992u), c.f[2]);
    st32((c.r[16].w[0] + 12996u), c.f[1]);
    st32((c.r[16].w[0] + 13000u), c.f[0]);
    st32((c.r[16].w[0] + 13008u), c.f[2]);
    st32((c.r[16].w[0] + 13012u), c.f[1]);
    st32((c.r[16].w[0] + 13016u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168AFCu);  if (depth < kMaxDepth) unit_0033(c, 115u, depth + 1u); else { c.pc = 0x001CD5D0u; return; } if (c.pc != 0x00168AFCu) [[unlikely]] return; }
L_00168AFC:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 118u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168B18u);  if (depth < kMaxDepth) unit_0081(c, 13u, depth + 1u); else { c.pc = 0x003041D0u; return; } if (c.pc != 0x00168B18u) [[unlikely]] return; }
L_00168B18:
    c.f[0] = ld32((c.r[16].w[0] + 12888u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0] + 12892u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168B38:
    c.r[2].d[0] = c.r[5].d[0] & 65309ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168B48:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], c.r[5].w[0] + 11504u);
    set32(c.r[2], ld32((c.r[5].w[0] + 11504u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00168BB8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168B78u);  if (depth < kMaxDepth) unit_0089(c, 55u, depth + 1u); else { c.pc = 0x00324D40u; return; } if (c.pc != 0x00168B78u) [[unlikely]] return; }
L_00168B78:
    c.r[2].d[0] = c.r[2].d[0] & 65309ull;
    c.r[3].d[0] = 0ull + 0ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = c.r[16].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_00168BB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.f[1] = ld32((c.r[2].w[0] - 23028u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00168BBC; } }
L_00168BB8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00168BBC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168BD8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 11824u);
    set32(c.r[2], ld32((c.r[16].w[0] + 11824u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_00168C54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = ld32((c.r[2].w[0] - 23028u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00168C54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168C34u);  if (depth < kMaxDepth) unit_0089(c, 55u, depth + 1u); else { c.pc = 0x00324D40u; return; } if (c.pc != 0x00168C34u) [[unlikely]] return; }
L_00168C34:
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00168C58; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168C4Cu);  if (depth < kMaxDepth) unit_003A(c, 230u, depth + 1u); else { c.pc = 0x001EA468u; return; } if (c.pc != 0x00168C4Cu) [[unlikely]] return; }
L_00168C4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00168C58; } }
L_00168C54:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00168C58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168C78:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[2].w[0] - 12856u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168C98u);  if (depth < kMaxDepth) unit_001A(c, 70u, depth + 1u); else { c.pc = 0x00168CA8u; return; } if (c.pc != 0x00168C98u) [[unlikely]] return; }
L_00168C98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168CA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168CB0:
    c.f[0] = ld32((c.r[5].w[0] + 13008u));
    c.f[1] = ld32((c.r[5].w[0] + 13012u));
    c.f[2] = ld32((c.r[5].w[0] + 13016u));
    st32((c.r[5].w[0] + 128u), c.f[0]);
    st32((c.r[5].w[0] + 136u), c.f[2]);
    st32((c.r[5].w[0] + 132u), c.f[1]);
    st32((c.r[5].w[0] + 12992u), c.f[0]);
    st32((c.r[5].w[0] + 12996u), c.f[1]);
    st32((c.r[5].w[0] + 13000u), c.f[2]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168CE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168CF8u);  if (depth < kMaxDepth) unit_001A(c, 44u, depth + 1u); else { c.pc = 0x00168848u; return; } if (c.pc != 0x00168CF8u) [[unlikely]] return; }
L_00168CF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168D08:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00168D5C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00168D5C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 12784u);
    set32(c.r[2], c.r[2].w[0] + 25704u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168D44u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00168D44u) [[unlikely]] return; }
L_00168D44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 25680u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168D5Cu);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x00168D5Cu) [[unlikely]] return; }
L_00168D5C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168D70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 25696u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168D94u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x00168D94u) [[unlikely]] return; }
L_00168D94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00168DCC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168DB4u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00168DB4u) [[unlikely]] return; }
L_00168DB4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168DC0u);  if (depth < kMaxDepth) unit_0089(c, 140u, depth + 1u); else { c.pc = 0x003259F8u; return; } if (c.pc != 0x00168DC0u) [[unlikely]] return; }
L_00168DC0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00168DD0; } }
L_00168DCC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00168DD0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168DE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168E00u);  if (depth < kMaxDepth) unit_001A(c, 74u, depth + 1u); else { c.pc = 0x00168D08u; return; } if (c.pc != 0x00168E00u) [[unlikely]] return; }
L_00168E00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168E10:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 14960u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 10u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[19], 0u + 20u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[20], 0u + 100u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168E58u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00168E58u) [[unlikely]] return; }
L_00168E58:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), 0u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168E70u);  if (depth < kMaxDepth) unit_001A(c, 109u, depth + 1u); else { c.pc = 0x00169490u; return; } if (c.pc != 0x00168E70u) [[unlikely]] return; }
L_00168E70:
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[5], 0u + 2u);
    st32((c.r[29].w[0] + 32u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[2].w[0] << 2);
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[2].w[0] << 2);
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    ldl(c.r[3], (c.r[29].w[0] + 15u));
    ldr(c.r[3], (c.r[29].w[0] + 8u));
    ldl(c.r[6], (c.r[29].w[0] + 23u));
    ldr(c.r[6], (c.r[29].w[0] + 16u));
    ldl(c.r[7], (c.r[29].w[0] + 31u));
    ldr(c.r[7], (c.r[29].w[0] + 24u));
    sdl(c.r[2], (c.r[21].w[0] + 7u));
    sdr(c.r[2], (c.r[21].w[0]));
    sdl(c.r[3], (c.r[21].w[0] + 15u));
    sdr(c.r[3], (c.r[21].w[0] + 8u));
    sdl(c.r[6], (c.r[21].w[0] + 23u));
    sdr(c.r[6], (c.r[21].w[0] + 16u));
    sdl(c.r[7], (c.r[21].w[0] + 31u));
    sdr(c.r[7], (c.r[21].w[0] + 24u));
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[21].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168F18u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00168F18u) [[unlikely]] return; }
L_00168F18:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), 0u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168F30u);  if (depth < kMaxDepth) unit_001A(c, 109u, depth + 1u); else { c.pc = 0x00169490u; return; } if (c.pc != 0x00168F30u) [[unlikely]] return; }
L_00168F30:
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    st32((c.r[29].w[0] + 32u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st32((c.r[3].w[0]), c.r[18].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[2].w[0] << 2);
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[19].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[2].w[0] << 2);
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[20].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    ldl(c.r[3], (c.r[29].w[0] + 15u));
    ldr(c.r[3], (c.r[29].w[0] + 8u));
    ldl(c.r[4], (c.r[29].w[0] + 23u));
    ldr(c.r[4], (c.r[29].w[0] + 16u));
    ldl(c.r[5], (c.r[29].w[0] + 31u));
    ldr(c.r[5], (c.r[29].w[0] + 24u));
    sdl(c.r[2], (c.r[21].w[0] + 43u));
    sdr(c.r[2], (c.r[21].w[0] + 36u));
    sdl(c.r[3], (c.r[21].w[0] + 51u));
    sdr(c.r[3], (c.r[21].w[0] + 44u));
    sdl(c.r[4], (c.r[21].w[0] + 59u));
    sdr(c.r[4], (c.r[21].w[0] + 52u));
    sdl(c.r[5], (c.r[21].w[0] + 67u));
    sdr(c.r[5], (c.r[21].w[0] + 60u));
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[21].w[0] + 68u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 48;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168FF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 25;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[19], c.r[3].w[0] - 1u);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001690B0; } }
    set32(c.r[4], 0u + 36u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    mmi::mult(c, 0, c.r[19].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] - 12768u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016905Cu);  if (depth < kMaxDepth) unit_001A(c, 120u, depth + 1u); else { c.pc = 0x001696C0u; return; } if (c.pc != 0x0016905Cu) [[unlikely]] return; }
L_0016905C:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00169084; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00169084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001690A8; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001690B0; } }
L_001690A8:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_001690B0:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 26;
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00169148; } }
    set32(c.r[4], 0u + 36u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    mmi::mult(c, 0, c.r[19].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] - 12768u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001690F4u);  if (depth < kMaxDepth) unit_001A(c, 120u, depth + 1u); else { c.pc = 0x001696C0u; return; } if (c.pc != 0x001690F4u) [[unlikely]] return; }
L_001690F4:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0016911C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016911C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00169140; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00169148; } }
L_00169140:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_00169148:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 27;
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001691E0; } }
    set32(c.r[4], 0u + 36u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    mmi::mult(c, 0, c.r[19].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] - 12768u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016918Cu);  if (depth < kMaxDepth) unit_001A(c, 120u, depth + 1u); else { c.pc = 0x001696C0u; return; } if (c.pc != 0x0016918Cu) [[unlikely]] return; }
L_0016918C:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001691B4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001691B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001691D8; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001691E0; } }
L_001691D8:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_001691E0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00169200:
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00169250; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00169250; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] - 12768u);
    set32(c.r[5], 0u - 1u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
L_00169228:
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 36u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00169228u | kUnwind; return; } goto L_00169228; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 4;
L_00169250:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00169258:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 12768u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169270u);  if (depth < kMaxDepth) unit_001A(c, 122u, depth + 1u); else { c.pc = 0x00169740u; return; } if (c.pc != 0x00169270u) [[unlikely]] return; }
L_00169270:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00169280:
    set32(c.r[3], 0u + 36u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 12768u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001692A0:
    set32(c.r[2], 0u + 36u);
    c.f[12] = c.r[6].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] - 12768u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001692D0u);  if (depth < kMaxDepth) unit_001A(c, 119u, depth + 1u); else { c.pc = 0x00169690u; return; } if (c.pc != 0x001692D0u) [[unlikely]] return; }
L_001692D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001692E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 12768u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001692F8u);  if (depth < kMaxDepth) unit_001A(c, 127u, depth + 1u); else { c.pc = 0x001698A0u; return; } if (c.pc != 0x001692F8u) [[unlikely]] return; }
L_001692F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00169308:
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016932C; } }
    set32(c.r[3], 0u + 36u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 12768u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[6].w[0]);
    c.budget -= 6;
L_0016932C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00169338:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[2].w[0] - 12768u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] + 72u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00169374; } }
    set32(c.r[4], 0u + 36u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[7].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169374u);  if (depth < kMaxDepth) unit_001A(c, 111u, depth + 1u); else { c.pc = 0x001694D0u; return; } if (c.pc != 0x00169374u) [[unlikely]] return; }
L_00169374:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00169388:
    set32(c.r[2], 0u + 205u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001693C8; } }
    c.r[2].d[0] = c.r[5].sd[0] < 206ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001693B4; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001693D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001693E0; } }
L_001693B4:
    set32(c.r[2], 0u + 213u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001693D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001693E0; } }
L_001693C8:
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001693D4:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001693E0:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001693F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169418u);  if (depth < kMaxDepth) unit_001A(c, 109u, depth + 1u); else { c.pc = 0x00169490u; return; } if (c.pc != 0x00169418u) [[unlikely]] return; }
L_00169418:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], 0u + 10u);
    st32((c.r[16].w[0] + 32u), c.r[17].w[0]);
    set32(c.r[6], 0u + 20u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[7], 0u + 100u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[5].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] << 2);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] << 2);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00169490:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 120u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001694B0:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001694C8; } }
    st32((c.r[5].w[0]), 0u);
    c.budget -= 1;
L_001694C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001694D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u - 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    if (c.r[2].d[0] == 0) c.r[5].d[0] = 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001694F8u);  if (depth < kMaxDepth) unit_001A(c, 120u, depth + 1u); else { c.pc = 0x001696C0u; return; } if (c.pc != 0x001694F8u) [[unlikely]] return; }
L_001694F8:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00169524; } }
    st32((c.r[16].w[0] + 16u), c.f[2]);
    c.budget -= 1;
L_00169524:
    st32((c.r[16].w[0] + 28u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00169540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u - 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    if (c.r[2].d[0] == 0) c.r[5].d[0] = 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169568u);  if (depth < kMaxDepth) unit_001A(c, 120u, depth + 1u); else { c.pc = 0x001696C0u; return; } if (c.pc != 0x00169568u) [[unlikely]] return; }
L_00169568:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00169590; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00169590:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001695A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001695B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[3].w[0] + 29372u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00169674; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001695DCu);  if (depth < kMaxDepth) unit_001A(c, 129u, depth + 1u); else { c.pc = 0x001698F8u; return; } if (c.pc != 0x001695DCu) [[unlikely]] return; }
L_001695DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00169674; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[17], 0u + 2u);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00169674; } }
    set32(c.r[2], 0u + 120u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169618u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x00169618u) [[unlikely]] return; }
L_00169618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_00169638; } }
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00169644; } }
L_00169638:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.budget -= 3;
L_00169644:
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00169674; } }
    st32((c.r[16].w[0] + 16u), c.f[1]);
    c.budget -= 1;
L_00169674:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00169690:
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001696B4; } }
    st32((c.r[4].w[0] + 16u), c.f[1]);
    c.budget -= 1;
L_001696B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001696C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001696E0u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001696E0u) [[unlikely]] return; }
L_001696E0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0016970C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], 0u + 45u);
    set32(c.r[4], ld32((c.r[2].w[0] + 7700u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00169720; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00169720; } }
L_0016970C:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00169724; } }
L_00169720:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00169724:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00169740:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 120u), c.f[21]);
    st32((c.r[29].w[0] + 112u), c.f[20]);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00169784; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169780u);  if (depth < kMaxDepth) unit_001A(c, 83u, depth + 1u); else { c.pc = 0x00168E10u; return; } if (c.pc != 0x00169780u) [[unlikely]] return; }
L_00169780:
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 1;
L_00169784:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], 0u + 36u);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00169870; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[21] = c.r[1].w[0];
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[20], 0u + 120u);
    set32(c.r[19], 0u + 36u);
    c.budget -= 8;
L_001697C0:
    set32(c.r[2], ld32((c.r[21].w[0] + 29372u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00169858; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001697D8u);  if (depth < kMaxDepth) unit_001A(c, 129u, depth + 1u); else { c.pc = 0x001698F8u; return; } if (c.pc != 0x001697D8u) [[unlikely]] return; }
L_001697D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00169858; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[18], 0u + 2u);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00169858; } }
    st32((c.r[16].w[0] + 20u), c.r[20].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169810u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x00169810u) [[unlikely]] return; }
L_00169810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_00169828; } }
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[21]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00169830; } }
L_00169828:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.budget -= 2;
L_00169830:
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00169858; } }
    st32((c.r[16].w[0] + 16u), c.f[1]);
    c.budget -= 1;
L_00169858:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[16], c.r[16].w[0] + 36u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001697C0u | kUnwind; return; } goto L_001697C0; } }
L_00169870:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 120u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001698A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[3], 0u + 36u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001698EC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[6], 0u + 120u);
    c.budget -= 3;
L_001698C8:
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 20u), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + 36u);
    set32(c.r[2], ld32((c.r[5].w[0] + 72u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[7].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001698C8u | kUnwind; return; } goto L_001698C8; } }
L_001698EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001698F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[3].w[0] + 29376u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016992C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169924u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x00169924u) [[unlikely]] return; }
L_00169924:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00169938; } }
L_0016992C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001699C0; } }
L_00169938:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], 0u + 168u);
    c.budget -= 2;
L_00169940:
    set32(c.r[3], ld32((c.r[2].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016992Cu | kUnwind; return; } goto L_0016992C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], ld32((c.r[3].w[0] + 23016u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0016995Cu);  goto L_00169960; }
L_00169960:
    mmi::divu(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00169988; } }
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.budget -= 6;
L_00169988:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001699BC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + 16760u);
    st32((c.r[16].w[0] + 16u), c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001699BCu);  if (depth < kMaxDepth) unit_006E(c, 26u, depth + 1u); else { c.pc = 0x002B84C8u; return; } if (c.pc != 0x001699BCu) [[unlikely]] return; }
L_001699BC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001699C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001699D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001699E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169A00u);  if (depth < kMaxDepth) unit_001A(c, 92u, depth + 1u); else { c.pc = 0x00169200u; return; } if (c.pc != 0x00169A00u) [[unlikely]] return; }
L_00169A00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00169A10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 13248u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169A54u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x00169A54u) [[unlikely]] return; }
L_00169A54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00169BF8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 10196u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169A6Cu);  if (depth < kMaxDepth) unit_003D(c, 185u, depth + 1u); else { c.pc = 0x001F70C8u; return; } if (c.pc != 0x00169A6Cu) [[unlikely]] return; }
L_00169A6C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00169BF8; } }
    st32((c.r[16].w[0] + 10196u), c.r[19].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169A88u);  if (depth < kMaxDepth) unit_003D(c, 189u, depth + 1u); else { c.pc = 0x001F7148u; return; } if (c.pc != 0x00169A88u) [[unlikely]] return; }
L_00169A88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169AA4u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x00169AA4u) [[unlikely]] return; }
L_00169AA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00169AF8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13168u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00169AF8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 10196u)));
    set32(c.r[2], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00169AF8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169AD8u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x00169AD8u) [[unlikely]] return; }
L_00169AD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00169AF8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 31496u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00169B08; } }
L_00169AF8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 31496u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 4;
L_00169B08:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 30392u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169B3Cu);  if (depth < kMaxDepth) unit_003D(c, 189u, depth + 1u); else { c.pc = 0x001F7148u; return; } if (c.pc != 0x00169B3Cu) [[unlikely]] return; }
L_00169B3C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] - 22480u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169B50u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x00169B50u) [[unlikely]] return; }
L_00169B50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00169BA4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13168u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00169BA4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 10196u)));
    set32(c.r[2], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00169BA4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169B84u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x00169B84u) [[unlikely]] return; }
L_00169B84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00169BA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31864u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00169BB4; } }
L_00169BA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31864u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 4;
L_00169BB4:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 14712u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169BE4u);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x00169BE4u) [[unlikely]] return; }
L_00169BE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00169BF8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169BF8u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x00169BF8u) [[unlikely]] return; }
L_00169BF8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00169C20:
    set32(c.r[3], ld32((c.r[4].w[0] + 10196u)));
    set32(c.r[2], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00169C84; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00169C84; } }
    set32(c.r[2], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00169C84; } }
    set32(c.r[2], 0u + 79u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00169C84; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00169C84; } }
    set32(c.r[2], 0u + 55u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00169C84; } }
    set32(c.r[2], 0u + 61u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00169C84; } }
    set32(c.r[2], 0u + 67u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00169C90; } }
L_00169C84:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00169C90:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00169CA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 10196u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 15ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00169CB8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 13248u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 27456u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169CE4u);  if (depth < kMaxDepth) unit_003D(c, 185u, depth + 1u); else { c.pc = 0x001F70C8u; return; } if (c.pc != 0x00169CE4u) [[unlikely]] return; }
L_00169CE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169CF4u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x00169CF4u) [[unlikely]] return; }
L_00169CF4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00169D08:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00169D5C; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_00169D68; } }
L_00169D5C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00169F2C; } }
L_00169D68:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[23].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    set32(c.r[17], c.r[19].w[0] + 16u);
    set32(c.r[18], 0u + 15u);
    c.budget -= 6;
L_00169D80:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00169DCC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169D9Cu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00169D9Cu) [[unlikely]] return; }
L_00169D9C:
    set32(c.r[6], ld32((c.r[20].w[0] - 368u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 296u)));
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00169DBCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00169DBCu) [[unlikely]] return; }
L_00169DBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169DC8u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x00169DC8u) [[unlikely]] return; }
L_00169DC8:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_00169DCC:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00169D80u | kUnwind; return; } goto L_00169D80; } }
    set32(c.r[6], ld32((c.r[20].w[0] - 368u)));
    set32(c.r[5], ld32((c.r[22].w[0] + 20716u)));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00169DFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00169DFCu) [[unlikely]] return; }
L_00169DFC:
    set32(c.r[4], ld32((c.r[22].w[0] + 20716u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169E0Cu);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x00169E0Cu) [[unlikely]] return; }
L_00169E0C:
    set32(c.r[3], 0u - 1u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_00169ECC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 26352u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00169E38:
    set32(c.r[5], 0u + 14u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00169ED0; } }
L_00169E44:
    set32(c.r[5], 0u + 17u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00169ED0; } }
L_00169E50:
    set32(c.r[5], 0u + 19u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00169ED0; } }
L_00169E5C:
    set32(c.r[5], 0u + 18u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00169ED0; } }
L_00169E68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[3].w[0] + 30376u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12228u)));
    set32(c.r[5], 0u + 20u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00169E8C; } }
L_00169E88:
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.budget -= 1;
L_00169E8C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00169ED0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00169E88u | kUnwind; return; } goto L_00169E88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169EA8u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x00169EA8u) [[unlikely]] return; }
L_00169EA8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00169ED0; } }
L_00169EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169EC0u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x00169EC0u) [[unlikely]] return; }
L_00169EC0:
    set32(c.r[5], c.r[2].w[0] + 130u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00169ED0; } }
L_00169ECC:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_00169ED0:
    st32((c.r[19].w[0]), c.r[21].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[19].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00169F28; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[30].d[0] != c.r[2].d[0];  if (t) { goto L_00169F10; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[22].w[0] + 20716u)));
    set32(c.r[4], c.r[4].w[0] + 12224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169F08u);  if (depth < kMaxDepth) unit_0039(c, 104u, depth + 1u); else { c.pc = 0x001E4CC0u; return; } if (c.pc != 0x00169F08u) [[unlikely]] return; }
L_00169F08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00169F28; } }
L_00169F10:
    set32(c.r[6], ld32((c.r[22].w[0] + 20716u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 12224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169F24u);  if (depth < kMaxDepth) unit_0039(c, 100u, depth + 1u); else { c.pc = 0x001E4C28u; return; } if (c.pc != 0x00169F24u) [[unlikely]] return; }
L_00169F24:
    st32((c.r[19].w[0] + 12u), 0u);
    c.budget -= 1;
L_00169F28:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00169F2C:
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
L_00169F60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00169FCC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169F98u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00169F98u) [[unlikely]] return; }
L_00169F98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 296u)));
    set32(c.r[6], ld32((c.r[2].w[0] - 368u)));
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00169FBCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00169FBCu) [[unlikely]] return; }
L_00169FBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169FC8u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x00169FC8u) [[unlikely]] return; }
L_00169FC8:
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 1;
L_00169FCC:
    set32(c.r[16], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0016A01C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169FE8u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00169FE8u) [[unlikely]] return; }
L_00169FE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 296u)));
    set32(c.r[6], ld32((c.r[2].w[0] - 368u)));
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A00Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A00Cu) [[unlikely]] return; }
L_0016A00C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A018u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0016A018u) [[unlikely]] return; }
L_0016A018:
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 1;
L_0016A01C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00060000u);
    set32(c.r[4], c.r[4].w[0] + 2464u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 178ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A038u);  if (depth < kMaxDepth) unit_0023(c, 106u, depth + 1u); else { c.pc = 0x0018D8D0u; return; } if (c.pc != 0x0016A038u) [[unlikely]] return; }
L_0016A038:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 2576u);
    c.r[6].d[0] = c.r[6].d[0] | 178ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A058u);  if (depth < kMaxDepth) unit_0023(c, 106u, depth + 1u); else { c.pc = 0x0018D8D0u; return; } if (c.pc != 0x0016A058u) [[unlikely]] return; }
L_0016A058:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A078:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 2;
L_0016A080:
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    set32(c.r[3], ld32((c.r[2].w[0] - 12680u)));
    set32(c.r[20], c.r[2].w[0] - 12680u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[20].w[0] + 16u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 15u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 14;
L_0016A0B8:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0016A104; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A0D4u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x0016A0D4u) [[unlikely]] return; }
L_0016A0D4:
    set32(c.r[6], ld32((c.r[19].w[0] - 368u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 296u)));
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A0F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A0F4u) [[unlikely]] return; }
L_0016A0F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A100u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0016A100u) [[unlikely]] return; }
L_0016A100:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0016A104:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A0B8u | kUnwind; return; } goto L_0016A0B8; } }
    set32(c.r[6], ld32((c.r[19].w[0] - 368u)));
    set32(c.r[5], ld32((c.r[21].w[0] + 20716u)));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A134u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A134u) [[unlikely]] return; }
L_0016A134:
    set32(c.r[4], ld32((c.r[21].w[0] + 20716u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A144u);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x0016A144u) [[unlikely]] return; }
L_0016A144:
    set32(c.r[3], 0u - 1u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A178:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0016A1E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016A1E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 12680u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A1A8u);  if (depth < kMaxDepth) unit_001A(c, 193u, depth + 1u); else { c.pc = 0x0016A1F8u; return; } if (c.pc != 0x0016A1A8u) [[unlikely]] return; }
L_0016A1A8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 12600u);
    set32(c.r[2], c.r[2].w[0] + 26392u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A1C8u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0016A1C8u) [[unlikely]] return; }
L_0016A1C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 26376u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A1E0u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x0016A1E0u) [[unlikely]] return; }
L_0016A1E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A1F8:
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[4].w[0] + 76u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 15u);
    c.budget -= 6;
L_0016A210:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A210u | kUnwind; return; } goto L_0016A210; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A230:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[20].w[0] + 16u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 15u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 14;
L_0016A268:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0016A2B4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A284u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x0016A284u) [[unlikely]] return; }
L_0016A284:
    set32(c.r[6], ld32((c.r[19].w[0] - 368u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 296u)));
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A2A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A2A4u) [[unlikely]] return; }
L_0016A2A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A2B0u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0016A2B0u) [[unlikely]] return; }
L_0016A2B0:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0016A2B4:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A268u | kUnwind; return; } goto L_0016A268; } }
    set32(c.r[6], ld32((c.r[19].w[0] - 368u)));
    set32(c.r[5], ld32((c.r[21].w[0] + 20716u)));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A2E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A2E4u) [[unlikely]] return; }
L_0016A2E4:
    set32(c.r[4], ld32((c.r[21].w[0] + 20716u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A2F4u);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x0016A2F4u) [[unlikely]] return; }
L_0016A2F4:
    set32(c.r[3], 0u - 1u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A328:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0016A368; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 20716u)));
    set32(c.r[4], c.r[4].w[0] + 12224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A360u);  if (depth < kMaxDepth) unit_0039(c, 104u, depth + 1u); else { c.pc = 0x001E4CC0u; return; } if (c.pc != 0x0016A360u) [[unlikely]] return; }
L_0016A360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016A384; } }
L_0016A368:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 20716u)));
    set32(c.r[4], c.r[4].w[0] + 12224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A380u);  if (depth < kMaxDepth) unit_0039(c, 100u, depth + 1u); else { c.pc = 0x001E4C28u; return; } if (c.pc != 0x0016A380u) [[unlikely]] return; }
L_0016A380:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_0016A384:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A3A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[2].w[0] + 12228u)));
    set32(c.r[16], c.r[3].w[0] + 30376u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 20u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016A3D4; } }
    c.budget -= 1;
L_0016A3D0:
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.budget -= 1;
L_0016A3D4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0016A3F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A3D0u | kUnwind; return; } goto L_0016A3D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A3F0u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x0016A3F0u) [[unlikely]] return; }
L_0016A3F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0016A3F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A410:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A428:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 12680u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A438:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[2].w[0] - 12680u);
    st32((c.r[2].w[0] - 12680u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], 0u + 15u);
    set32(c.r[4], c.r[4].w[0] + 76u);
    c.budget -= 8;
L_0016A458:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A458u | kUnwind; return; } goto L_0016A458; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A478:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 12668u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A490:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[2].w[0] - 12668u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A4A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 12680u)));
    set32(c.r[4], c.r[3].w[0] - 12680u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016A4C4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016A4C8; } }
L_0016A4C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016A4C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A4D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 12680u)));
    set32(c.r[4], c.r[3].w[0] - 12680u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016A4F8; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0016A4FC; } }
L_0016A4F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016A4FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A508:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], ld32((c.r[2].w[0] - 12680u)));
    set32(c.r[5], c.r[2].w[0] - 12680u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0016A530; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016A534; } }
L_0016A530:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016A534:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A540:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], ld32((c.r[2].w[0] - 12680u)));
    set32(c.r[5], c.r[2].w[0] - 12680u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0016A56C; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0016A570; } }
L_0016A56C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016A570:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A578:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], ld32((c.r[2].w[0] - 12680u)));
    set32(c.r[5], c.r[2].w[0] - 12680u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0016A5A0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016A5A4; } }
L_0016A5A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016A5A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A5B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], ld32((c.r[2].w[0] - 12680u)));
    set32(c.r[5], c.r[2].w[0] - 12680u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0016A5DC; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0016A5E0; } }
L_0016A5DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016A5E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A5E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[2].w[0] - 12680u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0016A618; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0016A618; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0016A62C; } }
L_0016A618:
    set32(c.r[4], c.r[4].w[0] - 12680u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016A630; } }
L_0016A62C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016A630:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A638:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[2].w[0] - 12680u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A658u);  if (depth < kMaxDepth) unit_001A(c, 154u, depth + 1u); else { c.pc = 0x00169D08u; return; } if (c.pc != 0x0016A658u) [[unlikely]] return; }
L_0016A658:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A668:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 12680u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A680u);  if (depth < kMaxDepth) unit_001A(c, 172u, depth + 1u); else { c.pc = 0x00169F60u; return; } if (c.pc != 0x0016A680u) [[unlikely]] return; }
L_0016A680:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[2].w[0] - 12680u);
    set32(c.r[3], 0u + 5u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0016A6BC; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A6BCu);  if (depth < kMaxDepth) unit_001A(c, 154u, depth + 1u); else { c.pc = 0x00169D08u; return; } if (c.pc != 0x0016A6BCu) [[unlikely]] return; }
L_0016A6BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A6D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A6D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A6E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A6F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 12680u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A714u);  if (depth < kMaxDepth) unit_001A(c, 154u, depth + 1u); else { c.pc = 0x00169D08u; return; } if (c.pc != 0x0016A714u) [[unlikely]] return; }
L_0016A714:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A728:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A740u);  if (depth < kMaxDepth) unit_001A(c, 189u, depth + 1u); else { c.pc = 0x0016A178u; return; } if (c.pc != 0x0016A740u) [[unlikely]] return; }
L_0016A740:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A750:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st16((c.r[16].w[0] + 10274u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = ld64((c.r[16].w[0] + 560u));
    st16((c.r[16].w[0] + 7724u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016A7A8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[4], 0u + 108u);
    set32(c.r[2], c.r[19].w[0] - 12408u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016AA20; } }
L_0016A7A8:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 560u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016A9C0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[18], 0u + 108u);
    set32(c.r[17], c.r[19].w[0] - 12408u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016A9C0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A7E8u);  if (depth < kMaxDepth) unit_0070(c, 142u, depth + 1u); else { c.pc = 0x002C1B08u; return; } if (c.pc != 0x0016A7E8u) [[unlikely]] return; }
L_0016A7E8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0016A80C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AC68; } }
L_0016A80C:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[4].d[0] = ld16((c.r[16].w[0] + 7694u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016A840; } }
    set32(c.r[2], c.r[4].w[0] << 16);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016AA20; } }
L_0016A840:
    set32(c.r[3], ld32((c.r[16].w[0] + 10196u)));
    set32(c.r[2], c.r[3].w[0] - 43u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016A86C; } }
    set32(c.r[2], 0u + 80u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016A86C; } }
    set32(c.r[2], 0u + 81u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016A894; } }
L_0016A86C:
    set32(c.r[3], c.r[4].w[0] << 16);
    set32(c.r[2], c.r[19].w[0] - 12408u);
    set32(c.r[4], 0u + 108u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 104u)));
    st32((c.r[16].w[0] + 588u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AC6C; } }
L_0016A894:
    set32(c.r[2], 0u + 88u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016A8C8; } }
    set32(c.r[3], c.r[4].w[0] << 16);
    set32(c.r[2], c.r[19].w[0] - 12408u);
    set32(c.r[4], 0u + 108u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    st32((c.r[16].w[0] + 588u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AC6C; } }
L_0016A8C8:
    set32(c.r[2], 0u + 87u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016A8FC; } }
    set32(c.r[3], c.r[4].w[0] << 16);
    set32(c.r[2], c.r[19].w[0] - 12408u);
    set32(c.r[4], 0u + 108u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    st32((c.r[16].w[0] + 588u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AC6C; } }
L_0016A8FC:
    set32(c.r[2], 0u + 86u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016A930; } }
    set32(c.r[3], c.r[4].w[0] << 16);
    set32(c.r[2], c.r[19].w[0] - 12408u);
    set32(c.r[4], 0u + 108u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    st32((c.r[16].w[0] + 588u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AC6C; } }
L_0016A930:
    set32(c.r[2], 0u + 85u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016A964; } }
    set32(c.r[3], c.r[4].w[0] << 16);
    set32(c.r[2], c.r[19].w[0] - 12408u);
    set32(c.r[4], 0u + 108u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    st32((c.r[16].w[0] + 588u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AC6C; } }
L_0016A964:
    set32(c.r[2], 0u + 84u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016A998; } }
    set32(c.r[3], c.r[4].w[0] << 16);
    set32(c.r[2], c.r[19].w[0] - 12408u);
    set32(c.r[4], 0u + 108u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    st32((c.r[16].w[0] + 588u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AC6C; } }
L_0016A998:
    set32(c.r[3], c.r[4].w[0] << 16);
    set32(c.r[2], c.r[19].w[0] - 12408u);
    set32(c.r[4], 0u + 108u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[16].w[0] + 588u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AC6C; } }
L_0016A9C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016A9F0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[4], 0u + 108u);
    set32(c.r[2], c.r[19].w[0] - 12408u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016AA20; } }
L_0016A9F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016AA2C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[4], 0u + 108u);
    set32(c.r[2], c.r[19].w[0] - 12408u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016AA2C; } }
L_0016AA20:
    st32((c.r[16].w[0] + 588u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AC6C; } }
L_0016AA2C:
    set32(c.r[3], ld32((c.r[16].w[0] + 10196u)));
    set32(c.r[2], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016AA60; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016AA60; } }
    set32(c.r[2], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016AA60; } }
    set32(c.r[2], 0u + 79u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016AA84; } }
L_0016AA60:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[4], 0u + 108u);
    set32(c.r[2], c.r[19].w[0] - 12408u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    st32((c.r[16].w[0] + 588u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AC6C; } }
L_0016AA84:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016AAB4; } }
    set32(c.r[2], 0u + 55u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016AAB4; } }
    set32(c.r[2], 0u + 61u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016AAB4; } }
    set32(c.r[2], 0u + 67u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016AAD8; } }
L_0016AAB4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[4], 0u + 108u);
    set32(c.r[2], c.r[19].w[0] - 12408u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    st32((c.r[16].w[0] + 588u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AC6C; } }
L_0016AAD8:
    set32(c.r[2], 0u + 88u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016AB08; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[4], 0u + 108u);
    set32(c.r[2], c.r[19].w[0] - 12408u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    st32((c.r[16].w[0] + 588u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AC6C; } }
L_0016AB08:
    set32(c.r[2], 0u + 87u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016AB38; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[4], 0u + 108u);
    set32(c.r[2], c.r[19].w[0] - 12408u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 68u)));
    st32((c.r[16].w[0] + 588u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AC6C; } }
L_0016AB38:
    set32(c.r[2], 0u + 86u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016AB68; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[4], 0u + 108u);
    set32(c.r[2], c.r[19].w[0] - 12408u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    st32((c.r[16].w[0] + 588u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AC6C; } }
L_0016AB68:
    set32(c.r[2], 0u + 85u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016AB98; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[4], 0u + 108u);
    set32(c.r[2], c.r[19].w[0] - 12408u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 60u)));
    st32((c.r[16].w[0] + 588u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AC6C; } }
L_0016AB98:
    set32(c.r[2], 0u + 84u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016ABC8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[4], 0u + 108u);
    set32(c.r[2], c.r[19].w[0] - 12408u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    st32((c.r[16].w[0] + 588u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AC6C; } }
L_0016ABC8:
    set32(c.r[2], c.r[3].w[0] - 43u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016ABF0; } }
    set32(c.r[2], 0u + 80u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016ABF0; } }
    set32(c.r[2], 0u + 81u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016AC14; } }
L_0016ABF0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[4], 0u + 108u);
    set32(c.r[2], c.r[19].w[0] - 12408u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 100u)));
    st32((c.r[16].w[0] + 588u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AC6C; } }
L_0016AC14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AC20u);  if (depth < kMaxDepth) unit_0070(c, 143u, depth + 1u); else { c.pc = 0x002C1B20u; return; } if (c.pc != 0x0016AC20u) [[unlikely]] return; }
L_0016AC20:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0016AC50; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[4], 0u + 108u);
    set32(c.r[2], c.r[19].w[0] - 12408u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 56u)));
    st32((c.r[16].w[0] + 588u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AC6C; } }
L_0016AC50:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[3], 0u + 108u);
    set32(c.r[4], c.r[19].w[0] - 12408u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
L_0016AC68:
    st32((c.r[16].w[0] + 588u), c.r[3].w[0]);
    c.budget -= 1;
L_0016AC6C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016AC90:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 31484u)));
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016ACDC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ACD4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016ACD4u) [[unlikely]] return; }
L_0016ACD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AF54; } }
L_0016ACDC:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 40u));
    c.r[20].d[0] = 0ull + 0ull;
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    st16((c.r[17].w[0] + 7690u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 7688u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 42u));
    set32(c.r[21], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 7692u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 24u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016AD2C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016AD2C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 113u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 68u), 0u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st8((c.r[17].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0016AD2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[8], ld32((c.r[2].w[0] + 19740u)));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0016AD68; } }
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AD64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016AD64u) [[unlikely]] return; }
L_0016AD64:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0016AD68:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016ADC4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016ADB8; } }
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { goto L_0016ADA4; } }
    c.r[5].d[0] = ~(0ull | c.r[20].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AD98u);  if (depth < kMaxDepth) unit_0079(c, 181u, depth + 1u); else { c.pc = 0x002E6A88u; return; } if (c.pc != 0x0016AD98u) [[unlikely]] return; }
L_0016AD98:
    set32(c.r[20], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016ADB8; } }
L_0016ADA4:
    set32(c.r[5], c.r[20].w[0] - 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ADB4u);  if (depth < kMaxDepth) unit_0079(c, 181u, depth + 1u); else { c.pc = 0x002E6A88u; return; } if (c.pc != 0x0016ADB4u) [[unlikely]] return; }
L_0016ADB4:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016ADB8:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016ADC8; } }
L_0016ADC4:
    set32(c.r[22], 0u + 1u);
    c.budget -= 1;
L_0016ADC8:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { goto L_0016ADDC; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016ADF4; } }
L_0016ADDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ADF0u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0016ADF0u) [[unlikely]] return; }
L_0016ADF0:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0016ADF4:
    c.f[0] = ld32((c.r[17].w[0] + 208u));
    mmi::por(c.r[2], c.r[0], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[17].w[0] + 212u));
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.f[2] = ld32((c.r[17].w[0] + 216u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    c.r[2].d[0] = ld64((c.r[18].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    st32((c.r[6].w[0] - 5024u), c.r[7].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st128((c.r[29].w[0]) & ~15u, c.r[3]);
    st8((c.r[17].w[0] + 9829u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AE48u);  if (depth < kMaxDepth) unit_0088(c, 306u, depth + 1u); else { c.pc = 0x003237B0u; return; } if (c.pc != 0x0016AE48u) [[unlikely]] return; }
L_0016AE48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016AE8C; } }
    c.f[0] = 0u;
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[6], c.r[29].w[0] + 36u);
    c.f[12] = c.f[0];
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[13] = c.f[12];
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AE84u);  if (depth < kMaxDepth) unit_006E(c, 158u, depth + 1u); else { c.pc = 0x002B9FD8u; return; } if (c.pc != 0x0016AE84u) [[unlikely]] return; }
L_0016AE84:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 32u));
    st16((c.r[17].w[0] + 7696u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0016AE8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 2144u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AEA8u);  if (depth < kMaxDepth) unit_001B(c, 100u, depth + 1u); else { c.pc = 0x0016D710u; return; } if (c.pc != 0x0016AEA8u) [[unlikely]] return; }
L_0016AEA8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0016AF54; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AEE0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x0016AEE0u) [[unlikely]] return; }
L_0016AEE0:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    set32(c.r[4], c.r[17].w[0] + 10256u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AF00u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0016AF00u) [[unlikely]] return; }
L_0016AF00:
    set32(c.r[7], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 36u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AF24u);  if (depth < kMaxDepth) unit_006E(c, 187u, depth + 1u); else { c.pc = 0x002BA9E0u; return; } if (c.pc != 0x0016AF24u) [[unlikely]] return; }
L_0016AF24:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[18].w[0] + 8u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[7], c.r[7].w[0] + c.r[22].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AF44u);  if (depth < kMaxDepth) unit_007C(c, 132u, depth + 1u); else { c.pc = 0x002F25F8u; return; } if (c.pc != 0x0016AF44u) [[unlikely]] return; }
L_0016AF44:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0016AF54; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 2;
L_0016AF54:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016AF80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], 0u + 40u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[6].w[0] << 2);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    set32(c.r[11], c.r[3].w[0] - 5000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[5], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[11].w[0]);
    set32(c.r[10], ld32((c.r[6].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 23;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_0016B110; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 18u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B10C; } }
    set32(c.r[8], ld32((c.r[19].w[0] + 540u)));
    c.r[4].d[0] = ld8((c.r[9].w[0] + 5u));
    set32(c.r[7], c.r[8].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B0A8; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[20], c.r[2].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[16], c.r[3].w[0] + 27456u);
    c.r[21].d[0] = c.r[11].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_0016B020:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> (c.r[17].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B07C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 7720u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 608u), 0u);
    c.budget -= 3;
L_0016B03C:
    set32(c.r[2], c.r[3].w[0] << 16);
    st32((c.r[16].w[0] + 624u), 0u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    st16((c.r[16].w[0] + 7728u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st16((c.r[16].w[0] + 7722u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0]), 0u);
    st16((c.r[16].w[0] + 10126u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7718u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B070u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016B070u) [[unlikely]] return; }
L_0016B070:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B07Cu);  if (depth < kMaxDepth) unit_001B(c, 246u, depth + 1u); else { c.pc = 0x0016F2D8u; return; } if (c.pc != 0x0016B07Cu) [[unlikely]] return; }
L_0016B07C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[18], c.r[18].w[0] + 40u);
    c.r[2].d[0] = c.r[17].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016B020u | kUnwind; return; } goto L_0016B020; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[19].w[0] + 10089u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016B110; } }
L_0016B0A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_0016B110; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 18u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B10C; } }
    set32(c.r[7], c.r[8].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 2u)));
    set32(c.r[4], c.r[4].w[0] - c.r[8].w[0]);
    c.r[2].d[0] = ld8((c.r[10].w[0] + 5u));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016B10C; } }
    st32((c.r[6].w[0]), 0u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 7718u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[19].w[0] + 7718u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0016B100:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0016B10C; } }
    st16((c.r[19].w[0] + 7718u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0016B10C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016B110:
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
L_0016B138:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[7], 0u + 10u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[4], 0u + 40u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    set32(c.r[19], c.r[20].w[0] - 5000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7720u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    mmi::div(c, 0, c.r[3].w[0], c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.budget -= 29;
    if (c.r[7].d[0] == 0ull) { breakpoint(c, 0x0016B1A8u);  goto L_0016B1AC; }
L_0016B1AC:
    c.r[6].d[0] = c.hi.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B1B8u);  if (depth < kMaxDepth) unit_001A(c, 250u, depth + 1u); else { c.pc = 0x0016AF80u; return; } if (c.pc != 0x0016B1B8u) [[unlikely]] return; }
L_0016B1B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B918; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B1CCu);  if (depth < kMaxDepth) unit_0070(c, 134u, depth + 1u); else { c.pc = 0x002C1948u; return; } if (c.pc != 0x0016B1CCu) [[unlikely]] return; }
L_0016B1CC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0016B918; } }
    c.r[30].d[0] = c.r[19].d[0] + 0ull;
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[20], 0u + 1u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[23], 0u + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016B8B4; } }
L_0016B1F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016B214; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016B918; } }
L_0016B214:
    c.r[2].d[0] = ld64((c.r[6].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B2E0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10014u)));
    c.r[2].d[0] = c.r[2].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B2E0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 16u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016B918; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[16], c.r[19].w[0] + 27456u);
    set32(c.r[21], c.r[21].w[0] - 5000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[20].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 7;
L_0016B260:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> (c.r[18].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B2BC; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 7720u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 608u), 0u);
    set32(c.r[2], c.r[3].w[0] << 16);
    st32((c.r[16].w[0] + 624u), 0u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    st16((c.r[16].w[0] + 7728u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st16((c.r[16].w[0] + 7722u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0]), 0u);
    st16((c.r[16].w[0] + 10126u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7718u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B2B0u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016B2B0u) [[unlikely]] return; }
L_0016B2B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B2BCu);  if (depth < kMaxDepth) unit_001B(c, 246u, depth + 1u); else { c.pc = 0x0016F2D8u; return; } if (c.pc != 0x0016B2BCu) [[unlikely]] return; }
L_0016B2BC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[19], c.r[19].w[0] + 40u);
    c.r[2].d[0] = c.r[18].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016B260u | kUnwind; return; } goto L_0016B260; } }
    st8((c.r[17].w[0] + 10089u), static_cast<std::uint8_t>(c.r[23].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016B918; } }
L_0016B2E0:
    c.r[2].d[0] = ld64((c.r[6].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B3B0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 644u)));
    c.r[2].d[0] = c.r[2].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B3B0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016B918; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[16], c.r[19].w[0] + 27456u);
    set32(c.r[21], c.r[21].w[0] - 5000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[20].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 8;
L_0016B330:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> (c.r[18].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B38C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 7720u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 608u), 0u);
    set32(c.r[2], c.r[3].w[0] << 16);
    st32((c.r[16].w[0] + 624u), 0u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    st16((c.r[16].w[0] + 7728u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st16((c.r[16].w[0] + 7722u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0]), 0u);
    st16((c.r[16].w[0] + 10126u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7718u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B380u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016B380u) [[unlikely]] return; }
L_0016B380:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B38Cu);  if (depth < kMaxDepth) unit_001B(c, 246u, depth + 1u); else { c.pc = 0x0016F2D8u; return; } if (c.pc != 0x0016B38Cu) [[unlikely]] return; }
L_0016B38C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[19], c.r[19].w[0] + 40u);
    c.r[2].d[0] = c.r[18].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016B330u | kUnwind; return; } goto L_0016B330; } }
    st8((c.r[17].w[0] + 10089u), static_cast<std::uint8_t>(c.r[23].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016B918; } }
L_0016B3B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B3C0u);  if (depth < kMaxDepth) unit_001B(c, 242u, depth + 1u); else { c.pc = 0x0016F1F8u; return; } if (c.pc != 0x0016B3C0u) [[unlikely]] return; }
L_0016B3C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016B480; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 540u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016B918; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[16], c.r[19].w[0] + 27456u);
    set32(c.r[21], c.r[21].w[0] - 5000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[20].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 8;
L_0016B400:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> (c.r[18].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B45C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 7720u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 608u), 0u);
    set32(c.r[2], c.r[3].w[0] << 16);
    st32((c.r[16].w[0] + 624u), 0u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    st16((c.r[16].w[0] + 7728u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st16((c.r[16].w[0] + 7722u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0]), 0u);
    st16((c.r[16].w[0] + 10126u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7718u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B450u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016B450u) [[unlikely]] return; }
L_0016B450:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B45Cu);  if (depth < kMaxDepth) unit_001B(c, 246u, depth + 1u); else { c.pc = 0x0016F2D8u; return; } if (c.pc != 0x0016B45Cu) [[unlikely]] return; }
L_0016B45C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[19], c.r[19].w[0] + 40u);
    c.r[2].d[0] = c.r[18].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016B400u | kUnwind; return; } goto L_0016B400; } }
    st8((c.r[17].w[0] + 10089u), static_cast<std::uint8_t>(c.r[23].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016B918; } }
L_0016B480:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B48Cu);  if (depth < kMaxDepth) unit_001B(c, 249u, depth + 1u); else { c.pc = 0x0016F330u; return; } if (c.pc != 0x0016B48Cu) [[unlikely]] return; }
L_0016B48C:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016B4C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 540u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[17].w[0] + 536u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016B4D0; } }
L_0016B4C8:
    st32((c.r[17].w[0] + 540u), 0u);
    st32((c.r[17].w[0] + 536u), 0u);
    c.budget -= 2;
L_0016B4D0:
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10126u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 3u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 2u));
    c.r[4].d[0] = ld8((c.r[6].w[0] + 5u));
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    set32(c.r[3], c.r[3].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7720u)));
    set32(c.r[5], c.r[5].w[0] - c.r[4].w[0]);
    st16((c.r[17].w[0] + 10126u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[30].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[4].d[0] = ld16((c.r[17].w[0] + 7720u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 7722u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    st16((c.r[17].w[0] + 7722u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    st16((c.r[17].w[0] + 7720u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 30;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016B54C; } }
    st16((c.r[17].w[0] + 7720u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0016B54C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10104u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016B7CC; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[4], 0u + 160u);
    c.r[5].d[0] = ld64((c.r[2].w[0] + 8u));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & 160ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0016B630; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10014u)));
    c.r[2].d[0] = c.r[2].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B798; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 644u)));
    c.r[2].d[0] = c.r[2].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B798; } }
    set32(c.r[20], c.r[20].w[0] << (c.r[18].w[0] & 31u));
    set32(c.r[16], c.r[19].w[0] + 27456u);
    set32(c.r[21], c.r[21].w[0] - 5000u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_0016B5B0:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> (c.r[18].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B60C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 7720u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 608u), 0u);
    set32(c.r[2], c.r[3].w[0] << 16);
    st32((c.r[16].w[0] + 624u), 0u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    st16((c.r[16].w[0] + 7728u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st16((c.r[16].w[0] + 7722u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0]), 0u);
    st16((c.r[16].w[0] + 10126u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7718u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 14;
L_0016B5F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B600u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016B600u) [[unlikely]] return; }
L_0016B600:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B60Cu);  if (depth < kMaxDepth) unit_001B(c, 246u, depth + 1u); else { c.pc = 0x0016F2D8u; return; } if (c.pc != 0x0016B60Cu) [[unlikely]] return; }
L_0016B60C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[19], c.r[19].w[0] + 40u);
    c.r[2].d[0] = c.r[18].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016B5B0u | kUnwind; return; } goto L_0016B5B0; } }
    st8((c.r[17].w[0] + 10089u), static_cast<std::uint8_t>(c.r[23].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016B918; } }
L_0016B630:
    c.r[2].d[0] = c.r[5].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B6E0; } }
    goto L_0016B63C;
L_0016B638:
    c.budget -= 1;
L_0016B63C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10014u)));
    c.r[2].d[0] = c.r[2].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B6E0; } }
    set32(c.r[20], c.r[20].w[0] << (c.r[18].w[0] & 31u));
    set32(c.r[16], c.r[19].w[0] + 27456u);
    set32(c.r[21], c.r[21].w[0] - 5000u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_0016B660:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> (c.r[18].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B6BC; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 7720u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 608u), 0u);
    set32(c.r[2], c.r[3].w[0] << 16);
    st32((c.r[16].w[0] + 624u), 0u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    st16((c.r[16].w[0] + 7728u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st16((c.r[16].w[0] + 7722u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0]), 0u);
    st16((c.r[16].w[0] + 10126u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7718u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B6B0u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016B6B0u) [[unlikely]] return; }
L_0016B6B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B6BCu);  if (depth < kMaxDepth) unit_001B(c, 246u, depth + 1u); else { c.pc = 0x0016F2D8u; return; } if (c.pc != 0x0016B6BCu) [[unlikely]] return; }
L_0016B6BC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[19], c.r[19].w[0] + 40u);
    c.r[2].d[0] = c.r[18].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016B660u | kUnwind; return; } goto L_0016B660; } }
    st8((c.r[17].w[0] + 10089u), static_cast<std::uint8_t>(c.r[23].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016B918; } }
L_0016B6E0:
    c.r[2].d[0] = ld64((c.r[6].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B798; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 644u)));
    c.r[2].d[0] = c.r[2].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B798; } }
    set32(c.r[20], c.r[20].w[0] << (c.r[18].w[0] & 31u));
    set32(c.r[16], c.r[19].w[0] + 27456u);
    set32(c.r[21], c.r[21].w[0] - 5000u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_0016B718:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> (c.r[18].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B774; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 7720u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 608u), 0u);
    set32(c.r[2], c.r[3].w[0] << 16);
    st32((c.r[16].w[0] + 624u), 0u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    st16((c.r[16].w[0] + 7728u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st16((c.r[16].w[0] + 7722u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0]), 0u);
    st16((c.r[16].w[0] + 10126u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7718u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B768u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016B768u) [[unlikely]] return; }
L_0016B768:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B774u);  if (depth < kMaxDepth) unit_001B(c, 246u, depth + 1u); else { c.pc = 0x0016F2D8u; return; } if (c.pc != 0x0016B774u) [[unlikely]] return; }
L_0016B774:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[19], c.r[19].w[0] + 40u);
    c.r[2].d[0] = c.r[18].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016B718u | kUnwind; return; } goto L_0016B718; } }
    st8((c.r[17].w[0] + 10089u), static_cast<std::uint8_t>(c.r[23].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016B918; } }
L_0016B798:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0016B7AC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016B7C4; } }
L_0016B7AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B7C0u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x0016B7C0u) [[unlikely]] return; }
L_0016B7C0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0016B7C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5024u), c.r[3].w[0]);
    c.budget -= 2;
L_0016B7CC:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016B89C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 7700u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 6ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B7F4; } }
    st32((c.r[17].w[0] + 8944u), 0u);
    st32((c.r[17].w[0] + 8948u), 0u);
    c.budget -= 2;
L_0016B7F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[7], ld32((c.r[2].w[0] + 19740u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0016B824; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B824u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016B824u) [[unlikely]] return; }
L_0016B824:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B838u);  if (depth < kMaxDepth) unit_0087(c, 276u, depth + 1u); else { c.pc = 0x0031FD80u; return; } if (c.pc != 0x0016B838u) [[unlikely]] return; }
L_0016B838:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B870; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 7700u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016B870; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 10220u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B870; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10140u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016B870; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 10210u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0016B870:
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B880u);  if (depth < kMaxDepth) unit_001A(c, 237u, depth + 1u); else { c.pc = 0x0016AC90u; return; } if (c.pc != 0x0016B880u) [[unlikely]] return; }
L_0016B880:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B890u);  if (depth < kMaxDepth) unit_0069(c, 91u, depth + 1u); else { c.pc = 0x002A6188u; return; } if (c.pc != 0x0016B890u) [[unlikely]] return; }
L_0016B890:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    st16((c.r[17].w[0] + 10164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0016B89C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7720u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[30].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0016B8B4:
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0016B918; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 16u)));
    set32(c.r[2], 0u + 5000u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016B900; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016B918; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016B900; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B918; } }
L_0016B900:
    set32(c.r[4], ld32((c.r[17].w[0] + 540u)));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 5u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016B1F8u | kUnwind; return; } goto L_0016B1F8; } }
L_0016B918:
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
L_0016B950:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 10104u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), 0u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016BF28; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B9A8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 632u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B9A8; } }
    st32((c.r[29].w[0]), 0u);
    c.budget -= 1;
L_0016B9A8:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B9D8; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 632u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B9D8; } }
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_0016B9D8:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BA08; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 632u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BA08; } }
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_0016BA08:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BA38; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 632u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BA38; } }
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_0016BA38:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BA68; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 632u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BA68; } }
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_0016BA68:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BA98; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 632u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BA98; } }
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_0016BA98:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BAC8; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 632u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BAC8; } }
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_0016BAC8:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BAF8; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 632u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BAF8; } }
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_0016BAF8:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BB2C; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 632u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BB2C; } }
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_0016BB2C:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BB60; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 632u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BB60; } }
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_0016BB60:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BB94; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 632u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BB94; } }
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_0016BB94:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BBC8; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 632u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BBC8; } }
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_0016BBC8:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 22;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BC14; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7696u)));
    set32(c.r[2], 0u + 13248u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 27456u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9040u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BC14; } }
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_0016BC14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 31488u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BC38; } }
    c.r[5].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BC38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016BC38u) [[unlikely]] return; }
L_0016BC38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 31492u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BC5C; } }
    c.r[5].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BC5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016BC5Cu) [[unlikely]] return; }
L_0016BC5C:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 31;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BCAC; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BC88u);  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C86D0u; return; } if (c.pc != 0x0016BC88u) [[unlikely]] return; }
L_0016BC88:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BC98u);  if (depth < kMaxDepth) unit_0072(c, 48u, depth + 1u); else { c.pc = 0x002C86E0u; return; } if (c.pc != 0x0016BC98u) [[unlikely]] return; }
L_0016BC98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016BCAC; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0016BCAC:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BD10; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[3].w[0] + 19740u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0016BD10; } }
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 280u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 284u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BCFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016BCFCu) [[unlikely]] return; }
L_0016BCFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BD10; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0016BD10:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BD58; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BD44u);  if (depth < kMaxDepth) unit_0009(c, 89u, depth + 1u); else { c.pc = 0x00125AF0u; return; } if (c.pc != 0x0016BD44u) [[unlikely]] return; }
L_0016BD44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BD58; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0016BD58:
    set32(c.r[3], ld32((c.r[17].w[0] + 13192u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016BD9C; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BD88u);  if (depth < kMaxDepth) unit_002E(c, 59u, depth + 1u); else { c.pc = 0x001B89E0u; return; } if (c.pc != 0x0016BD88u) [[unlikely]] return; }
L_0016BD88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BD9C; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0016BD9C:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 17;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BDE8; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BDD4u);  if (depth < kMaxDepth) unit_002E(c, 59u, depth + 1u); else { c.pc = 0x001B89E0u; return; } if (c.pc != 0x0016BDD4u) [[unlikely]] return; }
L_0016BDD4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0016BDE8; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0016BDE8:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 18;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BE38; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BE20u);  if (depth < kMaxDepth) unit_002E(c, 59u, depth + 1u); else { c.pc = 0x001B89E0u; return; } if (c.pc != 0x0016BE20u) [[unlikely]] return; }
L_0016BE20:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016BE38; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0016BE38:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 19;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BE88; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BE70u);  if (depth < kMaxDepth) unit_002E(c, 59u, depth + 1u); else { c.pc = 0x001B89E0u; return; } if (c.pc != 0x0016BE70u) [[unlikely]] return; }
L_0016BE70:
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016BE88; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0016BE88:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 20;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BED8; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BEC0u);  if (depth < kMaxDepth) unit_002E(c, 59u, depth + 1u); else { c.pc = 0x001B89E0u; return; } if (c.pc != 0x0016BEC0u) [[unlikely]] return; }
L_0016BEC0:
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016BED8; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0016BED8:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 21;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BF28; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BF10u);  if (depth < kMaxDepth) unit_002E(c, 59u, depth + 1u); else { c.pc = 0x001B89E0u; return; } if (c.pc != 0x0016BF10u) [[unlikely]] return; }
L_0016BF10:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0016BF28; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0016BF28:
    set32(c.r[2], ld32((c.r[29].w[0])));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016BF48:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    c.r[2].d[0] = c.r[2].d[0] & 61440ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BFB8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BF98u);  if (depth < kMaxDepth) unit_006F(c, 80u, depth + 1u); else { c.pc = 0x002BD190u; return; } if (c.pc != 0x0016BF98u) [[unlikely]] return; }
L_0016BF98:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0016BFB8; } }
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], 0u + 6u);
    set32(c.r[2], ld32((c.r[18].w[0] + 7700u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0016BFD0; } }
L_0016BFB8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_001B(c, 7u, depth); } }
L_0016BFC4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_001B(c, 7u, depth); } }
L_0016BFD0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10274u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[23].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7724u)));
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[30], ld32((c.r[18].w[0] + 588u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BFF4u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0016BFF4u) [[unlikely]] return; }
L_0016BFF4:
    set32(c.r[17], ld32((c.r[18].w[0] + 588u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_001B(c, 6u, depth); } }
    [[clang::musttail]] return unit_001B(c, 1u, depth);
}

}
