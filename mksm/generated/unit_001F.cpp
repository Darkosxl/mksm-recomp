#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001F[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0,
    0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0,
    0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0,
    0, 0, 129, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0,
    0, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141,
    0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248,
    0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 269, 0, 270, 0, 271, 0, 272, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0,
    0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282,
    0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0,
    0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0,
    0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0,
};

void unit_001F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0017C000;
    case 2u: goto L_0017C028;
    case 3u: goto L_0017C040;
    case 4u: goto L_0017C068;
    case 5u: goto L_0017C0A0;
    case 6u: goto L_0017C0B8;
    case 7u: goto L_0017C0DC;
    case 8u: goto L_0017C0E8;
    case 9u: goto L_0017C110;
    case 10u: goto L_0017C180;
    case 11u: goto L_0017C1B8;
    case 12u: goto L_0017C1E4;
    case 13u: goto L_0017C200;
    case 14u: goto L_0017C234;
    case 15u: goto L_0017C2B8;
    case 16u: goto L_0017C300;
    case 17u: goto L_0017C320;
    case 18u: goto L_0017C32C;
    case 19u: goto L_0017C364;
    case 20u: goto L_0017C37C;
    case 21u: goto L_0017C398;
    case 22u: goto L_0017C3E0;
    case 23u: goto L_0017C400;
    case 24u: goto L_0017C40C;
    case 25u: goto L_0017C444;
    case 26u: goto L_0017C45C;
    case 27u: goto L_0017C478;
    case 28u: goto L_0017C4AC;
    case 29u: goto L_0017C4FC;
    case 30u: goto L_0017C520;
    case 31u: goto L_0017C544;
    case 32u: goto L_0017C570;
    case 33u: goto L_0017C588;
    case 34u: goto L_0017C5AC;
    case 35u: goto L_0017C5D8;
    case 36u: goto L_0017C5F0;
    case 37u: goto L_0017C630;
    case 38u: goto L_0017C710;
    case 39u: goto L_0017C758;
    case 40u: goto L_0017C768;
    case 41u: goto L_0017C794;
    case 42u: goto L_0017C7D8;
    case 43u: goto L_0017C7E8;
    case 44u: goto L_0017C828;
    case 45u: goto L_0017C840;
    case 46u: goto L_0017C864;
    case 47u: goto L_0017C900;
    case 48u: goto L_0017C924;
    case 49u: goto L_0017C950;
    case 50u: goto L_0017C968;
    case 51u: goto L_0017C98C;
    case 52u: goto L_0017C9B8;
    case 53u: goto L_0017C9D0;
    case 54u: goto L_0017C9F4;
    case 55u: goto L_0017CA20;
    case 56u: goto L_0017CA38;
    case 57u: goto L_0017CA5C;
    case 58u: goto L_0017CA88;
    case 59u: goto L_0017CAA0;
    case 60u: goto L_0017CAC4;
    case 61u: goto L_0017CAF0;
    case 62u: goto L_0017CB08;
    case 63u: goto L_0017CB2C;
    case 64u: goto L_0017CB58;
    case 65u: goto L_0017CB70;
    case 66u: goto L_0017CB98;
    case 67u: goto L_0017CBB8;
    case 68u: goto L_0017CBFC;
    case 69u: goto L_0017CC64;
    case 70u: goto L_0017CC80;
    case 71u: goto L_0017CCB0;
    case 72u: goto L_0017CCC0;
    case 73u: goto L_0017CD04;
    case 74u: goto L_0017CD20;
    case 75u: goto L_0017CDE4;
    case 76u: goto L_0017CDF8;
    case 77u: goto L_0017CE18;
    case 78u: goto L_0017CE3C;
    case 79u: goto L_0017CE68;
    case 80u: goto L_0017CE8C;
    case 81u: goto L_0017CE9C;
    case 82u: goto L_0017CEDC;
    case 83u: goto L_0017CEF4;
    case 84u: goto L_0017CF10;
    case 85u: goto L_0017CF38;
    case 86u: goto L_0017CF48;
    case 87u: goto L_0017CF58;
    case 88u: goto L_0017CF68;
    case 89u: goto L_0017CF78;
    case 90u: goto L_0017CFA4;
    case 91u: goto L_0017CFB4;
    case 92u: goto L_0017CFC4;
    case 93u: goto L_0017D048;
    case 94u: goto L_0017D088;
    case 95u: goto L_0017D0A0;
    case 96u: goto L_0017D0B4;
    case 97u: goto L_0017D0E0;
    case 98u: goto L_0017D120;
    case 99u: goto L_0017D190;
    case 100u: goto L_0017D1F0;
    case 101u: goto L_0017D204;
    case 102u: goto L_0017D230;
    case 103u: goto L_0017D244;
    case 104u: goto L_0017D284;
    case 105u: goto L_0017D2E8;
    case 106u: goto L_0017D308;
    case 107u: goto L_0017D330;
    case 108u: goto L_0017D358;
    case 109u: goto L_0017D36C;
    case 110u: goto L_0017D390;
    case 111u: goto L_0017D398;
    case 112u: goto L_0017D3A0;
    case 113u: goto L_0017D3B4;
    case 114u: goto L_0017D3D0;
    case 115u: goto L_0017D42C;
    case 116u: goto L_0017D450;
    case 117u: goto L_0017D460;
    case 118u: goto L_0017D55C;
    case 119u: goto L_0017D56C;
    case 120u: goto L_0017D584;
    case 121u: goto L_0017D59C;
    case 122u: goto L_0017D5AC;
    case 123u: goto L_0017D5C0;
    case 124u: goto L_0017D5E0;
    case 125u: goto L_0017D638;
    case 126u: goto L_0017D654;
    case 127u: goto L_0017D65C;
    case 128u: goto L_0017D66C;
    case 129u: goto L_0017D688;
    case 130u: goto L_0017D690;
    case 131u: goto L_0017D698;
    case 132u: goto L_0017D6AC;
    case 133u: goto L_0017D6D0;
    case 134u: goto L_0017D6EC;
    case 135u: goto L_0017D70C;
    case 136u: goto L_0017D714;
    case 137u: goto L_0017D71C;
    case 138u: goto L_0017D730;
    case 139u: goto L_0017D760;
    case 140u: goto L_0017D790;
    case 141u: goto L_0017D7FC;
    case 142u: goto L_0017D80C;
    case 143u: goto L_0017D83C;
    case 144u: goto L_0017D890;
    case 145u: goto L_0017D8A4;
    case 146u: goto L_0017D8E0;
    case 147u: goto L_0017D914;
    case 148u: goto L_0017D934;
    case 149u: goto L_0017D990;
    case 150u: goto L_0017D9C4;
    case 151u: goto L_0017D9D4;
    case 152u: goto L_0017DA04;
    case 153u: goto L_0017DA10;
    case 154u: goto L_0017DA30;
    case 155u: goto L_0017DA60;
    case 156u: goto L_0017DA88;
    case 157u: goto L_0017DAE4;
    case 158u: goto L_0017DB0C;
    case 159u: goto L_0017DB1C;
    case 160u: goto L_0017DB4C;
    case 161u: goto L_0017DB58;
    case 162u: goto L_0017DB78;
    case 163u: goto L_0017DBA0;
    case 164u: goto L_0017DBB4;
    case 165u: goto L_0017DBC0;
    case 166u: goto L_0017DBDC;
    case 167u: goto L_0017DBEC;
    case 168u: goto L_0017DC08;
    case 169u: goto L_0017DC58;
    case 170u: goto L_0017DC68;
    case 171u: goto L_0017DD18;
    case 172u: goto L_0017DD58;
    case 173u: goto L_0017DD68;
    case 174u: goto L_0017DD78;
    case 175u: goto L_0017DDA8;
    case 176u: goto L_0017DDF0;
    case 177u: goto L_0017DE00;
    case 178u: goto L_0017DE18;
    case 179u: goto L_0017DE28;
    case 180u: goto L_0017DE68;
    case 181u: goto L_0017DEA8;
    case 182u: goto L_0017DED0;
    case 183u: goto L_0017DF04;
    case 184u: goto L_0017DF24;
    case 185u: goto L_0017DF34;
    case 186u: goto L_0017DF6C;
    case 187u: goto L_0017DF7C;
    case 188u: goto L_0017DFA4;
    case 189u: goto L_0017DFB4;
    case 190u: goto L_0017DFCC;
    case 191u: goto L_0017DFF8;
    case 192u: goto L_0017E000;
    case 193u: goto L_0017E04C;
    case 194u: goto L_0017E064;
    case 195u: goto L_0017E0B0;
    case 196u: goto L_0017E0EC;
    case 197u: goto L_0017E178;
    case 198u: goto L_0017E1D8;
    case 199u: goto L_0017E200;
    case 200u: goto L_0017E238;
    case 201u: goto L_0017E2BC;
    case 202u: goto L_0017E320;
    case 203u: goto L_0017E35C;
    case 204u: goto L_0017E36C;
    case 205u: goto L_0017E390;
    case 206u: goto L_0017E3B8;
    case 207u: goto L_0017E408;
    case 208u: goto L_0017E434;
    case 209u: goto L_0017E440;
    case 210u: goto L_0017E454;
    case 211u: goto L_0017E4B0;
    case 212u: goto L_0017E540;
    case 213u: goto L_0017E54C;
    case 214u: goto L_0017E58C;
    case 215u: goto L_0017E5E8;
    case 216u: goto L_0017E694;
    case 217u: goto L_0017E6DC;
    case 218u: goto L_0017E6E8;
    case 219u: goto L_0017E750;
    case 220u: goto L_0017E7AC;
    case 221u: goto L_0017E864;
    case 222u: goto L_0017E8A8;
    case 223u: goto L_0017E908;
    case 224u: goto L_0017E998;
    case 225u: goto L_0017E9AC;
    case 226u: goto L_0017E9E0;
    case 227u: goto L_0017EA10;
    case 228u: goto L_0017EA34;
    case 229u: goto L_0017EA94;
    case 230u: goto L_0017EAB4;
    case 231u: goto L_0017EAF0;
    case 232u: goto L_0017EB20;
    case 233u: goto L_0017EB80;
    case 234u: goto L_0017EBB8;
    case 235u: goto L_0017EBD8;
    case 236u: goto L_0017EC30;
    case 237u: goto L_0017EC8C;
    case 238u: goto L_0017ECE0;
    case 239u: goto L_0017ED08;
    case 240u: goto L_0017ED44;
    case 241u: goto L_0017ED74;
    case 242u: goto L_0017ED9C;
    case 243u: goto L_0017EE0C;
    case 244u: goto L_0017EE8C;
    case 245u: goto L_0017EEC8;
    case 246u: goto L_0017EEF8;
    case 247u: goto L_0017EF54;
    case 248u: goto L_0017EF7C;
    case 249u: goto L_0017EF8C;
    case 250u: goto L_0017EFBC;
    case 251u: goto L_0017F008;
    case 252u: goto L_0017F050;
    case 253u: goto L_0017F0A4;
    case 254u: goto L_0017F0F0;
    case 255u: goto L_0017F144;
    case 256u: goto L_0017F178;
    case 257u: goto L_0017F1C0;
    case 258u: goto L_0017F1F4;
    case 259u: goto L_0017F250;
    case 260u: goto L_0017F2A8;
    case 261u: goto L_0017F2C4;
    case 262u: goto L_0017F344;
    case 263u: goto L_0017F364;
    case 264u: goto L_0017F3DC;
    case 265u: goto L_0017F430;
    case 266u: goto L_0017F45C;
    case 267u: goto L_0017F4A0;
    case 268u: goto L_0017F4A8;
    case 269u: goto L_0017F4B0;
    case 270u: goto L_0017F4B8;
    case 271u: goto L_0017F4C0;
    case 272u: goto L_0017F4C8;
    case 273u: goto L_0017F4E0;
    case 274u: goto L_0017F4E8;
    case 275u: goto L_0017F504;
    case 276u: goto L_0017F514;
    case 277u: goto L_0017F570;
    case 278u: goto L_0017F5B0;
    case 279u: goto L_0017F5D4;
    case 280u: goto L_0017F61C;
    case 281u: goto L_0017F640;
    case 282u: goto L_0017F6FC;
    case 283u: goto L_0017F704;
    case 284u: goto L_0017F730;
    case 285u: goto L_0017F760;
    case 286u: goto L_0017F79C;
    case 287u: goto L_0017F7A4;
    case 288u: goto L_0017F7AC;
    case 289u: goto L_0017F7E8;
    case 290u: goto L_0017F824;
    case 291u: goto L_0017F82C;
    case 292u: goto L_0017F83C;
    case 293u: goto L_0017F864;
    case 294u: goto L_0017F924;
    case 295u: goto L_0017F974;
    case 296u: goto L_0017F97C;
    case 297u: goto L_0017F9D8;
    case 298u: goto L_0017FA50;
    case 299u: goto L_0017FA88;
    case 300u: goto L_0017FB40;
    case 301u: goto L_0017FB68;
    case 302u: goto L_0017FBA8;
    case 303u: goto L_0017FBC0;
    case 304u: goto L_0017FBD8;
    case 305u: goto L_0017FBF0;
    case 306u: goto L_0017FC00;
    case 307u: goto L_0017FC24;
    case 308u: goto L_0017FC30;
    case 309u: goto L_0017FC48;
    case 310u: goto L_0017FC64;
    case 311u: goto L_0017FC78;
    case 312u: goto L_0017FC98;
    case 313u: goto L_0017FCA8;
    case 314u: goto L_0017FCC8;
    case 315u: goto L_0017FCD8;
    case 316u: goto L_0017FD00;
    case 317u: goto L_0017FD10;
    case 318u: goto L_0017FD1C;
    case 319u: goto L_0017FD34;
    case 320u: goto L_0017FD4C;
    case 321u: goto L_0017FD90;
    case 322u: goto L_0017FDBC;
    case 323u: goto L_0017FDD0;
    case 324u: goto L_0017FDE8;
    case 325u: goto L_0017FDF8;
    case 326u: goto L_0017FE08;
    case 327u: goto L_0017FE40;
    case 328u: goto L_0017FE50;
    case 329u: goto L_0017FEB0;
    case 330u: goto L_0017FF50;
    case 331u: goto L_0017FF78;
    case 332u: goto L_0017FFB0;
    case 333u: goto L_0017FFC8;
    case 334u: goto L_0017FFE8;
    case 335u: goto L_0017FFF8;
    default: bad_entry(c, 0x0017C000u); return;
    }
