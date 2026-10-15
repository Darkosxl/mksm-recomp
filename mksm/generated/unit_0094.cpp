#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0094[4096] = {
    1, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 8, 0, 9, 0, 10, 0,
    0, 0, 11, 0, 12, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 22, 0, 0,
    0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0,
    0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0,
    0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0,
    0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0,
    0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0,
    0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0,
    0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0,
    0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222,
    0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 227, 0, 0, 228, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0,
    0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0,
    0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 279, 280, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0,
    0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0,
    0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 310, 0, 0,
    0, 0, 311, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0,
    0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334,
    0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0,
    0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0,
    0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0,
    0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 384, 0, 385, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0,
};

void unit_0094(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00350000;
    case 2u: goto L_00350004;
    case 3u: goto L_0035001C;
    case 4u: goto L_00350038;
    case 5u: goto L_00350048;
    case 6u: goto L_00350050;
    case 7u: goto L_00350058;
    case 8u: goto L_00350068;
    case 9u: goto L_00350070;
    case 10u: goto L_00350078;
    case 11u: goto L_00350088;
    case 12u: goto L_00350090;
    case 13u: goto L_00350098;
    case 14u: goto L_003500A8;
    case 15u: goto L_003500E0;
    case 16u: goto L_00350100;
    case 17u: goto L_00350118;
    case 18u: goto L_00350144;
    case 19u: goto L_00350154;
    case 20u: goto L_0035015C;
    case 21u: goto L_0035016C;
    case 22u: goto L_00350174;
    case 23u: goto L_00350184;
    case 24u: goto L_0035018C;
    case 25u: goto L_00350194;
    case 26u: goto L_003501C8;
    case 27u: goto L_0035022C;
    case 28u: goto L_0035040C;
    case 29u: goto L_0035041C;
    case 30u: goto L_003504E0;
    case 31u: goto L_003504F8;
    case 32u: goto L_0035050C;
    case 33u: goto L_00350558;
    case 34u: goto L_003505A8;
    case 35u: goto L_003505B8;
    case 36u: goto L_003505C8;
    case 37u: goto L_003505DC;
    case 38u: goto L_00350630;
    case 39u: goto L_00350664;
    case 40u: goto L_00350674;
    case 41u: goto L_00350684;
    case 42u: goto L_00350694;
    case 43u: goto L_003506F8;
    case 44u: goto L_00350740;
    case 45u: goto L_00350770;
    case 46u: goto L_0035078C;
    case 47u: goto L_003507A8;
    case 48u: goto L_003507E0;
    case 49u: goto L_00350820;
    case 50u: goto L_00350830;
    case 51u: goto L_00350878;
    case 52u: goto L_003508C8;
    case 53u: goto L_003508F8;
    case 54u: goto L_00350928;
    case 55u: goto L_00350938;
    case 56u: goto L_00350998;
    case 57u: goto L_003509E8;
    case 58u: goto L_00350A18;
    case 59u: goto L_00350A3C;
    case 60u: goto L_00350A4C;
    case 61u: goto L_00350A90;
    case 62u: goto L_00350AE0;
    case 63u: goto L_00350B10;
    case 64u: goto L_00350B38;
    case 65u: goto L_00350C04;
    case 66u: goto L_00350C58;
    case 67u: goto L_00350C80;
    case 68u: goto L_00350CA4;
    case 69u: goto L_00350CC0;
    case 70u: goto L_00350EEC;
    case 71u: goto L_00350F30;
    case 72u: goto L_00350F40;
    case 73u: goto L_00350F5C;
    case 74u: goto L_00350F70;
    case 75u: goto L_00350FE0;
    case 76u: goto L_00351014;
    case 77u: goto L_00351050;
    case 78u: goto L_00351060;
    case 79u: goto L_00351080;
    case 80u: goto L_003510AC;
    case 81u: goto L_003510C8;
    case 82u: goto L_003510F4;
    case 83u: goto L_00351110;
    case 84u: goto L_00351128;
    case 85u: goto L_00351168;
    case 86u: goto L_003511A0;
    case 87u: goto L_00351248;
    case 88u: goto L_00351258;
    case 89u: goto L_0035127C;
    case 90u: goto L_003512A8;
    case 91u: goto L_003512C0;
    case 92u: goto L_003512E0;
    case 93u: goto L_003512F0;
    case 94u: goto L_00351368;
    case 95u: goto L_0035139C;
    case 96u: goto L_003513B8;
    case 97u: goto L_003513E8;
    case 98u: goto L_00351440;
    case 99u: goto L_003514F0;
    case 100u: goto L_00351524;
    case 101u: goto L_00351540;
    case 102u: goto L_00351578;
    case 103u: goto L_003515C8;
    case 104u: goto L_003515FC;
    case 105u: goto L_00351610;
    case 106u: goto L_00351630;
    case 107u: goto L_00351648;
    case 108u: goto L_00351664;
    case 109u: goto L_00351678;
    case 110u: goto L_00351698;
    case 111u: goto L_003516A8;
    case 112u: goto L_003516B8;
    case 113u: goto L_003516F0;
    case 114u: goto L_00351710;
    case 115u: goto L_00351728;
    case 116u: goto L_00351758;
    case 117u: goto L_00351770;
    case 118u: goto L_00351784;
    case 119u: goto L_00351798;
    case 120u: goto L_003517D4;
    case 121u: goto L_00351808;
    case 122u: goto L_00351850;
    case 123u: goto L_00351860;
    case 124u: goto L_00351890;
    case 125u: goto L_003518A8;
    case 126u: goto L_003518BC;
    case 127u: goto L_003518DC;
    case 128u: goto L_003518F0;
    case 129u: goto L_00351918;
    case 130u: goto L_00351950;
    case 131u: goto L_00351970;
    case 132u: goto L_00351988;
    case 133u: goto L_003519B8;
    case 134u: goto L_003519D0;
    case 135u: goto L_003519E4;
    case 136u: goto L_003519F8;
    case 137u: goto L_00351A34;
    case 138u: goto L_00351A68;
    case 139u: goto L_00351A90;
    case 140u: goto L_00351AA0;
    case 141u: goto L_00351ACC;
    case 142u: goto L_00351AD8;
    case 143u: goto L_00351B0C;
    case 144u: goto L_00351B18;
    case 145u: goto L_00351B28;
    case 146u: goto L_00351B40;
    case 147u: goto L_00351B58;
    case 148u: goto L_00351B68;
    case 149u: goto L_00351B98;
    case 150u: goto L_00351BB0;
    case 151u: goto L_00351BC0;
    case 152u: goto L_00351BE0;
    case 153u: goto L_00351C0C;
    case 154u: goto L_00351C18;
    case 155u: goto L_00351C30;
    case 156u: goto L_00351C48;
    case 157u: goto L_00351C68;
    case 158u: goto L_00351C8C;
    case 159u: goto L_00351CA8;
    case 160u: goto L_00351CB8;
    case 161u: goto L_00351CDC;
    case 162u: goto L_00351D18;
    case 163u: goto L_00351D30;
    case 164u: goto L_00351D40;
    case 165u: goto L_00351D70;
    case 166u: goto L_00351D98;
    case 167u: goto L_00351DC4;
    case 168u: goto L_00351DD0;
    case 169u: goto L_00351DF8;
    case 170u: goto L_00351E08;
    case 171u: goto L_00351E20;
    case 172u: goto L_00351E38;
    case 173u: goto L_00351E58;
    case 174u: goto L_00351E68;
    case 175u: goto L_00351E88;
    case 176u: goto L_00351E98;
    case 177u: goto L_00351EB0;
    case 178u: goto L_00351EC0;
    case 179u: goto L_00351ED8;
    case 180u: goto L_00351EE8;
    case 181u: goto L_00351FCC;
    case 182u: goto L_00351FF8;
    case 183u: goto L_0035202C;
    case 184u: goto L_00352070;
    case 185u: goto L_00352088;
    case 186u: goto L_00352100;
    case 187u: goto L_00352120;
    case 188u: goto L_00352160;
    case 189u: goto L_003521AC;
    case 190u: goto L_003521D4;
    case 191u: goto L_00352284;
    case 192u: goto L_003522B8;
    case 193u: goto L_0035231C;
    case 194u: goto L_00352368;
    case 195u: goto L_0035239C;
    case 196u: goto L_00352404;
    case 197u: goto L_0035243C;
    case 198u: goto L_003524B0;
    case 199u: goto L_0035250C;
    case 200u: goto L_003525B8;
    case 201u: goto L_003525CC;
    case 202u: goto L_00352624;
    case 203u: goto L_0035269C;
    case 204u: goto L_003526E4;
    case 205u: goto L_00352704;
    case 206u: goto L_00352738;
    case 207u: goto L_00352778;
    case 208u: goto L_00352790;
    case 209u: goto L_003527B8;
    case 210u: goto L_003527F8;
    case 211u: goto L_00352818;
    case 212u: goto L_00352858;
    case 213u: goto L_00352868;
    case 214u: goto L_00352898;
    case 215u: goto L_003528E4;
    case 216u: goto L_003528F0;
    case 217u: goto L_0035293C;
    case 218u: goto L_00352948;
    case 219u: goto L_00352998;
    case 220u: goto L_003529A4;
    case 221u: goto L_003529F4;
    case 222u: goto L_003529FC;
    case 223u: goto L_00352A10;
    case 224u: goto L_00352A1C;
    case 225u: goto L_00352A30;
    case 226u: goto L_00352A3C;
    case 227u: goto L_00352A8C;
    case 228u: goto L_00352A98;
    case 229u: goto L_00352A9C;
    case 230u: goto L_00352AC0;
    case 231u: goto L_00352AD8;
    case 232u: goto L_00352AE8;
    case 233u: goto L_00352AF8;
    case 234u: goto L_00352B18;
    case 235u: goto L_00352B28;
    case 236u: goto L_00352B54;
    case 237u: goto L_00352B80;
    case 238u: goto L_00352B98;
    case 239u: goto L_00352BB0;
    case 240u: goto L_00352BC8;
    case 241u: goto L_00352BE0;
    case 242u: goto L_00352BF8;
    case 243u: goto L_00352C10;
    case 244u: goto L_00352C28;
    case 245u: goto L_00352C48;
    case 246u: goto L_00352C88;
    case 247u: goto L_00352CF4;
    case 248u: goto L_00352D54;
    case 249u: goto L_00352D74;
    case 250u: goto L_00352D80;
    case 251u: goto L_00352DA0;
    case 252u: goto L_00352DC4;
    case 253u: goto L_00352DD8;
    case 254u: goto L_00352DE8;
    case 255u: goto L_00352E14;
    case 256u: goto L_00352E44;
    case 257u: goto L_00352E58;
    case 258u: goto L_00352E78;
    case 259u: goto L_00352E88;
    case 260u: goto L_00352EB4;
    case 261u: goto L_00352EC8;
    case 262u: goto L_00352EDC;
    case 263u: goto L_00352EEC;
    case 264u: goto L_00352F34;
    case 265u: goto L_00352F80;
    case 266u: goto L_00352FC0;
    case 267u: goto L_00352FE0;
    case 268u: goto L_00352FEC;
    case 269u: goto L_0035300C;
    case 270u: goto L_00353020;
    case 271u: goto L_00353030;
    case 272u: goto L_00353038;
    case 273u: goto L_00353048;
    case 274u: goto L_00353078;
    case 275u: goto L_003530B0;
    case 276u: goto L_003530D0;
    case 277u: goto L_003530E0;
    case 278u: goto L_00353110;
    case 279u: goto L_00353120;
    case 280u: goto L_00353124;
    case 281u: goto L_00353130;
    case 282u: goto L_00353138;
    case 283u: goto L_00353168;
    case 284u: goto L_003531D8;
    case 285u: goto L_00353208;
    case 286u: goto L_00353230;
    case 287u: goto L_00353238;
    case 288u: goto L_0035324C;
    case 289u: goto L_0035326C;
    case 290u: goto L_00353278;
    case 291u: goto L_0035328C;
    case 292u: goto L_003532E8;
    case 293u: goto L_00353308;
    case 294u: goto L_00353328;
    case 295u: goto L_00353338;
    case 296u: goto L_00353340;
    case 297u: goto L_00353358;
    case 298u: goto L_00353368;
    case 299u: goto L_003533B0;
    case 300u: goto L_003533E8;
    case 301u: goto L_003533FC;
    case 302u: goto L_00353410;
    case 303u: goto L_00353424;
    case 304u: goto L_00353440;
    case 305u: goto L_003534A8;
    case 306u: goto L_003534B4;
    case 307u: goto L_003534C4;
    case 308u: goto L_003534D8;
    case 309u: goto L_003534E8;
    case 310u: goto L_003534F4;
    case 311u: goto L_00353508;
    case 312u: goto L_00353514;
    case 313u: goto L_00353524;
    case 314u: goto L_00353534;
    case 315u: goto L_00353570;
    case 316u: goto L_003535A0;
    case 317u: goto L_003535D8;
    case 318u: goto L_00353604;
    case 319u: goto L_00353640;
    case 320u: goto L_00353650;
    case 321u: goto L_00353670;
    case 322u: goto L_003536C0;
    case 323u: goto L_003536D0;
    case 324u: goto L_003536E4;
    case 325u: goto L_00353708;
    case 326u: goto L_00353748;
    case 327u: goto L_00353788;
    case 328u: goto L_0035379C;
    case 329u: goto L_003537E0;
    case 330u: goto L_00353828;
    case 331u: goto L_00353838;
    case 332u: goto L_00353840;
    case 333u: goto L_00353858;
    case 334u: goto L_0035387C;
    case 335u: goto L_003538A0;
    case 336u: goto L_003538A8;
    case 337u: goto L_003538C0;
    case 338u: goto L_003538E4;
    case 339u: goto L_00353908;
    case 340u: goto L_00353920;
    case 341u: goto L_00353930;
    case 342u: goto L_00353938;
    case 343u: goto L_00353954;
    case 344u: goto L_00353968;
    case 345u: goto L_003539A0;
    case 346u: goto L_003539EC;
    case 347u: goto L_00353A08;
    case 348u: goto L_00353A40;
    case 349u: goto L_00353A70;
    case 350u: goto L_00353A88;
    case 351u: goto L_00353A98;
    case 352u: goto L_00353AB0;
    case 353u: goto L_00353AD0;
    case 354u: goto L_00353AF0;
    case 355u: goto L_00353B38;
    case 356u: goto L_00353B58;
    case 357u: goto L_00353BA0;
    case 358u: goto L_00353BC0;
    case 359u: goto L_00353C08;
    case 360u: goto L_00353C28;
    case 361u: goto L_00353C50;
    case 362u: goto L_00353C5C;
    case 363u: goto L_00353C90;
    case 364u: goto L_00353CB4;
    case 365u: goto L_00353CC0;
    case 366u: goto L_00353CD0;
    case 367u: goto L_00353D00;
    case 368u: goto L_00353D18;
    case 369u: goto L_00353D38;
    case 370u: goto L_00353D60;
    case 371u: goto L_00353D70;
    case 372u: goto L_00353DA0;
    case 373u: goto L_00353DCC;
    case 374u: goto L_00353E08;
    case 375u: goto L_00353E30;
    case 376u: goto L_00353E40;
    case 377u: goto L_00353E70;
    case 378u: goto L_00353E9C;
    case 379u: goto L_00353ED8;
    case 380u: goto L_00353F00;
    case 381u: goto L_00353F10;
    case 382u: goto L_00353F38;
    case 383u: goto L_00353F48;
    case 384u: goto L_00353F88;
    case 385u: goto L_00353F90;
    case 386u: goto L_00353F98;
    case 387u: goto L_00353FD0;
    case 388u: goto L_00353FF0;
    default: bad_entry(c, 0x00350000u); return;
    }
