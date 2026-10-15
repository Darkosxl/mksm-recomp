#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0020[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 27, 28, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0,
    53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0,
    0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0,
    0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0,
    0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0,
    0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 190, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0,
    0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268,
    0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0,
    0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0,
    0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0020(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00180000;
    case 2u: goto L_0018002C;
    case 3u: goto L_00180058;
    case 4u: goto L_0018009C;
    case 5u: goto L_001800C4;
    case 6u: goto L_001800FC;
    case 7u: goto L_00180138;
    case 8u: goto L_00180170;
    case 9u: goto L_00180198;
    case 10u: goto L_001801B8;
    case 11u: goto L_001801C8;
    case 12u: goto L_00180204;
    case 13u: goto L_00180214;
    case 14u: goto L_0018023C;
    case 15u: goto L_0018024C;
    case 16u: goto L_00180264;
    case 17u: goto L_00180288;
    case 18u: goto L_00180298;
    case 19u: goto L_001802B0;
    case 20u: goto L_001802D8;
    case 21u: goto L_001802E8;
    case 22u: goto L_0018032C;
    case 23u: goto L_00180348;
    case 24u: goto L_00180368;
    case 25u: goto L_001803C0;
    case 26u: goto L_001803DC;
    case 27u: goto L_00180404;
    case 28u: goto L_00180408;
    case 29u: goto L_00180410;
    case 30u: goto L_0018041C;
    case 31u: goto L_00180440;
    case 32u: goto L_00180460;
    case 33u: goto L_001804B0;
    case 34u: goto L_001804D0;
    case 35u: goto L_00180514;
    case 36u: goto L_00180530;
    case 37u: goto L_00180550;
    case 38u: goto L_00180578;
    case 39u: goto L_001805A8;
    case 40u: goto L_001805E8;
    case 41u: goto L_00180638;
    case 42u: goto L_001806A8;
    case 43u: goto L_001806CC;
    case 44u: goto L_001806E0;
    case 45u: goto L_0018070C;
    case 46u: goto L_00180734;
    case 47u: goto L_00180750;
    case 48u: goto L_001807A4;
    case 49u: goto L_001807C0;
    case 50u: goto L_001807D4;
    case 51u: goto L_001807F0;
    case 52u: goto L_001807F8;
    case 53u: goto L_00180800;
    case 54u: goto L_00180810;
    case 55u: goto L_001808B4;
    case 56u: goto L_001808C8;
    case 57u: goto L_001808E0;
    case 58u: goto L_001808F0;
    case 59u: goto L_00180938;
    case 60u: goto L_00180944;
    case 61u: goto L_00180958;
    case 62u: goto L_00180974;
    case 63u: goto L_0018098C;
    case 64u: goto L_00180998;
    case 65u: goto L_001809B8;
    case 66u: goto L_001809D4;
    case 67u: goto L_001809EC;
    case 68u: goto L_00180A00;
    case 69u: goto L_00180A50;
    case 70u: goto L_00180A6C;
    case 71u: goto L_00180A78;
    case 72u: goto L_00180A90;
    case 73u: goto L_00180BB0;
    case 74u: goto L_00180C08;
    case 75u: goto L_00180C20;
    case 76u: goto L_00180C2C;
    case 77u: goto L_00180C4C;
    case 78u: goto L_00180C80;
    case 79u: goto L_00180C90;
    case 80u: goto L_00180CA0;
    case 81u: goto L_00180CBC;
    case 82u: goto L_00180CF8;
    case 83u: goto L_00180D0C;
    case 84u: goto L_00180DF8;
    case 85u: goto L_00180E38;
    case 86u: goto L_00180E6C;
    case 87u: goto L_00180EC8;
    case 88u: goto L_00180FC8;
    case 89u: goto L_0018101C;
    case 90u: goto L_00181034;
    case 91u: goto L_00181040;
    case 92u: goto L_0018106C;
    case 93u: goto L_001810A0;
    case 94u: goto L_001810BC;
    case 95u: goto L_001810FC;
    case 96u: goto L_00181140;
    case 97u: goto L_00181154;
    case 98u: goto L_00181194;
    case 99u: goto L_001811C8;
    case 100u: goto L_001812C0;
    case 101u: goto L_00181300;
    case 102u: goto L_00181390;
    case 103u: goto L_0018148C;
    case 104u: goto L_001814B8;
    case 105u: goto L_001814CC;
    case 106u: goto L_00181538;
    case 107u: goto L_00181554;
    case 108u: goto L_00181560;
    case 109u: goto L_001815A4;
    case 110u: goto L_001816A8;
    case 111u: goto L_001816F8;
    case 112u: goto L_00181710;
    case 113u: goto L_0018171C;
    case 114u: goto L_0018173C;
    case 115u: goto L_001817C8;
    case 116u: goto L_001817D4;
    case 117u: goto L_001817EC;
    case 118u: goto L_00181820;
    case 119u: goto L_001818B0;
    case 120u: goto L_001818F8;
    case 121u: goto L_00181908;
    case 122u: goto L_00181914;
    case 123u: goto L_00181948;
    case 124u: goto L_00181958;
    case 125u: goto L_00181970;
    case 126u: goto L_00181A30;
    case 127u: goto L_00181A50;
    case 128u: goto L_00181A58;
    case 129u: goto L_00181AF8;
    case 130u: goto L_00181B10;
    case 131u: goto L_00181B1C;
    case 132u: goto L_00181BB0;
    case 133u: goto L_00181BF8;
    case 134u: goto L_00181C40;
    case 135u: goto L_00181C94;
    case 136u: goto L_00181CB4;
    case 137u: goto L_00181CD4;
    case 138u: goto L_00181CEC;
    case 139u: goto L_00181DC4;
    case 140u: goto L_00181DD4;
    case 141u: goto L_00181E18;
    case 142u: goto L_00181EB8;
    case 143u: goto L_00181EE0;
    case 144u: goto L_00181EF8;
    case 145u: goto L_00181F10;
    case 146u: goto L_00181F20;
    case 147u: goto L_00181F2C;
    case 148u: goto L_00181F34;
    case 149u: goto L_00181F40;
    case 150u: goto L_00181F50;
    case 151u: goto L_00181F70;
    case 152u: goto L_00181F84;
    case 153u: goto L_00181FA0;
    case 154u: goto L_00181FB0;
    case 155u: goto L_00181FBC;
    case 156u: goto L_00181FD0;
    case 157u: goto L_00181FEC;
    case 158u: goto L_00181FF8;
    case 159u: goto L_00182018;
    case 160u: goto L_0018203C;
    case 161u: goto L_00182080;
    case 162u: goto L_00182098;
    case 163u: goto L_001820AC;
    case 164u: goto L_001820C0;
    case 165u: goto L_001820D4;
    case 166u: goto L_001820E8;
    case 167u: goto L_001820F8;
    case 168u: goto L_00182104;
    case 169u: goto L_00182118;
    case 170u: goto L_00182128;
    case 171u: goto L_001821AC;
    case 172u: goto L_001821C0;
    case 173u: goto L_001821D0;
    case 174u: goto L_00182208;
    case 175u: goto L_00182230;
    case 176u: goto L_00182250;
    case 177u: goto L_00182278;
    case 178u: goto L_001822C4;
    case 179u: goto L_001822E4;
    case 180u: goto L_00182300;
    case 181u: goto L_0018232C;
    case 182u: goto L_00182340;
    case 183u: goto L_00182350;
    case 184u: goto L_00182370;
    case 185u: goto L_001823C0;
    case 186u: goto L_001823F8;
    case 187u: goto L_00182410;
    case 188u: goto L_00182438;
    case 189u: goto L_0018246C;
    case 190u: goto L_00182470;
    case 191u: goto L_00182484;
    case 192u: goto L_001824A4;
    case 193u: goto L_001824C8;
    case 194u: goto L_001824D8;
    case 195u: goto L_00182508;
    case 196u: goto L_00182528;
    case 197u: goto L_00182548;
    case 198u: goto L_00182568;
    case 199u: goto L_00182590;
    case 200u: goto L_001825C4;
    case 201u: goto L_001825D4;
    case 202u: goto L_001825F8;
    case 203u: goto L_0018261C;
    case 204u: goto L_0018266C;
    case 205u: goto L_001826A8;
    case 206u: goto L_001826B0;
    case 207u: goto L_001826C8;
    case 208u: goto L_00182720;
    case 209u: goto L_00182778;
    case 210u: goto L_001827A0;
    case 211u: goto L_001827D4;
    case 212u: goto L_001827F4;
    case 213u: goto L_00182810;
    case 214u: goto L_00182820;
    case 215u: goto L_00182844;
    case 216u: goto L_00182858;
    case 217u: goto L_001828E0;
    case 218u: goto L_00182920;
    case 219u: goto L_00182968;
    case 220u: goto L_001829BC;
    case 221u: goto L_001829DC;
    case 222u: goto L_00182A18;
    case 223u: goto L_00182A40;
    case 224u: goto L_00182A80;
    case 225u: goto L_00182A90;
    case 226u: goto L_00182ACC;
    case 227u: goto L_00182AE8;
    case 228u: goto L_00182B88;
    case 229u: goto L_00182BF8;
    case 230u: goto L_00182C4C;
    case 231u: goto L_00182C58;
    case 232u: goto L_00182C64;
    case 233u: goto L_00182C70;
    case 234u: goto L_00182C80;
    case 235u: goto L_00182C98;
    case 236u: goto L_00182CB8;
    case 237u: goto L_00182CE8;
    case 238u: goto L_00182CF8;
    case 239u: goto L_00182D2C;
    case 240u: goto L_00182D40;
    case 241u: goto L_00182D60;
    case 242u: goto L_00182D80;
    case 243u: goto L_00182DA0;
    case 244u: goto L_00182DC0;
    case 245u: goto L_00182DEC;
    case 246u: goto L_00182E00;
    case 247u: goto L_00182E34;
    case 248u: goto L_00182E48;
    case 249u: goto L_00182E70;
    case 250u: goto L_00182E88;
    case 251u: goto L_00182E98;
    case 252u: goto L_00182EA0;
    case 253u: goto L_00182EE0;
    case 254u: goto L_00182F24;
    case 255u: goto L_00182F38;
    case 256u: goto L_00182F60;
    case 257u: goto L_00182F80;
    case 258u: goto L_00182FA4;
    case 259u: goto L_00182FC0;
    case 260u: goto L_00182FEC;
    case 261u: goto L_00183008;
    case 262u: goto L_00183018;
    case 263u: goto L_00183038;
    case 264u: goto L_00183048;
    case 265u: goto L_0018306C;
    case 266u: goto L_0018307C;
    case 267u: goto L_001830B8;
    case 268u: goto L_001830FC;
    case 269u: goto L_00183114;
    case 270u: goto L_00183150;
    case 271u: goto L_00183168;
    case 272u: goto L_00183178;
    case 273u: goto L_001831A4;
    case 274u: goto L_001831B0;
    case 275u: goto L_001831E0;
    case 276u: goto L_001831F8;
    case 277u: goto L_00183234;
    case 278u: goto L_00183254;
    case 279u: goto L_00183380;
    case 280u: goto L_001833B8;
    case 281u: goto L_001833C4;
    case 282u: goto L_00183418;
    case 283u: goto L_00183430;
    case 284u: goto L_00183460;
    case 285u: goto L_00183480;
    case 286u: goto L_001835C4;
    case 287u: goto L_001835E0;
    case 288u: goto L_00183600;
    case 289u: goto L_00183620;
    case 290u: goto L_00183760;
    case 291u: goto L_00183790;
    case 292u: goto L_0018379C;
    case 293u: goto L_00183838;
    case 294u: goto L_001838A4;
    case 295u: goto L_00183968;
    case 296u: goto L_00183978;
    case 297u: goto L_00183998;
    case 298u: goto L_001839E4;
    case 299u: goto L_00183A0C;
    case 300u: goto L_00183A1C;
    case 301u: goto L_00183A40;
    case 302u: goto L_00183A5C;
    case 303u: goto L_00183A70;
    case 304u: goto L_00183DA0;
    case 305u: goto L_00183DC0;
    case 306u: goto L_00183EF8;
    case 307u: goto L_00183F08;
    case 308u: goto L_00183FA8;
    case 309u: goto L_00183FD8;
    default: bad_entry(c, 0x00180000u); return;
    }