L_0017C000:
    fpu_div(c, 2u, c.f[2], c.f[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017C060; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_001F[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017C028:
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[7].w[0]), c.f[1]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C040:
    c.f[0] = fp::mul(c.f[4], c.f[2]);
    c.f[1] = ld32((c.r[8].w[0] + 8u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[6].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[8].w[0] + 12u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[7].w[0]), c.f[0]);
    c.budget -= 8;
L_0017C060:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C068:
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    fpu_div(c, 2u, c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017C104; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 27488u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_001F[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017C0A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[7].w[0]), c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C0B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FC0000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0]), c.f[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C0DC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C0A0u | kUnwind; return; } goto L_0017C0A0; } }
L_0017C0E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FC0000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[7].w[0]), c.f[1]);
    c.budget -= 7;
L_0017C104:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], 0u + 5u);
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[4].w[0] + 31u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_0017C188; } }
    c.f[14] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[13] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C180u);  if (depth < kMaxDepth) unit_0073(c, 189u, depth + 1u); else { c.pc = 0x002CECE0u; return; } if (c.pc != 0x0017C180u) [[unlikely]] return; }
L_0017C180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017C190; } }
L_0017C188:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_0017C190:
    st32((c.r[16].w[0] + 8u), c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C1B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0017C1EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C1E4u);  if (depth < kMaxDepth) unit_0083(c, 310u, depth + 1u); else { c.pc = 0x0030FD20u; return; } if (c.pc != 0x0017C1E4u) [[unlikely]] return; }
L_0017C1E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 2;
L_0017C1EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C200:
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017C234; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C234:
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017C260; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.budget -= 5;
L_0017C260:
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017C28C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.budget -= 5;
L_0017C28C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0017C2AC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2480000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[4].w[0] + 4u), c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 5;
L_0017C2AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C2B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 56u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 1064u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 304u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C300u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017C300u) [[unlikely]] return; }
L_0017C300:
    set32(c.r[2], ld32((c.r[2].w[0] + 11264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017C310; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 1;
L_0017C310:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C320u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x0017C320u) [[unlikely]] return; }
L_0017C320:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C32Cu);  if (depth < kMaxDepth) unit_0084(c, 23u, depth + 1u); else { c.pc = 0x00310390u; return; } if (c.pc != 0x0017C32Cu) [[unlikely]] return; }
L_0017C32C:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u + 192u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[7], c.r[3].w[0] - 7u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 256u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0017C36C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C364u);  if (depth < kMaxDepth) unit_001E(c, 30u, depth + 1u); else { c.pc = 0x00178470u; return; } if (c.pc != 0x0017C364u) [[unlikely]] return; }
L_0017C364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017C37C; } }
L_0017C36C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C37Cu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x0017C37Cu) [[unlikely]] return; }
L_0017C37C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C398:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 56u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 1064u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 304u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], 0u + 2u);
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C3E0u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017C3E0u) [[unlikely]] return; }
L_0017C3E0:
    set32(c.r[2], ld32((c.r[2].w[0] + 11264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017C3F0; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 1;
L_0017C3F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C400u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x0017C400u) [[unlikely]] return; }
L_0017C400:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C40Cu);  if (depth < kMaxDepth) unit_0084(c, 23u, depth + 1u); else { c.pc = 0x00310390u; return; } if (c.pc != 0x0017C40Cu) [[unlikely]] return; }
L_0017C40C:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u + 192u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[7], c.r[3].w[0] - 7u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 256u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0017C44C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C444u);  if (depth < kMaxDepth) unit_001E(c, 30u, depth + 1u); else { c.pc = 0x00178470u; return; } if (c.pc != 0x0017C444u) [[unlikely]] return; }
L_0017C444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017C45C; } }
L_0017C44C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C45Cu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x0017C45Cu) [[unlikely]] return; }
L_0017C45C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C478:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[17], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[2].w[0] - 27588u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[17].d[0];  if (t) { goto L_0017C500; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C4ACu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0017C4ACu) [[unlikely]] return; }
L_0017C4AC:
    c.f[13] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x71160000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x36B60000u);
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.r[3].d[0] = c.r[3].d[0] | 41446ull;
    c.r[5].d[0] = c.r[5].d[0] | 56118ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    st32((c.r[16].w[0] - 16812u), c.r[17].w[0]);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C4FCu);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0017C4FCu) [[unlikely]] return; }
L_0017C4FC:
    st32((c.r[16].w[0] - 16812u), 0u);
    c.budget -= 1;
L_0017C500:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[2].w[0] - 27584u), c.r[17].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C544u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017C544u) [[unlikely]] return; }
L_0017C544:
    set32(c.r[3], ld32((c.r[16].w[0] + 304u)));
    set32(c.r[5], 0u + 56u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] - 8680u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C570u);  if (depth < kMaxDepth) unit_001E(c, 81u, depth + 1u); else { c.pc = 0x00179B60u; return; } if (c.pc != 0x0017C570u) [[unlikely]] return; }
L_0017C570:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C588:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C5ACu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017C5ACu) [[unlikely]] return; }
L_0017C5AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 304u)));
    set32(c.r[5], 0u + 56u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] - 9296u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C5D8u);  if (depth < kMaxDepth) unit_001E(c, 81u, depth + 1u); else { c.pc = 0x00179B60u; return; } if (c.pc != 0x0017C5D8u) [[unlikely]] return; }
L_0017C5D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C5F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 72u), c.f[23]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[22]);
    c.f[23] = c.f[13];
    st32((c.r[29].w[0] + 56u), c.f[21]);
    c.f[22] = c.f[12];
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.f[21] = c.f[14];
    c.f[20] = c.f[15];
    set32(c.r[5], ld32((c.r[16].w[0] + 296u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C630u);  if (depth < kMaxDepth) unit_0049(c, 190u, depth + 1u); else { c.pc = 0x00226698u; return; } if (c.pc != 0x0017C630u) [[unlikely]] return; }
L_0017C630:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 4u));
    c.r[3].d[0] = ld16((c.r[29].w[0] + 6u));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[3] = c.r[1].w[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 480u)));
    fpu_div(c, 21u, c.f[21], c.f[1]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    fpu_div(c, 20u, c.f[20], c.f[2]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    fpu_div(c, 1u, c.f[22], c.f[1]);
    fpu_div(c, 2u, c.f[23], c.f[2]);
    c.f[21] = fp::mul(c.f[21], c.f[3]);
    c.f[20] = fp::mul(c.f[20], c.f[3]);
    c.f[22] = fp::mul(c.f[1], c.f[3]);
    c.f[23] = fp::mul(c.f[2], c.f[3]);
    c.f[21] = fp::add(c.f[22], c.f[21]);
    c.f[20] = fp::add(c.f[23], c.f[20]);
    c.f[1] = fp::mul(c.f[22], c.f[0]);
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.f[22] = ld32((c.r[29].w[0] + 64u));
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::mul(c.f[23], c.f[0]);
    st32((c.r[2].w[0] + 52u), c.f[1]);
    st32((c.r[2].w[0] + 68u), c.f[21]);
    st32((c.r[2].w[0] + 72u), c.f[20]);
    st32((c.r[2].w[0] + 56u), c.f[20]);
    st32((c.r[2].w[0] + 60u), c.f[21]);
    c.f[23] = ld32((c.r[29].w[0] + 72u));
    c.f[21] = ld32((c.r[29].w[0] + 56u));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[2].w[0] + 64u), c.f[0]);
    st32((c.r[2].w[0] + 44u), c.f[1]);
    st32((c.r[2].w[0] + 48u), c.f[0]);
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 56;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C710:
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[2] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017C75C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017C758; } }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C758:
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 1;
L_0017C75C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C768:
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017C794; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C794:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017C7D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44960000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 2u);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017C7DC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C7D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0017C7DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C7E8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 88u), c.f[21]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.f[21] = c.f[12];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[20] = c.f[13];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C828u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0017C828u) [[unlikely]] return; }
L_0017C828:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0017C854; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C840u);  if (depth < kMaxDepth) unit_0036(c, 241u, depth + 1u); else { c.pc = 0x001D9EA0u; return; } if (c.pc != 0x0017C840u) [[unlikely]] return; }
L_0017C840:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 29u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017C86C; } }
L_0017C854:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C864u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x0017C864u) [[unlikely]] return; }
L_0017C864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017C8D8; } }
L_0017C86C:
    set32(c.r[4], c.r[3].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 27240u);
    c.r[4].d[0] = c.r[4].d[0] | 4ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.f[21] = fp::add(c.f[21], c.f[1]);
    st32((c.r[16].w[0] + 196u), c.f[20]);
    st32((c.r[16].w[0] + 192u), c.f[21]);
    c.budget -= 17;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0017C8D8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 480u)));
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[21], c.f[0]);
    st32((c.r[16].w[0] + 192u), c.f[0]);
    c.budget -= 10;
L_0017C8D8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 88u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C924u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017C924u) [[unlikely]] return; }
L_0017C924:
    set32(c.r[3], ld32((c.r[16].w[0] + 304u)));
    set32(c.r[5], 0u + 56u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] - 9296u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C950u);  if (depth < kMaxDepth) unit_001E(c, 93u, depth + 1u); else { c.pc = 0x0017A098u; return; } if (c.pc != 0x0017C950u) [[unlikely]] return; }
L_0017C950:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C968:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C98Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017C98Cu) [[unlikely]] return; }
L_0017C98C:
    set32(c.r[3], ld32((c.r[16].w[0] + 304u)));
    set32(c.r[5], 0u + 56u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] - 9296u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C9B8u);  if (depth < kMaxDepth) unit_001E(c, 93u, depth + 1u); else { c.pc = 0x0017A098u; return; } if (c.pc != 0x0017C9B8u) [[unlikely]] return; }
L_0017C9B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017C9D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C9F4u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017C9F4u) [[unlikely]] return; }
L_0017C9F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 304u)));
    set32(c.r[5], 0u + 56u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] - 5320u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CA20u);  if (depth < kMaxDepth) unit_001E(c, 93u, depth + 1u); else { c.pc = 0x0017A098u; return; } if (c.pc != 0x0017CA20u) [[unlikely]] return; }
L_0017CA20:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017CA38:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CA5Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017CA5Cu) [[unlikely]] return; }
L_0017CA5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 304u)));
    set32(c.r[5], 0u + 56u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] - 5320u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CA88u);  if (depth < kMaxDepth) unit_001E(c, 93u, depth + 1u); else { c.pc = 0x0017A098u; return; } if (c.pc != 0x0017CA88u) [[unlikely]] return; }
L_0017CA88:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017CAA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CAC4u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017CAC4u) [[unlikely]] return; }
L_0017CAC4:
    set32(c.r[3], ld32((c.r[16].w[0] + 304u)));
    set32(c.r[5], 0u + 56u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] - 1232u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CAF0u);  if (depth < kMaxDepth) unit_001E(c, 93u, depth + 1u); else { c.pc = 0x0017A098u; return; } if (c.pc != 0x0017CAF0u) [[unlikely]] return; }
L_0017CAF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017CB08:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CB2Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017CB2Cu) [[unlikely]] return; }
L_0017CB2C:
    set32(c.r[3], ld32((c.r[16].w[0] + 304u)));
    set32(c.r[5], 0u + 56u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] - 1232u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CB58u);  if (depth < kMaxDepth) unit_001E(c, 93u, depth + 1u); else { c.pc = 0x0017A098u; return; } if (c.pc != 0x0017CB58u) [[unlikely]] return; }
L_0017CB58:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017CB70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28608u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017CB98:
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CBB8u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017CBB8u) [[unlikely]] return; }
L_0017CBB8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[4].w[0] + 28608u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[6].d[0];
    st32((c.r[5].w[0] - 27584u), c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0017CC1C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CBFCu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0017CBFCu) [[unlikely]] return; }
L_0017CBFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x71160000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x36B60000u);
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.r[5].d[0] = c.r[5].d[0] | 41446ull;
    c.r[3].d[0] = c.r[3].d[0] | 56118ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017CC24; } }
L_0017CC1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x386F0000u);
    c.r[5].d[0] = c.r[5].d[0] | 44334ull;
    c.budget -= 2;
L_0017CC24:
    c.f[13] = 0u;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    st32((c.r[16].w[0] - 16812u), c.r[2].w[0]);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CC64u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0017CC64u) [[unlikely]] return; }
L_0017CC64:
    st32((c.r[16].w[0] - 16812u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017CC80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 27216u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] - 27576u), 0u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017CD08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CCB0u);  if (depth < kMaxDepth) unit_001A(c, 181u, depth + 1u); else { c.pc = 0x0016A078u; return; } if (c.pc != 0x0017CCB0u) [[unlikely]] return; }