L_00350000:
    st32((c.r[29].w[0] + 16u), c.f[3]);
    c.budget -= 1;
L_00350004:
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[16], c.r[29].w[0] + 32u);
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035001Cu);  if (depth < kMaxDepth) unit_008B(c, 182u, depth + 1u); else { c.pc = 0x0032DBF0u; return; } if (c.pc != 0x0035001Cu) [[unlikely]] return; }
L_0035001C:
    set32(c.r[20], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350038u);  if (depth < kMaxDepth) unit_008B(c, 230u, depth + 1u); else { c.pc = 0x0032E4B8u; return; } if (c.pc != 0x00350038u) [[unlikely]] return; }
L_00350038:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350048u);  if (depth < kMaxDepth) unit_008B(c, 229u, depth + 1u); else { c.pc = 0x0032E3F8u; return; } if (c.pc != 0x00350048u) [[unlikely]] return; }
L_00350048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00350058; } }
L_00350050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350058u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00350058u) [[unlikely]] return; }
L_00350058:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350068u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x00350068u) [[unlikely]] return; }
L_00350068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00350078; } }
L_00350070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350078u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00350078u) [[unlikely]] return; }
L_00350078:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350088u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x00350088u) [[unlikely]] return; }
L_00350088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00350098; } }
L_00350090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350098u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00350098u) [[unlikely]] return; }
L_00350098:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003500A8u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x003500A8u) [[unlikely]] return; }
L_003500A8:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00350130; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003500E0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x003500E0u) [[unlikely]] return; }
L_003500E0:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.f[14] = ld32((c.r[19].w[0] + 8u));
    c.f[12] = ld32((c.r[19].w[0]));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[19].w[0] + 4u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350100u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00350100u) [[unlikely]] return; }
L_00350100:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[21];
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350118u);  if (depth < kMaxDepth) unit_008B(c, 93u, depth + 1u); else { c.pc = 0x0032CB98u; return; } if (c.pc != 0x00350118u) [[unlikely]] return; }
L_00350118:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[2] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[2]);
    c.budget -= 6;
L_00350130:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00350194; } }
L_00350144:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350154u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x00350154u) [[unlikely]] return; }
L_00350154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00350050u | kUnwind; return; } goto L_00350050; } }
L_0035015C:
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035016Cu);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0035016Cu) [[unlikely]] return; }
L_0035016C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00350070u | kUnwind; return; } goto L_00350070; } }
L_00350174:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350184u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x00350184u) [[unlikely]] return; }
L_00350184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00350090u | kUnwind; return; } goto L_00350090; } }
L_0035018C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350194u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x00350194u) [[unlikely]] return; }
L_00350194:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 200u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003501C8:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[21]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[17]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 336u), c.f[22]);
    st32((c.r[29].w[0] + 328u), c.f[21]);
    st32((c.r[29].w[0] + 320u), c.f[20]);
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035022C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0035022C; } }
    set32(c.r[4], c.r[4].w[0] + 128u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035022Cu);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x0035022Cu) [[unlikely]] return; }
L_0035022C:
    set32(c.r[20], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[2], 0u + 4u);
    c.f[6] = ld32((c.r[20].w[0] + 12u));
    c.f[7] = ld32((c.r[20].w[0] + 16u));
    c.f[8] = ld32((c.r[20].w[0] + 20u));
    c.f[0] = ld32((c.r[20].w[0] + 24u));
    c.f[1] = ld32((c.r[20].w[0] + 28u));
    c.f[2] = ld32((c.r[20].w[0] + 32u));
    c.f[3] = ld32((c.r[20].w[0] + 36u));
    c.f[4] = ld32((c.r[20].w[0] + 40u));
    c.f[5] = ld32((c.r[20].w[0] + 44u));
    st32((c.r[20].w[0] + 60u), c.f[0]);
    st32((c.r[20].w[0] + 64u), c.f[1]);
    st32((c.r[20].w[0] + 68u), c.f[2]);
    st32((c.r[20].w[0] + 72u), c.f[3]);
    st32((c.r[20].w[0] + 76u), c.f[4]);
    st32((c.r[20].w[0] + 80u), c.f[5]);
    st32((c.r[20].w[0] + 84u), c.f[6]);
    st32((c.r[20].w[0] + 88u), c.f[7]);
    st32((c.r[20].w[0] + 92u), c.f[8]);
    st32((c.r[20].w[0] + 48u), c.f[6]);
    st32((c.r[20].w[0] + 52u), c.f[7]);
    st32((c.r[20].w[0] + 56u), c.f[8]);
    set32(c.r[3], ld32((c.r[21].w[0] + 160u)));
    c.budget -= 26;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00350314; } }
    c.f[0] = ld32((c.r[21].w[0] + 196u));
    c.f[1] = 0u;
    c.f[3] = c.f[0];
    c.f[2] = ld32((c.r[21].w[0] + 192u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003502E0; } }
    c.f[1] = ld32((c.r[21].w[0] + 164u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003502E0; } }
    c.f[0] = c.f[3] ^ fp::kSign;
    st32((c.r[21].w[0] + 192u), c.f[1]);
    st32((c.r[21].w[0] + 196u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003503CC; } }
L_003502E0:
    c.f[0] = ld32((c.r[20].w[0] + 228u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003503CC; } }
    c.f[0] = c.f[3] ^ fp::kSign;
    c.f[1] = fp::add(c.f[0], c.f[0]);
    st32((c.r[21].w[0] + 196u), c.f[0]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[21].w[0] + 192u), c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003503CC; } }
L_00350314:
    c.f[0] = ld32((c.r[20].w[0] + 228u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = ld32((c.r[21].w[0] + 192u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00350348; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003503CC; } }
L_00350348:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00350378; } }
    c.f[1] = ld32((c.r[21].w[0] + 196u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = fp::add(c.f[1], c.f[1]);
    st32((c.r[21].w[0] + 196u), c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00350394; } }
L_00350378:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003503A4; } }
    c.f[0] = ld32((c.r[21].w[0] + 164u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_00350394:
    st32((c.r[21].w[0] + 192u), c.f[0]);
    st32((c.r[3].w[0] + 6380u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003503CC; } }
L_003503A4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003503C4; } }
    st32((c.r[21].w[0] + 192u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 6380u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003503CC; } }
L_003503C4:
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_003503CC:
    set32(c.r[2], ld32((c.r[21].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003506C4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003503F4; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 160u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003503F4; } }
    st32((c.r[21].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 1;
L_003503F4:
    c.f[0] = ld32((c.r[21].w[0] + 192u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[20].w[0] + 4u), c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035040Cu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x0035040Cu) [[unlikely]] return; }
L_0035040C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035041Cu);  if (depth < kMaxDepth) unit_0093(c, 398u, depth + 1u); else { c.pc = 0x0034FDB0u; return; } if (c.pc != 0x0035041Cu) [[unlikely]] return; }
L_0035041C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[22] = ld32((c.r[20].w[0] + 36u));
    c.f[20] = ld32((c.r[20].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[22]) == fp::key(c.f[0]));
    c.f[21] = ld32((c.r[20].w[0] + 44u));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0035045C; } }
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0035045C; } }
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00350560; } }
L_0035045C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[22]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003504AC; } }
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003504AC; } }
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003504AC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[20] = c.r[1].w[0];
    c.f[22] = c.f[20];
    c.f[21] = c.f[20];
    c.budget -= 6;