L_00180000:
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 64u), 0u);
    st32((c.r[2].w[0] - 4u), c.r[4].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 76u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017FFF8u | kUnwind; return; } [[clang::musttail]] return unit_001F(c, 335u, depth); } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018002Cu);  if (depth < kMaxDepth) unit_0026(c, 86u, depth + 1u); else { c.pc = 0x0019A478u; return; } if (c.pc != 0x0018002Cu) [[unlikely]] return; }
L_0018002C:
    set32(c.r[2], 0u + 30u);
    st32((c.r[16].w[0] + 1736u), 0u);
    st32((c.r[16].w[0] + 1728u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1732u), 0u);
    st32((c.r[16].w[0] + 1748u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00180058:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], ld32((c.r[2].w[0] - 29696u)));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00180120; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 1696u)));
    set32(c.r[16], c.r[2].w[0] + 17200u);
    set32(c.r[6], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018009Cu);  if (depth < kMaxDepth) unit_0071(c, 322u, depth + 1u); else { c.pc = 0x002C76D8u; return; } if (c.pc != 0x0018009Cu) [[unlikely]] return; }
L_0018009C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001800B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00180120; } }
L_001800B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16384u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001800C4u);  if (depth < kMaxDepth) unit_0071(c, 322u, depth + 1u); else { c.pc = 0x002C76D8u; return; } if (c.pc != 0x001800C4u) [[unlikely]] return; }
L_001800C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001800E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 22596u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0018011C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00180118; } }
L_001800E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4096u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001800FCu);  if (depth < kMaxDepth) unit_0071(c, 322u, depth + 1u); else { c.pc = 0x002C76D8u; return; } if (c.pc != 0x001800FCu) [[unlikely]] return; }
L_001800FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018011C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 22596u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0018011C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00180118:
    st32((c.r[3].w[0] - 22596u), c.r[2].w[0]);
    c.budget -= 1;
L_0018011C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00180120:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00180138:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[2].w[0] - 29696u)));
    set32(c.r[16], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00180180; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 1696u)));
    set32(c.r[6], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 17200u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180170u);  if (depth < kMaxDepth) unit_0071(c, 322u, depth + 1u); else { c.pc = 0x002C76D8u; return; } if (c.pc != 0x00180170u) [[unlikely]] return; }
L_00180170:
    if (c.r[2].d[0] == 0) c.r[16].d[0] = 0ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00180184; } }
L_00180180:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00180184:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00180198:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1736u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001801DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001801B8u);  if (depth < kMaxDepth) unit_001A(c, 214u, depth + 1u); else { c.pc = 0x0016A4A0u; return; } if (c.pc != 0x001801B8u) [[unlikely]] return; }
L_001801B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00180270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001801C8u);  if (depth < kMaxDepth) unit_001A(c, 215u, depth + 1u); else { c.pc = 0x0016A4D0u; return; } if (c.pc != 0x001801C8u) [[unlikely]] return; }
L_001801C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00180264; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00180258; } }
L_001801DC:
    set32(c.r[2], ld32((c.r[4].w[0] + 1752u)));
    set32(c.r[4], c.r[4].w[0] + 1752u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00180270; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00180228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180204u);  if (depth < kMaxDepth) unit_001A(c, 216u, depth + 1u); else { c.pc = 0x0016A508u; return; } if (c.pc != 0x00180204u) [[unlikely]] return; }
L_00180204:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00180270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180214u);  if (depth < kMaxDepth) unit_001A(c, 217u, depth + 1u); else { c.pc = 0x0016A540u; return; } if (c.pc != 0x00180214u) [[unlikely]] return; }
L_00180214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00180264; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00180258; } }
L_00180228:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00180270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018023Cu);  if (depth < kMaxDepth) unit_001A(c, 218u, depth + 1u); else { c.pc = 0x0016A578u; return; } if (c.pc != 0x0018023Cu) [[unlikely]] return; }
L_0018023C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00180270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018024Cu);  if (depth < kMaxDepth) unit_001A(c, 219u, depth + 1u); else { c.pc = 0x0016A5B0u; return; } if (c.pc != 0x0018024Cu) [[unlikely]] return; }
L_0018024C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00180264; } }
    set32(c.r[4], 0u + 5u);
    c.budget -= 1;
L_00180258:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180264u);  if (depth < kMaxDepth) unit_001A(c, 221u, depth + 1u); else { c.pc = 0x0016A638u; return; } if (c.pc != 0x00180264u) [[unlikely]] return; }
L_00180264:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00180274; } }
L_00180270:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00180274:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00180288:
    set32(c.r[4], c.r[4].w[0] + 1752u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
L_00180298:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001802B0; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001802B0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 76u);
    set32(c.r[4], c.r[4].w[0] + 76u);
    c.r[2].d[0] = c.r[5].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00180298u | kUnwind; return; } goto L_00180298; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001802D8:
    c.r[2].d[0] = c.r[5].d[0] ^ 6ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001802E8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 1752u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0018034C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0018034C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[17], c.r[2].w[0] + 28288u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018032Cu);  if (depth < kMaxDepth) unit_009E(c, 271u, depth + 1u); else { c.pc = 0x0037ADC0u; return; } if (c.pc != 0x0018032Cu) [[unlikely]] return; }
L_0018032C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00180348; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180348u);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037AE10u; return; } if (c.pc != 0x00180348u) [[unlikely]] return; }
L_00180348:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_0018034C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00180368:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[18].w[0] + 1828u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[18].w[0] + 1752u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001803E0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001803E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[19], c.r[2].w[0] + 28288u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001803C0u);  if (depth < kMaxDepth) unit_009E(c, 271u, depth + 1u); else { c.pc = 0x0037ADC0u; return; } if (c.pc != 0x001803C0u) [[unlikely]] return; }
L_001803C0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001803DC; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001803DCu);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037AE10u; return; } if (c.pc != 0x001803DCu) [[unlikely]] return; }
L_001803DC:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_001803E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00180428; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 1736u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00180428; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00180404:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00180408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180410u);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x00180410u) [[unlikely]] return; }
L_00180410:
    st32((c.r[18].w[0] + 1736u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018041Cu);  if (depth < kMaxDepth) unit_0020(c, 214u, depth + 1u); else { c.pc = 0x00182820u; return; } if (c.pc != 0x0018041Cu) [[unlikely]] return; }
L_0018041C:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_00180428:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00180470; } }
    set32(c.r[20], 0u - 1u);
    set32(c.r[19], 0u + 1u);
    c.budget -= 2;
L_00180440:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 76u);
    set32(c.r[17], c.r[17].w[0] + 76u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180460u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x00180460u) [[unlikely]] return; }
L_00180460:
    set32(c.r[16], c.r[16].w[0] + 76u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00180440u | kUnwind; return; } goto L_00180440; } }
L_00180470:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] - 22608u), 0u);
    set32(c.r[2], 0u + 30u);
    st32((c.r[18].w[0] + 1724u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 1728u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 1732u), 0u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001804B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001804D0u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001804D0u) [[unlikely]] return; }
L_001804D0:
    set32(c.r[3], 0u + 76u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 22592u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00180534; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00180534; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[17], c.r[2].w[0] + 28288u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180514u);  if (depth < kMaxDepth) unit_009E(c, 271u, depth + 1u); else { c.pc = 0x0037ADC0u; return; } if (c.pc != 0x00180514u) [[unlikely]] return; }
L_00180514:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00180530; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180530u);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037AE10u; return; } if (c.pc != 0x00180530u) [[unlikely]] return; }
L_00180530:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_00180534:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00180550:
    set32(c.r[3], 0u + 76u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 22592u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00180578:
    set32(c.r[2], c.r[5].w[0] - 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 1728u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 1732u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00180588u);  goto L_0018058C; }
L_0018058C:
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001805A8:
    set32(c.r[7], ld32((c.r[4].w[0] + 1732u)));
    set32(c.r[8], 0u - 1u);
    set32(c.r[2], c.r[5].w[0] - 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 1728u)));
    set32(c.r[7], c.r[7].w[0] - c.r[6].w[0]);
    c.r[8].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    if (c.r[8].d[0] == 0) c.r[7].d[0] = 0ull;
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x001805CCu);  goto L_001805D0; }
L_001805D0:
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001805E8:
    set32(c.r[3], ld32((c.r[4].w[0] + 1716u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[6].w[0] >> 31);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    set32(c.r[3], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00180618; } }
    set32(c.r[2], c.r[5].w[0] + 32u);
    set32(c.r[5], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 2;
L_00180618:
    c.r[2].d[0] = c.r[4].sd[0] < 449ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018062C; } }
    set32(c.r[2], c.r[5].w[0] + 448u);
    set32(c.r[5], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 2;
L_0018062C:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00180638:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[11], 0u + 126u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[12], c.r[7].w[0] << 16);
    set32(c.r[2], ld32((c.r[4].w[0] + 1732u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1728u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[11].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[7].w[0] << 8);
    c.r[11].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00180660u);  goto L_00180664; }
L_00180664:
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | c.r[12].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    set32(c.r[6], 0u - c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_001806B0; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.r[5].d[0] = c.r[11].d[0] + 0ull;
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001806A8u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x001806A8u) [[unlikely]] return; }
L_001806A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001806CC; } }
L_001806B0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.r[5].d[0] = c.r[11].d[0] + 0ull;
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001806CCu);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001806CCu) [[unlikely]] return; }
L_001806CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001806E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 76u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018070Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0018070Cu) [[unlikely]] return; }
L_0018070C:
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + 2848u);
    st32((c.r[29].w[0] + 20u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[6], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180734u);  if (depth < kMaxDepth) unit_001F(c, 206u, depth + 1u); else { c.pc = 0x0017E3B8u; return; } if (c.pc != 0x00180734u) [[unlikely]] return; }
L_00180734:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00180750:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[4], 0u - 1u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 2848u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] + 1752u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001807C4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001807C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[17], c.r[2].w[0] + 28288u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001807A4u);  if (depth < kMaxDepth) unit_009E(c, 271u, depth + 1u); else { c.pc = 0x0037ADC0u; return; } if (c.pc != 0x001807A4u) [[unlikely]] return; }
L_001807A4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001807C0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001807C0u);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037AE10u; return; } if (c.pc != 0x001807C0u) [[unlikely]] return; }
L_001807C0:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_001807C4:
    set32(c.r[4], c.r[18].w[0] + 2848u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001807D4u);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x001807D4u) [[unlikely]] return; }
L_001807D4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001807F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001807F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00180800:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00180810:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 2848u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], ld32((c.r[5].w[0] + 8u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0])));
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    st8((c.r[29].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[7].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    st8((c.r[29].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    st8((c.r[29].w[0] + 38u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[7].w[0] + 28u)));
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    st8((c.r[29].w[0] + 39u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 36u)));
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001808B4u);  if (depth < kMaxDepth) unit_001F(c, 206u, depth + 1u); else { c.pc = 0x0017E3B8u; return; } if (c.pc != 0x001808B4u) [[unlikely]] return; }
L_001808B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001808C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001808E0u);  if (depth < kMaxDepth) unit_001F(c, 299u, depth + 1u); else { c.pc = 0x0017FA88u; return; } if (c.pc != 0x001808E0u) [[unlikely]] return; }
L_001808E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001808F0:
    set32(c.r[29], c.r[29].w[0] - 624u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 728u);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[19]);
    set32(c.r[4], 0u + 56u);
    st64((c.r[29].w[0] + 544u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 304u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180938u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00180938u) [[unlikely]] return; }