L_0017CCB0:
    set32(c.r[2], ld32((c.r[16].w[0] - 27216u)));
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], c.r[2].w[0] + 80u);
    c.budget -= 4;
L_0017CCC0:
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017CCC0u | kUnwind; return; } goto L_0017CCC0; } }
    set32(c.r[2], ld32((c.r[16].w[0] - 27216u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 60u);
    set32(c.r[6], 0u + 127u);
    st32((c.r[2].w[0] + 68u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 128u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 52u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 72u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CD04u);  if (depth < kMaxDepth) unit_001D(c, 183u, depth + 1u); else { c.pc = 0x00176670u; return; } if (c.pc != 0x0017CD04u) [[unlikely]] return; }
L_0017CD04:
    st32((c.r[16].w[0] - 27216u), 0u);
    c.budget -= 1;
L_0017CD08:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017CD20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], 0u + 500u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017CDA8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 501ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017CD68; } }
    set32(c.r[2], 0u + 352u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017CD88; } }
    set32(c.r[2], 0u + 353u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017CD98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017CDD0; } }
L_0017CD68:
    set32(c.r[2], 0u + 502u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017CDB8; } }
    set32(c.r[2], 0u + 2135u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017CDC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017CDD0; } }
L_0017CD88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xCD720000u);
    c.r[4].d[0] = c.r[4].d[0] | 62984ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017CDD0; } }
L_0017CD98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xED670000u);
    c.r[4].d[0] = c.r[4].d[0] | 1417ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017CDD0; } }
L_0017CDA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x682A0000u);
    c.r[4].d[0] = c.r[4].d[0] | 18671ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017CDD0; } }
L_0017CDB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBD1F0000u);
    c.r[4].d[0] = c.r[4].d[0] | 37554ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017CDD0; } }
L_0017CDC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xA47F0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65083ull;
    c.budget -= 2;
L_0017CDD0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0017CDE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CDE4u);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x0017CDE4u) [[unlikely]] return; }
L_0017CDE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017CDF8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017CE1C; } }
L_0017CE18:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0017CE1C:
    set32(c.r[3], c.r[17].w[0] - 27200u);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017CE4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CE3Cu);  if (depth < kMaxDepth) unit_0093(c, 87u, depth + 1u); else { c.pc = 0x0034D228u; return; } if (c.pc != 0x0017CE3Cu) [[unlikely]] return; }
L_0017CE3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017CE50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017CE18u | kUnwind; return; } goto L_0017CE18; } }
L_0017CE4C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017CE50:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017CE68:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[16].w[0] - 19792u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CE8Cu);  if (depth < kMaxDepth) unit_0009(c, 48u, depth + 1u); else { c.pc = 0x00125548u; return; } if (c.pc != 0x0017CE8Cu) [[unlikely]] return; }
L_0017CE8C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CE9Cu);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x0017CE9Cu) [[unlikely]] return; }
L_0017CE9C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0017CEF4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0017CEC0; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017CED0; } }
L_0017CEC0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0017CEE4; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0017CED0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CEDCu);  if (depth < kMaxDepth) unit_001A(c, 221u, depth + 1u); else { c.pc = 0x0016A638u; return; } if (c.pc != 0x0017CEDCu) [[unlikely]] return; }
L_0017CEDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017CEF4; } }
L_0017CEE4:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CEF4u);  if (depth < kMaxDepth) unit_001A(c, 221u, depth + 1u); else { c.pc = 0x0016A638u; return; } if (c.pc != 0x0017CEF4u) [[unlikely]] return; }
L_0017CEF4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017CF10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[2].w[0] + 2824u);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0017CF2C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 2;
L_0017CF2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017CF38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 2840u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017CF48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[2].w[0] + 2840u), c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017CF58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 2832u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017CF68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 2836u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017CF78:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] - 14960u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CFA4u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017CFA4u) [[unlikely]] return; }
L_0017CFA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CFB4u);  if (depth < kMaxDepth) unit_0036(c, 237u, depth + 1u); else { c.pc = 0x001D9E08u; return; } if (c.pc != 0x0017CFB4u) [[unlikely]] return; }
L_0017CFB4:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CFC4u);  if (depth < kMaxDepth) unit_001E(c, 192u, depth + 1u); else { c.pc = 0x0017B880u; return; } if (c.pc != 0x0017CFC4u) [[unlikely]] return; }
L_0017CFC4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[1].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.f[2] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::add(c.f[0], c.f[0]);
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017CFF4; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0017CFF4:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017D008; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0017D008:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017D01C; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0017D01C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], ld32((c.r[3].w[0] + 14848u)));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017D048:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D088u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017D088u) [[unlikely]] return; }
L_0017D088:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 8u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D0A0u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x00126468u; return; } if (c.pc != 0x0017D0A0u) [[unlikely]] return; }
L_0017D0A0:
    set32(c.r[5], 0u + 120u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D0B4u);  if (depth < kMaxDepth) unit_001F(c, 176u, depth + 1u); else { c.pc = 0x0017DDF0u; return; } if (c.pc != 0x0017D0B4u) [[unlikely]] return; }
L_0017D0B4:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0017D0EC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 11264u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017D0D4; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 1;
L_0017D0D4:
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D0E0u);  if (depth < kMaxDepth) unit_001D(c, 177u, depth + 1u); else { c.pc = 0x001762F8u; return; } if (c.pc != 0x0017D0E0u) [[unlikely]] return; }
L_0017D0E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 27136u), c.r[2].w[0]);
    c.budget -= 3;
L_0017D0EC:
    set32(c.r[2], ld32((c.r[18].w[0] + 11264u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017D100; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 1;
L_0017D100:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] + 100u);
    st32((c.r[3].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[7], c.r[3].w[0] + 204u);
    set32(c.r[6], c.r[3].w[0] + 180u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + 104u);
    set32(c.r[2], 0u + 5u);
    c.budget -= 8;
L_0017D120:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D120u | kUnwind; return; } goto L_0017D120; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[9], c.r[2].w[0] + 27184u);
    ldl(c.r[4], (c.r[9].w[0] + 7u));
    ldr(c.r[4], (c.r[9].w[0]));
    ldl(c.r[5], (c.r[9].w[0] + 15u));
    ldr(c.r[5], (c.r[9].w[0] + 8u));
    ldl(c.r[8], (c.r[9].w[0] + 23u));
    ldr(c.r[8], (c.r[9].w[0] + 16u));
    sdl(c.r[4], (c.r[29].w[0] + 7u));
    sdr(c.r[4], (c.r[29].w[0]));
    sdl(c.r[5], (c.r[29].w[0] + 15u));
    sdr(c.r[5], (c.r[29].w[0] + 8u));
    sdl(c.r[8], (c.r[29].w[0] + 23u));
    sdr(c.r[8], (c.r[29].w[0] + 16u));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[8], 0u + 66u);
    set32(c.r[7], 0u + 127u);
    c.r[2].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 5u);
    c.budget -= 22;
L_0017D190:
    st32((c.r[3].w[0]), c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[5].w[0]), c.f[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 11;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D190u | kUnwind; return; } goto L_0017D190; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[29].w[0] + 32u), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017D204; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 11264u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017D1E0; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 1;
L_0017D1E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D1F0u);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x001264C8u; return; } if (c.pc != 0x0017D1F0u) [[unlikely]] return; }
L_0017D1F0:
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D204u);  if (depth < kMaxDepth) unit_001D(c, 177u, depth + 1u); else { c.pc = 0x001762F8u; return; } if (c.pc != 0x0017D204u) [[unlikely]] return; }
L_0017D204:
    set32(c.r[16], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[2].w[0] - 27596u), 0u);
    st32((c.r[3].w[0] - 27588u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[2].w[0] - 27216u), 0u);
    st32((c.r[3].w[0] - 27576u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D230u);  if (depth < kMaxDepth) unit_0018(c, 348u, depth + 1u); else { c.pc = 0x00163000u; return; } if (c.pc != 0x0017D230u) [[unlikely]] return; }
L_0017D230:
    set32(c.r[5], ld32((c.r[18].w[0] + 12816u)));
    set32(c.r[4], c.r[20].w[0] - 14960u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D244u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017D244u) [[unlikely]] return; }
L_0017D244:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 28608u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[16].d[0];
    st32((c.r[3].w[0] - 27584u), c.r[4].w[0]);
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[16].d[0];  if (t) { goto L_0017D2A4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D284u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0017D284u) [[unlikely]] return; }
L_0017D284:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x71160000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x36B60000u);
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.r[5].d[0] = c.r[5].d[0] | 41446ull;
    c.r[3].d[0] = c.r[3].d[0] | 56118ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017D2AC; } }
L_0017D2A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x386F0000u);
    c.r[5].d[0] = c.r[5].d[0] | 44334ull;
    c.budget -= 2;
L_0017D2AC:
    c.f[13] = 0u;
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    st32((c.r[19].w[0] - 16812u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D2E8u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0017D2E8u) [[unlikely]] return; }
L_0017D2E8:
    set32(c.r[4], 0u + 60u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[19].w[0] - 16812u), 0u);
    st32((c.r[2].w[0] - 27212u), c.r[4].w[0]);
    st32((c.r[3].w[0] - 27276u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D308u);  if (depth < kMaxDepth) unit_0023(c, 74u, depth + 1u); else { c.pc = 0x0018D270u; return; } if (c.pc != 0x0017D308u) [[unlikely]] return; }
L_0017D308:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017D330:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D358u);  if (depth < kMaxDepth) unit_001F(c, 306u, depth + 1u); else { c.pc = 0x0017FC00u; return; } if (c.pc != 0x0017D358u) [[unlikely]] return; }
L_0017D358:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D36Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017D36Cu) [[unlikely]] return; }
L_0017D36C:
    set32(c.r[2], ld32((c.r[2].w[0] + 11264u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017D380; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 1;
L_0017D380:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D390u);  if (depth < kMaxDepth) unit_001D(c, 198u, depth + 1u); else { c.pc = 0x00176F98u; return; } if (c.pc != 0x0017D390u) [[unlikely]] return; }
L_0017D390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D398u);  if (depth < kMaxDepth) unit_0021(c, 33u, depth + 1u); else { c.pc = 0x00184D98u; return; } if (c.pc != 0x0017D398u) [[unlikely]] return; }
L_0017D398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D3A0u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x0017D3A0u) [[unlikely]] return; }
L_0017D3A0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0017D3B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D3B4u);  if (depth < kMaxDepth) unit_009E(c, 71u, depth + 1u); else { c.pc = 0x00378A30u; return; } if (c.pc != 0x0017D3B4u) [[unlikely]] return; }
L_0017D3B4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017D3D0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[23].w[0] + 4u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D42Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017D42Cu) [[unlikely]] return; }
L_0017D42C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 11264u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017D440; } }
    set32(c.r[20], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 1;
L_0017D440:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D450u);  if (depth < kMaxDepth) unit_0036(c, 420u, depth + 1u); else { c.pc = 0x001DB0A8u; return; } if (c.pc != 0x0017D450u) [[unlikely]] return; }
L_0017D450:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] - 19792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D460u);  if (depth < kMaxDepth) unit_0009(c, 48u, depth + 1u); else { c.pc = 0x00125548u; return; } if (c.pc != 0x0017D460u) [[unlikely]] return; }
L_0017D460:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 27132u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017D584; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[4].w[0] - 27132u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_0017D498; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017D560; } }
L_0017D498:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_0017D574; } }
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], 0u + 500u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0017D520; } }
    c.r[2].d[0] = c.r[17].sd[0] < 501ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017D4E0; } }
    set32(c.r[2], 0u + 352u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0017D500; } }
    set32(c.r[2], 0u + 353u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0017D510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017D548; } }
L_0017D4E0:
    set32(c.r[2], 0u + 502u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0017D530; } }
    set32(c.r[2], 0u + 2135u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0017D540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017D548; } }
L_0017D500:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xCD720000u);
    c.r[4].d[0] = c.r[4].d[0] | 62984ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017D548; } }
L_0017D510:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xED670000u);
    c.r[4].d[0] = c.r[4].d[0] | 1417ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017D548; } }
L_0017D520:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x682A0000u);
    c.r[4].d[0] = c.r[4].d[0] | 18671ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017D548; } }
L_0017D530:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBD1F0000u);
    c.r[4].d[0] = c.r[4].d[0] | 37554ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017D548; } }
L_0017D540:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xA47F0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65083ull;
    c.budget -= 2;
L_0017D548:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0017D55C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D55Cu);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x0017D55Cu) [[unlikely]] return; }
L_0017D55C:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0017D560:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D56Cu);  if (depth < kMaxDepth) unit_001A(c, 221u, depth + 1u); else { c.pc = 0x0016A638u; return; } if (c.pc != 0x0017D56Cu) [[unlikely]] return; }
L_0017D56C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017D584; } }
L_0017D574:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D584u);  if (depth < kMaxDepth) unit_001A(c, 221u, depth + 1u); else { c.pc = 0x0016A638u; return; } if (c.pc != 0x0017D584u) [[unlikely]] return; }
L_0017D584:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[16], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D59Cu);  if (depth < kMaxDepth) unit_001D(c, 198u, depth + 1u); else { c.pc = 0x00176F98u; return; } if (c.pc != 0x0017D59Cu) [[unlikely]] return; }
L_0017D59C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[2].w[0] - 19792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D5ACu);  if (depth < kMaxDepth) unit_0009(c, 148u, depth + 1u); else { c.pc = 0x00126450u; return; } if (c.pc != 0x0017D5ACu) [[unlikely]] return; }
L_0017D5AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0017D6A4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D5C0u);  if (depth < kMaxDepth) unit_001E(c, 192u, depth + 1u); else { c.pc = 0x0017B880u; return; } if (c.pc != 0x0017D5C0u) [[unlikely]] return; }
L_0017D5C0:
    set32(c.r[3], ld32((c.r[2].w[0] + 252u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0017D624; } }
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[3], c.r[2].w[0] + 256u);
    c.budget -= 4;