L_003504AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[18], c.r[29].w[0] + 80u);
    set32(c.r[17], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.f[22]);
    st32((c.r[29].w[0] + 76u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 68u), c.f[20]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 72u), c.f[21]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003504E0u);  if (depth < kMaxDepth) unit_0045(c, 70u, depth + 1u); else { c.pc = 0x00215720u; return; } if (c.pc != 0x003504E0u) [[unlikely]] return; }
L_003504E0:
    set32(c.r[16], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003504F8u);  if (depth < kMaxDepth) unit_0044(c, 285u, depth + 1u); else { c.pc = 0x00213E88u; return; } if (c.pc != 0x003504F8u) [[unlikely]] return; }
L_003504F8:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035050Cu);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x0035050Cu) [[unlikely]] return; }
L_0035050C:
    c.f[2] = ld32((c.r[20].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[20].w[0] + 76u));
    set32(c.r[2], c.r[2].w[0] - 6080u);
    c.f[0] = ld32((c.r[20].w[0] + 80u));
    c.f[2] = fp::sub(c.f[22], c.f[2]);
    c.f[1] = fp::sub(c.f[20], c.f[1]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    set32(c.r[4], c.r[19].w[0] + 14208u);
    st32((c.r[20].w[0] + 72u), c.f[2]);
    st32((c.r[20].w[0] + 76u), c.f[1]);
    st32((c.r[20].w[0] + 80u), c.f[0]);
    st32((c.r[2].w[0] + 176u), c.f[22]);
    st32((c.r[2].w[0] + 180u), c.f[20]);
    st32((c.r[2].w[0] + 184u), c.f[21]);
    set32(c.r[6], ld32((c.r[21].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350558u);  if (depth < kMaxDepth) unit_0049(c, 9u, depth + 1u); else { c.pc = 0x002243F0u; return; } if (c.pc != 0x00350558u) [[unlikely]] return; }
L_00350558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00350578; } }
L_00350560:
    c.f[0] = 0u;
    set32(c.r[17], c.r[29].w[0] + 64u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[20].w[0] + 72u), c.f[0]);
    st32((c.r[20].w[0] + 80u), c.f[0]);
    st32((c.r[20].w[0] + 76u), c.f[0]);
    c.budget -= 6;
L_00350578:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003505E4; } }
    c.f[12] = ld32((c.r[20].w[0] + 12u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = ld32((c.r[20].w[0] + 16u));
    c.f[14] = ld32((c.r[20].w[0] + 20u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003505A8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x003505A8u) [[unlikely]] return; }
L_003505A8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003505B8u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x003505B8u) [[unlikely]] return; }
L_003505B8:
    set32(c.r[5], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], c.r[18].w[0] + 14208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003505C8u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x003505C8u) [[unlikely]] return; }
L_003505C8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003505DCu);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x003505DCu) [[unlikely]] return; }
L_003505DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00350630; } }
L_003505E4:
    c.f[0] = ld32((c.r[20].w[0] + 12u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[21].w[0] + 32u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[2] = ld32((c.r[21].w[0] + 36u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[21].w[0] + 40u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 16u));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[2]);
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    st32((c.r[29].w[0] + 76u), c.f[4]);
    c.f[3] = fp::add(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 72u), c.f[3]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350630u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x00350630u) [[unlikely]] return; }
L_00350630:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[17], c.r[18].w[0] + 14208u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[20].w[0] + 12u), c.f[0]);
    set32(c.r[16], c.r[20].w[0] + 160u);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[20].w[0] + 20u), c.f[1]);
    set32(c.r[6], ld32((c.r[21].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350664u);  if (depth < kMaxDepth) unit_0049(c, 109u, depth + 1u); else { c.pc = 0x00225818u; return; } if (c.pc != 0x00350664u) [[unlikely]] return; }
L_00350664:
    set32(c.r[4], c.r[20].w[0] + 96u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350674u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x00350674u) [[unlikely]] return; }
L_00350674:
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350684u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x00350684u) [[unlikely]] return; }
L_00350684:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350694u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x00350694u) [[unlikely]] return; }
L_00350694:
    c.f[3] = ld32((c.r[20].w[0] + 84u));
    c.f[1] = ld32((c.r[20].w[0] + 12u));
    c.f[2] = ld32((c.r[20].w[0] + 16u));
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[4] = ld32((c.r[20].w[0] + 88u));
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    c.f[3] = ld32((c.r[20].w[0] + 92u));
    c.f[2] = fp::sub(c.f[2], c.f[4]);
    st32((c.r[20].w[0] + 48u), c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    st32((c.r[20].w[0] + 52u), c.f[2]);
    st32((c.r[20].w[0] + 56u), c.f[0]);
    c.budget -= 12;
L_003506C4:
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.f[22] = ld32((c.r[29].w[0] + 336u));
    c.f[21] = ld32((c.r[29].w[0] + 328u));
    c.f[20] = ld32((c.r[29].w[0] + 320u));
    set32(c.r[29], c.r[29].w[0] + 352u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003506F8:
    set32(c.r[29], c.r[29].w[0] - 800u);
    st128((c.r[29].w[0] + 752u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 736u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 704u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 688u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[23]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 720u) & ~15u, c.r[19]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 672u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 624u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 784u), c.f[20]);
    st128((c.r[29].w[0] + 768u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[23].w[0] + 12u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350740u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00350740u) [[unlikely]] return; }
L_00350740:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[20].w[0] + 8u), c.r[16].w[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], c.r[8].w[0] + 2112u);
    set32(c.r[7], c.r[7].w[0] + 2064u);
    set32(c.r[9], 0u + 500u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 256u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350770u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00350770u) [[unlikely]] return; }
L_00350770:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 256u);
    st32((c.r[20].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035078Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0035078Cu) [[unlikely]] return; }
L_0035078C:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 9488u)));
    set32(c.r[5], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[21], c.r[3].w[0] + 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003507A8u);  if (depth < kMaxDepth) unit_0094(c, 154u, depth + 1u); else { c.pc = 0x00351C18u; return; } if (c.pc != 0x003507A8u) [[unlikely]] return; }
L_003507A8:
    set32(c.r[3], 0u - 1u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00350B10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[2].w[0] + 2128u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003507D4; } }
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003507E0; } }
L_003507D4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003507E0u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x003507E0u) [[unlikely]] return; }
L_003507E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 6372u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00350900; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[2].w[0] + 2224u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00350814; } }
    st8((c.r[29].w[0] + 304u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00350820; } }
L_00350814:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350820u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x00350820u) [[unlikely]] return; }
L_00350820:
    set32(c.r[5], c.r[29].w[0] + 304u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350830u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x00350830u) [[unlikely]] return; }
L_00350830:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[8], c.r[29].w[0] + 560u);
    set32(c.r[3], ld32((c.r[2].w[0] + 6376u)));
    set32(c.r[7], c.r[29].w[0] + 304u);
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[9], c.r[3].w[0] >> 31);
    set32(c.r[2], 0u - c.r[3].w[0]);
    if (c.r[9].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00350870; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[5], c.r[29].w[0] + 561u);
    st8((c.r[29].w[0] + 560u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003508A8; } }
L_00350870:
    set32(c.r[4], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00350878:
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[6].d[0]) { breakpoint(c, 0x00350880u);  goto L_00350884; }
L_00350884:
    c.r[2].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 48u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[6].d[0]) { breakpoint(c, 0x00350898u);  goto L_0035089C; }
L_0035089C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00350878u | kUnwind; return; } goto L_00350878; } }
L_003508A8:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_003508BC; } }
    set32(c.r[2], 0u + 45u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_003508BC:
    c.r[2].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003508E4; } }
L_003508C8:
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003508C8u | kUnwind; return; } goto L_003508C8; } }
L_003508E4:
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003508F8u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x003508F8u) [[unlikely]] return; }
L_003508F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00350B10; } }
L_00350900:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[2].w[0] + 2248u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0035091C; } }
    st8((c.r[29].w[0] + 304u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00350928; } }
L_0035091C:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350928u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x00350928u) [[unlikely]] return; }
L_00350928:
    set32(c.r[5], c.r[29].w[0] + 304u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350938u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x00350938u) [[unlikely]] return; }
L_00350938:
    set32(c.r[2], ld32((c.r[16].w[0] + 6372u)));
    set32(c.r[8], c.r[29].w[0] + 560u);
    set32(c.r[7], c.r[29].w[0] + 304u);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[9], c.r[3].w[0] >> 31);
    set32(c.r[2], 0u - c.r[3].w[0]);
    if (c.r[9].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00350984; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[5], c.r[29].w[0] + 561u);
    st8((c.r[29].w[0] + 560u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003509C8; } }
L_00350984:
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_00350998:
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[6].d[0]) { breakpoint(c, 0x003509A0u);  goto L_003509A4; }
L_003509A4:
    c.r[2].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 48u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[6].d[0]) { breakpoint(c, 0x003509B8u);  goto L_003509BC; }
L_003509BC:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00350998u | kUnwind; return; } goto L_00350998; } }
L_003509C8:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_003509DC; } }
    set32(c.r[2], 0u + 45u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_003509DC:
    c.r[2].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00350A04; } }
L_003509E8:
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003509E8u | kUnwind; return; } goto L_003509E8; } }
L_00350A04:
    set32(c.r[5], c.r[29].w[0] + 304u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350A18u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x00350A18u) [[unlikely]] return; }
L_00350A18:
    set32(c.r[5], c.r[19].w[0] + 2264u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00350A30; } }
    st8((c.r[29].w[0] + 304u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00350A3C; } }
L_00350A30:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350A3Cu);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x00350A3Cu) [[unlikely]] return; }
L_00350A3C:
    set32(c.r[5], c.r[29].w[0] + 304u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350A4Cu);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x00350A4Cu) [[unlikely]] return; }
L_00350A4C:
    set32(c.r[3], ld32((c.r[30].w[0] + 6376u)));
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[8], c.r[3].w[0] >> 31);
    set32(c.r[2], 0u - c.r[3].w[0]);
    if (c.r[8].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00350A84; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[5], c.r[29].w[0] + 561u);
    st8((c.r[29].w[0] + 560u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00350AC0; } }
L_00350A84:
    set32(c.r[4], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00350A90:
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[6].d[0]) { breakpoint(c, 0x00350A98u);  goto L_00350A9C; }
L_00350A9C:
    c.r[2].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 48u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[6].d[0]) { breakpoint(c, 0x00350AB0u);  goto L_00350AB4; }
L_00350AB4:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00350A90u | kUnwind; return; } goto L_00350A90; } }
L_00350AC0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00350AD4; } }
    set32(c.r[2], 0u + 45u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_00350AD4:
    c.r[2].d[0] = c.r[16].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00350AFC; } }