L_00180938:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180944u);  if (depth < kMaxDepth) unit_0020(c, 169u, depth + 1u); else { c.pc = 0x00182118u; return; } if (c.pc != 0x00180944u) [[unlikely]] return; }
L_00180944:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00180964; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180958u);  if (depth < kMaxDepth) unit_0020(c, 169u, depth + 1u); else { c.pc = 0x00182118u; return; } if (c.pc != 0x00180958u) [[unlikely]] return; }
L_00180958:
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018097C; } }
L_00180964:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180974u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00180974u) [[unlikely]] return; }
L_00180974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00180B90; } }
L_0018097C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018098Cu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x0018098Cu) [[unlikely]] return; }
L_0018098C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180998u);  if (depth < kMaxDepth) unit_0084(c, 23u, depth + 1u); else { c.pc = 0x00310390u; return; } if (c.pc != 0x00180998u) [[unlikely]] return; }
L_00180998:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17576u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001809C0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001809B8u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001809B8u) [[unlikely]] return; }
L_001809B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001809EC; } }
L_001809C0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001809EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001809D4u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x001809D4u) [[unlikely]] return; }
L_001809D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001809EC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001809ECu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001809ECu) [[unlikely]] return; }
L_001809EC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00180B90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180A00u);  if (depth < kMaxDepth) unit_0020(c, 169u, depth + 1u); else { c.pc = 0x00182118u; return; } if (c.pc != 0x00180A00u) [[unlikely]] return; }
L_00180A00:
    set32(c.r[3], ld32((c.r[17].w[0] + 120u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[11], 0u + 268u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[3].d[0] = c.r[3].d[0] | 48ull;
    set32(c.r[6], c.r[6].w[0] - 14152u);
    st32((c.r[17].w[0] + 120u), c.r[3].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[11].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180A50u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x00180A50u) [[unlikely]] return; }
L_00180A50:
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[5], c.r[29].w[0] + 528u);
    c.f[13] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[6], c.r[29].w[0] + 532u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180A6Cu);  if (depth < kMaxDepth) unit_0020(c, 216u, depth + 1u); else { c.pc = 0x00182858u; return; } if (c.pc != 0x00180A6Cu) [[unlikely]] return; }
L_00180A6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180A78u);  if (depth < kMaxDepth) unit_0020(c, 240u, depth + 1u); else { c.pc = 0x00182D40u; return; } if (c.pc != 0x00180A78u) [[unlikely]] return; }
L_00180A78:
    c.f[1] = ld32((c.r[29].w[0] + 528u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 192u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180A90u);  if (depth < kMaxDepth) unit_0020(c, 242u, depth + 1u); else { c.pc = 0x00182D80u; return; } if (c.pc != 0x00180A90u) [[unlikely]] return; }
L_00180A90:
    c.f[1] = ld32((c.r[29].w[0] + 532u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 7524u)));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40960000u);
    c.r[1].d[0] = c.r[1].d[0] | 52196ull;
    c.f[6] = c.r[1].w[0];
    st32((c.r[17].w[0] + 196u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42650000u);
    c.r[1].d[0] = c.r[1].d[0] | 12000ull;
    c.f[7] = c.r[1].w[0];
    c.r[2].d[0] = ld16((c.r[19].w[0] + 36u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[5] = c.r[1].w[0];
    st16((c.r[17].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[7], ld32((c.r[17].w[0] + 480u)));
    c.f[0] = ld32((c.r[18].w[0] + 148u));
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::add(c.f[0], c.f[6]);
    c.f[0] = fp::mul(c.f[0], c.f[7]);
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 152u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[2], c.r[2].w[0] << 3);
    c.f[2] = ld32((c.r[16].w[0] + 100u));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 4u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.r[6].d[0] = ld16((c.r[2].w[0] + 2u));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[2]);
    st16((c.r[7].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    st16((c.r[7].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 64;
L_00180B90:
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 544u));
    set32(c.r[29], c.r[29].w[0] + 624u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00180BB0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[3].w[0] + 5840u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 144u), c.f[20]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00180BFC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00180C10; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00180BFC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180C08u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00180C08u) [[unlikely]] return; }
L_00180C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00180F9C; } }
L_00180C10:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180C20u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00180C20u) [[unlikely]] return; }
L_00180C20:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180C2Cu);  if (depth < kMaxDepth) unit_0084(c, 23u, depth + 1u); else { c.pc = 0x00310390u; return; } if (c.pc != 0x00180C2Cu) [[unlikely]] return; }
L_00180C2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17576u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00180C4C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180C4Cu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00180C4Cu) [[unlikely]] return; }
L_00180C4C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00180F9C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 120u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 480u)));
    c.r[2].d[0] = c.r[2].d[0] | 1072ull;
    st32((c.r[19].w[0] + 120u), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 2u));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180C80u);  if (depth < kMaxDepth) unit_0020(c, 240u, depth + 1u); else { c.pc = 0x00182D40u; return; } if (c.pc != 0x00180C80u) [[unlikely]] return; }
L_00180C80:
    st32((c.r[19].w[0] + 192u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180C90u);  if (depth < kMaxDepth) unit_0020(c, 242u, depth + 1u); else { c.pc = 0x00182D80u; return; } if (c.pc != 0x00180C90u) [[unlikely]] return; }
L_00180C90:
    set32(c.r[20], ld32((c.r[19].w[0] + 480u)));
    st32((c.r[19].w[0] + 196u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180CA0u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x00180CA0u) [[unlikely]] return; }
L_00180CA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00180CE0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180CBCu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00180CBCu) [[unlikely]] return; }
L_00180CBC:
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    c.f[1] = ld32((c.r[2].w[0] + 128u));
    c.f[2] = ld32((c.r[18].w[0] + 88u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00180D50; } }
L_00180CE0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180CF8u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00180CF8u) [[unlikely]] return; }
L_00180CF8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180D0Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00180D0Cu) [[unlikely]] return; }
L_00180D0C:
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    c.f[1] = ld32((c.r[2].w[0] + 128u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[18].w[0] + 80u));
    c.f[4] = ld32((c.r[18].w[0] + 88u));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[29].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    c.f[1] = ld32((c.r[17].w[0] + 136u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    c.budget -= 17;
L_00180D50:
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] - 17692u));
    set32(c.r[3], c.r[18].w[0] + 68u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[3] = c.r[1].w[0];
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40960000u);
    c.r[1].d[0] = c.r[1].d[0] | 52196ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42650000u);
    c.r[1].d[0] = c.r[1].d[0] | 12001ull;
    c.f[5] = c.r[1].w[0];
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43870000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[17], c.r[29].w[0] + 20u);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[3] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[18].w[0] + 92u), c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[18].w[0] + 96u), c.f[3]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.f[1] = 0u;
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[18].w[0] + 68u), c.f[2]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    st32((c.r[18].w[0] + 68u), c.f[2]);
    c.budget -= 39;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00180E18; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[2] = c.r[1].w[0];
    c.budget -= 3;
L_00180DF8:
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00180DF8u | kUnwind; return; } goto L_00180DF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00180E54; } }
L_00180E18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00180E54; } }
    c.budget -= 1;
L_00180E38:
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00180E38u | kUnwind; return; } goto L_00180E38; } }
    st32((c.r[3].w[0]), c.f[2]);
    c.budget -= 1;
L_00180E54:
    c.f[0] = ld32((c.r[18].w[0] + 68u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[19].w[0] + 152u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180E6Cu);  if (depth < kMaxDepth) unit_0020(c, 238u, depth + 1u); else { c.pc = 0x00182CF8u; return; } if (c.pc != 0x00180E6Cu) [[unlikely]] return; }
L_00180E6C:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[21].w[0] - 19760u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[3].w[0] + 20u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C8E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 64053ull;
    c.f[1] = c.r[1].w[0];
    st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 24u));
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 322u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180EC8u);  if (depth < kMaxDepth) unit_0045(c, 110u, depth + 1u); else { c.pc = 0x00215EC0u; return; } if (c.pc != 0x00180EC8u) [[unlikely]] return; }
L_00180EC8:
    c.f[4] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    c.f[2] = ld32((c.r[29].w[0] + 8u));
    c.f[6] = ld32((c.r[29].w[0] + 16u));
    c.f[0] = fp::mul(c.f[4], c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.f[2] = fp::mul(c.f[2], c.f[6]);
    c.f[3] = ld32((c.r[18].w[0] + 72u));
    c.f[7] = ld32((c.r[2].w[0]));
    c.f[8] = ld32((c.r[2].w[0] + 20u));
    c.f[8] = fp::cvt_s_w(c.f[8]);
    c.f[4] = fp::mul(c.f[4], c.f[6]);
    c.f[5] = ld32((c.r[18].w[0] + 76u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[4]);
    fpu_div(c, 0u, c.f[0], c.f[7]);
    fpu_div(c, 0u, c.f[0], c.f[8]);
    c.f[3] = fp::add(c.f[3], c.f[0]);
    st32((c.r[18].w[0] + 48u), c.f[3]);
    c.f[3] = fp::sub(c.f[3], c.f[20]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 24u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[5] = fp::sub(c.f[5], c.f[1]);
    st32((c.r[18].w[0] + 52u), c.f[5]);
    st32((c.r[20].w[0] + 44u), c.f[3]);
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    st32((c.r[20].w[0] + 52u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[20].w[0] + 56u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.f[1] = fp::add(c.f[1], c.f[20]);
    st32((c.r[20].w[0] + 60u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[20].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.f[1] = fp::add(c.f[1], c.f[20]);
    st32((c.r[20].w[0] + 68u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[20].w[0] + 72u), c.f[0]);
    st32((c.r[18].w[0] + 44u), 0u);
    c.budget -= 53;
L_00180F9C:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00180FC8:
    set32(c.r[29], c.r[29].w[0] - 1248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 1136u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 1120u) & ~15u, c.r[21]);
    set32(c.r[20], c.r[3].w[0] + 5840u);
    st128((c.r[29].w[0] + 1200u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 1184u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 1168u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 1152u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 1104u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 1088u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 1232u), c.f[22]);
    st32((c.r[29].w[0] + 1224u), c.f[21]);
    st32((c.r[29].w[0] + 1216u), c.f[20]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181024; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018101Cu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x0018101Cu) [[unlikely]] return; }
L_0018101C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00181500; } }
L_00181024:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181034u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00181034u) [[unlikely]] return; }
L_00181034:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181040u);  if (depth < kMaxDepth) unit_0084(c, 23u, depth + 1u); else { c.pc = 0x00310390u; return; } if (c.pc != 0x00181040u) [[unlikely]] return; }
L_00181040:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17576u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018105C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018106C; } }
L_0018105C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018106Cu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x0018106Cu) [[unlikely]] return; }
L_0018106C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181500; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 120u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 480u)));
    c.r[2].d[0] = c.r[2].d[0] | 1072ull;
    st32((c.r[21].w[0] + 120u), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 2u));
    c.r[3].d[0] = c.r[3].d[0] & 65503ull;
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[22], ld32((c.r[21].w[0] + 480u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001810A0u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x001810A0u) [[unlikely]] return; }
L_001810A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181124; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001810BCu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001810BCu) [[unlikely]] return; }
L_001810BC:
    set32(c.r[3], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[7], 0u + 268u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] - 14152u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001810FCu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001810FCu) [[unlikely]] return; }