L_0017D5E0:
    set32(c.r[2], ld32((c.r[3].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0017D604; } }
    c.f[1] = ld32((c.r[3].w[0] + 100u));
    c.f[0] = ld32((c.r[3].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017D610; } }
L_0017D604:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017D628; } }
L_0017D610:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 192u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D5E0u | kUnwind; return; } goto L_0017D5E0; } }
L_0017D624:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0017D628:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017D664; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D638u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x0017D638u) [[unlikely]] return; }
L_0017D638:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0017D690; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D654u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x0017D654u) [[unlikely]] return; }
L_0017D654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D65Cu);  if (depth < kMaxDepth) unit_009E(c, 71u, depth + 1u); else { c.pc = 0x00378A30u; return; } if (c.pc != 0x0017D65Cu) [[unlikely]] return; }
L_0017D65C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017D690; } }
L_0017D664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D66Cu);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x0017D66Cu) [[unlikely]] return; }
L_0017D66C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0017D6B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D688u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x0017D688u) [[unlikely]] return; }
L_0017D688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D690u);  if (depth < kMaxDepth) unit_009E(c, 71u, depth + 1u); else { c.pc = 0x00378A30u; return; } if (c.pc != 0x0017D690u) [[unlikely]] return; }
L_0017D690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D698u);  if (depth < kMaxDepth) unit_0021(c, 33u, depth + 1u); else { c.pc = 0x00184D98u; return; } if (c.pc != 0x0017D698u) [[unlikely]] return; }
L_0017D698:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017D8A8; } }
L_0017D6A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D6ACu);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x0017D6ACu) [[unlikely]] return; }
L_0017D6AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_0017D6FC; } }
L_0017D6B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] - 27592u), c.r[3].w[0]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017D728; } }
    c.budget -= 1;
L_0017D6D0:
    set32(c.r[2], ld32((c.r[16].w[0] - 27212u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] - 27212u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017D6FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D6ECu);  if (depth < kMaxDepth) unit_0093(c, 84u, depth + 1u); else { c.pc = 0x0034D188u; return; } if (c.pc != 0x0017D6ECu) [[unlikely]] return; }
L_0017D6EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017D6FC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] - 27212u), c.r[2].w[0]);
    c.budget -= 2;
L_0017D6FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D70Cu);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x0017D70Cu) [[unlikely]] return; }
L_0017D70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D714u);  if (depth < kMaxDepth) unit_0021(c, 33u, depth + 1u); else { c.pc = 0x00184D98u; return; } if (c.pc != 0x0017D714u) [[unlikely]] return; }
L_0017D714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D71Cu);  if (depth < kMaxDepth) unit_009E(c, 71u, depth + 1u); else { c.pc = 0x00378A30u; return; } if (c.pc != 0x0017D71Cu) [[unlikely]] return; }
L_0017D71C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017D8A8; } }
L_0017D728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D730u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x0017D730u) [[unlikely]] return; }
L_0017D730:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D6D0u | kUnwind; return; } goto L_0017D6D0; } }
    set32(c.r[2], ld32((c.r[16].w[0] - 27212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D6D0u | kUnwind; return; } goto L_0017D6D0; } }
    set32(c.r[5], c.r[22].w[0] - 1u);
    set32(c.r[6], c.r[20].w[0] + 180u);
    set32(c.r[4], 0u + 16u);
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], c.r[20].w[0] + 200u);
    c.budget -= 5;
L_0017D760:
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D760u | kUnwind; return; } goto L_0017D760; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0017D7A8; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], 0u + 127u);
    c.budget -= 4;
L_0017D790:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D790u | kUnwind; return; } goto L_0017D790; } }
L_0017D7A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[17], 0u + 1u);
    st32((c.r[2].w[0] - 27216u), c.r[20].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[21].w[0] - 27592u), 0u);
    st32((c.r[2].w[0] - 27588u), 0u);
    set32(c.r[4], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[3].w[0] - 27576u), c.r[17].w[0]);
    st32((c.r[2].w[0] - 27132u), 0u);
    c.budget -= 13;
    { const bool t = c.r[19].d[0] == c.r[4].d[0];  if (t) { goto L_0017D83C; } }
    set32(c.r[5], ld32((c.r[23].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[3].w[0] - 14960u);
    c.f[20] = c.r[19].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D7FCu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017D7FCu) [[unlikely]] return; }
L_0017D7FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D80Cu);  if (depth < kMaxDepth) unit_001E(c, 192u, depth + 1u); else { c.pc = 0x0017B880u; return; } if (c.pc != 0x0017D80Cu) [[unlikely]] return; }
L_0017D80C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    fpu_div(c, 12u, c.f[12], c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D83Cu);  if (depth < kMaxDepth) unit_001E(c, 156u, depth + 1u); else { c.pc = 0x0017B1B8u; return; } if (c.pc != 0x0017D83Cu) [[unlikely]] return; }
L_0017D83C:
    set32(c.r[4], ld32((c.r[18].w[0] + 12816u)));
    set32(c.r[3], 0u + 13248u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + 27456u);
    st32((c.r[2].w[0] - 27136u), c.r[17].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[6].w[0] - 31128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[3].w[0] - 27596u), 0u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + 500u);
    st32((c.r[30].w[0] + 276u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D890u);  if (depth < kMaxDepth) unit_001D(c, 56u, depth + 1u); else { c.pc = 0x00174BF0u; return; } if (c.pc != 0x0017D890u) [[unlikely]] return; }
L_0017D890:
    set32(c.r[5], ld32((c.r[30].w[0] + 276u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D8A4u);  if (depth < kMaxDepth) unit_001D(c, 58u, depth + 1u); else { c.pc = 0x00174C30u; return; } if (c.pc != 0x0017D8A4u) [[unlikely]] return; }
L_0017D8A4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0017D8A8:
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
L_0017D8E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[20]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D914u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017D914u) [[unlikely]] return; }
L_0017D914:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 11264u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017D92C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 1;
L_0017D92C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D934u);  if (depth < kMaxDepth) unit_001D(c, 183u, depth + 1u); else { c.pc = 0x00176670u; return; } if (c.pc != 0x0017D934u) [[unlikely]] return; }
L_0017D934:
    set32(c.r[5], ld32((c.r[16].w[0] + 11264u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[2].w[0] - 27588u), 0u);
    st32((c.r[3].w[0] - 27136u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0017D958; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 96u)));
    c.budget -= 1;
L_0017D958:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 60u);
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 128u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 11264u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017D984; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 1;
L_0017D984:
    set32(c.r[3], c.r[5].w[0] + 104u);
    set32(c.r[2], c.r[5].w[0] + 80u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
L_0017D990:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D990u | kUnwind; return; } goto L_0017D990; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[18].w[0] - 14960u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D9C4u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017D9C4u) [[unlikely]] return; }
L_0017D9C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D9D4u);  if (depth < kMaxDepth) unit_001E(c, 192u, depth + 1u); else { c.pc = 0x0017B880u; return; } if (c.pc != 0x0017D9D4u) [[unlikely]] return; }
L_0017D9D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    fpu_div(c, 12u, c.f[12], c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DA04u);  if (depth < kMaxDepth) unit_001E(c, 156u, depth + 1u); else { c.pc = 0x0017B1B8u; return; } if (c.pc != 0x0017DA04u) [[unlikely]] return; }
L_0017DA04:
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DA10u);  if (depth < kMaxDepth) unit_0039(c, 21u, depth + 1u); else { c.pc = 0x001E4308u; return; } if (c.pc != 0x0017DA10u) [[unlikely]] return; }
L_0017DA10:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017DA30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DA60u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017DA60u) [[unlikely]] return; }
L_0017DA60:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 11264u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017DA78; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 1;
L_0017DA78:
    set32(c.r[3], c.r[5].w[0] + 80u);
    set32(c.r[2], c.r[5].w[0] + 104u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
L_0017DA88:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017DA88u | kUnwind; return; } goto L_0017DA88; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017DAC8; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 60u);
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 128u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 68u), 0u);
    st32((c.r[5].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 6;
L_0017DAC8:
    set32(c.r[2], ld32((c.r[6].w[0] + 11264u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017DADC; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 1;
L_0017DADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DAE4u);  if (depth < kMaxDepth) unit_001D(c, 183u, depth + 1u); else { c.pc = 0x00176670u; return; } if (c.pc != 0x0017DAE4u) [[unlikely]] return; }
L_0017DAE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[3].w[0] - 27136u), 0u);
    set32(c.r[4], c.r[17].w[0] - 14960u);
    st32((c.r[2].w[0] - 27588u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DB0Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017DB0Cu) [[unlikely]] return; }
L_0017DB0C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DB1Cu);  if (depth < kMaxDepth) unit_001E(c, 192u, depth + 1u); else { c.pc = 0x0017B880u; return; } if (c.pc != 0x0017DB1Cu) [[unlikely]] return; }
L_0017DB1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    fpu_div(c, 12u, c.f[12], c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DB4Cu);  if (depth < kMaxDepth) unit_001E(c, 156u, depth + 1u); else { c.pc = 0x0017B1B8u; return; } if (c.pc != 0x0017DB4Cu) [[unlikely]] return; }
L_0017DB4C:
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DB58u);  if (depth < kMaxDepth) unit_0039(c, 21u, depth + 1u); else { c.pc = 0x001E4308u; return; } if (c.pc != 0x0017DB58u) [[unlikely]] return; }
L_0017DB58:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017DB78:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DBA0u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017DBA0u) [[unlikely]] return; }
L_0017DBA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DBB4u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017DBB4u) [[unlikely]] return; }
L_0017DBB4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DBC0u);  if (depth < kMaxDepth) unit_0007(c, 337u, depth + 1u); else { c.pc = 0x0011EC50u; return; } if (c.pc != 0x0017DBC0u) [[unlikely]] return; }
L_0017DBC0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DBDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017DBDCu) [[unlikely]] return; }
L_0017DBDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017DC34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DBECu);  if (depth < kMaxDepth) unit_0007(c, 337u, depth + 1u); else { c.pc = 0x0011EC50u; return; } if (c.pc != 0x0017DBECu) [[unlikely]] return; }
L_0017DBEC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DC08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017DC08u) [[unlikely]] return; }
L_0017DC08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017DC34; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] - 27588u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0017DC3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[2].w[0] - 27596u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC3C; } }
L_0017DC34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[2].w[0] - 27596u), 0u);
    c.budget -= 2;
L_0017DC3C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017DC58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DC68u);  if (depth < kMaxDepth) unit_001F(c, 171u, depth + 1u); else { c.pc = 0x0017DD18u; return; } if (c.pc != 0x0017DC68u) [[unlikely]] return; }
L_0017DC68:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 27136u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0017DD08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 195u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12228u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0017DCCC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0017DCF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 27588u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0017DD08; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 27596u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_0017DD08; } }
    st32((c.r[3].w[0] - 27596u), c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DD08; } }
L_0017DCCC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_0017DCF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 27588u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0017DD08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[2].w[0] - 27596u), c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DD08; } }
L_0017DCF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 27596u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017DD08; } }
    st32((c.r[3].w[0] - 27596u), 0u);
    c.budget -= 1;
L_0017DD08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017DD18:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    set32(c.r[19], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    set32(c.r[21], 0u + 69u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 16;
L_0017DD58:
    set32(c.r[4], c.r[22].w[0] - 14960u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DD68u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0017DD68u) [[unlikely]] return; }
L_0017DD68:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DD78u);  if (depth < kMaxDepth) unit_0089(c, 171u, depth + 1u); else { c.pc = 0x00325E50u; return; } if (c.pc != 0x0017DD78u) [[unlikely]] return; }
L_0017DD78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_0017DDB0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13196u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_0017DDB0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_0017DDB0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] - 19792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DDA8u);  if (depth < kMaxDepth) unit_0009(c, 45u, depth + 1u); else { c.pc = 0x001254B8u; return; } if (c.pc != 0x0017DDA8u) [[unlikely]] return; }
L_0017DDA8:
    set32(c.r[3], c.r[18].w[0] + 1u);
    if (c.r[2].d[0] != 0) c.r[18].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_0017DDB0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017DD58u | kUnwind; return; } goto L_0017DD58; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017DDF0:
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017DE00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DE18u);  if (depth < kMaxDepth) unit_001E(c, 137u, depth + 1u); else { c.pc = 0x0017AD80u; return; } if (c.pc != 0x0017DE18u) [[unlikely]] return; }
L_0017DE18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017DE28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21456u)));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0017DE8C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] - 6940u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0017DE8C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] + 24040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DE68u);  if (depth < kMaxDepth) unit_007D(c, 262u, depth + 1u); else { c.pc = 0x002F7A00u; return; } if (c.pc != 0x0017DE68u) [[unlikely]] return; }
L_0017DE68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017DE8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 22612u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DE90; } }
L_0017DE8C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017DE90:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017DEA8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[18], c.r[17].w[0] + 1752u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DED0u);  if (depth < kMaxDepth) unit_001F(c, 179u, depth + 1u); else { c.pc = 0x0017DE28u; return; } if (c.pc != 0x0017DED0u) [[unlikely]] return; }
L_0017DED0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017E394; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0017DEF4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E394; } }
L_0017DEF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] + 24040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DF04u);  if (depth < kMaxDepth) unit_007D(c, 262u, depth + 1u); else { c.pc = 0x002F7A00u; return; } if (c.pc != 0x0017DF04u) [[unlikely]] return; }
L_0017DF04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017DFE8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1736u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0017DF48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DF24u);  if (depth < kMaxDepth) unit_001A(c, 214u, depth + 1u); else { c.pc = 0x0016A4A0u; return; } if (c.pc != 0x0017DF24u) [[unlikely]] return; }
L_0017DF24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017DFD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DF34u);  if (depth < kMaxDepth) unit_001A(c, 215u, depth + 1u); else { c.pc = 0x0016A4D0u; return; } if (c.pc != 0x0017DF34u) [[unlikely]] return; }
L_0017DF34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017DFCC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DFC0; } }
L_0017DF48:
    set32(c.r[2], ld32((c.r[17].w[0] + 1752u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0017DFD8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0017DF90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DF6Cu);  if (depth < kMaxDepth) unit_001A(c, 216u, depth + 1u); else { c.pc = 0x0016A508u; return; } if (c.pc != 0x0017DF6Cu) [[unlikely]] return; }
L_0017DF6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017DFD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DF7Cu);  if (depth < kMaxDepth) unit_001A(c, 217u, depth + 1u); else { c.pc = 0x0016A540u; return; } if (c.pc != 0x0017DF7Cu) [[unlikely]] return; }
L_0017DF7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017DFCC; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DFC0; } }
L_0017DF90:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0017DFD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DFA4u);  if (depth < kMaxDepth) unit_001A(c, 218u, depth + 1u); else { c.pc = 0x0016A578u; return; } if (c.pc != 0x0017DFA4u) [[unlikely]] return; }
L_0017DFA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017DFD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DFB4u);  if (depth < kMaxDepth) unit_001A(c, 219u, depth + 1u); else { c.pc = 0x0016A5B0u; return; } if (c.pc != 0x0017DFB4u) [[unlikely]] return; }
L_0017DFB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017DFCC; } }
    set32(c.r[4], 0u + 5u);
    c.budget -= 1;