L_00350AE0:
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[16].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00350AE0u | kUnwind; return; } goto L_00350AE0; } }
L_00350AFC:
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350B10u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x00350B10u) [[unlikely]] return; }
L_00350B10:
    set32(c.r[2], 0u - 1u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_00350B3C; } }
    set32(c.r[5], ld32((c.r[23].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00350B3C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 9488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350B38u);  if (depth < kMaxDepth) unit_0094(c, 154u, depth + 1u); else { c.pc = 0x00351C18u; return; } if (c.pc != 0x00350B38u) [[unlikely]] return; }
L_00350B38:
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_00350B3C:
    set32(c.r[3], ld32((c.r[23].w[0] + 20u)));
    set32(c.r[5], 0u + 8u);
    c.r[22].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[23].w[0] + 24u)));
    st32((c.r[20].w[0] + 180u), 0u);
    st32((c.r[20].w[0] + 164u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 188u), 0u);
    set32(c.r[30], ld32((c.r[23].w[0])));
    st16((c.r[21].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[19], c.r[23].w[0] + c.r[30].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00350B90; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[22], 0u + 12u);
    set32(c.r[5], 0u + 20u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 6;
L_00350B90:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00350BB8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[22], c.r[22].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 6;
L_00350BB8:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00350BE0; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[22], c.r[22].w[0] + 12u);
    set32(c.r[5], c.r[5].w[0] + 12u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 6;
L_00350BE0:
    set32(c.r[17], c.r[18].w[0] + 2064u);
    set32(c.r[2], ld32((c.r[23].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[3].w[0] + 2296u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[30], c.r[3].w[0] + c.r[30].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350C04u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00350C04u) [[unlikely]] return; }
L_00350C04:
    set32(c.r[3], 0u + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[21].w[0] + 8u), 0u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    st16((c.r[21].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[9], 0u + 642u);
    set32(c.r[2], ld32((c.r[23].w[0] + 16u)));
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[22].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    mmi::mult(c, 0, c.r[22].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350C58u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00350C58u) [[unlikely]] return; }
L_00350C58:
    st32((c.r[21].w[0] + 16u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[9], 0u + 643u);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350C80u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00350C80u) [[unlikely]] return; }
L_00350C80:
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 16u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[20].w[0] + 8u)));
    mmi::mult(c, 0, c.r[22].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350CA4u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x00350CA4u) [[unlikely]] return; }
L_00350CA4:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00350EAC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
L_00350CC0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 12u)));
    set32(c.r[5], c.r[19].w[0] + 8u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 2u));
    set32(c.r[4], ld32((c.r[21].w[0] + 16u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1u));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00350D40; } }
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[29].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 12u), c.f[3]);
    set32(c.r[5], c.r[19].w[0] + 20u);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    st32((c.r[20].w[0] + 180u), c.r[7].w[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00350D50; } }
L_00350D40:
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 12u), c.f[3]);
    c.budget -= 4;
L_00350D50:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00350DC8; } }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[29].w[0] + 28u), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 26;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00350DD8; } }
L_00350DC8:
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 28u), c.f[3]);
    c.budget -= 4;
L_00350DD8:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00350E34; } }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0] + 36u), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 44u), c.f[3]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    st32((c.r[4].w[0]), c.f[1]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00350E44; } }
L_00350E34:
    st32((c.r[29].w[0] + 32u), c.f[3]);
    st32((c.r[29].w[0] + 36u), c.f[3]);
    st32((c.r[29].w[0] + 40u), c.f[3]);
    st32((c.r[29].w[0] + 44u), c.f[3]);
    c.budget -= 4;
L_00350E44:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00350E94; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.f[0] = ld32((c.r[29].w[0]));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[3].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    st32((c.r[2].w[0] + 40u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[3].w[0] + 44u), c.f[0]);
    c.budget -= 18;
L_00350E94:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00350CC0u | kUnwind; return; } goto L_00350CC0; } }
L_00350EAC:
    set32(c.r[6], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_00350F78; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 14208u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    st32((c.r[20].w[0] + 168u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350EECu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x00350EECu) [[unlikely]] return; }
L_00350EEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    c.f[1] = ld32((c.r[29].w[0] + 184u));
    set32(c.r[5], ld32((c.r[20].w[0])));
    st32((c.r[20].w[0] + 44u), c.f[20]);
    st32((c.r[20].w[0] + 60u), c.f[20]);
    st32((c.r[20].w[0] + 48u), c.f[2]);
    st32((c.r[20].w[0] + 52u), c.f[0]);
    st32((c.r[20].w[0] + 56u), c.f[1]);
    st32((c.r[20].w[0] + 32u), c.f[2]);
    st32((c.r[20].w[0] + 36u), c.f[0]);
    st32((c.r[20].w[0] + 40u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350F30u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x00350F30u) [[unlikely]] return; }
L_00350F30:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350F40u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x00350F40u) [[unlikely]] return; }
L_00350F40:
    st32((c.r[20].w[0] + 196u), c.f[20]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 192u), 0u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350F5Cu);  if (depth < kMaxDepth) unit_0094(c, 26u, depth + 1u); else { c.pc = 0x003501C8u; return; } if (c.pc != 0x00350F5Cu) [[unlikely]] return; }
L_00350F5C:
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00350F70u);  if (depth < kMaxDepth) unit_0094(c, 96u, depth + 1u); else { c.pc = 0x003513B8u; return; } if (c.pc != 0x00350F70u) [[unlikely]] return; }
L_00350F70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00350F7C; } }
L_00350F78:
    st32((c.r[20].w[0] + 168u), 0u);
    c.budget -= 1;
L_00350F7C:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00351014; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23216u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00350FBC; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 23212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00350FC0; } }
L_00350FBC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00350FC0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00350FEC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00350FE0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00350FE0u) [[unlikely]] return; }
L_00350FE0:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00350FF0; } }
L_00350FEC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00350FF0:
    st32((c.r[20].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00351014; } }
    set32(c.r[4], c.r[3].w[0] + 128u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351014u);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x00351014u) [[unlikely]] return; }
L_00351014:
    c.r[2].d[0] = c.r[30].d[0] + 0ull;
    ld128((c.r[29].w[0] + 768u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 752u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 736u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 720u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 704u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 688u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 672u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 624u));
    c.f[20] = ld32((c.r[29].w[0] + 784u));
    set32(c.r[29], c.r[29].w[0] + 800u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351050:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351060:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[1].w[0];
    fpu_div(c, 12u, c.f[12], c.f[0]);
    st32((c.r[4].w[0] + 196u), c.f[12]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003510B0; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u - 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003510ACu);  if (depth < kMaxDepth) unit_0032(c, 384u, depth + 1u); else { c.pc = 0x001CBBD8u; return; } if (c.pc != 0x003510ACu) [[unlikely]] return; }
L_003510AC:
    st32((c.r[16].w[0] + 184u), 0u);
    c.budget -= 1;
L_003510B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003510C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003510FC; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003510F4u);  if (depth < kMaxDepth) unit_0032(c, 384u, depth + 1u); else { c.pc = 0x001CBBD8u; return; } if (c.pc != 0x003510F4u) [[unlikely]] return; }
L_003510F4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 2;
L_003510FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351110:
    st32((c.r[4].w[0] + 172u), 0u);
    st32((c.r[4].w[0] + 192u), 0u);
    st32((c.r[4].w[0] + 176u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351128:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035118C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 176u), 0u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 192u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351168u);  if (depth < kMaxDepth) unit_0094(c, 26u, depth + 1u); else { c.pc = 0x003501C8u; return; } if (c.pc != 0x00351168u) [[unlikely]] return; }
L_00351168:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21468u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 172u), c.r[5].w[0]);
    c.budget -= 9;
L_0035118C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003511A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003511C8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 6380u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00351248; } }
L_003511C8:
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003511E0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00351218; } }
L_003511E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.f[0] = 0u;
    st32((c.r[2].w[0] + 72u), c.f[0]);
    st32((c.r[2].w[0] + 56u), c.f[0]);
    st32((c.r[2].w[0] + 52u), c.f[0]);
    st32((c.r[2].w[0] + 48u), c.f[0]);
    st32((c.r[2].w[0] + 68u), c.f[0]);
    st32((c.r[2].w[0] + 64u), c.f[0]);
    st32((c.r[2].w[0] + 60u), c.f[0]);
    st32((c.r[2].w[0] + 80u), c.f[0]);
    st32((c.r[2].w[0] + 76u), c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00351248; } }
L_00351218:
    c.f[0] = ld32((c.r[4].w[0] + 192u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.f[1] = ld32((c.r[4].w[0] + 196u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 192u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 26852u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00351248; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351248u);  if (depth < kMaxDepth) unit_0094(c, 26u, depth + 1u); else { c.pc = 0x003501C8u; return; } if (c.pc != 0x00351248u) [[unlikely]] return; }
L_00351248:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351258:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035127Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0035127Cu) [[unlikely]] return; }
L_0035127C:
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[9], 0u + 500u);
    set32(c.r[7], c.r[7].w[0] + 2064u);
    set32(c.r[8], c.r[8].w[0] + 2112u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 256u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003512A8u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x003512A8u) [[unlikely]] return; }
L_003512A8:
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003512C0u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x003512C0u) [[unlikely]] return; }
L_003512C0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003512E0:
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003512F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0035139C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23216u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00351344; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 23212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00351348; } }
L_00351344:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00351348:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00351374; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00351368u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00351368u) [[unlikely]] return; }
L_00351368:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00351378; } }
L_00351374:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00351378:
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035139C; } }
    set32(c.r[4], c.r[3].w[0] + 128u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035139Cu);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x0035139Cu) [[unlikely]] return; }
L_0035139C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003513B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 26820u)));
    st32((c.r[16].w[0] + 188u), 0u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00351428; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003513E8u);  if (depth < kMaxDepth) unit_0083(c, 222u, depth + 1u); else { c.pc = 0x0030EE70u; return; } if (c.pc != 0x003513E8u) [[unlikely]] return; }
L_003513E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00351428; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00351428; } }
    c.r[5].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00351428; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u - 3u);
    st32((c.r[16].w[0] + 188u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    st64((c.r[4].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 5;
L_00351428:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 34;
    set32(c.r[7], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = ld64((c.r[7].w[0] + 232u));
    c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    if (c.r[4].d[0] == 0) c.r[3].d[0] = 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[5].d[0];
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00351524; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00351524; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23216u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003514CC; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 23212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003514D0; } }
L_003514CC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003514D0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003514FC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003514F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003514F0u) [[unlikely]] return; }
L_003514F0:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00351500; } }
L_003514FC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00351500:
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00351524; } }
    set32(c.r[4], c.r[3].w[0] + 128u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351524u);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x00351524u) [[unlikely]] return; }
L_00351524:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351540:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00351578; } }
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21468u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351578:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[0] = fp::sub(c.f[0], c.f[12]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] - 21468u)));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[3].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[5].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003515C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003515FC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003515FC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 26888u);
    st32((c.r[2].w[0] + 9488u), c.r[4].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003515FCu);  if (depth < kMaxDepth) unit_0094(c, 109u, depth + 1u); else { c.pc = 0x00351678u; return; } if (c.pc != 0x003515FCu) [[unlikely]] return; }
L_003515FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[2].w[0] + 9488u), c.r[16].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351630u);  if (depth < kMaxDepth) unit_0094(c, 109u, depth + 1u); else { c.pc = 0x00351678u; return; } if (c.pc != 0x00351630u) [[unlikely]] return; }
L_00351630:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351648:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00351664; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351664u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x00351664u) [[unlikely]] return; }
L_00351664:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351678:
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351698:
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003516A8:
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003516B8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[18].w[0] + 16u), 0u);
    set32(c.r[16], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[18].w[0]), c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003516F0u);  if (depth < kMaxDepth) unit_0094(c, 157u, depth + 1u); else { c.pc = 0x00351C68u; return; } if (c.pc != 0x003516F0u) [[unlikely]] return; }
L_003516F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00351704; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003517E0; } }
L_00351704:
    set32(c.r[21], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003517C8; } }
L_00351710:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[19], c.r[16].w[0] + 76u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035174C; } }
    c.budget -= 1;
L_00351728:
    set32(c.r[4], c.r[16].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], c.r[3].w[0] - 65u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00351748; } }
    set32(c.r[2], c.r[3].w[0] + 32u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00351748:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0035174C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351758u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x00351758u) [[unlikely]] return; }