L_001810FC:
    c.f[3] = ld32((c.r[20].w[0] + 80u));
    c.f[2] = ld32((c.r[20].w[0] + 88u));
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[29].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00181218; } }
L_00181124:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    set32(c.r[19], 0u + 268u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181140u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00181140u) [[unlikely]] return; }
L_00181140:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181154u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00181154u) [[unlikely]] return; }
L_00181154:
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[16], c.r[16].w[0] - 14152u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181194u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x00181194u) [[unlikely]] return; }
L_00181194:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 544u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001811C8u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001811C8u) [[unlikely]] return; }
L_001811C8:
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    c.f[3] = ld32((c.r[29].w[0] + 152u));
    c.f[0] = ld32((c.r[29].w[0] + 672u));
    c.f[1] = ld32((c.r[29].w[0] + 680u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[5] = ld32((c.r[20].w[0] + 80u));
    c.f[6] = ld32((c.r[20].w[0] + 88u));
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[1]);
    c.f[2] = fp::sub(c.f[2], c.f[5]);
    c.f[3] = fp::sub(c.f[3], c.f[6]);
    st32((c.r[29].w[0]), c.f[2]);
    st32((c.r[29].w[0] + 8u), c.f[3]);
    c.budget -= 20;
L_00181218:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] - 17692u));
    set32(c.r[3], c.r[20].w[0] + 68u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[3] = c.r[1].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40960000u);
    c.r[1].d[0] = c.r[1].d[0] | 52196ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42650000u);
    c.r[1].d[0] = c.r[1].d[0] | 12001ull;
    c.f[5] = c.r[1].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43870000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[17], c.r[29].w[0] + 1072u);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[3] = ld32((c.r[29].w[0] + 8u));
    set32(c.r[16], c.r[29].w[0] + 1076u);
    st32((c.r[20].w[0] + 92u), c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[20].w[0] + 96u), c.f[3]);
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.f[1] = 0u;
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[20].w[0] + 68u), c.f[2]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    st32((c.r[20].w[0] + 68u), c.f[2]);
    c.budget -= 39;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001812E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[2] = c.r[1].w[0];
    c.budget -= 3;
L_001812C0:
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001812C0u | kUnwind; return; } goto L_001812C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018131C; } }
L_001812E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0018131C; } }
    c.budget -= 1;
L_00181300:
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00181300u | kUnwind; return; } goto L_00181300; } }
    st32((c.r[3].w[0]), c.f[2]);
    c.budget -= 1;
L_0018131C:
    c.f[0] = ld32((c.r[20].w[0] + 68u));
    c.f[1] = ld32((c.r[5].w[0] - 19748u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[6].d[0] = ld16((c.r[4].w[0] - 19752u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C8E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 64053ull;
    c.f[21] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[21].w[0] + 152u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[2]);
    st16((c.r[22].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    st16((c.r[22].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[21].w[0] + 322u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.f[12] = fp::mul(c.f[12], c.f[21]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181390u);  if (depth < kMaxDepth) unit_0045(c, 110u, depth + 1u); else { c.pc = 0x00215EC0u; return; } if (c.pc != 0x00181390u) [[unlikely]] return; }
L_00181390:
    c.f[3] = ld32((c.r[29].w[0]));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 1076u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 8u));
    c.f[6] = ld32((c.r[29].w[0] + 1072u));
    c.f[0] = fp::mul(c.f[3], c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.f[2] = fp::mul(c.f[2], c.f[6]);
    c.f[5] = ld32((c.r[20].w[0] + 72u));
    c.f[7] = ld32((c.r[2].w[0]));
    c.f[8] = ld32((c.r[2].w[0] + 20u));
    c.f[8] = fp::cvt_s_w(c.f[8]);
    c.f[3] = fp::mul(c.f[3], c.f[6]);
    c.f[4] = ld32((c.r[20].w[0] + 76u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[7]);
    fpu_div(c, 0u, c.f[0], c.f[8]);
    c.f[5] = fp::add(c.f[5], c.f[0]);
    st32((c.r[20].w[0] + 48u), c.f[5]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 24u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[4] = fp::sub(c.f[4], c.f[1]);
    st32((c.r[20].w[0] + 52u), c.f[4]);
    c.r[2].d[0] = ld16((c.r[22].w[0] + 4u));
    c.r[3].d[0] = ld16((c.r[22].w[0] + 6u));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.f[12] = ld32((c.r[21].w[0] + 152u));
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    set32(c.r[2], c.r[2].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] >> 31);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    c.f[5] = fp::mul(c.f[5], c.f[0]);
    c.f[4] = fp::mul(c.f[4], c.f[1]);
    c.f[20] = c.r[6].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[22] = c.r[7].w[0];
    c.f[22] = fp::cvt_s_w(c.f[22]);
    c.f[12] = fp::mul(c.f[12], c.f[21]);
    c.f[20] = fp::sub(c.f[20], c.f[5]);
    c.f[22] = fp::sub(c.f[22], c.f[4]);
    c.budget -= 63;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018148Cu);  if (depth < kMaxDepth) unit_0045(c, 110u, depth + 1u); else { c.pc = 0x00215EC0u; return; } if (c.pc != 0x0018148Cu) [[unlikely]] return; }
L_0018148C:
    c.f[2] = ld32((c.r[29].w[0] + 1076u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 1072u));
    c.f[21] = fp::mul(c.f[20], c.f[2]);
    c.f[1] = fp::mul(c.f[22], c.f[0]);
    c.f[22] = fp::mul(c.f[22], c.f[2]);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[21] = fp::sub(c.f[21], c.f[1]);
    c.f[20] = fp::add(c.f[20], c.f[22]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001814B8u);  if (depth < kMaxDepth) unit_0020(c, 240u, depth + 1u); else { c.pc = 0x00182D40u; return; } if (c.pc != 0x001814B8u) [[unlikely]] return; }
L_001814B8:
    c.f[0] = fp::add(c.f[0], c.f[21]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[21].w[0] + 192u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001814CCu);  if (depth < kMaxDepth) unit_0020(c, 242u, depth + 1u); else { c.pc = 0x00182D80u; return; } if (c.pc != 0x001814CCu) [[unlikely]] return; }
L_001814CC:
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    st32((c.r[21].w[0] + 196u), c.f[0]);
    st32((c.r[22].w[0] + 72u), c.f[1]);
    st32((c.r[22].w[0] + 44u), 0u);
    st32((c.r[22].w[0] + 48u), 0u);
    st32((c.r[22].w[0] + 52u), 0u);
    st32((c.r[22].w[0] + 56u), c.f[1]);
    st32((c.r[22].w[0] + 60u), c.f[1]);
    st32((c.r[22].w[0] + 64u), 0u);
    st32((c.r[22].w[0] + 68u), c.f[1]);
    st32((c.r[20].w[0] + 44u), 0u);
    c.budget -= 13;
L_00181500:
    ld128((c.r[29].w[0] + 1200u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1184u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 1168u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 1152u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 1136u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 1120u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 1104u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1088u));
    c.f[22] = ld32((c.r[29].w[0] + 1232u));
    c.f[21] = ld32((c.r[29].w[0] + 1224u));
    c.f[20] = ld32((c.r[29].w[0] + 1216u));
    set32(c.r[29], c.r[29].w[0] + 1248u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00181538:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181554u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00181554u) [[unlikely]] return; }
L_00181554:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181560u);  if (depth < kMaxDepth) unit_0084(c, 23u, depth + 1u); else { c.pc = 0x00310390u; return; } if (c.pc != 0x00181560u) [[unlikely]] return; }
L_00181560:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17576u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00181594; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 5876u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181594; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 19624u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001815A4; } }
L_00181594:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001815A4u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001815A4u) [[unlikely]] return; }
L_001815A4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181694; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[1] = ld32((c.r[5].w[0] + 28716u));
    set32(c.r[7], 0u + 56u);
    c.f[2] = ld32((c.r[3].w[0] - 17372u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[3] = ld32((c.r[2].w[0] - 17376u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 304u)));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[4].w[0] + 28712u));
    set32(c.r[6], c.r[6].w[0] + 728u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.f[0] = fp::add(c.f[0], c.f[3]);
    set32(c.r[8], ld32((c.r[3].w[0] + 7524u)));
    c.r[2].d[0] = c.r[2].d[0] | 1072ull;
    st32((c.r[16].w[0] + 196u), c.f[1]);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[16].w[0] + 192u), c.f[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[1] = ld32((c.r[4].w[0] - 19644u));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[7].d[0] = ld16((c.r[2].w[0] - 19640u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[6], ld32((c.r[16].w[0] + 480u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[2]);
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 57;
L_00181694:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001816A8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[17], c.r[3].w[0] + 5840u);
    st32((c.r[29].w[0] + 72u), c.f[21]);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001816EC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181700; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001816EC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001816F8u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001816F8u) [[unlikely]] return; }
L_001816F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00181800; } }
L_00181700:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181710u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00181710u) [[unlikely]] return; }
L_00181710:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018171Cu);  if (depth < kMaxDepth) unit_0084(c, 23u, depth + 1u); else { c.pc = 0x00310390u; return; } if (c.pc != 0x0018171Cu) [[unlikely]] return; }
L_0018171C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17576u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018173C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018173Cu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x0018173Cu) [[unlikely]] return; }
L_0018173C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181800; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 304u)));
    set32(c.r[4], 0u + 56u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 728u);
    c.r[2].d[0] = c.r[2].d[0] | 48ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[5].w[0] + 7524u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C8E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 64053ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = ld16((c.r[6].w[0] + 36u));
    c.r[5].d[0] = c.r[29].d[0] | 4ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[17].w[0] + 68u));
    c.r[3].d[0] = ld16((c.r[7].w[0] + 376u));
    c.r[2].d[0] = ld16((c.r[7].w[0] + 380u));
    c.f[12] = c.f[12] ^ fp::kSign;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.f[20] = fp::mul(c.f[20], c.f[1]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001817C8u);  if (depth < kMaxDepth) unit_0045(c, 110u, depth + 1u); else { c.pc = 0x00215EC0u; return; } if (c.pc != 0x001817C8u) [[unlikely]] return; }
L_001817C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001817D4u);  if (depth < kMaxDepth) unit_0020(c, 240u, depth + 1u); else { c.pc = 0x00182D40u; return; } if (c.pc != 0x001817D4u) [[unlikely]] return; }
L_001817D4:
    c.f[1] = ld32((c.r[29].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[21] = fp::add(c.f[0], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001817ECu);  if (depth < kMaxDepth) unit_0020(c, 242u, depth + 1u); else { c.pc = 0x00182D80u; return; } if (c.pc != 0x001817ECu) [[unlikely]] return; }
L_001817EC:
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    st32((c.r[16].w[0] + 192u), c.f[21]);
    c.f[20] = fp::mul(c.f[20], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.budget -= 5;
L_00181800:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[21] = ld32((c.r[29].w[0] + 72u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00181820:
    set32(c.r[29], c.r[29].w[0] - 624u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[19]);
    set32(c.r[4], 0u + 13248u);
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 544u), c.r[31].d[0]);
    set32(c.r[18], c.r[19].w[0] + 5840u);
    set32(c.r[3], ld32((c.r[17].w[0] + 304u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001818A0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001818A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17576u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001818A0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001818A0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001818B8; } }
L_001818A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001818B0u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001818B0u) [[unlikely]] return; }
L_001818B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00181A30; } }
L_001818B8:
    set32(c.r[2], ld32((c.r[6].w[0] + 104u)));
    set32(c.r[5], 0u + 268u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001818F8u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001818F8u) [[unlikely]] return; }