L_0017DFC0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DFCCu);  if (depth < kMaxDepth) unit_001A(c, 221u, depth + 1u); else { c.pc = 0x0016A638u; return; } if (c.pc != 0x0017DFCCu) [[unlikely]] return; }
L_0017DFCC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DFDC; } }
L_0017DFD8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017DFDC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0017E030; } }
L_0017DFE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DFF8u);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x0017DFF8u) [[unlikely]] return; }
L_0017DFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E000u);  if (depth < kMaxDepth) unit_001A(c, 219u, depth + 1u); else { c.pc = 0x0016A5B0u; return; } if (c.pc != 0x0017E000u) [[unlikely]] return; }
L_0017E000:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0017E394; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0017E394; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0017E354; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E364; } }
L_0017E030:
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0017E374; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E04Cu);  if (depth < kMaxDepth) unit_0026(c, 88u, depth + 1u); else { c.pc = 0x0019A4B0u; return; } if (c.pc != 0x0017E04Cu) [[unlikely]] return; }
L_0017E04C:
    set32(c.r[2], ld32((c.r[17].w[0] + 1736u)));
    st32((c.r[17].w[0] + 1720u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0017E088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E064u);  if (depth < kMaxDepth) unit_0020(c, 213u, depth + 1u); else { c.pc = 0x00182810u; return; } if (c.pc != 0x0017E064u) [[unlikely]] return; }
L_0017E064:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], ld32((c.r[5].w[0] - 22608u)));
    set32(c.r[2], ld32((c.r[3].w[0] - 22604u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017E088; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] - 22608u), c.r[2].w[0]);
    c.budget -= 2;
L_0017E088:
    set32(c.r[2], ld32((c.r[17].w[0] + 1724u)));
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0017E140; } }
    c.r[3].d[0] = ld64((c.r[17].w[0] + 1736u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0017E0F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E0B0u);  if (depth < kMaxDepth) unit_0086(c, 70u, depth + 1u); else { c.pc = 0x00318A60u; return; } if (c.pc != 0x0017E0B0u) [[unlikely]] return; }
L_0017E0B0:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC3740000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 23836ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E0ECu);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0017E0ECu) [[unlikely]] return; }
L_0017E0EC:
    st32((c.r[17].w[0] + 1740u), c.r[16].w[0]);
    c.budget -= 1;
L_0017E0F0:
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017E104; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1728u)));
    st32((c.r[17].w[0] + 1732u), c.r[2].w[0]);
    c.budget -= 2;
L_0017E104:
    set32(c.r[3], ld32((c.r[17].w[0] + 1732u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1728u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017E134; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017E134; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 1732u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E338; } }
L_0017E134:
    st32((c.r[17].w[0] + 1724u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E338; } }
L_0017E140:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0017E188; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1732u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0017E168; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 1732u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E338; } }
L_0017E168:
    st32((c.r[17].w[0] + 1724u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E178u);  if (depth < kMaxDepth) unit_0020(c, 24u, depth + 1u); else { c.pc = 0x00180368u; return; } if (c.pc != 0x0017E178u) [[unlikely]] return; }
L_0017E178:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] + 28296u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E338; } }
L_0017E188:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0017E2E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    st32((c.r[2].w[0] + 13128u), 0u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0017E27C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 29696u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0017E1E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 1696u)));
    set32(c.r[16], c.r[2].w[0] + 17200u);
    set32(c.r[6], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E1D8u);  if (depth < kMaxDepth) unit_0071(c, 322u, depth + 1u); else { c.pc = 0x002C76D8u; return; } if (c.pc != 0x0017E1D8u) [[unlikely]] return; }
L_0017E1D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017E1EC; } }
L_0017E1E0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E25C; } }
L_0017E1EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16384u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E200u);  if (depth < kMaxDepth) unit_0071(c, 322u, depth + 1u); else { c.pc = 0x002C76D8u; return; } if (c.pc != 0x0017E200u) [[unlikely]] return; }
L_0017E200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017E224; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 22596u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0017E258; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E254; } }
L_0017E224:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4096u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E238u);  if (depth < kMaxDepth) unit_0071(c, 322u, depth + 1u); else { c.pc = 0x002C76D8u; return; } if (c.pc != 0x0017E238u) [[unlikely]] return; }
L_0017E238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017E258; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 22596u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0017E258; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_0017E254:
    st32((c.r[3].w[0] - 22596u), c.r[2].w[0]);
    c.budget -= 1;
L_0017E258:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017E25C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0017E338; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 1740u), 0u);
    st32((c.r[17].w[0] + 1724u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E338; } }
L_0017E27C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 29696u)));
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] - 16320u), c.r[16].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[16].d[0];  if (t) { goto L_0017E2A4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E2C4; } }
L_0017E2A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 1696u)));
    set32(c.r[4], c.r[4].w[0] + 17200u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E2BCu);  if (depth < kMaxDepth) unit_0071(c, 322u, depth + 1u); else { c.pc = 0x002C76D8u; return; } if (c.pc != 0x0017E2BCu) [[unlikely]] return; }
L_0017E2BC:
    c.r[3].d[0] = 0ull + 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[16].d[0];
    c.budget -= 2;
L_0017E2C4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0017E338; } }
    st32((c.r[19].w[0] - 16320u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 1724u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 1740u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E338; } }
L_0017E2E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0017E334; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017E338; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 1760u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0017E338; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E320u);  if (depth < kMaxDepth) unit_009E(c, 271u, depth + 1u); else { c.pc = 0x0037ADC0u; return; } if (c.pc != 0x0017E320u) [[unlikely]] return; }
L_0017E320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0017E338; } }
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E338; } }
L_0017E334:
    st32((c.r[17].w[0] + 1724u), c.r[3].w[0]);
    c.budget -= 1;
L_0017E338:
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0017E364; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0017E364; } }
L_0017E354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E35Cu);  if (depth < kMaxDepth) unit_0036(c, 452u, depth + 1u); else { c.pc = 0x001DB650u; return; } if (c.pc != 0x0017E35Cu) [[unlikely]] return; }
L_0017E35C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E394; } }
L_0017E364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E36Cu);  if (depth < kMaxDepth) unit_0036(c, 453u, depth + 1u); else { c.pc = 0x001DB668u; return; } if (c.pc != 0x0017E36Cu) [[unlikely]] return; }
L_0017E36C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E394; } }
L_0017E374:
    set32(c.r[2], ld32((c.r[17].w[0] + 1720u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017E394; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E390u);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x0017E390u) [[unlikely]] return; }
L_0017E390:
    st32((c.r[17].w[0] + 1720u), 0u);
    c.budget -= 1;
L_0017E394:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017E3B8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[17], c.r[16].w[0] + 1752u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 20;
L_0017E408:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017E45C; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + 76u);
    set32(c.r[4], c.r[4].w[0] + 76u);
    c.r[2].d[0] = c.r[6].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E408u | kUnwind; return; } goto L_0017E408; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017E434:
    set32(c.r[19], c.r[30].w[0] - 22592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E440u);  if (depth < kMaxDepth) unit_001B(c, 306u, depth + 1u); else { c.pc = 0x0016FE70u; return; } if (c.pc != 0x0017E440u) [[unlikely]] return; }
L_0017E440:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017E46C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E454u);  if (depth < kMaxDepth) unit_0020(c, 24u, depth + 1u); else { c.pc = 0x00180368u; return; } if (c.pc != 0x0017E454u) [[unlikely]] return; }
L_0017E454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E9AC; } }
L_0017E45C:
    set32(c.r[2], c.r[5].w[0] + 1752u);
    set32(c.r[18], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E434u | kUnwind; return; } goto L_0017E434; } }
L_0017E46C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0017E9AC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_0017E888; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[21], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_0017E4B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 19740u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 200u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E4B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017E4B0u) [[unlikely]] return; }
L_0017E4B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017E9AC; } }
L_0017E4B8:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], 0u + 76u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[22].d[0];  if (t) { goto L_0017E6A8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017E9AC; } }
    c.r[3].d[0] = c.r[4].d[0] ^ 6ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0017E9AC; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_0017E518; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0017E518; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0017E528; } }
L_0017E518:
    set32(c.r[2], 0u + 10u);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E9AC; } }
L_0017E528:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0017E558; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_0017E540:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E54Cu);  if (depth < kMaxDepth) unit_0020(c, 24u, depth + 1u); else { c.pc = 0x00180368u; return; } if (c.pc != 0x0017E54Cu) [[unlikely]] return; }
L_0017E54C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E540u | kUnwind; return; } goto L_0017E540; } }
L_0017E558:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], 0u + 76u);
    set32(c.r[4], c.r[30].w[0] - 22592u);
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[19].d[0] | c.r[7].d[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017E5E4; } }
    set32(c.r[2], c.r[19].w[0] + 64u);
    c.budget -= 1;
L_0017E58C:
    ldl(c.r[6], (c.r[5].w[0] + 7u));
    ldr(c.r[6], (c.r[5].w[0]));
    ldl(c.r[8], (c.r[5].w[0] + 15u));
    ldr(c.r[8], (c.r[5].w[0] + 8u));
    ldl(c.r[9], (c.r[5].w[0] + 23u));
    ldr(c.r[9], (c.r[5].w[0] + 16u));
    ldl(c.r[3], (c.r[5].w[0] + 31u));
    ldr(c.r[3], (c.r[5].w[0] + 24u));
    sdl(c.r[6], (c.r[7].w[0] + 7u));
    sdr(c.r[6], (c.r[7].w[0]));
    sdl(c.r[8], (c.r[7].w[0] + 15u));
    sdr(c.r[8], (c.r[7].w[0] + 8u));
    sdl(c.r[9], (c.r[7].w[0] + 23u));
    sdr(c.r[9], (c.r[7].w[0] + 16u));
    sdl(c.r[3], (c.r[7].w[0] + 31u));
    sdr(c.r[3], (c.r[7].w[0] + 24u));
    set32(c.r[5], c.r[5].w[0] + 32u);
    set32(c.r[7], c.r[7].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E58Cu | kUnwind; return; } goto L_0017E58C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E618; } }
L_0017E5E4:
    set32(c.r[2], c.r[19].w[0] + 64u);
    c.budget -= 1;
L_0017E5E8:
    c.r[4].d[0] = ld64((c.r[5].w[0]));
    c.r[6].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[8].d[0] = ld64((c.r[5].w[0] + 16u));
    c.r[9].d[0] = ld64((c.r[5].w[0] + 24u));
    st64((c.r[7].w[0]), c.r[4].d[0]);
    st64((c.r[7].w[0] + 8u), c.r[6].d[0]);
    st64((c.r[7].w[0] + 16u), c.r[8].d[0]);
    st64((c.r[7].w[0] + 24u), c.r[9].d[0]);
    set32(c.r[5], c.r[5].w[0] + 32u);
    set32(c.r[7], c.r[7].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E5E8u | kUnwind; return; } goto L_0017E5E8; } }
L_0017E618:
    ldl(c.r[2], (c.r[5].w[0] + 7u));
    ldr(c.r[2], (c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    sdl(c.r[2], (c.r[7].w[0] + 7u));
    sdr(c.r[2], (c.r[7].w[0]));
    st32((c.r[7].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], 0u + 30u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    st32((c.r[17].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 1728u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 1732u), 0u);
    st32((c.r[16].w[0] + 1724u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 1748u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 6ull;
    if (c.r[2].d[0] != 0) c.r[7].d[0] = 0ull;
    c.budget -= 25;
    { const bool t = c.r[7].d[0] != c.r[4].d[0];  if (t) { goto L_0017E98C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 22604u)));
    st32((c.r[16].w[0] + 1736u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 1728u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E878; } }
L_0017E694:
    set32(c.r[2], c.r[4].w[0] + 1752u);
    set32(c.r[7], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[18], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E710; } }
L_0017E6A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_0017E710; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0017E6CC; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_0017E710; } }
L_0017E6CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E6DCu);  if (depth < kMaxDepth) unit_0020(c, 24u, depth + 1u); else { c.pc = 0x00180368u; return; } if (c.pc != 0x0017E6DCu) [[unlikely]] return; }
L_0017E6DC:
    c.r[3].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[3].w[0] + 1140u);
    c.budget -= 3;