L_00351758:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00351728u | kUnwind; return; } goto L_00351728; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351770u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x00351770u) [[unlikely]] return; }
L_00351770:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351784u);  if (depth < kMaxDepth) unit_0094(c, 154u, depth + 1u); else { c.pc = 0x00351C18u; return; } if (c.pc != 0x00351784u) [[unlikely]] return; }
L_00351784:
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] - 11856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351798u);  if (depth < kMaxDepth) unit_008E(c, 110u, depth + 1u); else { c.pc = 0x00339820u; return; } if (c.pc != 0x00351798u) [[unlikely]] return; }
L_00351798:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[21].d[0];  if (t) { goto L_003517B0; } }
    st32((c.r[16].w[0] + 64u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003517B4; } }
L_003517B0:
    st32((c.r[16].w[0] + 64u), c.r[21].w[0]);
    c.budget -= 1;
L_003517B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
L_003517C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003517D4u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x003517D4u) [[unlikely]] return; }
L_003517D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00351710u | kUnwind; return; } goto L_00351710; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003517E0:
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
L_00351808:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[19].w[0] + 24u), 0u);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00351844; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003518F4; } }
L_00351844:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003518D0; } }
L_00351850:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[16].w[0] + 72u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00351884; } }
L_00351860:
    set32(c.r[4], c.r[16].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], c.r[3].w[0] - 65u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00351880; } }
    set32(c.r[2], c.r[3].w[0] + 32u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00351880:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00351884:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351890u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x00351890u) [[unlikely]] return; }
L_00351890:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00351860u | kUnwind; return; } goto L_00351860; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003518A8u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x003518A8u) [[unlikely]] return; }
L_003518A8:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 26848u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003518BCu);  if (depth < kMaxDepth) unit_0093(c, 241u, depth + 1u); else { c.pc = 0x0034E7C0u; return; } if (c.pc != 0x003518BCu) [[unlikely]] return; }
L_003518BC:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_003518D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003518DCu);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x003518DCu) [[unlikely]] return; }
L_003518DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00351850u | kUnwind; return; } goto L_00351850; } }
    set32(c.r[4], c.r[20].w[0] + 26848u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003518F0u);  if (depth < kMaxDepth) unit_0093(c, 272u, depth + 1u); else { c.pc = 0x0034EC20u; return; } if (c.pc != 0x003518F0u) [[unlikely]] return; }
L_003518F0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003518F4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351918:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[18].w[0] + 16u), 0u);
    set32(c.r[16], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[18].w[0]), c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351950u);  if (depth < kMaxDepth) unit_0094(c, 157u, depth + 1u); else { c.pc = 0x00351C68u; return; } if (c.pc != 0x00351950u) [[unlikely]] return; }
L_00351950:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00351964; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00351A40; } }
L_00351964:
    set32(c.r[21], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00351A28; } }
L_00351970:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[19], c.r[16].w[0] + 76u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003519AC; } }
    c.budget -= 1;
L_00351988:
    set32(c.r[4], c.r[16].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], c.r[3].w[0] - 65u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003519A8; } }
    set32(c.r[2], c.r[3].w[0] + 32u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003519A8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003519AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003519B8u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x003519B8u) [[unlikely]] return; }
L_003519B8:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00351988u | kUnwind; return; } goto L_00351988; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003519D0u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x003519D0u) [[unlikely]] return; }
L_003519D0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003519E4u);  if (depth < kMaxDepth) unit_0094(c, 154u, depth + 1u); else { c.pc = 0x00351C18u; return; } if (c.pc != 0x003519E4u) [[unlikely]] return; }
L_003519E4:
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] - 11856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003519F8u);  if (depth < kMaxDepth) unit_008E(c, 110u, depth + 1u); else { c.pc = 0x00339820u; return; } if (c.pc != 0x003519F8u) [[unlikely]] return; }
L_003519F8:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[21].d[0];  if (t) { goto L_00351A10; } }
    st32((c.r[16].w[0] + 64u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00351A14; } }
L_00351A10:
    st32((c.r[16].w[0] + 64u), c.r[21].w[0]);
    c.budget -= 1;
L_00351A14:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
L_00351A28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351A34u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x00351A34u) [[unlikely]] return; }
L_00351A34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00351970u | kUnwind; return; } goto L_00351970; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00351A40:
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
L_00351A68:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00351A90; } }
    set32(c.r[2], 0u + 76u);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351A90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] + 2600u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351AA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00351ACC; } }
    set32(c.r[3], 0u + 76u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351ACC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351AD8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00351B34; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00351BC0; } }
L_00351B0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00351BC0; } }
L_00351B18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351B28u);  if (depth < kMaxDepth) unit_00DE(c, 72u, depth + 1u); else { c.pc = 0x00478998u; return; } if (c.pc != 0x00351B28u) [[unlikely]] return; }
L_00351B28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00351B0Cu | kUnwind; return; } goto L_00351B0C; } }
    set32(c.r[16], c.r[16].w[0] + 76u);
    c.budget -= 1;
L_00351B34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351B40u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x00351B40u) [[unlikely]] return; }
L_00351B40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00351B18u | kUnwind; return; } goto L_00351B18; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351B58u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x00351B58u) [[unlikely]] return; }
L_00351B58:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00351B8C; } }
L_00351B68:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], c.r[3].w[0] - 65u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00351B84; } }
    set32(c.r[2], c.r[3].w[0] + 32u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00351B84:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_00351B8C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351B98u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x00351B98u) [[unlikely]] return; }
L_00351B98:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00351B68u | kUnwind; return; } goto L_00351B68; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351BB0u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x00351BB0u) [[unlikely]] return; }
L_00351BB0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351BC0u);  if (depth < kMaxDepth) unit_0094(c, 154u, depth + 1u); else { c.pc = 0x00351C18u; return; } if (c.pc != 0x00351BC0u) [[unlikely]] return; }
L_00351BC0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351BE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00351C0C; } }
    set32(c.r[3], 0u + 76u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351C0C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351C18:
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_00351C5C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 2;
L_00351C30:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00351C48; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351C48:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00351C30u | kUnwind; return; } goto L_00351C30; } }
L_00351C5C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351C68:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351C8Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00351C8Cu) [[unlikely]] return; }
L_00351C8C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351CA8u);  if (depth < kMaxDepth) unit_0090(c, 91u, depth + 1u); else { c.pc = 0x00340BB0u; return; } if (c.pc != 0x00351CA8u) [[unlikely]] return; }
L_00351CA8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00351CE8; } }
    set32(c.r[17], 0u + 3u);
    c.budget -= 1;
L_00351CB8:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_00351CD0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_00351CD0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351CDCu);  if (depth < kMaxDepth) unit_0090(c, 93u, depth + 1u); else { c.pc = 0x00340BF8u; return; } if (c.pc != 0x00351CDCu) [[unlikely]] return; }
L_00351CDC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00351CB8u | kUnwind; return; } goto L_00351CB8; } }
L_00351CE8:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 2608u);
    set32(c.r[8], c.r[8].w[0] + 2648u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 366u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351D18u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00351D18u) [[unlikely]] return; }
L_00351D18:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351D30u);  if (depth < kMaxDepth) unit_0090(c, 91u, depth + 1u); else { c.pc = 0x00340BB0u; return; } if (c.pc != 0x00351D30u) [[unlikely]] return; }
L_00351D30:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00351D7C; } }
    set32(c.r[18], 0u + 3u);
    c.budget -= 1;
L_00351D40:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_00351D64; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_00351D64:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351D70u);  if (depth < kMaxDepth) unit_0090(c, 93u, depth + 1u); else { c.pc = 0x00340BF8u; return; } if (c.pc != 0x00351D70u) [[unlikely]] return; }
L_00351D70:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00351D40u | kUnwind; return; } goto L_00351D40; } }
L_00351D7C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351D98:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00351DC4; } }
    set32(c.r[3], 0u + 72u);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351DC4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351DD0:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00351DF8; } }
    set32(c.r[2], 0u + 72u);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351DF8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351E08:
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_00351E4C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] + 68u);
    c.budget -= 2;
L_00351E20:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00351E38; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351E38:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 72u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00351E20u | kUnwind; return; } goto L_00351E20; } }
L_00351E4C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351E58:
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351E68:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[2].w[0] - 14960u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351E88u);  if (depth < kMaxDepth) unit_0060(c, 270u, depth + 1u); else { c.pc = 0x00283D28u; return; } if (c.pc != 0x00351E88u) [[unlikely]] return; }
L_00351E88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351E98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351EB0u);  if (depth < kMaxDepth) unit_0094(c, 103u, depth + 1u); else { c.pc = 0x003515C8u; return; } if (c.pc != 0x00351EB0u) [[unlikely]] return; }
L_00351EB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351EC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351ED8u);  if (depth < kMaxDepth) unit_0094(c, 103u, depth + 1u); else { c.pc = 0x003515C8u; return; } if (c.pc != 0x00351ED8u) [[unlikely]] return; }
L_00351ED8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00351EE8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[20], 0u + 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[23].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    if (c.r[19].d[0] == 0) c.r[20].d[0] = 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 19;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00351FD0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[23].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00351F54; } }
    set32(c.r[23], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 1;
L_00351F54:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00351F94; } }
    c.r[2].d[0] = c.r[4].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00351F84; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 200u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00352704; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00351F94; } }
L_00351F84:
    set32(c.r[2], ld32((c.r[19].w[0] + 200u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00352704; } }
L_00351F94:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 42u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00352704; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00351FBC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_00352704; } }
L_00351FBC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00351FCCu);  if (depth < kMaxDepth) unit_0094(c, 206u, depth + 1u); else { c.pc = 0x00352738u; return; } if (c.pc != 0x00351FCCu) [[unlikely]] return; }
L_00351FCC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00351FD0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003520E0; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00352108; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00351FFC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00351FF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00351FF8u) [[unlikely]] return; }
L_00351FF8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00351FFC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003520E0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00352058; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035202Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035202Cu) [[unlikely]] return; }
L_0035202C:
    c.r[2].d[0] = c.r[2].d[0] & 5120ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 5120ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00352058; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 840u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00352058; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[18].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_00352058:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003520E0; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] >> 7;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003520E0; } }
L_00352070:
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00352088u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00352088u) [[unlikely]] return; }
L_00352088:
    c.r[2].d[0] = c.r[2].d[0] & 5120ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 5120ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003520E0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 840u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003520E0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003520D0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 464u)));
    c.r[18].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[18].d[0] ^ c.r[2].d[0];
    c.r[18].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003520E0; } }
L_003520D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 464u)));
    c.r[18].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[18].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_003520E0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00352108; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 29712u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352100u);  if (depth < kMaxDepth) unit_0094(c, 331u, depth + 1u); else { c.pc = 0x00353838u; return; } if (c.pc != 0x00352100u) [[unlikely]] return; }
L_00352100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352120; } }
L_00352108:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 29712u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352120u);  if (depth < kMaxDepth) unit_0094(c, 335u, depth + 1u); else { c.pc = 0x003538A0u; return; } if (c.pc != 0x00352120u) [[unlikely]] return; }
L_00352120:
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003524F4; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 44u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035214C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352704; } }
L_0035214C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003523A4; } }
    set32(c.r[4], c.r[21].w[0] + 29712u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352160u);  if (depth < kMaxDepth) unit_0094(c, 344u, depth + 1u); else { c.pc = 0x00353968u; return; } if (c.pc != 0x00352160u) [[unlikely]] return; }