L_001818F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181908u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00181908u) [[unlikely]] return; }
L_00181908:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181914u);  if (depth < kMaxDepth) unit_0084(c, 23u, depth + 1u); else { c.pc = 0x00310390u; return; } if (c.pc != 0x00181914u) [[unlikely]] return; }
L_00181914:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181A30; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[5], c.r[29].w[0] + 528u);
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[6], c.r[29].w[0] + 532u);
    c.r[2].d[0] = c.r[2].d[0] | 48ull;
    c.f[13] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[17].w[0] + 120u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181948u);  if (depth < kMaxDepth) unit_0020(c, 216u, depth + 1u); else { c.pc = 0x00182858u; return; } if (c.pc != 0x00181948u) [[unlikely]] return; }
L_00181948:
    set32(c.r[16], ld32((c.r[17].w[0] + 480u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181958u);  if (depth < kMaxDepth) unit_0020(c, 240u, depth + 1u); else { c.pc = 0x00182D40u; return; } if (c.pc != 0x00181958u) [[unlikely]] return; }
L_00181958:
    c.f[1] = ld32((c.r[29].w[0] + 528u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 192u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181970u);  if (depth < kMaxDepth) unit_0020(c, 242u, depth + 1u); else { c.pc = 0x00182D80u; return; } if (c.pc != 0x00181970u) [[unlikely]] return; }
L_00181970:
    c.f[2] = ld32((c.r[29].w[0] + 532u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 308u)));
    set32(c.r[4], c.r[5].w[0] - 19664u);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[17].w[0] + 196u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 8u));
    st16((c.r[17].w[0] + 316u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    st16((c.r[17].w[0] + 318u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 16u));
    st16((c.r[17].w[0] + 320u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[5].w[0] - 19664u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 310u)));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.budget -= 33;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181A30; } }
    c.f[0] = ld32((c.r[29].w[0] + 528u));
    c.f[2] = ld32((c.r[29].w[0] + 532u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 5840u));
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00181A30; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181A30u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00181A30u) [[unlikely]] return; }
L_00181A30:
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 544u));
    set32(c.r[29], c.r[29].w[0] + 624u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00181A50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00181A58:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[3].w[0] + 5840u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 176u), c.f[22]);
    st32((c.r[29].w[0] + 168u), c.f[21]);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181AE8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181AE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17576u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00181AE8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00181AE8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 304u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 188u);
    set32(c.r[18], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00181B00; } }
L_00181AE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181AF8u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00181AF8u) [[unlikely]] return; }
L_00181AF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00181DE0; } }
L_00181B00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181B10u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00181B10u) [[unlikely]] return; }
L_00181B10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181B1Cu);  if (depth < kMaxDepth) unit_0084(c, 23u, depth + 1u); else { c.pc = 0x00310390u; return; } if (c.pc != 0x00181B1Cu) [[unlikely]] return; }
L_00181B1C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181DE0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.r[19].d[0] = c.r[29].d[0] + 0ull;
    c.f[6] = 0u;
    set32(c.r[20], c.r[29].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] | 48ull;
    set32(c.r[6], c.r[29].w[0] + 8u);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 12u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.f[5] = fp::add(c.f[0], c.f[2]);
    c.f[4] = ld32((c.r[17].w[0] + 92u));
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[3] = ld32((c.r[3].w[0] + 12u));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[6]));
    c.f[2] = ld32((c.r[17].w[0] + 88u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[3] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = ld32((c.r[17].w[0] + 96u));
    st32((c.r[29].w[0] + 8u), c.f[5]);
    c.f[20] = fp::sub(c.f[1], c.f[4]);
    c.f[21] = fp::sub(c.f[3], c.f[0]);
    c.budget -= 30;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00181BD0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = c.f[6];
    c.budget -= 4;
L_00181BB0:
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00181BB0u | kUnwind; return; } goto L_00181BB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00181C14; } }
L_00181BD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[5]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00181C14; } }
    c.f[1] = c.f[0];
    c.f[0] = c.f[5];
    c.budget -= 3;
L_00181BF8:
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00181BF8u | kUnwind; return; } goto L_00181BF8; } }
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 1;
L_00181C14:
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C8E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 64053ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[22] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[12] = c.f[0];
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181C40u);  if (depth < kMaxDepth) unit_0045(c, 110u, depth + 1u); else { c.pc = 0x00215EC0u; return; } if (c.pc != 0x00181C40u) [[unlikely]] return; }
L_00181C40:
    c.f[1] = ld32((c.r[29].w[0] + 16u));
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    c.f[3] = fp::mul(c.f[21], c.f[1]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.f[2] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[21] = fp::add(c.f[3], c.f[2]);
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181C78; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.f[22] = ld32((c.r[2].w[0] + 32u));
    c.budget -= 2;
L_00181C78:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181C94u);  if (depth < kMaxDepth) unit_0020(c, 238u, depth + 1u); else { c.pc = 0x00182CF8u; return; } if (c.pc != 0x00181C94u) [[unlikely]] return; }
L_00181C94:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    fpu_div(c, 21u, c.f[21], c.f[1]);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181CB4u);  if (depth < kMaxDepth) unit_0020(c, 238u, depth + 1u); else { c.pc = 0x00182CF8u; return; } if (c.pc != 0x00181CB4u) [[unlikely]] return; }
L_00181CB4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[20] = fp::mul(c.f[20], c.f[22]);
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    st32((c.r[19].w[0]), c.f[20]);
    c.f[21] = fp::mul(c.f[21], c.f[22]);
    st32((c.r[20].w[0]), c.f[21]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181CD4u);  if (depth < kMaxDepth) unit_0020(c, 240u, depth + 1u); else { c.pc = 0x00182D40u; return; } if (c.pc != 0x00181CD4u) [[unlikely]] return; }
L_00181CD4:
    c.f[1] = ld32((c.r[29].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 192u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181CECu);  if (depth < kMaxDepth) unit_0020(c, 242u, depth + 1u); else { c.pc = 0x00182D80u; return; } if (c.pc != 0x00181CECu) [[unlikely]] return; }
L_00181CEC:
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    set32(c.r[5], 0u + 20u);
    c.r[7].d[0] = ld16((c.r[22].w[0] - 19756u));
    set32(c.r[3], c.r[21].w[0] - 19744u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 308u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 480u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[16].w[0] + 196u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 310u)));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    st16((c.r[16].w[0] + 316u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 12u));
    st16((c.r[16].w[0] + 318u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 16u));
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[16].w[0] + 320u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.budget -= 39;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181DC4; } }
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00181DC4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181DC4u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00181DC4u) [[unlikely]] return; }
L_00181DC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181DD4u);  if (depth < kMaxDepth) unit_0020(c, 237u, depth + 1u); else { c.pc = 0x00182CE8u; return; } if (c.pc != 0x00181DD4u) [[unlikely]] return; }
L_00181DD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181DE0; } }
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 1;
L_00181DE0:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 176u));
    c.f[21] = ld32((c.r[29].w[0] + 168u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00181E18:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00181EF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00181EF8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42680000u);
    c.f[4] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[16], c.r[2].w[0] + 5840u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[3] = c.r[1].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40900000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[4], c.r[16].w[0] + 108u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[6], 0u + 80u);
    st32((c.r[2].w[0] + 5840u), c.f[4]);
    st32((c.r[16].w[0] + 60u), c.f[3]);
    st32((c.r[16].w[0] + 64u), c.f[1]);
    st32((c.r[16].w[0] + 100u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[2]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181EB8u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x00181EB8u) [[unlikely]] return; }
L_00181EB8:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[17], c.r[17].w[0] + 6544u);
    set32(c.r[2], c.r[2].w[0] + 28392u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181EE0u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00181EE0u) [[unlikely]] return; }
L_00181EE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 28368u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181EF8u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x00181EF8u) [[unlikely]] return; }
L_00181EF8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00181F10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181F20u);  if (depth < kMaxDepth) unit_0020(c, 169u, depth + 1u); else { c.pc = 0x00182118u; return; } if (c.pc != 0x00181F20u) [[unlikely]] return; }
L_00181F20:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181F2Cu);  if (depth < kMaxDepth) unit_0020(c, 188u, depth + 1u); else { c.pc = 0x00182438u; return; } if (c.pc != 0x00181F2Cu) [[unlikely]] return; }
L_00181F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181F34u);  if (depth < kMaxDepth) unit_0020(c, 169u, depth + 1u); else { c.pc = 0x00182118u; return; } if (c.pc != 0x00181F34u) [[unlikely]] return; }
L_00181F34:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181F40u);  if (depth < kMaxDepth) unit_0020(c, 182u, depth + 1u); else { c.pc = 0x00182340u; return; } if (c.pc != 0x00181F40u) [[unlikely]] return; }
L_00181F40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00181F50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181F70u);  if (depth < kMaxDepth) unit_0020(c, 169u, depth + 1u); else { c.pc = 0x00182118u; return; } if (c.pc != 0x00181F70u) [[unlikely]] return; }
L_00181F70:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181F84u);  if (depth < kMaxDepth) unit_0020(c, 173u, depth + 1u); else { c.pc = 0x001821D0u; return; } if (c.pc != 0x00181F84u) [[unlikely]] return; }
L_00181F84:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00181FA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181FB0u);  if (depth < kMaxDepth) unit_0020(c, 169u, depth + 1u); else { c.pc = 0x00182118u; return; } if (c.pc != 0x00181FB0u) [[unlikely]] return; }
L_00181FB0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181FBCu);  if (depth < kMaxDepth) unit_0020(c, 183u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00181FBCu) [[unlikely]] return; }
L_00181FBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00181FD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181FECu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00181FECu) [[unlikely]] return; }
L_00181FEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181FF8u);  if (depth < kMaxDepth) unit_0084(c, 23u, depth + 1u); else { c.pc = 0x00310390u; return; } if (c.pc != 0x00181FF8u) [[unlikely]] return; }
L_00181FF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17576u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00182018; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182018u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00182018u) [[unlikely]] return; }
L_00182018:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00182080; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 480u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[2].d[0] | 1072ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 6;
L_0018203C:
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[3] = ld32((c.r[4].w[0] - 17376u));
    set32(c.r[8], 0u + 128u);
    c.f[2] = ld32((c.r[3].w[0] - 17372u));
    set32(c.r[4], 0u - 1u);
    c.f[0] = ld32((c.r[7].w[0] + 28712u));
    c.f[1] = ld32((c.r[5].w[0] + 28716u));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 192u), c.f[0]);
    st32((c.r[16].w[0] + 196u), c.f[1]);
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.budget -= 17;
L_00182080:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182098:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001820ACu);  if (depth < kMaxDepth) unit_0020(c, 58u, depth + 1u); else { c.pc = 0x001808F0u; return; } if (c.pc != 0x001820ACu) [[unlikely]] return; }
L_001820AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001820C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001820D4u);  if (depth < kMaxDepth) unit_0020(c, 58u, depth + 1u); else { c.pc = 0x001808F0u; return; } if (c.pc != 0x001820D4u) [[unlikely]] return; }
L_001820D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001820E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001820F8u);  if (depth < kMaxDepth) unit_0020(c, 169u, depth + 1u); else { c.pc = 0x00182118u; return; } if (c.pc != 0x001820F8u) [[unlikely]] return; }
L_001820F8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182104u);  if (depth < kMaxDepth) unit_0020(c, 199u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x00182104u) [[unlikely]] return; }
L_00182104:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182118:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] + 5840u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182128:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42680000u);
    c.f[4] = c.r[1].w[0];
    set32(c.r[4], c.r[16].w[0] + 108u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[3] = c.r[1].w[0];
    set32(c.r[6], 0u + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40900000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[1].w[0];
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0]), c.f[4]);
    st32((c.r[16].w[0] + 60u), c.f[3]);
    st32((c.r[16].w[0] + 64u), c.f[1]);
    st32((c.r[16].w[0] + 100u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[2]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001821ACu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x001821ACu) [[unlikely]] return; }