L_0017E6E8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E694u | kUnwind; return; } goto L_0017E694; } }
    set32(c.r[3], c.r[3].w[0] + 76u);
    set32(c.r[4], c.r[4].w[0] + 76u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E6E8u | kUnwind; return; } goto L_0017E6E8; } }
    set32(c.r[7], ld32((c.r[20].w[0] + 20u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0017E710:
    set32(c.r[4], 0u + 76u);
    c.r[3].d[0] = c.r[7].d[0] ^ 13ull;
    mmi::mult(c, 0, c.r[7].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[8], 0u + 40u);
    if (c.r[3].d[0] != 0) c.r[8].d[0] = 0ull;
    c.r[2].d[0] = c.r[7].d[0] ^ 6ull;
    set32(c.r[6], c.r[30].w[0] - 22592u);
    set32(c.r[5], 0u + 25u);
    if (c.r[2].d[0] == 0) c.r[8].d[0] = c.r[5].d[0];
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[4].d[0] | c.r[18].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017E7A8; } }
    set32(c.r[2], c.r[4].w[0] + 64u);
    c.budget -= 1;
L_0017E750:
    ldl(c.r[7], (c.r[4].w[0] + 7u));
    ldr(c.r[7], (c.r[4].w[0]));
    ldl(c.r[9], (c.r[4].w[0] + 15u));
    ldr(c.r[9], (c.r[4].w[0] + 8u));
    ldl(c.r[5], (c.r[4].w[0] + 23u));
    ldr(c.r[5], (c.r[4].w[0] + 16u));
    ldl(c.r[6], (c.r[4].w[0] + 31u));
    ldr(c.r[6], (c.r[4].w[0] + 24u));
    sdl(c.r[7], (c.r[3].w[0] + 7u));
    sdr(c.r[7], (c.r[3].w[0]));
    sdl(c.r[9], (c.r[3].w[0] + 15u));
    sdr(c.r[9], (c.r[3].w[0] + 8u));
    sdl(c.r[5], (c.r[3].w[0] + 23u));
    sdr(c.r[5], (c.r[3].w[0] + 16u));
    sdl(c.r[6], (c.r[3].w[0] + 31u));
    sdr(c.r[6], (c.r[3].w[0] + 24u));
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E750u | kUnwind; return; } goto L_0017E750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E7DC; } }
L_0017E7A8:
    set32(c.r[2], c.r[4].w[0] + 64u);
    c.budget -= 1;
L_0017E7AC:
    c.r[7].d[0] = ld64((c.r[4].w[0]));
    c.r[9].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[5].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[6].d[0] = ld64((c.r[4].w[0] + 24u));
    st64((c.r[3].w[0]), c.r[7].d[0]);
    st64((c.r[3].w[0] + 8u), c.r[9].d[0]);
    st64((c.r[3].w[0] + 16u), c.r[5].d[0]);
    st64((c.r[3].w[0] + 24u), c.r[6].d[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E7ACu | kUnwind; return; } goto L_0017E7AC; } }
L_0017E7DC:
    ldl(c.r[7], (c.r[4].w[0] + 7u));
    ldr(c.r[7], (c.r[4].w[0]));
    set32(c.r[9], ld32((c.r[4].w[0] + 8u)));
    sdl(c.r[7], (c.r[3].w[0] + 7u));
    sdr(c.r[7], (c.r[3].w[0]));
    set32(c.r[6], 0u + 1u);
    st32((c.r[3].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[18].w[0] + 72u), c.r[8].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], 0u + 30u);
    set32(c.r[7], 0u + 6u);
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    st32((c.r[18].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 1728u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 1724u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 1732u), 0u);
    st32((c.r[16].w[0] + 1748u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_0017E854; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017E854; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0017E98C; } }
L_0017E854:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E864u);  if (depth < kMaxDepth) unit_0036(c, 247u, depth + 1u); else { c.pc = 0x001D9FD8u; return; } if (c.pc != 0x0017E864u) [[unlikely]] return; }
L_0017E864:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] - 22604u)));
    st32((c.r[16].w[0] + 1736u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1728u), c.r[4].w[0]);
    c.budget -= 5;
L_0017E878:
    st32((c.r[16].w[0] + 1744u), 0u);
    st32((c.r[16].w[0] + 1740u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E98C; } }
L_0017E888:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].d[0] | c.r[18].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017E900; } }
    set32(c.r[2], c.r[4].w[0] + 64u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 2;
L_0017E8A8:
    ldl(c.r[7], (c.r[4].w[0] + 7u));
    ldr(c.r[7], (c.r[4].w[0]));
    ldl(c.r[8], (c.r[4].w[0] + 15u));
    ldr(c.r[8], (c.r[4].w[0] + 8u));
    ldl(c.r[9], (c.r[4].w[0] + 23u));
    ldr(c.r[9], (c.r[4].w[0] + 16u));
    ldl(c.r[3], (c.r[4].w[0] + 31u));
    ldr(c.r[3], (c.r[4].w[0] + 24u));
    sdl(c.r[7], (c.r[6].w[0] + 7u));
    sdr(c.r[7], (c.r[6].w[0]));
    sdl(c.r[8], (c.r[6].w[0] + 15u));
    sdr(c.r[8], (c.r[6].w[0] + 8u));
    sdl(c.r[9], (c.r[6].w[0] + 23u));
    sdr(c.r[9], (c.r[6].w[0] + 16u));
    sdl(c.r[3], (c.r[6].w[0] + 31u));
    sdr(c.r[3], (c.r[6].w[0] + 24u));
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E8A8u | kUnwind; return; } goto L_0017E8A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E938; } }
L_0017E900:
    set32(c.r[2], c.r[4].w[0] + 64u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 2;
L_0017E908:
    c.r[5].d[0] = ld64((c.r[4].w[0]));
    c.r[7].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[8].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[9].d[0] = ld64((c.r[4].w[0] + 24u));
    st64((c.r[6].w[0]), c.r[5].d[0]);
    st64((c.r[6].w[0] + 8u), c.r[7].d[0]);
    st64((c.r[6].w[0] + 16u), c.r[8].d[0]);
    st64((c.r[6].w[0] + 24u), c.r[9].d[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E908u | kUnwind; return; } goto L_0017E908; } }
L_0017E938:
    ldl(c.r[2], (c.r[4].w[0] + 7u));
    ldr(c.r[2], (c.r[4].w[0]));
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    sdl(c.r[2], (c.r[6].w[0] + 7u));
    sdr(c.r[2], (c.r[6].w[0]));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[5], 0u - 1u);
    st32((c.r[6].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    set32(c.r[4], 0u + 30u);
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 1728u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 1724u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1732u), 0u);
    st32((c.r[16].w[0] + 1740u), 0u);
    st32((c.r[16].w[0] + 1744u), 0u);
    c.budget -= 21;
L_0017E98C:
    set32(c.r[4], c.r[22].w[0] - 19792u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E998u);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x0017E998u) [[unlikely]] return; }
L_0017E998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017E9AC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E9ACu);  if (depth < kMaxDepth) unit_0020(c, 24u, depth + 1u); else { c.pc = 0x00180368u; return; } if (c.pc != 0x0017E9ACu) [[unlikely]] return; }
L_0017E9AC:
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
L_0017E9E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EA10u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0017EA10u) [[unlikely]] return; }
L_0017EA10:
    set32(c.r[3], 0u + 76u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 22592u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EA34u);  if (depth < kMaxDepth) unit_0039(c, 352u, depth + 1u); else { c.pc = 0x001E6F50u; return; } if (c.pc != 0x0017EA34u) [[unlikely]] return; }
L_0017EA34:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017EAA0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017EAA0; } }
    c.f[13] = 0u;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[16].w[0] - 16812u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.f[14] = c.f[13];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EA94u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0017EA94u) [[unlikely]] return; }
L_0017EA94:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] - 16812u), 0u);
    st32((c.r[18].w[0] + 1740u), 0u);
    c.budget -= 3;
L_0017EAA0:
    set32(c.r[2], ld32((c.r[18].w[0] + 1740u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017EAF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EAB4u);  if (depth < kMaxDepth) unit_0086(c, 70u, depth + 1u); else { c.pc = 0x00318A60u; return; } if (c.pc != 0x0017EAB4u) [[unlikely]] return; }
L_0017EAB4:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC3740000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 23836ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EAF0u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0017EAF0u) [[unlikely]] return; }
L_0017EAF0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 1740u), c.r[3].w[0]);
    c.budget -= 2;
L_0017EAF8:
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[9].d[0] = c.r[29].d[0] | 4ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    c.f[13] = c.f[12];
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EB20u);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x0017EB20u) [[unlikely]] return; }
L_0017EB20:
    set32(c.r[11], ld32((c.r[29].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[11], c.r[11].w[0] + 5u);
    set32(c.r[7], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[11].w[0] >> 31);
    set32(c.r[12], ld32((c.r[5].w[0] + 23004u)));
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[17].w[0] + 28u)));
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[7], c.r[7].w[0] + 20u);
    set32(c.r[6], c.r[3].w[0] + 50u);
    st32((c.r[29].w[0]), c.r[7].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    if (c.r[12].d[0] == 0) c.r[6].d[0] = c.r[3].d[0];
    set32(c.r[7], 0u + 127u);
    st32((c.r[29].w[0] + 4u), c.r[11].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EB80u);  if (depth < kMaxDepth) unit_0020(c, 41u, depth + 1u); else { c.pc = 0x00180638u; return; } if (c.pc != 0x0017EB80u) [[unlikely]] return; }
L_0017EB80:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0]), c.r[8].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EBB8u);  if (depth < kMaxDepth) unit_001F(c, 281u, depth + 1u); else { c.pc = 0x0017F640u; return; } if (c.pc != 0x0017EBB8u) [[unlikely]] return; }
L_0017EBB8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017EBD8:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    set32(c.r[4], 0u + 391u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    set32(c.r[22], 0u + 50u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 200u), c.f[21]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EC30u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0017EC30u) [[unlikely]] return; }
L_0017EC30:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    if (c.r[3].d[0] == 0) c.r[22].d[0] = 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0017EEA4; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 1736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0017ED4C; } }
    c.f[20] = ld32((c.r[19].w[0] + 32u));
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.r[9].d[0] = c.r[29].d[0] | 4ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    c.f[13] = c.f[20];
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.f[21] = ld32((c.r[21].w[0] + 1704u));
    c.f[12] = c.f[20];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EC8Cu);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x0017EC8Cu) [[unlikely]] return; }
L_0017EC8C:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.f[12] = c.f[20];
    set32(c.r[3], c.r[3].w[0] + 5u);
    set32(c.r[6], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[10], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] + 20u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[29].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[6].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[22].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], 0u + 127u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ECE0u);  if (depth < kMaxDepth) unit_0020(c, 41u, depth + 1u); else { c.pc = 0x00180638u; return; } if (c.pc != 0x0017ECE0u) [[unlikely]] return; }
L_0017ECE0:
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.f[12] = c.f[21];
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    c.r[8].d[0] = c.r[29].d[0] | 8ull;
    c.r[9].d[0] = c.r[29].d[0] | 12ull;
    c.f[13] = c.f[21];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ED08u);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x0017ED08u) [[unlikely]] return; }
L_0017ED08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[7], ld32((c.r[2].w[0] - 21528u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 21524u)));
    c.f[12] = c.f[21];
    set32(c.r[5], c.r[7].w[0] - c.r[5].w[0]);
    set32(c.r[8], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[6], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[7], 0u + 127u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ED44u);  if (depth < kMaxDepth) unit_0020(c, 41u, depth + 1u); else { c.pc = 0x00180638u; return; } if (c.pc != 0x0017ED44u) [[unlikely]] return; }
L_0017ED44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F0A4; } }
L_0017ED4C:
    c.f[12] = ld32((c.r[19].w[0] + 32u));
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.r[9].d[0] = c.r[29].d[0] | 4ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    c.f[13] = c.f[12];
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ED74u);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x0017ED74u) [[unlikely]] return; }
L_0017ED74:
    c.f[12] = ld32((c.r[21].w[0] + 1704u));
    set32(c.r[8], c.r[29].w[0] + 16u);
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[9], c.r[29].w[0] + 20u);
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.f[13] = c.f[12];
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ED9Cu);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x0017ED9Cu) [[unlikely]] return; }
L_0017ED9C:
    set32(c.r[12], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[7], 0u + 127u);
    set32(c.r[11], ld32((c.r[29].w[0] + 20u)));
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[12], c.r[12].w[0] + 5u);
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[11], c.r[11].w[0] + 5u);
    set32(c.r[2], c.r[12].w[0] >> 31);
    set32(c.r[3], c.r[11].w[0] >> 31);
    set32(c.r[2], c.r[12].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[11].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[13], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[13], c.r[13].w[0] + 20u);
    c.f[12] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[6], c.r[2].w[0] + c.r[22].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[13].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[12].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[11].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EE0Cu);  if (depth < kMaxDepth) unit_0020(c, 41u, depth + 1u); else { c.pc = 0x00180638u; return; } if (c.pc != 0x0017EE0Cu) [[unlikely]] return; }