L_00352160:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 23016u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 12;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00352214; } }
    st32((c.r[16].w[0] + 24u), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003521ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003521ACu) [[unlikely]] return; }
L_003521AC:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], 0u - 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003521D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003521D4u) [[unlikely]] return; }
L_003521D4:
    c.r[2].d[0] = c.r[2].d[0] & 5120ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 5120ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003521F0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003521F4; } }
L_003521F0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003521F4:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00352234; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[2].w[0] + 24u), c.r[22].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352234; } }
L_00352214:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00352234; } }
    st32((c.r[17].w[0] + 24u), c.r[22].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 5;
L_00352234:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00352250; } }
    c.r[2].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035225C; } }
L_00352250:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035236C; } }
L_0035225C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003522F0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00352284u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00352284u) [[unlikely]] return; }
L_00352284:
    c.r[2].d[0] = c.r[2].d[0] & 5120ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 5120ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003522F0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 840u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003522F0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003522B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003522B8u) [[unlikely]] return; }
L_003522B8:
    set32(c.r[4], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 14208u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 11504u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003525B8; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 11524u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035234C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003525B8; } }
L_003522F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0035234C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035231Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035231Cu) [[unlikely]] return; }
L_0035231C:
    set32(c.r[4], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 14208u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 11504u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003525B8; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 11524u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003525B8; } }
L_0035234C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 29712u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352368u);  if (depth < kMaxDepth) unit_0095(c, 12u, depth + 1u); else { c.pc = 0x003541C0u; return; } if (c.pc != 0x00352368u) [[unlikely]] return; }
L_00352368:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0035236C:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003524D4; } }
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003524D4; } }
    set32(c.r[4], c.r[21].w[0] + 29712u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035239Cu);  if (depth < kMaxDepth) unit_0095(c, 4u, depth + 1u); else { c.pc = 0x00354040u; return; } if (c.pc != 0x0035239Cu) [[unlikely]] return; }
L_0035239C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003524D4; } }
L_003523A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 23016u)));
    set32(c.r[4], 0u + 4u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00352704; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00352404; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00352404; } }
    c.r[2].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00352404; } }
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00352404; } }
    set32(c.r[4], c.r[21].w[0] + 29712u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352404u);  if (depth < kMaxDepth) unit_0094(c, 387u, depth + 1u); else { c.pc = 0x00353FD0u; return; } if (c.pc != 0x00352404u) [[unlikely]] return; }
L_00352404:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035244C; } }
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035244C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 29712u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035243Cu);  if (depth < kMaxDepth) unit_0095(c, 12u, depth + 1u); else { c.pc = 0x003541C0u; return; } if (c.pc != 0x0035243Cu) [[unlikely]] return; }
L_0035243C:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003524BC; } }
L_0035244C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 122u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003524BC; } }
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003524BC; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 5u));
    c.r[2].d[0] = c.r[2].d[0] >> 7;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003524B8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003524B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 29712u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003524B0u);  if (depth < kMaxDepth) unit_0095(c, 12u, depth + 1u); else { c.pc = 0x003541C0u; return; } if (c.pc != 0x003524B0u) [[unlikely]] return; }
L_003524B0:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 2;
L_003524B8:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_003524BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003524D4; } }
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 2;
L_003524D4:
    set32(c.r[2], c.r[21].w[0] + 29712u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[17].w[0] + 46u));
    st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352704; } }
L_003524F4:
    set32(c.r[18], c.r[21].w[0] + 29712u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035250Cu);  if (depth < kMaxDepth) unit_0094(c, 331u, depth + 1u); else { c.pc = 0x00353838u; return; } if (c.pc != 0x0035250Cu) [[unlikely]] return; }
L_0035250C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00352704; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 23016u)));
    set32(c.r[4], 0u + 4u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00352704; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003525D4; } }
    c.r[2].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00352560; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003525B8; } }
L_00352560:
    c.r[2].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00352580; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003526C0; } }
L_00352580:
    c.r[2].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003525B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003525B8; } }
    set32(c.r[2], 0u + 4u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] + 29712u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003525B8u);  if (depth < kMaxDepth) unit_0095(c, 4u, depth + 1u); else { c.pc = 0x00354040u; return; } if (c.pc != 0x003525B8u) [[unlikely]] return; }
L_003525B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] + 29712u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003525CCu);  if (depth < kMaxDepth) unit_0094(c, 387u, depth + 1u); else { c.pc = 0x00353FD0u; return; } if (c.pc != 0x003525CCu) [[unlikely]] return; }
L_003525CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352704; } }
L_003525D4:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0035262C; } }
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 5u));
    c.r[2].d[0] = c.r[2].d[0] >> 7;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00352600; } }
    st32((c.r[16].w[0] + 32u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003526A0; } }
L_00352600:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352624u);  if (depth < kMaxDepth) unit_0095(c, 12u, depth + 1u); else { c.pc = 0x003541C0u; return; } if (c.pc != 0x00352624u) [[unlikely]] return; }
L_00352624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003526A0; } }
L_0035262C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[19], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[19].d[0];  if (t) { goto L_00352650; } }
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 2;
L_00352650:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 5u));
    c.r[2].d[0] = c.r[2].d[0] >> 7;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003526A0; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 122u));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003526A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_003526A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035269Cu);  if (depth < kMaxDepth) unit_0095(c, 12u, depth + 1u); else { c.pc = 0x003541C0u; return; } if (c.pc != 0x0035269Cu) [[unlikely]] return; }
L_0035269C:
    st32((c.r[16].w[0] + 32u), c.r[19].w[0]);
    c.budget -= 1;
L_003526A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].sd[0] < 1801ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00352704; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003526D0; } }
L_003526C0:
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352704; } }
L_003526D0:
    set32(c.r[18], c.r[21].w[0] + 29712u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003526E4u);  if (depth < kMaxDepth) unit_0094(c, 387u, depth + 1u); else { c.pc = 0x00353FD0u; return; } if (c.pc != 0x003526E4u) [[unlikely]] return; }
L_003526E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00352704; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352704u);  if (depth < kMaxDepth) unit_0095(c, 4u, depth + 1u); else { c.pc = 0x00354040u; return; } if (c.pc != 0x00352704u) [[unlikely]] return; }
L_00352704:
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
L_00352738:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00352778u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00352778u) [[unlikely]] return; }
L_00352778:
    set32(c.r[3], ld32((c.r[18].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00352790u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00352790u) [[unlikely]] return; }
L_00352790:
    set32(c.r[3], 0u + 13248u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] + 14208u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003527B8u);  if (depth < kMaxDepth) unit_0089(c, 11u, depth + 1u); else { c.pc = 0x003242A8u; return; } if (c.pc != 0x003527B8u) [[unlikely]] return; }
L_003527B8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00352818; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 840u)));
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 40u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003527F8u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x003527F8u) [[unlikely]] return; }
L_003527F8:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352818u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00352818u) [[unlikely]] return; }
L_00352818:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00352868; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00352868; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 212u)));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00352858u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00352858u) [[unlikely]] return; }
L_00352858:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352868u);  if (depth < kMaxDepth) unit_0045(c, 16u, depth + 1u); else { c.pc = 0x00214208u; return; } if (c.pc != 0x00352868u) [[unlikely]] return; }
L_00352868:
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00352A9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2768u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00350000u < 16384u) { entry = entries_0094[(t - 0x00350000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00352898:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[5], c.r[17].w[0] + 80u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003528BC; } }
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003528D8; } }
L_003528BC:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.budget -= 7;
L_003528D8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003528E4u);  if (depth < kMaxDepth) unit_008B(c, 13u, depth + 1u); else { c.pc = 0x0032C0C8u; return; } if (c.pc != 0x003528E4u) [[unlikely]] return; }
L_003528E4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352A9C; } }
L_003528F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[5], c.r[17].w[0] + 80u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00352914; } }
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352930; } }
L_00352914:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.budget -= 7;
L_00352930:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035293Cu);  if (depth < kMaxDepth) unit_008B(c, 15u, depth + 1u); else { c.pc = 0x0032C110u; return; } if (c.pc != 0x0035293Cu) [[unlikely]] return; }
L_0035293C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352A9C; } }
L_00352948:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[5], c.r[17].w[0] + 80u);
    set32(c.r[6], c.r[17].w[0] + 96u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00352970; } }
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035298C; } }
L_00352970:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.budget -= 7;
L_0035298C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352998u);  if (depth < kMaxDepth) unit_008B(c, 19u, depth + 1u); else { c.pc = 0x0032C1B0u; return; } if (c.pc != 0x00352998u) [[unlikely]] return; }
L_00352998:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352A9C; } }
L_003529A4:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[5], c.r[17].w[0] + 80u);
    set32(c.r[6], c.r[17].w[0] + 96u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003529CC; } }
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003529E8; } }
L_003529CC:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.budget -= 7;
L_003529E8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003529F4u);  if (depth < kMaxDepth) unit_008B(c, 21u, depth + 1u); else { c.pc = 0x0032C208u; return; } if (c.pc != 0x003529F4u) [[unlikely]] return; }
L_003529F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352A9C; } }
L_003529FC:
    set32(c.r[6], c.r[17].w[0] + 96u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352A10u);  if (depth < kMaxDepth) unit_008B(c, 26u, depth + 1u); else { c.pc = 0x0032C2D8u; return; } if (c.pc != 0x00352A10u) [[unlikely]] return; }
L_00352A10:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352A9C; } }
L_00352A1C:
    set32(c.r[6], c.r[17].w[0] + 96u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352A30u);  if (depth < kMaxDepth) unit_008B(c, 27u, depth + 1u); else { c.pc = 0x0032C340u; return; } if (c.pc != 0x00352A30u) [[unlikely]] return; }
L_00352A30:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352A9C; } }
L_00352A3C:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[5], c.r[17].w[0] + 80u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00352A60; } }
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352A7C; } }
L_00352A60:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[13] = fp::add(c.f[13], c.f[13]);
    c.budget -= 7;
L_00352A7C:
    c.f[12] = ld32((c.r[17].w[0] + 100u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352A8Cu);  if (depth < kMaxDepth) unit_008B(c, 28u, depth + 1u); else { c.pc = 0x0032C3D8u; return; } if (c.pc != 0x00352A8Cu) [[unlikely]] return; }
L_00352A8C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352A9C; } }
L_00352A98:
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_00352A9C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00352AC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352AD8u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x00352AD8u) [[unlikely]] return; }
L_00352AD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00352AE8:
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00352B18; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00352AF8:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00352AF8u | kUnwind; return; } goto L_00352AF8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00352B18:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00352B28:
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[5].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00352B54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[6].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 30144u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 68u), c.r[5].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00352B54:
    set32(c.r[3], c.r[5].w[0] - 13u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00352C40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3088u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00350000u < 16384u) { entry = entries_0094[(t - 0x00350000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00352B80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[6].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 30144u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352C38; } }
L_00352B98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[6].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 30144u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352C38; } }
L_00352BB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[6].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 30144u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352C38; } }
L_00352BC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[6].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 30144u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352C38; } }
L_00352BE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[6].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 30144u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352C38; } }
L_00352BF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[6].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 30144u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352C38; } }
L_00352C10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[6].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 30144u);
    set32(c.r[4], 0u + 7u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352C38; } }
L_00352C28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[6].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 30144u);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
L_00352C38:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 68u), c.r[4].w[0]);
    c.budget -= 2;
L_00352C40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00352C48:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    set32(c.r[19], ld32((c.r[22].w[0] + 36u)));
    c.budget -= 16;