L_001821AC:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
L_001821C0:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001821D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018223C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182208u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00182208u) [[unlikely]] return; }
L_00182208:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 28272u);
    set32(c.r[8], c.r[8].w[0] + 28336u);
    set32(c.r[5], 0u + 36u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 313u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182230u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00182230u) [[unlikely]] return; }
L_00182230:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 3;
L_0018223C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182250u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x00182250u) [[unlikely]] return; }
L_00182250:
    set32(c.r[3], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182278:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001822D0; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], c.r[7].w[0] + 28272u);
    set32(c.r[8], c.r[8].w[0] + 28336u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 36u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 389u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001822C4u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x001822C4u) [[unlikely]] return; }
L_001822C4:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 3;
L_001822D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 36u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001822E4u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001822E4u) [[unlikely]] return; }
L_001822E4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018232C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], 0u + 36u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018232Cu);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0018232Cu) [[unlikely]] return; }
L_0018232C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182340:
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182350:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182370u);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x00182370u) [[unlikely]] return; }
L_00182370:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00182414; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.f[20] = 0u;
    set32(c.r[5], 0u + 1u);
    c.f[16] = ld32((c.r[2].w[0] + 20u));
    c.f[16] = fp::cvt_s_w(c.f[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[1].w[0];
    set32(c.r[6], 0u + 112u);
    c.r[7].d[0] = c.r[7].d[0] | 179ull;
    c.f[15] = c.f[13];
    c.f[12] = c.f[20];
    c.f[17] = c.f[16];
    c.f[14] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001823C0u);  if (depth < kMaxDepth) unit_0084(c, 14u, depth + 1u); else { c.pc = 0x003101F8u; return; } if (c.pc != 0x001823C0u) [[unlikely]] return; }
L_001823C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld16((c.r[2].w[0] - 19760u));
    set32(c.r[6], 0u + 5u);
    st32((c.r[16].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 192u), c.f[20]);
    st32((c.r[16].w[0] + 196u), c.f[20]);
    st16((c.r[16].w[0] + 314u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001823F8u);  if (depth < kMaxDepth) unit_0020(c, 248u, depth + 1u); else { c.pc = 0x00182E48u; return; } if (c.pc != 0x001823F8u) [[unlikely]] return; }
L_001823F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 128u);
    set32(c.r[6], 0u + 128u);
    set32(c.r[7], 0u + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182410u);  if (depth < kMaxDepth) unit_0040(c, 69u, depth + 1u); else { c.pc = 0x00200C48u; return; } if (c.pc != 0x00182410u) [[unlikely]] return; }
L_00182410:
    st32((c.r[17].w[0] + 68u), c.f[20]);
    c.budget -= 1;
L_00182414:
    st32((c.r[17].w[0] + 16u), c.r[16].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182438:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 19u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[16], c.r[18].w[0] + 108u);
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018246Cu);  if (depth < kMaxDepth) unit_0084(c, 19u, depth + 1u); else { c.pc = 0x00310340u; return; } if (c.pc != 0x0018246Cu) [[unlikely]] return; }
L_0018246C:
    c.budget -= 1;
L_00182470:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00182488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182484u);  if (depth < kMaxDepth) unit_0084(c, 19u, depth + 1u); else { c.pc = 0x00310340u; return; } if (c.pc != 0x00182484u) [[unlikely]] return; }
L_00182484:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00182488:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00182470u | kUnwind; return; } goto L_00182470; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001824A4u);  if (depth < kMaxDepth) unit_0020(c, 234u, depth + 1u); else { c.pc = 0x00182C80u; return; } if (c.pc != 0x001824A4u) [[unlikely]] return; }
L_001824A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 20704u)));
    set32(c.r[6], ld32((c.r[2].w[0] - 368u)));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001824C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001824C8u) [[unlikely]] return; }
L_001824C8:
    set32(c.r[4], ld32((c.r[19].w[0] + 20704u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001824D8u);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x001824D8u) [[unlikely]] return; }
L_001824D8:
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 36u), 0u);
    st32((c.r[18].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 40u), 0u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182508:
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00182548; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[2] = c.r[1].w[0];
    c.budget -= 2;
L_00182528:
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00182528u | kUnwind; return; } goto L_00182528; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182548:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00182584; } }
    c.budget -= 1;
L_00182568:
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00182568u | kUnwind; return; } goto L_00182568; } }
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 1;
L_00182584:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182590:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 544u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00182690; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 28360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001825C4u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001825C4u) [[unlikely]] return; }
L_001825C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 9488u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001825D4u);  if (depth < kMaxDepth) unit_0094(c, 154u, depth + 1u); else { c.pc = 0x00351C18u; return; } if (c.pc != 0x001825D4u) [[unlikely]] return; }
L_001825D4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0018268C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001825F8u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001825F8u) [[unlikely]] return; }
L_001825F8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018261Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x0018261Cu) [[unlikely]] return; }
L_0018261C:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[2] = 0u;
    set32(c.r[5], c.r[29].w[0] + 528u);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 20u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 76u), c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018266Cu);  if (depth < kMaxDepth) unit_0089(c, 196u, depth + 1u); else { c.pc = 0x00326188u; return; } if (c.pc != 0x0018266Cu) [[unlikely]] return; }
L_0018266C:
    c.f[1] = ld32((c.r[29].w[0] + 528u));
    c.f[2] = ld32((c.r[29].w[0] + 532u));
    c.f[0] = ld32((c.r[29].w[0] + 536u));
    st32((c.r[17].w[0] + 80u), c.f[1]);
    st32((c.r[17].w[0] + 88u), c.f[0]);
    st32((c.r[17].w[0] + 84u), c.f[2]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00182690; } }
L_0018268C:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_00182690:
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 544u));
    set32(c.r[29], c.r[29].w[0] + 592u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001826A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001826B0:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001826C0; } }
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 1;
L_001826C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001826C8:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00182714; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00182714; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 28u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00182714; } }
    st32((c.r[4].w[0] + 28u), c.f[1]);
    c.budget -= 1;
L_00182714:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182720:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00182770; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00182770; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 28u), c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00182770; } }
    st32((c.r[4].w[0] + 28u), c.f[2]);
    c.budget -= 1;
L_00182770:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182778:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001827A0u);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x001827A0u) [[unlikely]] return; }
L_001827A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001827F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] - 27596u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001827F4; } }
    c.r[2].d[0] = c.r[16].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001827DC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001827D4u);  if (depth < kMaxDepth) unit_0020(c, 246u, depth + 1u); else { c.pc = 0x00182E00u; return; } if (c.pc != 0x001827D4u) [[unlikely]] return; }
L_001827D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001827F4; } }
L_001827DC:
    c.r[2].d[0] = c.r[16].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001827F4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001827F4u);  if (depth < kMaxDepth) unit_0020(c, 244u, depth + 1u); else { c.pc = 0x00182DC0u; return; } if (c.pc != 0x001827F4u) [[unlikely]] return; }
L_001827F4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182810:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[2].w[0] + 5876u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 5840u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 40u)));
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182844u);  if (depth < kMaxDepth) unit_0020(c, 248u, depth + 1u); else { c.pc = 0x00182E48u; return; } if (c.pc != 0x00182844u) [[unlikely]] return; }
L_00182844:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182858:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.f[4] = 0u;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 88u), c.f[21]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 8u);
    st32((c.r[29].w[0] + 96u), c.f[22]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.f[3] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = ld32((c.r[16].w[0] + 80u));
    c.r[2].d[0] = c.r[29].d[0] + 0ull;
    c.f[3] = fp::add(c.f[3], c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    c.f[12] = fp::sub(c.f[12], c.f[2]);
    c.f[1] = ld32((c.r[16].w[0] + 92u));
    c.f[13] = fp::sub(c.f[13], c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    st32((c.r[29].w[0]), c.f[3]);
    c.f[20] = fp::sub(c.f[12], c.f[1]);
    c.f[21] = fp::sub(c.f[13], c.f[2]);
    c.budget -= 31;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00182900; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = c.f[4];
    c.budget -= 3;
L_001828E0:
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001828E0u | kUnwind; return; } goto L_001828E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018293C; } }
L_00182900:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0018293C; } }
    c.budget -= 1;
L_00182920:
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00182920u | kUnwind; return; } goto L_00182920; } }
    st32((c.r[2].w[0]), c.f[3]);
    c.budget -= 1;
L_0018293C:
    c.f[0] = ld32((c.r[29].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C8E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 64053ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[22] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[12] = c.f[0];
    st32((c.r[29].w[0]), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182968u);  if (depth < kMaxDepth) unit_0045(c, 110u, depth + 1u); else { c.pc = 0x00215EC0u; return; } if (c.pc != 0x00182968u) [[unlikely]] return; }
L_00182968:
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.f[3] = fp::mul(c.f[21], c.f[1]);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.f[2] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[21] = fp::add(c.f[3], c.f[2]);
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001829A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.f[22] = ld32((c.r[2].w[0] + 32u));
    c.budget -= 2;
L_001829A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001829BCu);  if (depth < kMaxDepth) unit_0020(c, 238u, depth + 1u); else { c.pc = 0x00182CF8u; return; } if (c.pc != 0x001829BCu) [[unlikely]] return; }
L_001829BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    fpu_div(c, 21u, c.f[21], c.f[1]);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001829DCu);  if (depth < kMaxDepth) unit_0020(c, 238u, depth + 1u); else { c.pc = 0x00182CF8u; return; } if (c.pc != 0x001829DCu) [[unlikely]] return; }
L_001829DC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.f[20] = fp::mul(c.f[20], c.f[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    st32((c.r[17].w[0]), c.f[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[21] = fp::mul(c.f[21], c.f[22]);
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    c.f[22] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[18].w[0]), c.f[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182A18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u - 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[8], ld32((c.r[6].w[0])));
    set32(c.r[9], 0u + 32u);
    set32(c.r[3], c.r[4].w[0] + 188u);
    c.budget -= 10;
L_00182A40:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_00182A64; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00182A80; } }
    st32((c.r[3].w[0] + 4u), c.r[10].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00182A80; } }