L_0017EE0C:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[5], c.r[6].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[10], c.r[8].w[0] >> 31);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[7].w[0] >> 31);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 1));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[6], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[8], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[5], c.r[5].w[0] - 20u);
    c.f[12] = ld32((c.r[4].w[0] + 1704u));
    set32(c.r[7], 0u + 127u);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EE8Cu);  if (depth < kMaxDepth) unit_0020(c, 41u, depth + 1u); else { c.pc = 0x00180638u; return; } if (c.pc != 0x0017EE8Cu) [[unlikely]] return; }
L_0017EE8C:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F0A4; } }
L_0017EEA4:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017EF84; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0017F028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EEC8u);  if (depth < kMaxDepth) unit_0049(c, 178u, depth + 1u); else { c.pc = 0x00226558u; return; } if (c.pc != 0x0017EEC8u) [[unlikely]] return; }
L_0017EEC8:
    c.f[12] = ld32((c.r[19].w[0] + 32u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[1]);
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.r[9].d[0] = c.r[29].d[0] | 4ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    c.f[13] = c.f[12];
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EEF8u);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x0017EEF8u) [[unlikely]] return; }
L_0017EEF8:
    set32(c.r[11], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[7], 0u + 127u);
    set32(c.r[11], c.r[11].w[0] + 5u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[11].w[0] >> 31);
    set32(c.r[17], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.f[12] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[2], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[16], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[11].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EF54u);  if (depth < kMaxDepth) unit_0020(c, 41u, depth + 1u); else { c.pc = 0x00180638u; return; } if (c.pc != 0x0017EF54u) [[unlikely]] return; }
L_0017EF54:
    set32(c.r[10], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[5], c.r[18].w[0] - c.r[17].w[0]);
    set32(c.r[8], ld32((c.r[19].w[0] + 28u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = ld32((c.r[19].w[0] + 32u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], 0u + 127u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EF7Cu);  if (depth < kMaxDepth) unit_0020(c, 41u, depth + 1u); else { c.pc = 0x00180638u; return; } if (c.pc != 0x0017EF7Cu) [[unlikely]] return; }
L_0017EF7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F0A4; } }
L_0017EF84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EF8Cu);  if (depth < kMaxDepth) unit_0049(c, 178u, depth + 1u); else { c.pc = 0x00226558u; return; } if (c.pc != 0x0017EF8Cu) [[unlikely]] return; }
L_0017EF8C:
    c.f[12] = ld32((c.r[19].w[0] + 32u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[1]);
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    c.r[9].d[0] = c.r[29].d[0] | 4ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.f[13] = c.f[12];
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EFBCu);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x0017EFBCu) [[unlikely]] return; }
L_0017EFBC:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[19].w[0] + 12u)));
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[6], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[16], c.r[16].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[6].w[0] - c.r[2].w[0]);
    c.f[12] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[8], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[6], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[5], c.r[16].w[0] - c.r[5].w[0]);
    set32(c.r[7], 0u + 127u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F008u);  if (depth < kMaxDepth) unit_0020(c, 41u, depth + 1u); else { c.pc = 0x00180638u; return; } if (c.pc != 0x0017F008u) [[unlikely]] return; }
L_0017F008:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 20u);
    set32(c.r[3], c.r[3].w[0] + 5u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F0A4; } }
L_0017F028:
    c.f[12] = ld32((c.r[19].w[0] + 32u));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.f[13] = c.f[12];
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    c.r[9].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F050u);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x0017F050u) [[unlikely]] return; }
L_0017F050:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0])));
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 5u);
    set32(c.r[6], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[7], c.r[7].w[0] + 20u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[8], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[6].w[0] - c.r[2].w[0]);
    c.f[12] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[6], c.r[2].w[0] + c.r[22].w[0]);
    st32((c.r[29].w[0]), c.r[7].w[0]);
    set32(c.r[7], 0u + 127u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F0A4u);  if (depth < kMaxDepth) unit_0020(c, 41u, depth + 1u); else { c.pc = 0x00180638u; return; } if (c.pc != 0x0017F0A4u) [[unlikely]] return; }
L_0017F0A4:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[23].w[0]), c.r[2].w[0]);
    st32((c.r[30].w[0]), c.r[3].w[0]);
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
    c.f[21] = ld32((c.r[29].w[0] + 200u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017F0F0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    set32(c.r[5], 0u + 127u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    st32((c.r[29].w[0] + 232u), c.f[21]);
    st32((c.r[29].w[0] + 56u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[8].w[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 224u), c.f[20]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F144u);  if (depth < kMaxDepth) unit_0020(c, 38u, depth + 1u); else { c.pc = 0x00180578u; return; } if (c.pc != 0x0017F144u) [[unlikely]] return; }
L_0017F144:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.f[12] = ld32((c.r[18].w[0] + 32u));
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[8], c.r[29].w[0] + 48u);
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[9], c.r[29].w[0] + 52u);
    set32(c.r[6], ld32((c.r[18].w[0] + 28u)));
    c.f[13] = c.f[12];
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F178u);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x0017F178u) [[unlikely]] return; }
L_0017F178:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 23004u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x81000000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], c.r[3].w[0] + 95u);
    set32(c.r[19], c.r[3].w[0] + 60u);
    set32(c.r[17], ld32((c.r[18].w[0] + 12u)));
    c.f[12] = ld32((c.r[18].w[0] + 32u));
    if (c.r[5].d[0] != 0) c.r[19].d[0] = c.r[2].d[0];
    set32(c.r[7], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[22], c.r[4].w[0] + 5u);
    c.f[13] = c.f[12];
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[5], c.r[19].w[0] + 4u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F1C0u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0017F1C0u) [[unlikely]] return; }
L_0017F1C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.f[12] = ld32((c.r[18].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] | 32639ull;
    set32(c.r[6], c.r[30].w[0] << 24);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[7], ld32((c.r[18].w[0] + 28u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u - c.r[6].w[0]);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F1F4u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0017F1F4u) [[unlikely]] return; }
L_0017F1F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[1] = ld32((c.r[2].w[0] - 21512u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] - 21508u));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017F22C; } }
    c.f[0] = fp::add(c.f[1], c.f[21]);
    st32((c.r[4].w[0] - 21512u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F230; } }
L_0017F22C:
    st32((c.r[4].w[0] - 21512u), 0u);
    c.budget -= 1;
L_0017F230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[12] = ld32((c.r[2].w[0] - 21520u));
    c.f[13] = ld32((c.r[3].w[0] - 21516u));
    c.f[14] = ld32((c.r[4].w[0] - 21512u));
    c.f[15] = ld32((c.r[5].w[0] - 21508u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F250u);  if (depth < kMaxDepth) unit_0073(c, 189u, depth + 1u); else { c.pc = 0x002CECE0u; return; } if (c.pc != 0x0017F250u) [[unlikely]] return; }
L_0017F250:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 22596u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0017F284; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[20], 0u + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[21], c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F2A0; } }
L_0017F284:
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[20], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[21], 0u + 64u);
    c.budget -= 7;
L_0017F2A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F2A8u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x0017F2A8u) [[unlikely]] return; }
L_0017F2A8:
    set32(c.r[16], c.r[2].w[0] + 130u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[7], c.r[29].w[0] + 52u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 155u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F2C4u);  if (depth < kMaxDepth) unit_0026(c, 99u, depth + 1u); else { c.pc = 0x0019A668u; return; } if (c.pc != 0x0017F2C4u) [[unlikely]] return; }
L_0017F2C4:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[22].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[19], c.r[2].w[0] + 50u);
    set32(c.r[17], ld32((c.r[18].w[0] + 12u)));
    c.r[10].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 24u), c.r[20].w[0]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    st32((c.r[29].w[0] + 8u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[20].w[0]);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[2]);
    st32((c.r[29].w[0] + 32u), c.r[30].w[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    set32(c.r[8], 0u + 48u);
    set32(c.r[4], 0u + 121u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), c.r[4].w[0]);
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[6], 0u + 155u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F344u);  if (depth < kMaxDepth) unit_0026(c, 101u, depth + 1u); else { c.pc = 0x0019A6A8u; return; } if (c.pc != 0x0017F344u) [[unlikely]] return; }
L_0017F344:
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[7], c.r[29].w[0] + 52u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[22], c.r[3].w[0] + 20u);
    set32(c.r[5], 0u + 156u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F364u);  if (depth < kMaxDepth) unit_0026(c, 99u, depth + 1u); else { c.pc = 0x0019A668u; return; } if (c.pc != 0x0017F364u) [[unlikely]] return; }
L_0017F364:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 12u)));
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], 0u + 121u);
    st32((c.r[29].w[0] + 40u), c.r[6].w[0]);
    set32(c.r[10], c.r[19].w[0] + c.r[22].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    st32((c.r[29].w[0] + 24u), c.r[21].w[0]);
    c.f[1] = fp::mul(c.f[1], c.f[21]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.r[30].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[2]);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    st32((c.r[29].w[0] + 8u), c.r[21].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[21].w[0]);
    set32(c.r[6], 0u + 156u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[8], 0u + 48u);
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F3DCu);  if (depth < kMaxDepth) unit_0026(c, 101u, depth + 1u); else { c.pc = 0x0019A6A8u; return; } if (c.pc != 0x0017F3DCu) [[unlikely]] return; }
L_0017F3DC:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[29].w[0] + 60u)));
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
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017F430:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 1752u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F45Cu);  if (depth < kMaxDepth) unit_001F(c, 179u, depth + 1u); else { c.pc = 0x0017DE28u; return; } if (c.pc != 0x0017F45Cu) [[unlikely]] return; }
L_0017F45C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017F4D0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0017F61C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017F4E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 27632u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_001F[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017F4A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F4A8u);  if (depth < kMaxDepth) unit_001A(c, 216u, depth + 1u); else { c.pc = 0x0016A508u; return; } if (c.pc != 0x0017F4A8u) [[unlikely]] return; }
L_0017F4A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F4C8; } }
L_0017F4B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F4B8u);  if (depth < kMaxDepth) unit_001A(c, 218u, depth + 1u); else { c.pc = 0x0016A578u; return; } if (c.pc != 0x0017F4B8u) [[unlikely]] return; }
L_0017F4B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F4C8; } }
L_0017F4C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F4C8u);  if (depth < kMaxDepth) unit_001A(c, 214u, depth + 1u); else { c.pc = 0x0016A4A0u; return; } if (c.pc != 0x0017F4C8u) [[unlikely]] return; }
L_0017F4C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017F4E8; } }
L_0017F4D0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F4E0u);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x0017F4E0u) [[unlikely]] return; }
L_0017F4E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F61C; } }
L_0017F4E8:
    set32(c.r[19], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_0017F61C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F504u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0017F504u) [[unlikely]] return; }
L_0017F504:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F514u);  if (depth < kMaxDepth) unit_0039(c, 352u, depth + 1u); else { c.pc = 0x001E6F50u; return; } if (c.pc != 0x0017F514u) [[unlikely]] return; }
L_0017F514:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017F578; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017F578; } }
    c.f[13] = 0u;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0] - 16812u), c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F570u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0017F570u) [[unlikely]] return; }
L_0017F570:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] - 16812u), 0u);
    c.budget -= 2;
L_0017F578:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017F5D4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0017F5B8; } }
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[8].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F5B0u);  if (depth < kMaxDepth) unit_001F(c, 254u, depth + 1u); else { c.pc = 0x0017F0F0u; return; } if (c.pc != 0x0017F5B0u) [[unlikely]] return; }
L_0017F5B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F5D4; } }
L_0017F5B8:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[8].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F5D4u);  if (depth < kMaxDepth) unit_001F(c, 235u, depth + 1u); else { c.pc = 0x0017EBD8u; return; } if (c.pc != 0x0017F5D4u) [[unlikely]] return; }
L_0017F5D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[8], ld32((c.r[29].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0]), c.r[8].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[7], c.r[3].w[0] + 50u);
    set32(c.r[2], ld32((c.r[4].w[0] + 23004u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[7].d[0] = c.r[3].d[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F61Cu);  if (depth < kMaxDepth) unit_001F(c, 281u, depth + 1u); else { c.pc = 0x0017F640u; return; } if (c.pc != 0x0017F61Cu) [[unlikely]] return; }
L_0017F61C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017F640:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 127u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 19776u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 1716u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1712u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[4].w[0]);
    set32(c.r[19], c.r[5].w[0] + 32u);
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[9].w[0] >> 31);
    set32(c.r[2], c.r[8].w[0] >> 31);
    set32(c.r[9], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 1));
    set32(c.r[2], c.r[20].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[4].w[0] - 2u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[30], c.r[21].w[0] + c.r[8].w[0]);
    set32(c.r[22], c.r[21].w[0] - c.r[8].w[0]);
    set32(c.r[23], c.r[20].w[0] - c.r[9].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 40;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017F97C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 27664u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_001F[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017F6FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F704u);  if (depth < kMaxDepth) unit_001A(c, 216u, depth + 1u); else { c.pc = 0x0016A508u; return; } if (c.pc != 0x0017F704u) [[unlikely]] return; }
L_0017F704:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0017FA50; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 153u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[7], c.r[29].w[0] + 36u);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F730u);  if (depth < kMaxDepth) unit_0026(c, 99u, depth + 1u); else { c.pc = 0x0019A668u; return; } if (c.pc != 0x0017F730u) [[unlikely]] return; }
L_0017F730:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 39u));
    set32(c.r[4], ld32((c.r[17].w[0] + 1732u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1728u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0017F748u);  goto L_0017F74C; }
L_0017F74C:
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F760u);  if (depth < kMaxDepth) unit_001A(c, 205u, depth + 1u); else { c.pc = 0x0016A3A0u; return; } if (c.pc != 0x0017F760u) [[unlikely]] return; }
L_0017F760:
    set32(c.r[3], 0u + 121u);
    set32(c.r[10], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[29].w[0] + 8u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[16].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[18].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u + 127u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F79Cu);  if (depth < kMaxDepth) unit_0025(c, 103u, depth + 1u); else { c.pc = 0x00197450u; return; } if (c.pc != 0x0017F79Cu) [[unlikely]] return; }