L_00352C88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 3008u);
    set32(c.r[20], c.r[18].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00352F38; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00352F38; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00352F38; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 4u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[22].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == c.r[3].d[0];  if (t) { goto L_00352D00; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00352D24; } }
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00352D24; } }
L_00352CF4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352D28; } }
L_00352D00:
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00352CF4u | kUnwind; return; } goto L_00352CF4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00352CF4u | kUnwind; return; } goto L_00352CF4; } }
L_00352D24:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00352D28:
    set32(c.r[20], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00352F38; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00352DA0; } }
    set32(c.r[4], c.r[23].w[0] + 9872u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352D54u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x00352D54u) [[unlikely]] return; }
L_00352D54:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00352D74; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352D74u);  if (depth < kMaxDepth) unit_0094(c, 180u, depth + 1u); else { c.pc = 0x00351EE8u; return; } if (c.pc != 0x00352D74u) [[unlikely]] return; }
L_00352D74:
    set32(c.r[4], c.r[21].w[0] + 9872u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352D80u);  if (depth < kMaxDepth) unit_0062(c, 75u, depth + 1u); else { c.pc = 0x00289778u; return; } if (c.pc != 0x00352D80u) [[unlikely]] return; }
L_00352D80:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00352DA0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352DA0u);  if (depth < kMaxDepth) unit_0094(c, 180u, depth + 1u); else { c.pc = 0x00351EE8u; return; } if (c.pc != 0x00352DA0u) [[unlikely]] return; }
L_00352DA0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[20], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00352E24; } }
    set32(c.r[4], c.r[23].w[0] + 9872u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352DC4u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x00352DC4u) [[unlikely]] return; }
L_00352DC4:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00352DEC; } }
L_00352DD8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352DE8u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x00352DE8u) [[unlikely]] return; }
L_00352DE8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00352DEC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00352E24; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00352DD8u | kUnwind; return; } goto L_00352DD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352E14u);  if (depth < kMaxDepth) unit_0094(c, 180u, depth + 1u); else { c.pc = 0x00351EE8u; return; } if (c.pc != 0x00352E14u) [[unlikely]] return; }
L_00352E14:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00352DD8u | kUnwind; return; } goto L_00352DD8; } }
L_00352E24:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00352E94; } }
    set32(c.r[4], c.r[23].w[0] + 9872u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352E44u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x00352E44u) [[unlikely]] return; }
L_00352E44:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00352E94; } }
    c.budget -= 1;
L_00352E58:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 230u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00352E78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352E78u);  if (depth < kMaxDepth) unit_0094(c, 180u, depth + 1u); else { c.pc = 0x00351EE8u; return; } if (c.pc != 0x00352E78u) [[unlikely]] return; }
L_00352E78:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352E88u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x00352E88u) [[unlikely]] return; }
L_00352E88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00352E58u | kUnwind; return; } goto L_00352E58; } }
L_00352E94:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00352EF8; } }
    set32(c.r[4], c.r[30].w[0] + 12912u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352EB4u);  if (depth < kMaxDepth) unit_0067(c, 239u, depth + 1u); else { c.pc = 0x0029E3E8u; return; } if (c.pc != 0x00352EB4u) [[unlikely]] return; }
L_00352EB4:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00352EF8; } }
    c.budget -= 1;
L_00352EC8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352EDCu);  if (depth < kMaxDepth) unit_0094(c, 180u, depth + 1u); else { c.pc = 0x00351EE8u; return; } if (c.pc != 0x00352EDCu) [[unlikely]] return; }
L_00352EDC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 12912u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352EECu);  if (depth < kMaxDepth) unit_0067(c, 239u, depth + 1u); else { c.pc = 0x0029E3E8u; return; } if (c.pc != 0x00352EECu) [[unlikely]] return; }
L_00352EEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00352EC8u | kUnwind; return; } goto L_00352EC8; } }
L_00352EF8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00352F34; } }
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00352F34; } }
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00352F34; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352F34u);  if (depth < kMaxDepth) unit_0094(c, 180u, depth + 1u); else { c.pc = 0x00351EE8u; return; } if (c.pc != 0x00352F34u) [[unlikely]] return; }
L_00352F34:
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 1;
L_00352F38:
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < 300ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00352C88u | kUnwind; return; } goto L_00352C88; } }
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
L_00352F80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035300C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], c.r[2].w[0] + 9872u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352FC0u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x00352FC0u) [[unlikely]] return; }
L_00352FC0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00352FE0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352FE0u);  if (depth < kMaxDepth) unit_0094(c, 180u, depth + 1u); else { c.pc = 0x00351EE8u; return; } if (c.pc != 0x00352FE0u) [[unlikely]] return; }
L_00352FE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00352FECu);  if (depth < kMaxDepth) unit_0062(c, 75u, depth + 1u); else { c.pc = 0x00289778u; return; } if (c.pc != 0x00352FECu) [[unlikely]] return; }
L_00352FEC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0035300C; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035300Cu);  if (depth < kMaxDepth) unit_0094(c, 180u, depth + 1u); else { c.pc = 0x00351EE8u; return; } if (c.pc != 0x0035300Cu) [[unlikely]] return; }
L_0035300C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00353084; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 1;
L_00353020:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[16].w[0] + 9872u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00353040; } }
    goto L_00353034;
L_00353030:
    c.budget -= 1;
L_00353034:
    c.budget -= 1;
L_00353038:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 9872u);
    c.budget -= 2;
L_00353040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353048u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x00353048u) [[unlikely]] return; }
L_00353048:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00353084; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353038u | kUnwind; return; } goto L_00353038; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353078u);  if (depth < kMaxDepth) unit_0094(c, 180u, depth + 1u); else { c.pc = 0x00351EE8u; return; } if (c.pc != 0x00353078u) [[unlikely]] return; }
L_00353078:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353038u | kUnwind; return; } goto L_00353038; } }
L_00353084:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003530EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + 9872u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003530D8; } }
    c.budget -= 1;
L_003530B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003530D0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003530D0u);  if (depth < kMaxDepth) unit_0094(c, 180u, depth + 1u); else { c.pc = 0x00351EE8u; return; } if (c.pc != 0x003530D0u) [[unlikely]] return; }
L_003530D0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 9872u);
    c.budget -= 2;
L_003530D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003530E0u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x003530E0u) [[unlikely]] return; }
L_003530E0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003530B0u | kUnwind; return; } goto L_003530B0; } }
L_003530EC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00353144; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00353128; } }
L_00353110:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353124u);  if (depth < kMaxDepth) unit_0094(c, 180u, depth + 1u); else { c.pc = 0x00351EE8u; return; } if (c.pc != 0x00353124u) [[unlikely]] return; }
    goto L_00353124;
L_00353120:
    c.budget -= 1;
L_00353124:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00353128:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 12912u);
    c.budget -= 2;
L_00353130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353138u);  if (depth < kMaxDepth) unit_0067(c, 239u, depth + 1u); else { c.pc = 0x0029E3E8u; return; } if (c.pc != 0x00353138u) [[unlikely]] return; }
L_00353138:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353110u | kUnwind; return; } goto L_00353110; } }
L_00353144:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353168:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    set32(c.r[2], ld32((c.r[3].w[0] + 10440u)));
    set32(c.r[21], c.r[3].w[0] + 10440u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003532B4; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003532B4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 3008u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003532AC; } }
    set32(c.r[22], c.r[3].w[0] + 3008u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00730000u);
    c.budget -= 3;
L_003531D8:
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + c.r[22].w[0]);
    set32(c.r[20], c.r[6].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00353294; } }
    c.r[18].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[4], c.r[30].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353208u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x00353208u) [[unlikely]] return; }
L_00353208:
    set32(c.r[19], c.r[23].w[0] + 20032u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 30144u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 7);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
L_00353230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353238u);  if (depth < kMaxDepth) unit_0095(c, 371u, depth + 1u); else { c.pc = 0x00356D90u; return; } if (c.pc != 0x00353238u) [[unlikely]] return; }
L_00353238:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035324Cu);  if (depth < kMaxDepth) unit_0095(c, 396u, depth + 1u); else { c.pc = 0x00357130u; return; } if (c.pc != 0x0035324Cu) [[unlikely]] return; }
L_0035324C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00353294; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035326Cu);  if (depth < kMaxDepth) unit_0095(c, 399u, depth + 1u); else { c.pc = 0x003571B0u; return; } if (c.pc != 0x0035326Cu) [[unlikely]] return; }
L_0035326C:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00353294; } }
L_00353278:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035328Cu);  if (depth < kMaxDepth) unit_0095(c, 23u, depth + 1u); else { c.pc = 0x003543A0u; return; } if (c.pc != 0x0035328Cu) [[unlikely]] return; }
L_0035328C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353278u | kUnwind; return; } goto L_00353278; } }
L_00353294:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003531D8u | kUnwind; return; } goto L_003531D8; } }
L_003532AC:
    set32(c.r[2], 0u - 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_003532B4:
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
L_003532E8:
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 30144u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353308:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 26928u);
    set32(c.r[6], 0u + 2784u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353328u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x00353328u) [[unlikely]] return; }
L_00353328:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353338:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 29712u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353358u);  if (depth < kMaxDepth) unit_0094(c, 384u, depth + 1u); else { c.pc = 0x00353F88u; return; } if (c.pc != 0x00353358u) [[unlikely]] return; }
L_00353358:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353368:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 26928u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[18].w[0] << 1);
    c.r[16].d[0] = c.r[6].d[0] & 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29712u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003533B0u);  if (depth < kMaxDepth) unit_0094(c, 315u, depth + 1u); else { c.pc = 0x00353570u; return; } if (c.pc != 0x003533B0u) [[unlikely]] return; }
L_003533B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[16], c.r[16].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 30144u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[18].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003533E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003533FCu);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x003533FCu) [[unlikely]] return; }
L_003533FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 848u), 0u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353424u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x00353424u) [[unlikely]] return; }
L_00353424:
    set32(c.r[3], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 848u), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353440:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] & 65535ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[6].w[0] << 16);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    c.r[23].d[0] = c.r[11].d[0] & 65535ull;
    set32(c.r[30], ld32((c.r[29].w[0] + 160u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 16));
    set32(c.r[4], c.r[4].w[0] + 29712u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003534A8u);  if (depth < kMaxDepth) unit_0094(c, 315u, depth + 1u); else { c.pc = 0x00353570u; return; } if (c.pc != 0x003534A8u) [[unlikely]] return; }