L_00182A64:
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[7].d[0];
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[9].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00182A40u | kUnwind; return; } goto L_00182A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182A80u);  if (depth < kMaxDepth) unit_0020(c, 225u, depth + 1u); else { c.pc = 0x00182A90u; return; } if (c.pc != 0x00182A80u) [[unlikely]] return; }
L_00182A80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182A90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[20].w[0] << 4);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 188u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[18], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182ACCu);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x00182ACCu) [[unlikely]] return; }
L_00182ACC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00182BD4; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182AE8u);  if (depth < kMaxDepth) unit_0020(c, 229u, depth + 1u); else { c.pc = 0x00182BF8u; return; } if (c.pc != 0x00182AE8u) [[unlikely]] return; }
L_00182AE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - 17360u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[8].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].d[0] = ld16((c.r[4].w[0] + 2u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.f[16] = c.r[8].w[0];
    c.f[16] = fp::cvt_s_w(c.f[16]);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 6u));
    c.f[14] = c.r[6].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[12] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.f[15] = c.r[5].w[0];
    c.f[15] = fp::cvt_s_w(c.f[15]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = fp::mul(c.f[16], c.f[0]);
    set32(c.r[5], ld32((c.r[9].w[0] - 26588u)));
    c.f[16] = fp::sub(c.f[16], c.f[12]);
    c.r[7].d[0] = c.r[7].d[0] | 179ull;
    c.f[17] = fp::sub(c.f[15], c.f[14]);
    c.f[15] = fp::mul(c.f[15], c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.f[17] = fp::add(c.f[17], c.f[1]);
    c.f[14] = fp::mul(c.f[14], c.f[0]);
    c.f[16] = fp::add(c.f[16], c.f[1]);
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182B88u);  if (depth < kMaxDepth) unit_0084(c, 14u, depth + 1u); else { c.pc = 0x003101F8u; return; } if (c.pc != 0x00182B88u) [[unlikely]] return; }
L_00182B88:
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[2], c.r[2].w[0] + 6744u);
    set32(c.r[4], 0u + 6u);
    c.r[3].d[0] = ld16((c.r[5].w[0] - 19756u));
    st32((c.r[16].w[0] + 304u), c.r[20].w[0]);
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 516u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 314u), static_cast<std::uint16_t>(0u));
    st32((c.r[18].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 19;
L_00182BD4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182BF8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00182C4C; } }
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00182C20; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00182C40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00182C70; } }
L_00182C20:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00182C58; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00182C64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00182C70; } }
L_00182C40:
    set32(c.r[2], 0u + 109u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182C4C:
    set32(c.r[2], 0u + 110u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182C58:
    set32(c.r[2], 0u + 108u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182C64:
    set32(c.r[2], 0u + 107u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182C70:
    set32(c.r[2], 0u + 109u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 188u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_00182C98:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00182CBC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00182CB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182CB8u);  if (depth < kMaxDepth) unit_0084(c, 19u, depth + 1u); else { c.pc = 0x00310340u; return; } if (c.pc != 0x00182CB8u) [[unlikely]] return; }
L_00182CB8:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00182CBC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00182C98u | kUnwind; return; } goto L_00182C98; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182CE8:
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182CF8:
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00182D2C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[1] = ld32((c.r[2].w[0] - 19748u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182D2C:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182D40:
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00182D60; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182D60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[1] = ld32((c.r[2].w[0] + 28712u));
    c.f[0] = ld32((c.r[3].w[0] - 17376u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182D80:
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00182DA0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182DA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[1] = ld32((c.r[2].w[0] + 28716u));
    c.f[0] = ld32((c.r[3].w[0] - 17372u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182DC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[5].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    if (c.r[5].d[0] == 0) c.r[3].d[0] = 0ull;
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182DECu);  if (depth < kMaxDepth) unit_0020(c, 248u, depth + 1u); else { c.pc = 0x00182E48u; return; } if (c.pc != 0x00182DECu) [[unlikely]] return; }
L_00182DEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182E00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[6].d[0];
    st32((c.r[5].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182E34u);  if (depth < kMaxDepth) unit_0020(c, 248u, depth + 1u); else { c.pc = 0x00182E48u; return; } if (c.pc != 0x00182E34u) [[unlikely]] return; }
L_00182E34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182E48:
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00182E70; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[2], c.r[2].w[0] + 4040u);
    st32((c.r[3].w[0] + 516u), c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182E70:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[2], c.r[2].w[0] + 2992u);
    st32((c.r[3].w[0] + 516u), c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182E88:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182E98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182EA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[2].w[0] + 5840u);
    st32((c.r[29].w[0]), c.r[7].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], 0u - 1u);
    set32(c.r[10], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[9], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 4u), 0u);
    set32(c.r[3], c.r[4].w[0] + 188u);
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), 0u);
    c.budget -= 16;
L_00182EE0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_00182F04; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00182F24; } }
    st32((c.r[3].w[0] + 4u), c.r[10].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00182F24; } }
L_00182F04:
    if (c.r[2].d[0] == 0) c.r[8].d[0] = c.r[5].d[0];
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[9].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00182EE0u | kUnwind; return; } goto L_00182EE0; } }
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182F24u);  if (depth < kMaxDepth) unit_0020(c, 225u, depth + 1u); else { c.pc = 0x00182A90u; return; } if (c.pc != 0x00182F24u) [[unlikely]] return; }
L_00182F24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182F38:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 5840u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] + 188u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
L_00182F60:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00182F84; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00182F80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182F80u);  if (depth < kMaxDepth) unit_0084(c, 19u, depth + 1u); else { c.pc = 0x00310340u; return; } if (c.pc != 0x00182F80u) [[unlikely]] return; }
L_00182F80:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00182F84:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00182F60u | kUnwind; return; } goto L_00182F60; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182FA4u);  if (depth < kMaxDepth) unit_0020(c, 259u, depth + 1u); else { c.pc = 0x00182FC0u; return; } if (c.pc != 0x00182FA4u) [[unlikely]] return; }
L_00182FA4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00182FC0:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 272u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182FECu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00182FECu) [[unlikely]] return; }
L_00182FEC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 16959ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183008u);  if (depth < kMaxDepth) unit_0098(c, 230u, depth + 1u); else { c.pc = 0x00362B80u; return; } if (c.pc != 0x00183008u) [[unlikely]] return; }
L_00183008:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00183120; } }
    c.budget -= 1;
L_00183018:
    set32(c.r[18], ld32((c.r[17].w[0] + 20u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_00183108; } }
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[21], 0u + 1u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
L_00183038:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183048u);  if (depth < kMaxDepth) unit_0098(c, 255u, depth + 1u); else { c.pc = 0x00362EF0u; return; } if (c.pc != 0x00183048u) [[unlikely]] return; }
L_00183048:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00183060; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018306C; } }
L_00183060:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018306Cu);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x0018306Cu) [[unlikely]] return; }
L_0018306C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[22].w[0] + 28384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018307Cu);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x0018307Cu) [[unlikely]] return; }
L_0018307C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001830FC; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], c.r[20].w[0] + 5840u);
    st32((c.r[29].w[0] + 268u), 0u);
    set32(c.r[5], 0u - 1u);
    st32((c.r[29].w[0] + 256u), c.r[7].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 260u), c.r[21].w[0]);
    set32(c.r[9], 0u + 1u);
    st32((c.r[29].w[0] + 264u), 0u);
    set32(c.r[8], 0u + 32u);
    set32(c.r[3], c.r[4].w[0] + 188u);
    c.budget -= 12;
L_001830B8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_001830DC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001830FC; } }
    st32((c.r[3].w[0] + 4u), c.r[9].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001830FC; } }
L_001830DC:
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[6].d[0];
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001830B8u | kUnwind; return; } goto L_001830B8; } }
    set32(c.r[6], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001830FCu);  if (depth < kMaxDepth) unit_0020(c, 225u, depth + 1u); else { c.pc = 0x00182A90u; return; } if (c.pc != 0x001830FCu) [[unlikely]] return; }
L_001830FC:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00183038u | kUnwind; return; } goto L_00183038; } }
L_00183108:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183114u);  if (depth < kMaxDepth) unit_0098(c, 228u, depth + 1u); else { c.pc = 0x00362B38u; return; } if (c.pc != 0x00183114u) [[unlikely]] return; }
L_00183114:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00183018u | kUnwind; return; } goto L_00183018; } }
L_00183120:
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 272u));
    set32(c.r[29], c.r[29].w[0] + 400u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00183150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183168u);  if (depth < kMaxDepth) unit_0020(c, 141u, depth + 1u); else { c.pc = 0x00181E18u; return; } if (c.pc != 0x00183168u) [[unlikely]] return; }
L_00183168:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00183178:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 4u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001831A4u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001831A4u) [[unlikely]] return; }
L_001831A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001831B0u);  if (depth < kMaxDepth) unit_0084(c, 23u, depth + 1u); else { c.pc = 0x00310390u; return; } if (c.pc != 0x001831B0u) [[unlikely]] return; }
L_001831B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 15780u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001831D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 15788u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001831E8; } }
L_001831D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001831E0u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001831E0u) [[unlikely]] return; }
L_001831E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001831F8; } }
L_001831E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001831F8u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001831F8u) [[unlikely]] return; }
L_001831F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00183364; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 120u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65487ull;
    set32(c.r[5], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 28720u);
    st16((c.r[17].w[0] + 312u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[18], ld32((c.r[17].w[0] + 480u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183234u);  if (depth < kMaxDepth) unit_0028(c, 189u, depth + 1u); else { c.pc = 0x001A2890u; return; } if (c.pc != 0x00183234u) [[unlikely]] return; }
L_00183234:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00183254; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183254u);  if (depth < kMaxDepth) unit_0028(c, 191u, depth + 1u); else { c.pc = 0x001A28C0u; return; } if (c.pc != 0x00183254u) [[unlikely]] return; }
L_00183254:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[1].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    set32(c.r[4], c.r[4].w[0] + 7648u);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = fp::add(c.f[1], c.f[5]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[5]);
    c.f[2] = ld32((c.r[4].w[0] + 24u));
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    c.f[2] = ld32((c.r[4].w[0] + 28u));
    c.f[1] = fp::add(c.f[1], c.f[5]);
    c.f[3] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[2] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[17].w[0] + 192u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    c.f[2] = ld32((c.r[4].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[17].w[0] + 196u), c.f[1]);
    c.budget -= 68;
L_00183364:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00183380:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 15792u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001833B8u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001833B8u) [[unlikely]] return; }
L_001833B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001833C4u);  if (depth < kMaxDepth) unit_0084(c, 23u, depth + 1u); else { c.pc = 0x00310390u; return; } if (c.pc != 0x001833C4u) [[unlikely]] return; }
L_001833C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 15784u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001833F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 15788u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001833F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 15816u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00183420; } }
L_001833F4:
    set32(c.r[18], ld32((c.r[17].w[0] + 480u)));
    set32(c.r[3], 0u + 376u);
    set32(c.r[2], 0u + 192u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183418u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00183418u) [[unlikely]] return; }
L_00183418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001835E0; } }
L_00183420:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183430u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00183430u) [[unlikely]] return; }
L_00183430:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001835E0; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 15792u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[17].w[0] + 312u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 28720u);
    set32(c.r[18], ld32((c.r[17].w[0] + 480u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183460u);  if (depth < kMaxDepth) unit_0028(c, 189u, depth + 1u); else { c.pc = 0x001A2890u; return; } if (c.pc != 0x00183460u) [[unlikely]] return; }
L_00183460:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00183480; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183480u);  if (depth < kMaxDepth) unit_0028(c, 191u, depth + 1u); else { c.pc = 0x001A28C0u; return; } if (c.pc != 0x00183480u) [[unlikely]] return; }
L_00183480:
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    set32(c.r[7], c.r[7].w[0] + 7648u);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[5] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.f[2] = ld32((c.r[7].w[0] + 24u));
    c.f[3] = ld32((c.r[7].w[0] + 8u));
    set32(c.r[19], c.r[2].w[0] + 7580u);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    set32(c.r[10], 0u + 376u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[8], 0u + 192u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    set32(c.r[5], c.r[18].w[0] + 44u);
    set32(c.r[6], 0u + 32u);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.f[2] = ld32((c.r[7].w[0] + 28u));
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[3] = ld32((c.r[7].w[0] + 12u));
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[2] = ld32((c.r[7].w[0] + 24u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[17].w[0] + 192u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    c.f[2] = ld32((c.r[7].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.f[1] = ld32((c.r[7].w[0] + 12u));
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[17].w[0] + 196u), c.f[1]);
    st32((c.r[11].w[0] + 3824u), c.r[10].w[0]);
    st32((c.r[9].w[0] + 3828u), c.r[8].w[0]);
    c.budget -= 81;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001835C4u);  if (depth < kMaxDepth) unit_0044(c, 5u, depth + 1u); else { c.pc = 0x002100D0u; return; } if (c.pc != 0x001835C4u) [[unlikely]] return; }
L_001835C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001835E0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] - 44u);
    set32(c.r[6], 0u + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001835E0u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001835E0u) [[unlikely]] return; }