L_0017F79C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017FA50; } }
L_0017F7A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F7ACu);  if (depth < kMaxDepth) unit_001A(c, 218u, depth + 1u); else { c.pc = 0x0016A578u; return; } if (c.pc != 0x0017F7ACu) [[unlikely]] return; }
L_0017F7AC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0017FA50; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 39u));
    set32(c.r[4], ld32((c.r[17].w[0] + 1732u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1728u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0017F7D0u);  goto L_0017F7D4; }
L_0017F7D4:
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F7E8u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x0017F7E8u) [[unlikely]] return; }
L_0017F7E8:
    set32(c.r[3], 0u + 121u);
    st32((c.r[29].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 130u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[18].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u + 127u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F824u);  if (depth < kMaxDepth) unit_0025(c, 117u, depth + 1u); else { c.pc = 0x001978E0u; return; } if (c.pc != 0x0017F824u) [[unlikely]] return; }
L_0017F824:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017FA50; } }
L_0017F82C:
    st32((c.r[29].w[0] + 40u), 0u);
    st32((c.r[29].w[0] + 44u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F83Cu);  if (depth < kMaxDepth) unit_001A(c, 214u, depth + 1u); else { c.pc = 0x0016A4A0u; return; } if (c.pc != 0x0017F83Cu) [[unlikely]] return; }
L_0017F83C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0017FA50; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 157u);
    set32(c.r[6], c.r[29].w[0] + 40u);
    set32(c.r[7], c.r[29].w[0] + 44u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F864u);  if (depth < kMaxDepth) unit_0026(c, 99u, depth + 1u); else { c.pc = 0x0019A668u; return; } if (c.pc != 0x0017F864u) [[unlikely]] return; }
L_0017F864:
    set32(c.r[2], ld32((c.r[17].w[0] + 1724u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0017F92C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 1728u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 1732u)));
    set32(c.r[6], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] - 22600u)));
    set32(c.r[8], 0u + 126u);
    set32(c.r[11], 0u + 256u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 13;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x0017F8A0u);  goto L_0017F8A4; }
L_0017F8A4:
    c.r[7].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 39u));
    c.r[6].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[7].d[0] == 0) c.r[4].d[0] = 0ull;
    if (c.r[6].d[0] == 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 255u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], 0u + 121u);
    set32(c.r[8], ld32((c.r[29].w[0] + 44u)));
    st32((c.r[29].w[0] + 24u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    set32(c.r[8], c.r[19].w[0] - c.r[8].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 640u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[18], c.r[11].w[0] - c.r[3].w[0]);
    set32(c.r[5], 0u + 134u);
    st32((c.r[29].w[0]), c.r[18].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[16], c.r[11].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[16].w[0]);
    c.r[11].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F924u);  if (depth < kMaxDepth) unit_0025(c, 76u, depth + 1u); else { c.pc = 0x00196B18u; return; } if (c.pc != 0x0017F924u) [[unlikely]] return; }
L_0017F924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017FA50; } }
L_0017F92C:
    c.r[16].d[0] = ld8((c.r[16].w[0] + 39u));
    set32(c.r[18], 0u + 127u);
    set32(c.r[8], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[2], 0u + 121u);
    st32((c.r[29].w[0] + 8u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[8], c.r[19].w[0] - c.r[8].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[18].w[0]);
    set32(c.r[5], 0u + 134u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 640u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u + 127u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F974u);  if (depth < kMaxDepth) unit_0025(c, 76u, depth + 1u); else { c.pc = 0x00196B18u; return; } if (c.pc != 0x0017F974u) [[unlikely]] return; }
L_0017F974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017FA50; } }
L_0017F97C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 39u));
    set32(c.r[12], 0u + 121u);
    set32(c.r[5], ld32((c.r[17].w[0] + 1732u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1728u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0017F9A0u);  goto L_0017F9A4; }
L_0017F9A4:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[9].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.r[10].d[0] = ld8((c.r[16].w[0] + 37u));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[11].d[0] = ld8((c.r[16].w[0] + 38u));
    set32(c.r[8], ld32((c.r[29].w[0] + 48u)));
    st32((c.r[29].w[0] + 8u), c.r[12].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F9D8u);  if (depth < kMaxDepth) unit_0026(c, 82u, depth + 1u); else { c.pc = 0x0019A3A8u; return; } if (c.pc != 0x0017F9D8u) [[unlikely]] return; }
L_0017F9D8:
    set32(c.r[13], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[13].d[0] == 0ull;  if (t) { goto L_0017FA50; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 71u));
    set32(c.r[12], 0u + 122u);
    set32(c.r[5], ld32((c.r[17].w[0] + 1732u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1728u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0017FA08u);  goto L_0017FA0C; }
L_0017FA0C:
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.r[10].d[0] = ld8((c.r[16].w[0] + 70u));
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[16].w[0] + 69u));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[11].d[0] = ld8((c.r[16].w[0] + 68u));
    st32((c.r[29].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.r[10].d[0] = c.r[13].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[5], 0u + 134u);
    st32((c.r[29].w[0] + 24u), c.r[12].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA50u);  if (depth < kMaxDepth) unit_0024(c, 204u, depth + 1u); else { c.pc = 0x001920B8u; return; } if (c.pc != 0x0017FA50u) [[unlikely]] return; }
L_0017FA50:
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
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017FA88:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0017FBD8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017FBD8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[17], c.r[2].w[0] + 2848u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[4], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[3] = c.r[1].w[0];
    set32(c.r[3], c.r[17].w[0] + 1680u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[5] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    c.f[4] = c.r[1].w[0];
    st32((c.r[17].w[0] + 32u), c.f[1]);
    st32((c.r[17].w[0] + 56u), c.f[0]);
    st32((c.r[17].w[0] + 64u), c.f[2]);
    st32((c.r[2].w[0] + 2848u), c.f[3]);
    st32((c.r[17].w[0] + 16u), c.f[3]);
    st32((c.r[17].w[0] + 20u), c.f[6]);
    st32((c.r[17].w[0] + 24u), c.f[5]);
    st32((c.r[17].w[0] + 28u), c.f[4]);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 72u), 0u);
    st32((c.r[17].w[0] + 4u), c.f[6]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 84u), 0u);
    st32((c.r[17].w[0] + 88u), 0u);
    c.budget -= 37;
L_0017FB40:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017FB40u | kUnwind; return; } goto L_0017FB40; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 1684u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FB68u);  if (depth < kMaxDepth) unit_001F(c, 305u, depth + 1u); else { c.pc = 0x0017FBF0u; return; } if (c.pc != 0x0017FB68u) [[unlikely]] return; }
L_0017FB68:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 1700u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 1716u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 5824u);
    st32((c.r[17].w[0] + 1704u), c.f[1]);
    st32((c.r[17].w[0] + 1708u), c.f[0]);
    st32((c.r[17].w[0] + 1712u), c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FBA8u);  if (depth < kMaxDepth) unit_001F(c, 333u, depth + 1u); else { c.pc = 0x0017FFC8u; return; } if (c.pc != 0x0017FBA8u) [[unlikely]] return; }
L_0017FBA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 27712u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FBC0u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0017FBC0u) [[unlikely]] return; }
L_0017FBC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 27696u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FBD8u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x0017FBD8u) [[unlikely]] return; }
L_0017FBD8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017FBF0:
    set32(c.r[2], 0u + 63u);
    st32((c.r[4].w[0] + 1684u), c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017FC00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] + 2848u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FC24u);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x0017FC24u) [[unlikely]] return; }
L_0017FC24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FC30u);  if (depth < kMaxDepth) unit_001F(c, 333u, depth + 1u); else { c.pc = 0x0017FFC8u; return; } if (c.pc != 0x0017FC30u) [[unlikely]] return; }
L_0017FC30:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017FC48:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 2848u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FC64u);  if (depth < kMaxDepth) unit_0020(c, 37u, depth + 1u); else { c.pc = 0x00180550u; return; } if (c.pc != 0x0017FC64u) [[unlikely]] return; }
L_0017FC64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017FC78:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[2].w[0] + 2848u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FC98u);  if (depth < kMaxDepth) unit_0020(c, 33u, depth + 1u); else { c.pc = 0x001804B0u; return; } if (c.pc != 0x0017FC98u) [[unlikely]] return; }
L_0017FC98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017FCA8:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[2].w[0] + 2848u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FCC8u);  if (depth < kMaxDepth) unit_001F(c, 226u, depth + 1u); else { c.pc = 0x0017E9E0u; return; } if (c.pc != 0x0017FCC8u) [[unlikely]] return; }
L_0017FCC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017FCD8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] + 2848u);
    set32(c.r[17], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 1736u), c.r[17].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FD00u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x0017FD00u) [[unlikely]] return; }
L_0017FD00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0017FD10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FD10u);  if (depth < kMaxDepth) unit_009E(c, 71u, depth + 1u); else { c.pc = 0x00378A30u; return; } if (c.pc != 0x0017FD10u) [[unlikely]] return; }
L_0017FD10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FD1Cu);  if (depth < kMaxDepth) unit_0020(c, 9u, depth + 1u); else { c.pc = 0x00180198u; return; } if (c.pc != 0x0017FD1Cu) [[unlikely]] return; }
L_0017FD1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0017FD3C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FD34u);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x0017FD34u) [[unlikely]] return; }
L_0017FD34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017FD74; } }
L_0017FD3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FD4Cu);  if (depth < kMaxDepth) unit_0026(c, 88u, depth + 1u); else { c.pc = 0x0019A4B0u; return; } if (c.pc != 0x0017FD4Cu) [[unlikely]] return; }
L_0017FD4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 1732u)));
    set32(c.r[3], ld32((c.r[2].w[0] - 22604u)));
    c.r[4].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    st32((c.r[16].w[0] + 1728u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017FD70; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[16].w[0] + 1732u), c.r[2].w[0]);
    c.budget -= 2;
L_0017FD70:
    st32((c.r[16].w[0] + 1736u), 0u);
    c.budget -= 1;
L_0017FD74:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017FD90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 29324u)));
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0017FDBC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 2848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FDBCu);  if (depth < kMaxDepth) unit_001F(c, 265u, depth + 1u); else { c.pc = 0x0017F430u; return; } if (c.pc != 0x0017FDBCu) [[unlikely]] return; }
L_0017FDBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017FDD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 2848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FDE8u);  if (depth < kMaxDepth) unit_001F(c, 181u, depth + 1u); else { c.pc = 0x0017DEA8u; return; } if (c.pc != 0x0017FDE8u) [[unlikely]] return; }
L_0017FDE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017FDF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4568u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017FE08:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 44u);
    st32((c.r[29].w[0] + 20u), c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 2848u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[6], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FE40u);  if (depth < kMaxDepth) unit_001F(c, 206u, depth + 1u); else { c.pc = 0x0017E3B8u; return; } if (c.pc != 0x0017FE40u) [[unlikely]] return; }
L_0017FE40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017FE50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], 0u + 6u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2848u);
    set32(c.r[4], ld32((c.r[2].w[0] + 1772u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0017FE84; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0017FE84; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0017FEA4; } }
L_0017FE84:
    set32(c.r[3], c.r[5].w[0] + 2848u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 1752u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0017FEA4; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 1796u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0017FEA8; } }
L_0017FEA4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017FEA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017FEB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[1] = c.r[1].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[6] = c.r[1].w[0];
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.f[5] = c.r[1].w[0];
    set32(c.r[2], c.r[16].w[0] + 1680u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    c.f[4] = c.r[1].w[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 64u), c.f[2]);
    st32((c.r[16].w[0] + 16u), c.f[6]);
    st32((c.r[16].w[0] + 20u), c.f[5]);
    st32((c.r[16].w[0] + 24u), c.f[3]);
    st32((c.r[16].w[0] + 28u), c.f[4]);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 48u), c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[1]);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0]), c.f[6]);
    st32((c.r[16].w[0] + 4u), c.f[5]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 40;
L_0017FF50:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017FF50u | kUnwind; return; } goto L_0017FF50; } }
    st32((c.r[16].w[0] + 1684u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FF78u);  if (depth < kMaxDepth) unit_001F(c, 305u, depth + 1u); else { c.pc = 0x0017FBF0u; return; } if (c.pc != 0x0017FF78u) [[unlikely]] return; }
L_0017FF78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 1700u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1716u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1704u), c.f[1]);
    st32((c.r[16].w[0] + 1708u), c.f[0]);
    st32((c.r[16].w[0] + 1712u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FFB0u);  if (depth < kMaxDepth) unit_001F(c, 333u, depth + 1u); else { c.pc = 0x0017FFC8u; return; } if (c.pc != 0x0017FFB0u) [[unlikely]] return; }
L_0017FFB0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017FFC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 1696u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FFE8u);  if (depth < kMaxDepth) unit_0036(c, 453u, depth + 1u); else { c.pc = 0x001DB668u; return; } if (c.pc != 0x0017FFE8u) [[unlikely]] return; }
L_0017FFE8:
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[16].w[0] + 1760u);
    set32(c.r[3], 0u + 15u);
    c.budget -= 4;
L_0017FFF8:
    st32((c.r[2].w[0] - 8u), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 2;
    [[clang::musttail]] return unit_0020(c, 1u, depth);
}

}