L_003534A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003534B4u);  if (depth < kMaxDepth) unit_0094(c, 292u, depth + 1u); else { c.pc = 0x003532E8u; return; } if (c.pc != 0x003534B4u) [[unlikely]] return; }
L_003534B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003534C4u);  if (depth < kMaxDepth) unit_0094(c, 292u, depth + 1u); else { c.pc = 0x003532E8u; return; } if (c.pc != 0x003534C4u) [[unlikely]] return; }
L_003534C4:
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003534D8u);  if (depth < kMaxDepth) unit_0094(c, 235u, depth + 1u); else { c.pc = 0x00352B28u; return; } if (c.pc != 0x003534D8u) [[unlikely]] return; }
L_003534D8:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003534E8u);  if (depth < kMaxDepth) unit_0095(c, 18u, depth + 1u); else { c.pc = 0x00354280u; return; } if (c.pc != 0x003534E8u) [[unlikely]] return; }
L_003534E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003534F4u);  if (depth < kMaxDepth) unit_0094(c, 292u, depth + 1u); else { c.pc = 0x003532E8u; return; } if (c.pc != 0x003534F4u) [[unlikely]] return; }
L_003534F4:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[2].w[0] + 112u), c.r[21].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353508u);  if (depth < kMaxDepth) unit_0095(c, 20u, depth + 1u); else { c.pc = 0x003542B8u; return; } if (c.pc != 0x00353508u) [[unlikely]] return; }
L_00353508:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353514u);  if (depth < kMaxDepth) unit_0094(c, 292u, depth + 1u); else { c.pc = 0x003532E8u; return; } if (c.pc != 0x00353514u) [[unlikely]] return; }
L_00353514:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[2].w[0] + 122u), static_cast<std::uint16_t>(c.r[23].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353524u);  if (depth < kMaxDepth) unit_0094(c, 292u, depth + 1u); else { c.pc = 0x003532E8u; return; } if (c.pc != 0x00353524u) [[unlikely]] return; }
L_00353524:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0] + 48u), c.r[30].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353534u);  if (depth < kMaxDepth) unit_0094(c, 292u, depth + 1u); else { c.pc = 0x003532E8u; return; } if (c.pc != 0x00353534u) [[unlikely]] return; }
L_00353534:
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
    st32((c.r[2].w[0] + 60u), 0u);
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353570:
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 30144u);
    set32(c.r[3], c.r[5].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    st16((c.r[3].w[0] + 120u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 416u), c.r[5].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003535A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[2].w[0] + 30144u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[20], 0u + 1u);
    c.budget -= 14;
L_003535D8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_00353604; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[18].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_00353604; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353604u);  if (depth < kMaxDepth) unit_0094(c, 326u, depth + 1u); else { c.pc = 0x00353748u; return; } if (c.pc != 0x00353604u) [[unlikely]] return; }
L_00353604:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 128u);
    c.r[2].d[0] = c.r[16].sd[0] < 300ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003535D8u | kUnwind; return; } goto L_003535D8; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353650u);  if (depth < kMaxDepth) unit_0094(c, 349u, depth + 1u); else { c.pc = 0x00353A70u; return; } if (c.pc != 0x00353650u) [[unlikely]] return; }
L_00353650:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 3008u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003536A8; } }
    set32(c.r[3], c.r[3].w[0] + 3008u);
    c.budget -= 2;
L_00353670:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00353688; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003536AC; } }
L_00353688:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[4].sd[0] < 300ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003536A8; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353670u | kUnwind; return; } goto L_00353670; } }
L_003536A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003536AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003536C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003536D0u);  if (depth < kMaxDepth) unit_0094(c, 350u, depth + 1u); else { c.pc = 0x00353A88u; return; } if (c.pc != 0x003536D0u) [[unlikely]] return; }
L_003536D0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003536F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00353734; } }
L_003536E4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00353738; } }
L_003536F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 3008u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00353734; } }
    set32(c.r[3], c.r[3].w[0] + 3008u);
    c.budget -= 1;
L_00353708:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003536E4u | kUnwind; return; } goto L_003536E4; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[4].sd[0] < 300ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00353734; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353708u | kUnwind; return; } goto L_00353708; } }
L_00353734:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00353738:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353748:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00730000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], c.r[6].w[0] + 3008u);
    set32(c.r[2], c.r[2].w[0] + 30144u);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353788:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0035379C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035379C:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003537D4; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 23016u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003537D8; } }
L_003537D4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003537D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003537E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035381C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0035381C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 23016u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00353828; } }
L_0035381C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353828:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353838:
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00353840:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00353858; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353858:
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0035387C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0035387C; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035387C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[7].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353840u | kUnwind; return; } goto L_00353840; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003538A0:
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003538A8:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003538C0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003538C0:
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003538E4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_003538E4; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003538E4:
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[7].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003538A8u | kUnwind; return; } goto L_003538A8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353908:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 29712u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353920u);  if (depth < kMaxDepth) unit_0094(c, 341u, depth + 1u); else { c.pc = 0x00353930u; return; } if (c.pc != 0x00353920u) [[unlikely]] return; }
L_00353920:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353930:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353938:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[5], 0u + 100u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353954u);  if (depth < kMaxDepth) unit_009F(c, 9u, depth + 1u); else { c.pc = 0x0037C0A8u; return; } if (c.pc != 0x00353954u) [[unlikely]] return; }
L_00353954:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353968:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 4208u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[2].w[0] + 36u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003539A0; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003539D4; } }
    c.budget -= 1;
L_003539A0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003539D8; } }
    set32(c.r[2], 0u + 40u);
    set32(c.r[4], c.r[8].w[0] + 4208u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 36u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003539A0u | kUnwind; return; } goto L_003539A0; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003539D4:
    st8((c.r[6].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003539D8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003539EC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003539EC:
    set32(c.r[2], ld32((c.r[7].w[0] + 16u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00353A08; } }
    st32((c.r[7].w[0] + 16u), c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00353A34; } }
L_00353A08:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00353A34; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353A08u | kUnwind; return; } goto L_00353A08; } }
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 1;
L_00353A34:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353A40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 30144u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 42u));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00353A64; } }
    st16((c.r[5].w[0] + 42u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 1;
L_00353A64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353A70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 30144u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353A88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + 30144u);
    c.budget -= 4;
L_00353A98:
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00353AB0; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353AB0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 128u);
    c.r[2].d[0] = c.r[4].sd[0] < 300ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353A98u | kUnwind; return; } goto L_00353A98; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 20032u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353AF0u);  if (depth < kMaxDepth) unit_0095(c, 427u, depth + 1u); else { c.pc = 0x00357608u; return; } if (c.pc != 0x00353AF0u) [[unlikely]] return; }
L_00353AF0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00353B24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 30144u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 42u));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00353B24; } }
    st16((c.r[2].w[0] + 42u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 1;
L_00353B24:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353B38:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 20032u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353B58u);  if (depth < kMaxDepth) unit_0095(c, 430u, depth + 1u); else { c.pc = 0x00357648u; return; } if (c.pc != 0x00353B58u) [[unlikely]] return; }
L_00353B58:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00353B8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 30144u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 42u));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00353B8C; } }
    st16((c.r[2].w[0] + 42u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 1;
L_00353B8C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 20032u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353BC0u);  if (depth < kMaxDepth) unit_0095(c, 433u, depth + 1u); else { c.pc = 0x00357688u; return; } if (c.pc != 0x00353BC0u) [[unlikely]] return; }
L_00353BC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00353BF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 30144u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 42u));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00353BF4; } }
    st16((c.r[2].w[0] + 42u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 1;
L_00353BF4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353C08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 30144u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    st16((c.r[5].w[0] + 42u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353C28:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00353C5C; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00353C80; } }
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00353C80; } }
L_00353C50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353C5C:
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 40u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353C50u | kUnwind; return; } goto L_00353C50; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353C50u | kUnwind; return; } goto L_00353C50; } }
L_00353C80:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353C90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] + 11336u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 7u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353CB4u);  if (depth < kMaxDepth) unit_0084(c, 263u, depth + 1u); else { c.pc = 0x00313AD8u; return; } if (c.pc != 0x00353CB4u) [[unlikely]] return; }
L_00353CB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353CC0u);  if (depth < kMaxDepth) unit_0094(c, 385u, depth + 1u); else { c.pc = 0x00353F90u; return; } if (c.pc != 0x00353CC0u) [[unlikely]] return; }
L_00353CC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], 0u + 299u);
    set32(c.r[2], c.r[2].w[0] + 3008u);
    set32(c.r[2], c.r[2].w[0] + 1196u);
    c.budget -= 4;
L_00353CD0:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353CD0u | kUnwind; return; } goto L_00353CD0; } }
    st32((c.r[16].w[0] + 12u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353D00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[3].d[0] = 0ull | 38392ull;
    set32(c.r[2], c.r[2].w[0] + 30144u);
    set32(c.r[4], 0u + 299u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_00353D18:
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353D18u | kUnwind; return; } goto L_00353D18; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353D38:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353D60u);  if (depth < kMaxDepth) unit_0094(c, 385u, depth + 1u); else { c.pc = 0x00353F90u; return; } if (c.pc != 0x00353D60u) [[unlikely]] return; }
L_00353D60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], 0u + 299u);
    set32(c.r[2], c.r[2].w[0] + 3008u);
    set32(c.r[2], c.r[2].w[0] + 1196u);
    c.budget -= 4;
L_00353D70:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353D70u | kUnwind; return; } goto L_00353D70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[19].w[0] + 12u), 0u);
    set32(c.r[17], c.r[2].w[0] + 30144u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[20], 0u + 1u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 6;
L_00353DA0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_00353DCC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[18].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_00353DCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353DCCu);  if (depth < kMaxDepth) unit_0094(c, 326u, depth + 1u); else { c.pc = 0x00353748u; return; } if (c.pc != 0x00353DCCu) [[unlikely]] return; }
L_00353DCC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 128u);
    c.r[2].d[0] = c.r[16].sd[0] < 300ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353DA0u | kUnwind; return; } goto L_00353DA0; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353E08:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353E30u);  if (depth < kMaxDepth) unit_0094(c, 385u, depth + 1u); else { c.pc = 0x00353F90u; return; } if (c.pc != 0x00353E30u) [[unlikely]] return; }
L_00353E30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], 0u + 299u);
    set32(c.r[2], c.r[2].w[0] + 3008u);
    set32(c.r[2], c.r[2].w[0] + 1196u);
    c.budget -= 4;
L_00353E40:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353E40u | kUnwind; return; } goto L_00353E40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[19].w[0] + 12u), 0u);
    set32(c.r[17], c.r[2].w[0] + 30144u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[20], 0u + 1u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 6;
L_00353E70:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_00353E9C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[18].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_00353E9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353E9Cu);  if (depth < kMaxDepth) unit_0094(c, 326u, depth + 1u); else { c.pc = 0x00353748u; return; } if (c.pc != 0x00353E9Cu) [[unlikely]] return; }
L_00353E9C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 128u);
    c.r[2].d[0] = c.r[16].sd[0] < 300ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353E70u | kUnwind; return; } goto L_00353E70; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353ED8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353F00u);  if (depth < kMaxDepth) unit_0094(c, 385u, depth + 1u); else { c.pc = 0x00353F90u; return; } if (c.pc != 0x00353F00u) [[unlikely]] return; }
L_00353F00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], 0u + 299u);
    set32(c.r[2], c.r[2].w[0] + 3008u);
    set32(c.r[2], c.r[2].w[0] + 1196u);
    c.budget -= 4;
L_00353F10:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353F10u | kUnwind; return; } goto L_00353F10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[17], 0u + 299u);
    set32(c.r[16], c.r[2].w[0] + 30144u);
    c.budget -= 4;
L_00353F38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00353F48u);  if (depth < kMaxDepth) unit_0094(c, 230u, depth + 1u); else { c.pc = 0x00352AC0u; return; } if (c.pc != 0x00353F48u) [[unlikely]] return; }
L_00353F48:
    set32(c.r[16], c.r[16].w[0] + 128u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353F38u | kUnwind; return; } goto L_00353F38; } }
    st32((c.r[19].w[0] + 8208u), 0u);
    set32(c.r[2], c.r[19].w[0] + 8208u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[18].w[0] + 12u), 0u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353F88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353F90:
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[3], 0u + 99u);
    c.budget -= 2;
L_00353F98:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00353FB8; } }
    st32((c.r[2].w[0] + 32u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0]), 0u);
    c.budget -= 4;
L_00353FB8:
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353F98u | kUnwind; return; } goto L_00353F98; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00353FD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[5].w[0] + 32u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[5].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_00353FF0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { [[clang::musttail]] return unit_0095(c, 3u, depth); } }
    st32((c.r[4].w[0]), 0u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0095(c, 1u, depth);
}

}