L_001835E0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00183600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] + 28720u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183620u);  if (depth < kMaxDepth) unit_0028(c, 189u, depth + 1u); else { c.pc = 0x001A2890u; return; } if (c.pc != 0x00183620u) [[unlikely]] return; }
L_00183620:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018374C; } }
    c.f[3] = ld32((c.r[4].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[4].w[0] + 80u));
    set32(c.r[2], c.r[2].w[0] + 7648u);
    c.f[2] = ld32((c.r[4].w[0] + 68u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[0] = ld32((c.r[4].w[0] + 76u));
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.f[4] = c.r[1].w[0];
    c.f[7] = ld32((c.r[3].w[0] + 3824u));
    c.f[7] = fp::cvt_s_w(c.f[7]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[6] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[5] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[8] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    c.f[9] = ld32((c.r[2].w[0] + 24u));
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.f[6] = ld32((c.r[2].w[0] + 8u));
    c.f[10] = ld32((c.r[2].w[0] + 28u));
    c.f[2] = fp::add(c.f[2], c.f[8]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[11] = ld32((c.r[2].w[0] + 12u));
    c.f[4] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[4]);
    set32(c.r[4], ld32((c.r[16].w[0] + 480u)));
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.f[4] = ld32((c.r[6].w[0] + 3828u));
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.f[2] = fp::mul(c.f[2], c.f[9]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[4]);
    c.f[3] = fp::add(c.f[3], c.f[8]);
    fpu_div(c, 7u, c.f[7], c.f[1]);
    c.f[2] = fp::add(c.f[2], c.f[6]);
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.f[1]);
    st32((c.r[16].w[0] + 180u), c.f[0]);
    c.f[3] = fp::mul(c.f[3], c.f[10]);
    st32((c.r[16].w[0] + 176u), c.f[7]);
    st16((c.r[4].w[0] + 100u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = fp::add(c.f[3], c.f[11]);
    set32(c.r[2], ld32((c.r[16].w[0] + 480u)));
    st16((c.r[2].w[0] + 104u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[3]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 480u)));
    st16((c.r[3].w[0] + 102u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 480u)));
    st16((c.r[2].w[0] + 106u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 72;
L_0018374C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00183760:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183790u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00183790u) [[unlikely]] return; }
L_00183790:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018379Cu);  if (depth < kMaxDepth) unit_0084(c, 23u, depth + 1u); else { c.pc = 0x00310390u; return; } if (c.pc != 0x0018379Cu) [[unlikely]] return; }
L_0018379C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 15784u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00183828; } }
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 3832u);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001837E8; } }
    set32(c.r[2], 0u + 127u);
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183874; } }
L_001837E8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00183804; } }
    set32(c.r[2], 0u + 80u);
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183874; } }
L_00183804:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 6744u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00183840; } }
L_00183828:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183838u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00183838u) [[unlikely]] return; }
L_00183838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183944; } }
L_00183840:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00183854; } }
    set32(c.r[2], 0u + 80u);
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00183854:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 15176u);
    set32(c.r[3], c.r[3].w[0] - 15136u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.budget -= 8;
L_00183874:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00183944; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65487ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001838A4u);  if (depth < kMaxDepth) unit_0020(c, 288u, depth + 1u); else { c.pc = 0x00183600u; return; } if (c.pc != 0x001838A4u) [[unlikely]] return; }
L_001838A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 304u)));
    c.f[0] = ld32((c.r[2].w[0] + 3824u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], 0u + 56u);
    set32(c.r[4], c.r[4].w[0] - 10280u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44040000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 480u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    fpu_div(c, 2u, c.f[2], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 100u)));
    set32(c.r[7], 0u + 3u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 180u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 192u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 102u)));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.budget -= 40;
L_00183944:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00183968:
    set32(c.r[29], c.r[29].w[0] - 624u);
    set32(c.r[29], c.r[29].w[0] + 624u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00183978:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 56u), c.f[21]);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183998u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x00183998u) [[unlikely]] return; }
L_00183998:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001839F4; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001839C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001839D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183A48; } }
L_001839C4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183A48; } }
L_001839D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.f[21] = 0u;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001839E4u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x001839E4u) [[unlikely]] return; }
L_001839E4:
    c.f[20] = ld32((c.r[2].w[0] + 920u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183A34; } }
L_001839F4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.f[21] = 0u;
    set32(c.r[16], c.r[16].w[0] + 9872u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183A0Cu);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x00183A0Cu) [[unlikely]] return; }
L_00183A0C:
    set32(c.r[17], ld32((c.r[2].w[0] + 920u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183A1Cu);  if (depth < kMaxDepth) unit_0062(c, 75u, depth + 1u); else { c.pc = 0x00289778u; return; } if (c.pc != 0x00183A1Cu) [[unlikely]] return; }
L_00183A1C:
    c.f[1] = c.r[17].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 920u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[20] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
L_00183A34:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183A40u);  if (depth < kMaxDepth) unit_003A(c, 147u, depth + 1u); else { c.pc = 0x001E9100u; return; } if (c.pc != 0x00183A40u) [[unlikely]] return; }
L_00183A40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183A78; } }
L_00183A48:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], c.r[16].w[0] + 9872u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183A5Cu);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x00183A5Cu) [[unlikely]] return; }
L_00183A5C:
    c.f[20] = ld32((c.r[2].w[0] + 920u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183A70u);  if (depth < kMaxDepth) unit_0062(c, 75u, depth + 1u); else { c.pc = 0x00289778u; return; } if (c.pc != 0x00183A70u) [[unlikely]] return; }
L_00183A70:
    c.f[21] = ld32((c.r[2].w[0] + 920u));
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.budget -= 2;
L_00183A78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[0] = ld32((c.r[2].w[0] - 17572u));
    set32(c.r[5], c.r[2].w[0] - 17572u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], c.r[3].w[0] + 3888u);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    set32(c.r[4], c.r[2].w[0] + 3780u);
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00183AF8; } }
    c.f[0] = ld32((c.r[3].w[0] + 3888u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00183AF8; } }
    c.f[0] = ld32((c.r[2].w[0] + 3780u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    st32((c.r[2].w[0] + 3780u), c.f[0]);
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00183B04; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[2].w[0] + 3776u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183B04; } }
L_00183AF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[2].w[0] + 3776u), 0u);
    c.budget -= 3;
L_00183B04:
    c.f[2] = ld32((c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00183B30; } }
    st32((c.r[5].w[0]), c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183B44; } }
L_00183B30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[0] = ld32((c.r[2].w[0] + 3776u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 5;
L_00183B44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[0] = ld32((c.r[2].w[0] - 17568u));
    set32(c.r[5], c.r[2].w[0] - 17568u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[8], c.r[3].w[0] + 3892u);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    set32(c.r[4], c.r[2].w[0] + 3784u);
    st32((c.r[6].w[0]), c.f[20]);
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00183BC8; } }
    c.f[0] = ld32((c.r[3].w[0] + 3892u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00183BC8; } }
    c.f[0] = ld32((c.r[2].w[0] + 3784u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    st32((c.r[2].w[0] + 3784u), c.f[0]);
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00183BD4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[2].w[0] + 3776u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183BD4; } }
L_00183BC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[2].w[0] + 3776u), 0u);
    c.budget -= 3;
L_00183BD4:
    c.f[2] = ld32((c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[21]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00183C00; } }
    st32((c.r[5].w[0]), c.f[21]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183C14; } }
L_00183C00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[0] = ld32((c.r[2].w[0] + 3776u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 5;
L_00183C14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[0] = ld32((c.r[5].w[0] - 17556u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[8].w[0]), c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    set32(c.r[7], c.r[2].w[0] + 3896u);
    set32(c.r[6], c.r[5].w[0] - 17556u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[4].w[0] - 17564u), c.f[20]);
    st32((c.r[3].w[0] - 17560u), c.f[21]);
    c.f[4] = 0u;
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00183C8C; } }
    c.f[0] = ld32((c.r[2].w[0] + 3796u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    st32((c.r[2].w[0] + 3796u), c.f[0]);
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00183C94; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[4] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183C94; } }
L_00183C8C:
    st32((c.r[5].w[0] - 17556u), c.f[20]);
    st32((c.r[2].w[0] + 3796u), c.f[4]);
    c.budget -= 2;
L_00183C94:
    c.f[3] = ld32((c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[2] = fp::sub(c.f[3], c.f[20]);
    c.f[0] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00183CC4; } }
    st32((c.r[6].w[0]), c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183CD0; } }
L_00183CC4:
    c.f[0] = fp::mul(c.f[2], c.f[4]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 3;
L_00183CD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[0] = ld32((c.r[3].w[0] - 17552u));
    set32(c.r[5], c.r[3].w[0] - 17552u);
    set32(c.r[2], c.r[2].w[0] + 3900u);
    st32((c.r[7].w[0]), c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[4] = 0u;
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00183D38; } }
    c.f[0] = ld32((c.r[4].w[0] + 3800u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    st32((c.r[4].w[0] + 3800u), c.f[0]);
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00183D40; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[4] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183D40; } }
L_00183D38:
    st32((c.r[3].w[0] - 17552u), c.f[21]);
    st32((c.r[4].w[0] + 3800u), c.f[4]);
    c.budget -= 2;
L_00183D40:
    c.f[3] = ld32((c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[2] = fp::sub(c.f[3], c.f[21]);
    c.f[0] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00183D70; } }
    st32((c.r[5].w[0]), c.f[21]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183D7C; } }
L_00183D70:
    c.f[0] = fp::mul(c.f[2], c.f[4]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 3;
L_00183D7C:
    st32((c.r[2].w[0]), c.f[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 56u));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00183DA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 25932u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00183EF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183DC0u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x00183DC0u) [[unlikely]] return; }
L_00183DC0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00183DE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[2].w[0] - 17384u), 0u);
    st32((c.r[3].w[0] - 17380u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183EF8; } }
L_00183DE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[1] = ld32((c.r[2].w[0] + 3760u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[0] = ld32((c.r[3].w[0] + 3764u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[3] = ld32((c.r[7].w[0] + 3736u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[2] = ld32((c.r[2].w[0] + 3740u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], ld32((c.r[5].w[0] + 3752u)));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    set32(c.r[2], 0u + 1u);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[3].w[0] - 17384u), c.f[1]);
    st32((c.r[4].w[0] - 17380u), c.f[0]);
    c.budget -= 27;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00183EC4; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00183E84; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[7].w[0] + 3736u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183EF8; } }
L_00183E84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[1] = ld32((c.r[2].w[0] + 3732u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00183EB8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[5].w[0] + 3752u), c.r[6].w[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 3732u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183EF8; } }
L_00183EB8:
    st32((c.r[5].w[0] + 3752u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183EF8; } }
L_00183EC4:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00183EF8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[7].w[0] + 3736u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183EF8; } }
L_00183EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183EF8u);  if (depth < kMaxDepth) unit_0023(c, 72u, depth + 1u); else { c.pc = 0x0018D208u; return; } if (c.pc != 0x00183EF8u) [[unlikely]] return; }
L_00183EF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00183F08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[1] = ld32((c.r[2].w[0] + 3768u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[0] = ld32((c.r[3].w[0] + 3772u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[3] = ld32((c.r[6].w[0] + 3744u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[2] = ld32((c.r[2].w[0] + 3748u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    set32(c.r[5], ld32((c.r[3].w[0] + 3756u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    set32(c.r[2], 0u + 1u);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[4].w[0] - 17376u), c.f[1]);
    st32((c.r[3].w[0] - 17372u), c.f[0]);
    c.budget -= 27;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00183FA8; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00183FCC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[6].w[0] + 3744u), c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00183FA8:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00183FCC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[6].w[0] + 3744u), c.f[0]);
    c.budget -= 5;
L_00183FCC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00183FD8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.budget -= 10;
    [[clang::musttail]] return unit_0021(c, 1u, depth);
}

}
