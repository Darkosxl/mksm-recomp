#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0030[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0,
    0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0,
    0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0,
    0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0,
    0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0,
    0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    163, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0,
    0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0,
    0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0,
    0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0,
    0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0,
    0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0,
    0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0,
    0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0,
    0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0,
};

void unit_0030(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001C0000;
    case 2u: goto L_001C0004;
    case 3u: goto L_001C0010;
    case 4u: goto L_001C0038;
    case 5u: goto L_001C0068;
    case 6u: goto L_001C00A8;
    case 7u: goto L_001C00C0;
    case 8u: goto L_001C00F0;
    case 9u: goto L_001C0168;
    case 10u: goto L_001C01AC;
    case 11u: goto L_001C01D8;
    case 12u: goto L_001C01F8;
    case 13u: goto L_001C0220;
    case 14u: goto L_001C0238;
    case 15u: goto L_001C0258;
    case 16u: goto L_001C0288;
    case 17u: goto L_001C02D0;
    case 18u: goto L_001C030C;
    case 19u: goto L_001C0324;
    case 20u: goto L_001C0344;
    case 21u: goto L_001C0398;
    case 22u: goto L_001C03D0;
    case 23u: goto L_001C0404;
    case 24u: goto L_001C0448;
    case 25u: goto L_001C0468;
    case 26u: goto L_001C0488;
    case 27u: goto L_001C04F8;
    case 28u: goto L_001C0550;
    case 29u: goto L_001C0570;
    case 30u: goto L_001C0588;
    case 31u: goto L_001C05F8;
    case 32u: goto L_001C0608;
    case 33u: goto L_001C0618;
    case 34u: goto L_001C0638;
    case 35u: goto L_001C0648;
    case 36u: goto L_001C06BC;
    case 37u: goto L_001C06D8;
    case 38u: goto L_001C0710;
    case 39u: goto L_001C0738;
    case 40u: goto L_001C0784;
    case 41u: goto L_001C079C;
    case 42u: goto L_001C07A8;
    case 43u: goto L_001C07E8;
    case 44u: goto L_001C0808;
    case 45u: goto L_001C0858;
    case 46u: goto L_001C0868;
    case 47u: goto L_001C088C;
    case 48u: goto L_001C08A8;
    case 49u: goto L_001C08E4;
    case 50u: goto L_001C08EC;
    case 51u: goto L_001C0908;
    case 52u: goto L_001C0918;
    case 53u: goto L_001C0968;
    case 54u: goto L_001C09B0;
    case 55u: goto L_001C09C0;
    case 56u: goto L_001C09E4;
    case 57u: goto L_001C0A18;
    case 58u: goto L_001C0A30;
    case 59u: goto L_001C0A40;
    case 60u: goto L_001C0A6C;
    case 61u: goto L_001C0A80;
    case 62u: goto L_001C0AA0;
    case 63u: goto L_001C0AD8;
    case 64u: goto L_001C0AF0;
    case 65u: goto L_001C0B18;
    case 66u: goto L_001C0B84;
    case 67u: goto L_001C0BB8;
    case 68u: goto L_001C0BE8;
    case 69u: goto L_001C0C00;
    case 70u: goto L_001C0C30;
    case 71u: goto L_001C0CA8;
    case 72u: goto L_001C0CC0;
    case 73u: goto L_001C0CE4;
    case 74u: goto L_001C0CF8;
    case 75u: goto L_001C0D0C;
    case 76u: goto L_001C0D1C;
    case 77u: goto L_001C0D28;
    case 78u: goto L_001C0D3C;
    case 79u: goto L_001C0D44;
    case 80u: goto L_001C0D50;
    case 81u: goto L_001C0D78;
    case 82u: goto L_001C0D88;
    case 83u: goto L_001C0D98;
    case 84u: goto L_001C0DBC;
    case 85u: goto L_001C0DD0;
    case 86u: goto L_001C0E04;
    case 87u: goto L_001C0E28;
    case 88u: goto L_001C0E44;
    case 89u: goto L_001C0E68;
    case 90u: goto L_001C0E78;
    case 91u: goto L_001C0E90;
    case 92u: goto L_001C0EA8;
    case 93u: goto L_001C0EB8;
    case 94u: goto L_001C0FD0;
    case 95u: goto L_001C10BC;
    case 96u: goto L_001C10D8;
    case 97u: goto L_001C1158;
    case 98u: goto L_001C11D8;
    case 99u: goto L_001C1258;
    case 100u: goto L_001C12D8;
    case 101u: goto L_001C1350;
    case 102u: goto L_001C1358;
    case 103u: goto L_001C1360;
    case 104u: goto L_001C136C;
    case 105u: goto L_001C1374;
    case 106u: goto L_001C1380;
    case 107u: goto L_001C13A8;
    case 108u: goto L_001C1408;
    case 109u: goto L_001C1468;
    case 110u: goto L_001C14C8;
    case 111u: goto L_001C1528;
    case 112u: goto L_001C1588;
    case 113u: goto L_001C15F0;
    case 114u: goto L_001C1640;
    case 115u: goto L_001C16A0;
    case 116u: goto L_001C1730;
    case 117u: goto L_001C1788;
    case 118u: goto L_001C17B8;
    case 119u: goto L_001C17D4;
    case 120u: goto L_001C17EC;
    case 121u: goto L_001C1808;
    case 122u: goto L_001C1820;
    case 123u: goto L_001C183C;
    case 124u: goto L_001C1854;
    case 125u: goto L_001C1870;
    case 126u: goto L_001C1888;
    case 127u: goto L_001C18A4;
    case 128u: goto L_001C18BC;
    case 129u: goto L_001C18D8;
    case 130u: goto L_001C18F0;
    case 131u: goto L_001C1910;
    case 132u: goto L_001C1928;
    case 133u: goto L_001C1948;
    case 134u: goto L_001C1960;
    case 135u: goto L_001C1978;
    case 136u: goto L_001C1990;
    case 137u: goto L_001C1998;
    case 138u: goto L_001C19C8;
    case 139u: goto L_001C1A20;
    case 140u: goto L_001C1A70;
    case 141u: goto L_001C1AC8;
    case 142u: goto L_001C1B20;
    case 143u: goto L_001C1B78;
    case 144u: goto L_001C1BD0;
    case 145u: goto L_001C1BE8;
    case 146u: goto L_001C1C00;
    case 147u: goto L_001C1C20;
    case 148u: goto L_001C1C64;
    case 149u: goto L_001C1C78;
    case 150u: goto L_001C1C8C;
    case 151u: goto L_001C1C9C;
    case 152u: goto L_001C1CB8;
    case 153u: goto L_001C1CC8;
    case 154u: goto L_001C1CE8;
    case 155u: goto L_001C1D38;
    case 156u: goto L_001C1D90;
    case 157u: goto L_001C1DE8;
    case 158u: goto L_001C1E40;
    case 159u: goto L_001C1E98;
    case 160u: goto L_001C1EF0;
    case 161u: goto L_001C1F10;
    case 162u: goto L_001C1F70;
    case 163u: goto L_001C1F80;
    case 164u: goto L_001C1F88;
    case 165u: goto L_001C1F90;
    case 166u: goto L_001C1FE8;
    case 167u: goto L_001C2040;
    case 168u: goto L_001C2098;
    case 169u: goto L_001C20F0;
    case 170u: goto L_001C2148;
    case 171u: goto L_001C21A0;
    case 172u: goto L_001C21B8;
    case 173u: goto L_001C21D8;
    case 174u: goto L_001C2240;
    case 175u: goto L_001C2258;
    case 176u: goto L_001C2268;
    case 177u: goto L_001C2280;
    case 178u: goto L_001C2290;
    case 179u: goto L_001C26DC;
    case 180u: goto L_001C26FC;
    case 181u: goto L_001C2720;
    case 182u: goto L_001C2744;
    case 183u: goto L_001C2768;
    case 184u: goto L_001C278C;
    case 185u: goto L_001C27B0;
    case 186u: goto L_001C27D4;
    case 187u: goto L_001C27F8;
    case 188u: goto L_001C281C;
    case 189u: goto L_001C2840;
    case 190u: goto L_001C2864;
    case 191u: goto L_001C2888;
    case 192u: goto L_001C28AC;
    case 193u: goto L_001C28D0;
    case 194u: goto L_001C28F4;
    case 195u: goto L_001C2918;
    case 196u: goto L_001C2938;
    case 197u: goto L_001C2958;
    case 198u: goto L_001C2974;
    case 199u: goto L_001C2990;
    case 200u: goto L_001C29AC;
    case 201u: goto L_001C29C8;
    case 202u: goto L_001C29E4;
    case 203u: goto L_001C2A00;
    case 204u: goto L_001C2A20;
    case 205u: goto L_001C2A40;
    case 206u: goto L_001C2A60;
    case 207u: goto L_001C2AA0;
    case 208u: goto L_001C2FA0;
    case 209u: goto L_001C2FF8;
    case 210u: goto L_001C3018;
    case 211u: goto L_001C303C;
    case 212u: goto L_001C3060;
    case 213u: goto L_001C3084;
    case 214u: goto L_001C30A8;
    case 215u: goto L_001C30CC;
    case 216u: goto L_001C30F0;
    case 217u: goto L_001C3114;
    case 218u: goto L_001C3138;
    case 219u: goto L_001C315C;
    case 220u: goto L_001C3180;
    case 221u: goto L_001C31A4;
    case 222u: goto L_001C31C8;
    case 223u: goto L_001C31EC;
    case 224u: goto L_001C3210;
    case 225u: goto L_001C3234;
    case 226u: goto L_001C3254;
    case 227u: goto L_001C3278;
    case 228u: goto L_001C3298;
    case 229u: goto L_001C32B8;
    case 230u: goto L_001C32D4;
    case 231u: goto L_001C32F0;
    case 232u: goto L_001C330C;
    case 233u: goto L_001C3328;
    case 234u: goto L_001C3344;
    case 235u: goto L_001C3360;
    case 236u: goto L_001C337C;
    case 237u: goto L_001C33C0;
    case 238u: goto L_001C33E8;
    case 239u: goto L_001C3420;
    case 240u: goto L_001C3458;
    case 241u: goto L_001C3490;
    case 242u: goto L_001C34C8;
    case 243u: goto L_001C3500;
    case 244u: goto L_001C3538;
    case 245u: goto L_001C3570;
    case 246u: goto L_001C35A8;
    case 247u: goto L_001C35E0;
    case 248u: goto L_001C3618;
    case 249u: goto L_001C3650;
    case 250u: goto L_001C3688;
    case 251u: goto L_001C36C0;
    case 252u: goto L_001C36F8;
    case 253u: goto L_001C3730;
    case 254u: goto L_001C3768;
    case 255u: goto L_001C37A0;
    case 256u: goto L_001C37D8;
    case 257u: goto L_001C3810;
    case 258u: goto L_001C3848;
    case 259u: goto L_001C3880;
    case 260u: goto L_001C38B8;
    case 261u: goto L_001C38F0;
    case 262u: goto L_001C3928;
    case 263u: goto L_001C3960;
    case 264u: goto L_001C3998;
    case 265u: goto L_001C39D0;
    case 266u: goto L_001C3A08;
    case 267u: goto L_001C3A20;
    case 268u: goto L_001C3A30;
    case 269u: goto L_001C3A68;
    case 270u: goto L_001C3A78;
    case 271u: goto L_001C3AB4;
    case 272u: goto L_001C3AD4;
    case 273u: goto L_001C3B3C;
    case 274u: goto L_001C3BB0;
    case 275u: goto L_001C3C28;
    case 276u: goto L_001C3C5C;
    case 277u: goto L_001C3C70;
    case 278u: goto L_001C3C84;
    case 279u: goto L_001C3CA0;
    case 280u: goto L_001C3CC0;
    case 281u: goto L_001C3CCC;
    case 282u: goto L_001C3CF0;
    case 283u: goto L_001C3D14;
    case 284u: goto L_001C3D20;
    case 285u: goto L_001C3D34;
    case 286u: goto L_001C3D44;
    case 287u: goto L_001C3D60;
    case 288u: goto L_001C3D90;
    case 289u: goto L_001C3DA4;
    case 290u: goto L_001C3DC8;
    case 291u: goto L_001C3DF8;
    case 292u: goto L_001C3E18;
    case 293u: goto L_001C3E20;
    case 294u: goto L_001C3E34;
    case 295u: goto L_001C3E48;
    case 296u: goto L_001C3E70;
    case 297u: goto L_001C3E84;
    case 298u: goto L_001C3E98;
    case 299u: goto L_001C3EC0;
    case 300u: goto L_001C3ED8;
    case 301u: goto L_001C3EE8;
    case 302u: goto L_001C3F20;
    case 303u: goto L_001C3F48;
    case 304u: goto L_001C3F58;
    case 305u: goto L_001C3F64;
    case 306u: goto L_001C3F88;
    case 307u: goto L_001C3FC8;
    case 308u: goto L_001C3FDC;
    case 309u: goto L_001C3FF8;
    default: bad_entry(c, 0x001C0000u); return;
    }
L_001C0000:
    c.budget -= 1;
L_001C0004:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0010:
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_001C0028; } }
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[4].w[0] + 8944u), c.f[2]);
    st32((c.r[4].w[0] + 8948u), c.f[0]);
    c.budget -= 3;
L_001C0028:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0038:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.r[7].d[0] = c.r[29].d[0] | 4ull;
    set32(c.r[8], 0u + 512u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0068u);  if (depth < kMaxDepth) unit_002F(c, 240u, depth + 1u); else { c.pc = 0x001BF3F8u; return; } if (c.pc != 0x001C0068u) [[unlikely]] return; }
L_001C0068:
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001C00A8; } }
    set32(c.r[5], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22480u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13248u);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C00A8u);  if (depth < kMaxDepth) unit_0088(c, 13u, depth + 1u); else { c.pc = 0x003201E8u; return; } if (c.pc != 0x001C00A8u) [[unlikely]] return; }
L_001C00A8:
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C00C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_001C00F4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C00F0u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x001C00F0u) [[unlikely]] return; }
L_001C00F0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C00F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] - 5024u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10097u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C0150; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C0150; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 40u));
    c.r[2].d[0] = c.r[2].d[0] & 576ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C0150; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 66u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C0150; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 560u));
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 48ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 16ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = 0ull;
    c.budget -= 5;
L_001C0150:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0168:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 112u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C01B4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C01B4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[2], 0u + 168u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C01B4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C01ACu);  if (depth < kMaxDepth) unit_0088(c, 302u, depth + 1u); else { c.pc = 0x00323720u; return; } if (c.pc != 0x001C01ACu) [[unlikely]] return; }
L_001C01AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_001C01C0; } }
L_001C01B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C01C4; } }
L_001C01C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C01C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C01D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10072u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C020C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C01F8u);  if (depth < kMaxDepth) unit_002F(c, 134u, depth + 1u); else { c.pc = 0x001BD530u; return; } if (c.pc != 0x001C01F8u) [[unlikely]] return; }
L_001C01F8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C0210; } }
L_001C020C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C0210:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0238u);  if (depth < kMaxDepth) unit_0030(c, 15u, depth + 1u); else { c.pc = 0x001C0258u; return; } if (c.pc != 0x001C0238u) [[unlikely]] return; }
L_001C0238:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0] + 9836u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0258:
    set32(c.r[2], ld32((c.r[4].w[0] + 11264u)));
    st16((c.r[4].w[0] + 10072u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 10068u), 0u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C027C; } }
    st32((c.r[2].w[0] + 116u), 0u);
    st32((c.r[2].w[0] + 104u), 0u);
    st32((c.r[2].w[0] + 108u), 0u);
    st32((c.r[2].w[0] + 112u), 0u);
    c.budget -= 4;
L_001C027C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0288:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C02D0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001C02D0u) [[unlikely]] return; }
L_001C02D0:
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[16].w[0] + 136u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[2]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C030Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001C030Cu) [[unlikely]] return; }
L_001C030C:
    c.f[14] = ld32((c.r[29].w[0]));
    c.f[15] = ld32((c.r[29].w[0] + 8u));
    c.f[13] = ld32((c.r[16].w[0] + 136u));
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0324u);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x001C0324u) [[unlikely]] return; }
L_001C0324:
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[14] = ld32((c.r[29].w[0]));
    c.f[15] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[12] = ld32((c.r[18].w[0] + 128u));
    c.f[13] = ld32((c.r[18].w[0] + 136u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0344u);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x001C0344u) [[unlikely]] return; }
L_001C0344:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10072u)));
    c.f[1] = c.f[0] & fp::kAbs;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C036C; } }
    c.f[0] = ld32((c.r[18].w[0] + 10068u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C03B0; } }
L_001C036C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x463B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C03A4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0398u);  if (depth < kMaxDepth) unit_001A(c, 150u, depth + 1u); else { c.pc = 0x00169CA0u; return; } if (c.pc != 0x001C0398u) [[unlikely]] return; }
L_001C0398:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C03B0; } }
L_001C03A4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C03B4; } }
L_001C03B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C03B4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C03D0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[2].w[0] + 14208u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    set32(c.r[7], c.r[29].w[0] + 4u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    set32(c.r[5], 0u + 13248u);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    c.budget -= 13;
L_001C0404:
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.f[20] = c.f[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[18], 0u + 1u);
    set32(c.r[20], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 4u), c.f[20]);
    mmi::mult(c, 0, c.r[20].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[29].w[0]), c.f[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0448u);  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE3A0u; return; } if (c.pc != 0x001C0448u) [[unlikely]] return; }
L_001C0448:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.f[20] = ld32((c.r[29].w[0]));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C04BC; } }
    c.r[23].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[22], 0u + 13248u);
    set32(c.r[17], c.r[19].w[0] + 8u);
    c.budget -= 3;
L_001C0468:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    mmi::mult(c, 0, c.r[16].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[23].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0488u);  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE3A0u; return; } if (c.pc != 0x001C0488u) [[unlikely]] return; }
L_001C0488:
    c.f[0] = ld32((c.r[29].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C04A4; } }
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.budget -= 2;
L_001C04A4:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C0468u | kUnwind; return; } goto L_001C0468; } }
L_001C04BC:
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
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C04F8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], 0u + 13248u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    mmi::mult(c, 0, c.r[21].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[2].w[0] + 14208u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[29].w[0] + 144u), c.f[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0550u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001C0550u) [[unlikely]] return; }
L_001C0550:
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.f[20] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001C05C0; } }
    c.r[23].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[22], 0u + 13248u);
    set32(c.r[18], c.r[20].w[0] + 4u);
    c.budget -= 3;
L_001C0570:
    set32(c.r[17], ld32((c.r[18].w[0])));
    mmi::mult(c, 0, c.r[17].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] + c.r[23].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0588u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001C0588u) [[unlikely]] return; }
L_001C0588:
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C05A8; } }
    c.f[20] = c.f[0];
    c.r[21].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001C05A8:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C0570u | kUnwind; return; } goto L_001C0570; } }
L_001C05C0:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C05F8:
    st32((c.r[4].w[0] + 9844u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 9840u), c.r[6].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0608:
    st32((c.r[4].w[0] + 9844u), 0u);
    st32((c.r[4].w[0] + 9840u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0618:
    set32(c.r[2], ld32((c.r[4].w[0] + 9840u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C0628; } }
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_001C0628:
    st32((c.r[4].w[0] + 9844u), 0u);
    st32((c.r[4].w[0] + 9840u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0638:
    st32((c.r[4].w[0] + 10244u), 0u);
    st16((c.r[4].w[0] + 10248u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0648:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10072u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C06B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 9836u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C06B0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10074u)));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 10074u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001C06B0; } }
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    c.f[2] = ld32((c.r[16].w[0] + 208u));
    c.f[3] = ld32((c.r[16].w[0] + 216u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st16((c.r[16].w[0] + 10074u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 128u), c.f[1]);
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C06C4; } }
L_001C06B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C06BCu);  if (depth < kMaxDepth) unit_0030(c, 15u, depth + 1u); else { c.pc = 0x001C0258u; return; } if (c.pc != 0x001C06BCu) [[unlikely]] return; }
L_001C06BC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 9836u), c.r[2].w[0]);
    c.budget -= 2;
L_001C06C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C06D8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], 0u + 13248u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 36u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0710u);  if (depth < kMaxDepth) unit_006B(c, 137u, depth + 1u); else { c.pc = 0x002AEC28u; return; } if (c.pc != 0x001C0710u) [[unlikely]] return; }
L_001C0710:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001C0730; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C0758; } }
L_001C0730:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001C0738:
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C0754; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C0738u | kUnwind; return; } goto L_001C0738; } }
L_001C0754:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_001C0758:
    c.r[2].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C078C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001C0778; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C07A0; } }
L_001C0778:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0784u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001C0784u) [[unlikely]] return; }
L_001C0784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C07A0; } }
L_001C078C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C079Cu);  if (depth < kMaxDepth) unit_00DD(c, 90u, depth + 1u); else { c.pc = 0x004753A0u; return; } if (c.pc != 0x001C079Cu) [[unlikely]] return; }
L_001C079C:
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001C07A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001C07A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 65u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C07C8; } }
    set32(c.r[2], c.r[3].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 3;
L_001C07C8:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C07A8u | kUnwind; return; } goto L_001C07A8; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C07E8u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x001C07E8u) [[unlikely]] return; }
L_001C07E8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0808:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[19], c.r[3].w[0] + 27456u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    set32(c.r[23], 0u + 1536u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 20;
L_001C0858:
    set32(c.r[4], c.r[30].w[0] + 9872u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0868u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001C0868u) [[unlikely]] return; }
L_001C0868:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] - 6944u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[23].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 1524u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C088Cu);  if (depth < kMaxDepth) unit_0007(c, 337u, depth + 1u); else { c.pc = 0x0011EC50u; return; } if (c.pc != 0x001C088Cu) [[unlikely]] return; }
L_001C088C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C08A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C08A8u) [[unlikely]] return; }
L_001C08A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C0918; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001C0918; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C0918; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 536u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C0918; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[22].w[0] - 19312u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C08E4u);  if (depth < kMaxDepth) unit_0089(c, 11u, depth + 1u); else { c.pc = 0x003242A8u; return; } if (c.pc != 0x001C08E4u) [[unlikely]] return; }
L_001C08E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C08ECu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001C08ECu) [[unlikely]] return; }
L_001C08EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[21].w[0] - 26032u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0908u);  if (depth < kMaxDepth) unit_0097(c, 344u, depth + 1u); else { c.pc = 0x0035FC20u; return; } if (c.pc != 0x001C0908u) [[unlikely]] return; }
L_001C0908:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0918u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001C0918u) [[unlikely]] return; }
L_001C0918:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] + 13248u);
    c.r[2].d[0] = c.r[20].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C0858u | kUnwind; return; } goto L_001C0858; } }
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
L_001C0968:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001C09F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C09F4; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[18], 0u + 13u);
    set32(c.r[19], c.r[16].w[0] - 32384u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[17], c.r[19].w[0] + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C09B0u);  if (depth < kMaxDepth) unit_0098(c, 196u, depth + 1u); else { c.pc = 0x003626F8u; return; } if (c.pc != 0x001C09B0u) [[unlikely]] return; }
L_001C09B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[19].w[0] + 240u), 0u);
    set32(c.r[3], c.r[3].w[0] - 26024u);
    st32((c.r[16].w[0] - 32384u), c.r[3].w[0]);
    c.budget -= 4;
L_001C09C0:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C09E4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C09E4u) [[unlikely]] return; }
L_001C09E4:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C09C0u | kUnwind; return; } goto L_001C09C0; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_001C09F4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0A18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 32384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0A30u);  if (depth < kMaxDepth) unit_0030(c, 70u, depth + 1u); else { c.pc = 0x001C0C30u; return; } if (c.pc != 0x001C0A30u) [[unlikely]] return; }
L_001C0A30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0A40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    set32(c.r[16], c.r[17].w[0] + 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], 0u + 13u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0A6Cu);  if (depth < kMaxDepth) unit_0098(c, 196u, depth + 1u); else { c.pc = 0x003626F8u; return; } if (c.pc != 0x001C0A6Cu) [[unlikely]] return; }
L_001C0A6C:
    c.f[20] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[17].w[0] + 240u), 0u);
    set32(c.r[2], c.r[2].w[0] - 26024u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_001C0A80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0AA0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C0AA0u) [[unlikely]] return; }
L_001C0AA0:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C0A80u | kUnwind; return; } goto L_001C0A80; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0AD8:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C0AF0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0AF0:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[4], 0u + 13248u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 640u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0B18:
    set32(c.r[3], 0u + 268u);
    set32(c.r[2], 0u + 13248u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 48u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 14152u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 27456u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0B84u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001C0B84u) [[unlikely]] return; }
L_001C0B84:
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    st32((c.r[17].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0BB8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 13u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[2].w[0] + 27456u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 12;
L_001C0BE8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] - 19312u);
    set32(c.r[18], c.r[18].w[0] + 13248u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0C00u);  if (depth < kMaxDepth) unit_0089(c, 11u, depth + 1u); else { c.pc = 0x003242A8u; return; } if (c.pc != 0x001C0C00u) [[unlikely]] return; }
L_001C0C00:
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C0BE8u | kUnwind; return; } goto L_001C0BE8; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0C30:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], ld32((c.r[3].w[0] + 23020u)));
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C0D50; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C0D50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4984u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001C0D50; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C0CD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[18], c.r[2].w[0] + 27456u);
    set32(c.r[16], c.r[19].w[0] + 16u);
    set32(c.r[17], 0u + 13u);
    c.budget -= 5;
L_001C0CA8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] - 19312u);
    set32(c.r[18], c.r[18].w[0] + 13248u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0CC0u);  if (depth < kMaxDepth) unit_0089(c, 11u, depth + 1u); else { c.pc = 0x003242A8u; return; } if (c.pc != 0x001C0CC0u) [[unlikely]] return; }
L_001C0CC0:
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C0CA8u | kUnwind; return; } goto L_001C0CA8; } }
    st32((c.r[19].w[0] + 4u), 0u);
    c.budget -= 1;
L_001C0CD4:
    set32(c.r[16], c.r[21].w[0] - 19792u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0CE4u);  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x001255E0u; return; } if (c.pc != 0x001C0CE4u) [[unlikely]] return; }
L_001C0CE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C0D30; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0CF8u);  if (depth < kMaxDepth) unit_0009(c, 69u, depth + 1u); else { c.pc = 0x001258C8u; return; } if (c.pc != 0x001C0CF8u) [[unlikely]] return; }
L_001C0CF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C0D50; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D0Cu);  if (depth < kMaxDepth) unit_0009(c, 52u, depth + 1u); else { c.pc = 0x001255F8u; return; } if (c.pc != 0x001C0D0Cu) [[unlikely]] return; }
L_001C0D0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C0D50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D1Cu);  if (depth < kMaxDepth) unit_0036(c, 330u, depth + 1u); else { c.pc = 0x001DAA58u; return; } if (c.pc != 0x001C0D1Cu) [[unlikely]] return; }
L_001C0D1C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D28u);  if (depth < kMaxDepth) unit_0000(c, 164u, depth + 1u); else { c.pc = 0x001018D8u; return; } if (c.pc != 0x001C0D28u) [[unlikely]] return; }
L_001C0D28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C0D50; } }
L_001C0D30:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D3Cu);  if (depth < kMaxDepth) unit_0030(c, 44u, depth + 1u); else { c.pc = 0x001C0808u; return; } if (c.pc != 0x001C0D3Cu) [[unlikely]] return; }
L_001C0D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D44u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001C0D44u) [[unlikely]] return; }
L_001C0D44:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D50u);  if (depth < kMaxDepth) unit_0098(c, 206u, depth + 1u); else { c.pc = 0x003627D8u; return; } if (c.pc != 0x001C0D50u) [[unlikely]] return; }
L_001C0D50:
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
L_001C0D78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D88u);  if (depth < kMaxDepth) unit_0034(c, 164u, depth + 1u); else { c.pc = 0x001D1B10u; return; } if (c.pc != 0x001C0D88u) [[unlikely]] return; }
L_001C0D88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0D98:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[17], c.r[2].w[0] + 12224u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0DBCu);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8438u; return; } if (c.pc != 0x001C0DBCu) [[unlikely]] return; }
L_001C0DBC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001C0DF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0DD0u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x001C0DD0u) [[unlikely]] return; }
L_001C0DD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C0DE8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C0E08; } }
L_001C0DE8:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C0E08; } }
L_001C0DF4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0E04u);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8438u; return; } if (c.pc != 0x001C0E04u) [[unlikely]] return; }
L_001C0E04:
    set32(c.r[3], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_001C0E08:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0E28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0E44u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001C0E44u) [[unlikely]] return; }
L_001C0E44:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 112u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0E68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0E78u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001C0E78u) [[unlikely]] return; }
L_001C0E78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + 2544u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0E90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0EA8u);  if (depth < kMaxDepth) unit_0030(c, 53u, depth + 1u); else { c.pc = 0x001C0968u; return; } if (c.pc != 0x001C0EA8u) [[unlikely]] return; }
L_001C0EA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0EB8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[10].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[29].w[0] + 64u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    ldl(c.r[2], (c.r[4].w[0] + 7u));
    ldr(c.r[2], (c.r[4].w[0]));
    ldl(c.r[3], (c.r[4].w[0] + 15u));
    ldr(c.r[3], (c.r[4].w[0] + 8u));
    ldl(c.r[6], (c.r[4].w[0] + 23u));
    ldr(c.r[6], (c.r[4].w[0] + 16u));
    ldl(c.r[7], (c.r[4].w[0] + 31u));
    ldr(c.r[7], (c.r[4].w[0] + 24u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[3], (c.r[29].w[0] + 15u));
    sdr(c.r[3], (c.r[29].w[0] + 8u));
    sdl(c.r[6], (c.r[29].w[0] + 23u));
    sdr(c.r[6], (c.r[29].w[0] + 16u));
    sdl(c.r[7], (c.r[29].w[0] + 31u));
    sdr(c.r[7], (c.r[29].w[0] + 24u));
    ldl(c.r[2], (c.r[4].w[0] + 39u));
    ldr(c.r[2], (c.r[4].w[0] + 32u));
    ldl(c.r[3], (c.r[4].w[0] + 47u));
    ldr(c.r[3], (c.r[4].w[0] + 40u));
    ldl(c.r[6], (c.r[4].w[0] + 55u));
    ldr(c.r[6], (c.r[4].w[0] + 48u));
    ldl(c.r[7], (c.r[4].w[0] + 63u));
    ldr(c.r[7], (c.r[4].w[0] + 56u));
    sdl(c.r[2], (c.r[29].w[0] + 39u));
    sdr(c.r[2], (c.r[29].w[0] + 32u));
    sdl(c.r[3], (c.r[29].w[0] + 47u));
    sdr(c.r[3], (c.r[29].w[0] + 40u));
    sdl(c.r[6], (c.r[29].w[0] + 55u));
    sdr(c.r[6], (c.r[29].w[0] + 48u));
    sdl(c.r[7], (c.r[29].w[0] + 63u));
    sdr(c.r[7], (c.r[29].w[0] + 56u));
    ldl(c.r[2], (c.r[5].w[0] + 7u));
    ldr(c.r[2], (c.r[5].w[0]));
    ldl(c.r[3], (c.r[5].w[0] + 15u));
    ldr(c.r[3], (c.r[5].w[0] + 8u));
    ldl(c.r[4], (c.r[5].w[0] + 23u));
    ldr(c.r[4], (c.r[5].w[0] + 16u));
    ldl(c.r[6], (c.r[5].w[0] + 31u));
    ldr(c.r[6], (c.r[5].w[0] + 24u));
    sdl(c.r[2], (c.r[29].w[0] + 71u));
    sdr(c.r[2], (c.r[29].w[0] + 64u));
    sdl(c.r[3], (c.r[29].w[0] + 79u));
    sdr(c.r[3], (c.r[29].w[0] + 72u));
    sdl(c.r[4], (c.r[29].w[0] + 87u));
    sdr(c.r[4], (c.r[29].w[0] + 80u));
    sdl(c.r[6], (c.r[29].w[0] + 95u));
    sdr(c.r[6], (c.r[29].w[0] + 88u));
    ldl(c.r[2], (c.r[5].w[0] + 39u));
    ldr(c.r[2], (c.r[5].w[0] + 32u));
    ldl(c.r[3], (c.r[5].w[0] + 47u));
    ldr(c.r[3], (c.r[5].w[0] + 40u));
    ldl(c.r[4], (c.r[5].w[0] + 55u));
    ldr(c.r[4], (c.r[5].w[0] + 48u));
    ldl(c.r[6], (c.r[5].w[0] + 63u));
    ldr(c.r[6], (c.r[5].w[0] + 56u));
    sdl(c.r[2], (c.r[29].w[0] + 103u));
    sdr(c.r[2], (c.r[29].w[0] + 96u));
    sdl(c.r[3], (c.r[29].w[0] + 111u));
    sdr(c.r[3], (c.r[29].w[0] + 104u));
    sdl(c.r[4], (c.r[29].w[0] + 119u));
    sdr(c.r[4], (c.r[29].w[0] + 112u));
    sdl(c.r[6], (c.r[29].w[0] + 127u));
    sdr(c.r[6], (c.r[29].w[0] + 120u));
    c.budget -= 70;
L_001C0FD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[9], c.r[2].w[0] - 26584u);
    set32(c.r[8], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[9].w[0] + 72u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], ld32((c.r[29].w[0] + 72u)));
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[8].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    if (c.r[5].d[0] == 0) c.r[3].d[0] = 0ull;
    if (c.r[4].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C10BC; } }
    set32(c.r[2], ld32((c.r[9].w[0] + 76u)));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    if (c.r[5].d[0] == 0) c.r[3].d[0] = 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C10BC; } }
    set32(c.r[2], ld32((c.r[9].w[0] + 80u)));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    if (c.r[5].d[0] == 0) c.r[3].d[0] = 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C10BC; } }
    set32(c.r[2], ld32((c.r[9].w[0] + 96u)));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    if (c.r[5].d[0] == 0) c.r[3].d[0] = 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C10BC; } }
    set32(c.r[2], ld32((c.r[9].w[0] + 100u)));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    if (c.r[5].d[0] == 0) c.r[3].d[0] = 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C10BC; } }
    set32(c.r[2], ld32((c.r[9].w[0] + 104u)));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    if (c.r[5].d[0] == 0) c.r[4].d[0] = 0ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001C10C8; } }
L_001C10BC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C1344; } }
L_001C10C8:
    c.r[12].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[8], 0u + 6u);
    set32(c.r[11], 0u - 1u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 4;
L_001C10D8:
    set32(c.r[3], c.r[8].w[0] + 360u);
    set32(c.r[2], c.r[8].w[0] + 391u);
    c.r[5].d[0] = c.r[11].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[3].d[0] & 31ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] + c.r[12].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[7], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[16].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    if (c.r[4].d[0] == 0) c.r[5].d[0] = 0ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 22;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C10BCu | kUnwind; return; } goto L_001C10BC; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C10D8u | kUnwind; return; } goto L_001C10D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[12], c.r[2].w[0] - 26584u);
    set32(c.r[11], 0u - 1u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 6;
L_001C1158:
    set32(c.r[3], c.r[8].w[0] + 92u);
    set32(c.r[2], c.r[8].w[0] + 123u);
    c.r[5].d[0] = c.r[11].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[3].d[0] & 31ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] + c.r[12].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[7], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[16].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    if (c.r[4].d[0] == 0) c.r[5].d[0] = 0ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 22;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C10BCu | kUnwind; return; } goto L_001C10BC; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C1158u | kUnwind; return; } goto L_001C1158; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[12], c.r[2].w[0] - 26584u);
    set32(c.r[11], 0u - 1u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 6;
L_001C11D8:
    set32(c.r[3], c.r[8].w[0] + 101u);
    set32(c.r[2], c.r[8].w[0] + 132u);
    c.r[5].d[0] = c.r[11].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[3].d[0] & 31ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] + c.r[12].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[7], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[16].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    if (c.r[4].d[0] == 0) c.r[5].d[0] = 0ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 22;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C10BCu | kUnwind; return; } goto L_001C10BC; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C11D8u | kUnwind; return; } goto L_001C11D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[12], c.r[2].w[0] - 26584u);
    set32(c.r[11], 0u - 1u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 6;
L_001C1258:
    set32(c.r[3], c.r[8].w[0] + 166u);
    set32(c.r[2], c.r[8].w[0] + 197u);
    c.r[5].d[0] = c.r[11].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[3].d[0] & 31ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] + c.r[12].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[7], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[16].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    if (c.r[4].d[0] == 0) c.r[5].d[0] = 0ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 22;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C10BCu | kUnwind; return; } goto L_001C10BC; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 176ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C1258u | kUnwind; return; } goto L_001C1258; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[12], c.r[2].w[0] - 26584u);
    set32(c.r[11], 0u - 1u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 6;
L_001C12D8:
    set32(c.r[3], c.r[8].w[0] + 343u);
    set32(c.r[2], c.r[8].w[0] + 374u);
    c.r[5].d[0] = c.r[11].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[3].d[0] & 31ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] + c.r[12].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[7], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[16].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    if (c.r[4].d[0] == 0) c.r[5].d[0] = 0ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 22;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C10BCu | kUnwind; return; } goto L_001C10BC; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C12D8u | kUnwind; return; } goto L_001C12D8; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001C1344:
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1350u);  if (depth < kMaxDepth) unit_0029(c, 330u, depth + 1u); else { c.pc = 0x001A6F68u; return; } if (c.pc != 0x001C1350u) [[unlikely]] return; }
L_001C1350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C1360; } }
L_001C1358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1360u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001C1360u) [[unlikely]] return; }
L_001C1360:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C136Cu);  if (depth < kMaxDepth) unit_0029(c, 330u, depth + 1u); else { c.pc = 0x001A6F68u; return; } if (c.pc != 0x001C136Cu) [[unlikely]] return; }
L_001C136C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C1388; } }
L_001C1374:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1380u);  if (depth < kMaxDepth) unit_0029(c, 330u, depth + 1u); else { c.pc = 0x001A6F68u; return; } if (c.pc != 0x001C1380u) [[unlikely]] return; }
L_001C1380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C1358u | kUnwind; return; } goto L_001C1358; } }
L_001C1388:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C13A8:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[12].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 26584u);
    set32(c.r[7], c.r[7].w[0] - 32128u);
    set32(c.r[5], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    c.r[11].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.r[10].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    set32(c.r[5], ld32((c.r[3].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[6], ld32((c.r[3].w[0] + 100u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 104u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    set32(c.r[8], 0u + 6u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[9], 0u - 1u);
    st32((c.r[7].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 24;
L_001C1408:
    set32(c.r[2], c.r[8].w[0] + 360u);
    set32(c.r[3], c.r[8].w[0] + 391u);
    c.r[5].d[0] = c.r[9].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] & 31ull;
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[8].sd[0] < 15ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C1408u | kUnwind; return; } goto L_001C1408; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[9], c.r[2].w[0] - 32128u);
    set32(c.r[7], c.r[3].w[0] - 26584u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 6;
L_001C1468:
    set32(c.r[2], c.r[8].w[0] + 92u);
    set32(c.r[3], c.r[8].w[0] + 123u);
    c.r[5].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] & 31ull;
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[8].sd[0] < 8ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C1468u | kUnwind; return; } goto L_001C1468; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[9], c.r[2].w[0] - 32128u);
    set32(c.r[7], c.r[3].w[0] - 26584u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 6;
L_001C14C8:
    set32(c.r[2], c.r[8].w[0] + 101u);
    set32(c.r[3], c.r[8].w[0] + 132u);
    c.r[5].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] & 31ull;
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[8].sd[0] < 64ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C14C8u | kUnwind; return; } goto L_001C14C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[9], c.r[2].w[0] - 32128u);
    set32(c.r[7], c.r[3].w[0] - 26584u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 6;
L_001C1528:
    set32(c.r[2], c.r[8].w[0] + 166u);
    set32(c.r[3], c.r[8].w[0] + 197u);
    c.r[5].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] & 31ull;
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[8].sd[0] < 176ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C1528u | kUnwind; return; } goto L_001C1528; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[9], c.r[2].w[0] - 32128u);
    set32(c.r[7], c.r[3].w[0] - 26584u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 6;
L_001C1588:
    set32(c.r[2], c.r[8].w[0] + 343u);
    set32(c.r[3], c.r[8].w[0] + 374u);
    c.r[5].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] & 31ull;
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[8].sd[0] < 16ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C1588u | kUnwind; return; } goto L_001C1588; } }
    set32(c.r[3], c.r[12].w[0] - 32128u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C15F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[2].w[0] - 25920u);
    ldl(c.r[4], (c.r[7].w[0] + 7u));
    ldr(c.r[4], (c.r[7].w[0]));
    set32(c.r[5], ld32((c.r[7].w[0] + 8u)));
    sdl(c.r[4], (c.r[29].w[0] + 7u));
    sdr(c.r[4], (c.r[29].w[0]));
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[3], 0u - 1u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001C1688; } }
    set32(c.r[9], c.r[10].w[0] - 32128u);
    set32(c.r[8], c.r[11].w[0] - 26584u);
    set32(c.r[7], 0u - 1u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
L_001C1640:
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[2].w[0] + 31u);
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C1640u | kUnwind; return; } goto L_001C1640; } }
L_001C1688:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[9], c.r[2].w[0] - 32128u);
    set32(c.r[8], c.r[3].w[0] - 26584u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
L_001C16A0:
    set32(c.r[2], c.r[6].w[0] + 360u);
    set32(c.r[3], c.r[6].w[0] + 391u);
    c.r[5].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] & 31ull;
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C16A0u | kUnwind; return; } goto L_001C16A0; } }
    set32(c.r[5], c.r[10].w[0] - 32128u);
    set32(c.r[2], c.r[11].w[0] - 26584u);
    set32(c.r[6], ld32((c.r[2].w[0] + 112u)));
    c.r[13].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8u)));
    c.r[12].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[11], 0u - 1u);
    set32(c.r[9], ld32((c.r[2].w[0] + 116u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    set32(c.r[7], ld32((c.r[2].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st32((c.r[5].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 18;
L_001C1730:
    set32(c.r[2], c.r[10].w[0] + 343u);
    set32(c.r[3], c.r[10].w[0] + 374u);
    c.r[5].d[0] = c.r[11].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] & 31ull;
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] + c.r[12].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[10].sd[0] < 16ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C1730u | kUnwind; return; } goto L_001C1730; } }
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1788:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001C1978; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C1968; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 32128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C17B8u);  if (depth < kMaxDepth) unit_0029(c, 330u, depth + 1u); else { c.pc = 0x001A6F68u; return; } if (c.pc != 0x001C17B8u) [[unlikely]] return; }
L_001C17B8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] - 32064u);
    set32(c.r[2], c.r[2].w[0] - 25560u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C17D4u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001C17D4u) [[unlikely]] return; }
L_001C17D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 25904u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C17ECu);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x001C17ECu) [[unlikely]] return; }
L_001C17EC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] - 32048u);
    set32(c.r[2], c.r[2].w[0] - 25584u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1808u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001C1808u) [[unlikely]] return; }
L_001C1808:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 25888u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1820u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x001C1820u) [[unlikely]] return; }
L_001C1820:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] - 32032u);
    set32(c.r[2], c.r[2].w[0] - 25608u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C183Cu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001C183Cu) [[unlikely]] return; }
L_001C183C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 25872u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1854u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x001C1854u) [[unlikely]] return; }
L_001C1854:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] - 32016u);
    set32(c.r[2], c.r[2].w[0] - 25632u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1870u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001C1870u) [[unlikely]] return; }
L_001C1870:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 25856u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1888u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x001C1888u) [[unlikely]] return; }
L_001C1888:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] - 32000u);
    set32(c.r[2], c.r[2].w[0] - 25656u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C18A4u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001C18A4u) [[unlikely]] return; }
L_001C18A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 25840u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C18BCu);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x001C18BCu) [[unlikely]] return; }
L_001C18BC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] - 31984u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C18D8u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001C18D8u) [[unlikely]] return; }
L_001C18D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 25824u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C18F0u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x001C18F0u) [[unlikely]] return; }
L_001C18F0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] - 31968u);
    set32(c.r[2], c.r[2].w[0] - 25728u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1910u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001C1910u) [[unlikely]] return; }
L_001C1910:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 25808u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1928u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001C1928u) [[unlikely]] return; }
L_001C1928:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] - 31952u);
    set32(c.r[2], c.r[2].w[0] - 25776u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1948u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001C1948u) [[unlikely]] return; }
L_001C1948:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 25792u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1960u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001C1960u) [[unlikely]] return; }
L_001C1960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C1978; } }
L_001C1968:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 32128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1978u);  if (depth < kMaxDepth) unit_0029(c, 330u, depth + 1u); else { c.pc = 0x001A6F68u; return; } if (c.pc != 0x001C1978u) [[unlikely]] return; }
L_001C1978:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1990:
    set32(c.r[3], 0u + 11u);
    set32(c.r[2], c.r[4].w[0] + 44u);
    c.budget -= 2;
L_001C1998:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C1998u | kUnwind; return; } goto L_001C1998; } }
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C19C8:
    set32(c.r[3], c.r[4].w[0] + 360u);
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 391u);
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    set32(c.r[6], c.r[6].w[0] - 32128u);
    set32(c.r[5], c.r[5].w[0] - 26584u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1A20:
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[4].w[0] + 31u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    set32(c.r[6], c.r[6].w[0] - 32128u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[4].d[0] & 31ull;
    set32(c.r[2], c.r[2].w[0] - 26584u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1A70:
    set32(c.r[3], c.r[4].w[0] + 92u);
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 123u);
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    set32(c.r[6], c.r[6].w[0] - 32128u);
    set32(c.r[5], c.r[5].w[0] - 26584u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1AC8:
    set32(c.r[3], c.r[4].w[0] + 101u);
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 132u);
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    set32(c.r[6], c.r[6].w[0] - 32128u);
    set32(c.r[5], c.r[5].w[0] - 26584u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1B20:
    set32(c.r[3], c.r[4].w[0] + 166u);
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 197u);
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    set32(c.r[6], c.r[6].w[0] - 32128u);
    set32(c.r[5], c.r[5].w[0] - 26584u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1B78:
    set32(c.r[3], c.r[4].w[0] + 343u);
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 374u);
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    set32(c.r[6], c.r[6].w[0] - 32128u);
    set32(c.r[5], c.r[5].w[0] - 26584u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1BD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 32080u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1BE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 32080u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1C00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1C20u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001C1C20u) [[unlikely]] return; }
L_001C1C20:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C1C4C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C1CC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C1CA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C1CC8; } }
L_001C1C4C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1C64u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001C1C64u) [[unlikely]] return; }
L_001C1C64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1C78u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001C1C78u) [[unlikely]] return; }
L_001C1C78:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1C8Cu);  if (depth < kMaxDepth) unit_0036(c, 262u, depth + 1u); else { c.pc = 0x001DA428u; return; } if (c.pc != 0x001C1C8Cu) [[unlikely]] return; }
L_001C1C8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1C9Cu);  if (depth < kMaxDepth) unit_0036(c, 262u, depth + 1u); else { c.pc = 0x001DA428u; return; } if (c.pc != 0x001C1C9Cu) [[unlikely]] return; }
L_001C1C9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C1CC8; } }
L_001C1CA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1CB8u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001C1CB8u) [[unlikely]] return; }
L_001C1CB8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1CC8u);  if (depth < kMaxDepth) unit_0036(c, 262u, depth + 1u); else { c.pc = 0x001DA428u; return; } if (c.pc != 0x001C1CC8u) [[unlikely]] return; }
L_001C1CC8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1CE8:
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[4].w[0] + 31u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    set32(c.r[6], c.r[6].w[0] - 32128u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[4].d[0] & 31ull;
    set32(c.r[2], c.r[2].w[0] - 26584u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1D38:
    set32(c.r[2], c.r[4].w[0] + 360u);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 391u);
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    set32(c.r[5], c.r[5].w[0] - 26584u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 32128u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1D90:
    set32(c.r[2], c.r[4].w[0] + 92u);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 123u);
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    set32(c.r[5], c.r[5].w[0] - 26584u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 32128u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1DE8:
    set32(c.r[2], c.r[4].w[0] + 101u);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 132u);
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    set32(c.r[5], c.r[5].w[0] - 26584u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 32128u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1E40:
    set32(c.r[2], c.r[4].w[0] + 166u);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 197u);
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    set32(c.r[5], c.r[5].w[0] - 26584u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 32128u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1E98:
    set32(c.r[2], c.r[4].w[0] + 343u);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 374u);
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    set32(c.r[5], c.r[5].w[0] - 26584u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 32128u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1EF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[11], c.r[2].w[0] - 32128u);
    set32(c.r[10], c.r[3].w[0] - 26584u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 8;
L_001C1F10:
    set32(c.r[3], c.r[6].w[0] + 360u);
    set32(c.r[2], c.r[6].w[0] + 391u);
    c.r[5].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[3].d[0] & 31ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[11].w[0]);
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 15ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    if (c.r[3].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C1F10u | kUnwind; return; } goto L_001C1F10; } }
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1F70:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1F80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1F88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1F90:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[5], 0u - 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[3].w[0] + 101u);
    set32(c.r[7], c.r[7].w[0] - 32128u);
    c.r[5].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 132u);
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[6], c.r[6].w[0] - 26584u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1FE8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], 0u - 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[2].w[0] + 31u);
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[5], c.r[5].w[0] - 26584u);
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 32128u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C2040:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[5], 0u - 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[3].w[0] + 166u);
    set32(c.r[7], c.r[7].w[0] - 32128u);
    c.r[5].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 197u);
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[6], c.r[6].w[0] - 26584u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C2098:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[5], 0u - 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[3].w[0] + 92u);
    set32(c.r[7], c.r[7].w[0] - 32128u);
    c.r[5].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 123u);
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[6], c.r[6].w[0] - 26584u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C20F0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[5], 0u - 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[3].w[0] + 360u);
    set32(c.r[7], c.r[7].w[0] - 32128u);
    c.r[5].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 391u);
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[6], c.r[6].w[0] - 26584u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C2148:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[5], 0u - 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[3].w[0] + 343u);
    set32(c.r[7], c.r[7].w[0] - 32128u);
    c.r[5].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 374u);
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[6], c.r[6].w[0] - 26584u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C21A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 32080u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C21B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C21D8u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001C21D8u) [[unlikely]] return; }
L_001C21D8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 7694u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C2204; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] - 32128u);
    set32(c.r[5], ld32((c.r[4].w[0] - 26512u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
L_001C2204:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 7694u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C2230; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] - 32128u);
    set32(c.r[5], ld32((c.r[4].w[0] - 26488u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
L_001C2230:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C2240:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2258u);  if (depth < kMaxDepth) unit_0030(c, 117u, depth + 1u); else { c.pc = 0x001C1788u; return; } if (c.pc != 0x001C2258u) [[unlikely]] return; }
L_001C2258:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C2268:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2280u);  if (depth < kMaxDepth) unit_0030(c, 117u, depth + 1u); else { c.pc = 0x001C1788u; return; } if (c.pc != 0x001C2280u) [[unlikely]] return; }
L_001C2280:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C2290:
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], 0u + 30u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    set32(c.r[24], c.r[2].w[0] - 25504u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    set32(c.r[5], 0u + 255u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] + c.r[24].w[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    set32(c.r[6], 0u - 1u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001C22EC; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C22EC:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3u));
    set32(c.r[8], 0u - 1u);
    set32(c.r[7], 0u + 255u);
    st32((c.r[29].w[0]), c.r[8].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001C230C; } }
    c.r[9].d[0] = ld8((c.r[3].w[0] + 3u));
    st32((c.r[29].w[0]), c.r[9].w[0]);
    c.budget -= 2;
L_001C230C:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 4u));
    set32(c.r[10], 0u - 1u);
    set32(c.r[8], 0u + 255u);
    st32((c.r[29].w[0] + 4u), c.r[10].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001C232C; } }
    c.r[11].d[0] = ld8((c.r[3].w[0] + 4u));
    st32((c.r[29].w[0] + 4u), c.r[11].w[0]);
    c.budget -= 2;
L_001C232C:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5u));
    set32(c.r[10], 0u - 1u);
    set32(c.r[9], 0u + 255u);
    st32((c.r[29].w[0] + 8u), c.r[10].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001C234C; } }
    c.r[11].d[0] = ld8((c.r[3].w[0] + 5u));
    st32((c.r[29].w[0] + 8u), c.r[11].w[0]);
    c.budget -= 2;
L_001C234C:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 6u));
    set32(c.r[11], 0u - 1u);
    set32(c.r[10], 0u + 255u);
    st32((c.r[29].w[0] + 12u), c.r[11].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001C236C; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 6u));
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_001C236C:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 7u));
    set32(c.r[11], 0u - 1u);
    set32(c.r[14], 0u + 255u);
    st32((c.r[29].w[0] + 16u), c.r[11].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001C238C; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 7u));
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 2;
L_001C238C:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    set32(c.r[11], 0u - 1u);
    set32(c.r[15], 0u + 255u);
    st32((c.r[29].w[0] + 20u), c.r[11].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001C23AC; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_001C23AC:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    set32(c.r[11], 0u - 1u);
    set32(c.r[17], 0u + 255u);
    st32((c.r[29].w[0] + 24u), c.r[11].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001C23CC; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_001C23CC:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 10u));
    set32(c.r[11], 0u - 1u);
    set32(c.r[18], 0u + 255u);
    st32((c.r[29].w[0] + 28u), c.r[11].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001C23EC; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 10u));
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_001C23EC:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 11u));
    set32(c.r[11], 0u - 1u);
    set32(c.r[19], 0u + 255u);
    st32((c.r[29].w[0] + 32u), c.r[11].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001C240C; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 11u));
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 2;
L_001C240C:
    set32(c.r[2], 0u + 30u);
    set32(c.r[11], 0u - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 36u), c.r[11].w[0]);
    set32(c.r[20], 0u + 255u);
    set32(c.r[3], c.r[5].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 12u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_001C2438; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 2;
L_001C2438:
    set32(c.r[2], 0u + 30u);
    set32(c.r[11], 0u - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 40u), c.r[11].w[0]);
    set32(c.r[16], 0u + 255u);
    set32(c.r[3], c.r[5].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 13u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[8].d[0];  if (t) { goto L_001C2464; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 2;
L_001C2464:
    set32(c.r[2], 0u + 30u);
    set32(c.r[8], 0u - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 44u), c.r[8].w[0]);
    set32(c.r[13], 0u + 255u);
    set32(c.r[3], c.r[5].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 14u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[9].d[0];  if (t) { goto L_001C2490; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 2;
L_001C2490:
    set32(c.r[2], 0u + 30u);
    set32(c.r[8], 0u - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 48u), c.r[8].w[0]);
    set32(c.r[12], 0u + 255u);
    set32(c.r[3], c.r[5].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 15u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[10].d[0];  if (t) { goto L_001C24BC; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 2;
L_001C24BC:
    set32(c.r[2], 0u + 30u);
    set32(c.r[8], 0u - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 52u), c.r[8].w[0]);
    set32(c.r[11], 0u + 255u);
    set32(c.r[3], c.r[5].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 16u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[14].d[0];  if (t) { goto L_001C24E8; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 2;
L_001C24E8:
    set32(c.r[2], 0u + 30u);
    set32(c.r[8], 0u - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 56u), c.r[8].w[0]);
    set32(c.r[10], 0u + 255u);
    set32(c.r[3], c.r[5].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 17u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[15].d[0];  if (t) { goto L_001C2514; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 2;
L_001C2514:
    set32(c.r[2], 0u + 30u);
    set32(c.r[8], 0u - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 60u), c.r[8].w[0]);
    set32(c.r[9], 0u + 255u);
    set32(c.r[3], c.r[5].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 18u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_001C2540; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 2;
L_001C2540:
    set32(c.r[2], 0u + 30u);
    set32(c.r[8], 0u + 255u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[17], 0u - 1u);
    set32(c.r[3], c.r[5].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 19u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_001C2564; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C2564:
    set32(c.r[2], 0u + 30u);
    set32(c.r[7], 0u + 255u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[18], 0u - 1u);
    set32(c.r[3], c.r[5].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 20u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_001C2588; } }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C2588:
    set32(c.r[2], 0u + 30u);
    set32(c.r[19], 0u - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 21u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_001C25A8; } }
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C25A8:
    set32(c.r[2], 0u + 30u);
    set32(c.r[20], 0u - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 22u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_001C25C8; } }
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C25C8:
    set32(c.r[2], 0u + 30u);
    set32(c.r[21], 0u - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 23u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[13].d[0];  if (t) { goto L_001C25E8; } }
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C25E8:
    set32(c.r[2], 0u + 30u);
    set32(c.r[22], 0u - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 24u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[12].d[0];  if (t) { goto L_001C2608; } }
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C2608:
    set32(c.r[2], 0u + 30u);
    set32(c.r[23], 0u - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 25u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[11].d[0];  if (t) { goto L_001C2628; } }
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C2628:
    set32(c.r[2], 0u + 30u);
    set32(c.r[30], 0u - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 26u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[10].d[0];  if (t) { goto L_001C2648; } }
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C2648:
    set32(c.r[2], 0u + 30u);
    set32(c.r[10], 0u - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 64u), c.r[10].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 27u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[9].d[0];  if (t) { goto L_001C2670; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.r[5].w[0]);
    c.budget -= 2;
L_001C2670:
    set32(c.r[2], 0u + 30u);
    set32(c.r[9], 0u - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 68u), c.r[9].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 28u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[8].d[0];  if (t) { goto L_001C2698; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 68u), c.r[5].w[0]);
    c.budget -= 2;
L_001C2698:
    set32(c.r[2], 0u + 30u);
    set32(c.r[8], 0u - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 72u), c.r[8].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 29u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_001C26C0; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 2;
L_001C26C0:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001C26E0; } }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C26DCu);  if (depth < kMaxDepth) unit_0030(c, 157u, depth + 1u); else { c.pc = 0x001C1DE8u; return; } if (c.pc != 0x001C26DCu) [[unlikely]] return; }
L_001C26DC:
    c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_001C26E0:
    set32(c.r[9], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == c.r[2].d[0];  if (t) { goto L_001C2704; } }
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C26FCu);  if (depth < kMaxDepth) unit_0030(c, 157u, depth + 1u); else { c.pc = 0x001C1DE8u; return; } if (c.pc != 0x001C26FCu) [[unlikely]] return; }
L_001C26FC:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C2704:
    set32(c.r[10], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == c.r[2].d[0];  if (t) { goto L_001C2728; } }
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2720u);  if (depth < kMaxDepth) unit_0030(c, 157u, depth + 1u); else { c.pc = 0x001C1DE8u; return; } if (c.pc != 0x001C2720u) [[unlikely]] return; }
L_001C2720:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C2728:
    set32(c.r[11], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[11].d[0] == c.r[2].d[0];  if (t) { goto L_001C274C; } }
    c.r[4].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2744u);  if (depth < kMaxDepth) unit_0030(c, 157u, depth + 1u); else { c.pc = 0x001C1DE8u; return; } if (c.pc != 0x001C2744u) [[unlikely]] return; }
L_001C2744:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C274C:
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C2770; } }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2768u);  if (depth < kMaxDepth) unit_0030(c, 157u, depth + 1u); else { c.pc = 0x001C1DE8u; return; } if (c.pc != 0x001C2768u) [[unlikely]] return; }
L_001C2768:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C2770:
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001C2794; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C278Cu);  if (depth < kMaxDepth) unit_0030(c, 157u, depth + 1u); else { c.pc = 0x001C1DE8u; return; } if (c.pc != 0x001C278Cu) [[unlikely]] return; }
L_001C278C:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C2794:
    set32(c.r[8], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_001C27B8; } }
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C27B0u);  if (depth < kMaxDepth) unit_0030(c, 157u, depth + 1u); else { c.pc = 0x001C1DE8u; return; } if (c.pc != 0x001C27B0u) [[unlikely]] return; }
L_001C27B0:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C27B8:
    set32(c.r[9], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == c.r[2].d[0];  if (t) { goto L_001C27DC; } }
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C27D4u);  if (depth < kMaxDepth) unit_0030(c, 157u, depth + 1u); else { c.pc = 0x001C1DE8u; return; } if (c.pc != 0x001C27D4u) [[unlikely]] return; }
L_001C27D4:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C27DC:
    set32(c.r[10], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == c.r[2].d[0];  if (t) { goto L_001C2800; } }
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C27F8u);  if (depth < kMaxDepth) unit_0030(c, 157u, depth + 1u); else { c.pc = 0x001C1DE8u; return; } if (c.pc != 0x001C27F8u) [[unlikely]] return; }
L_001C27F8:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C2800:
    set32(c.r[11], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[11].d[0] == c.r[2].d[0];  if (t) { goto L_001C2824; } }
    c.r[4].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C281Cu);  if (depth < kMaxDepth) unit_0030(c, 158u, depth + 1u); else { c.pc = 0x001C1E40u; return; } if (c.pc != 0x001C281Cu) [[unlikely]] return; }
L_001C281C:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C2824:
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C2848; } }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2840u);  if (depth < kMaxDepth) unit_0030(c, 158u, depth + 1u); else { c.pc = 0x001C1E40u; return; } if (c.pc != 0x001C2840u) [[unlikely]] return; }
L_001C2840:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C2848:
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001C286C; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2864u);  if (depth < kMaxDepth) unit_0030(c, 158u, depth + 1u); else { c.pc = 0x001C1E40u; return; } if (c.pc != 0x001C2864u) [[unlikely]] return; }
L_001C2864:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C286C:
    set32(c.r[8], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_001C2890; } }
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2888u);  if (depth < kMaxDepth) unit_0030(c, 158u, depth + 1u); else { c.pc = 0x001C1E40u; return; } if (c.pc != 0x001C2888u) [[unlikely]] return; }
L_001C2888:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C2890:
    set32(c.r[9], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == c.r[2].d[0];  if (t) { goto L_001C28B4; } }
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C28ACu);  if (depth < kMaxDepth) unit_0030(c, 158u, depth + 1u); else { c.pc = 0x001C1E40u; return; } if (c.pc != 0x001C28ACu) [[unlikely]] return; }
L_001C28AC:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C28B4:
    set32(c.r[10], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == c.r[2].d[0];  if (t) { goto L_001C28D8; } }
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C28D0u);  if (depth < kMaxDepth) unit_0030(c, 158u, depth + 1u); else { c.pc = 0x001C1E40u; return; } if (c.pc != 0x001C28D0u) [[unlikely]] return; }
L_001C28D0:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C28D8:
    set32(c.r[11], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[11].d[0] == c.r[2].d[0];  if (t) { goto L_001C28FC; } }
    c.r[4].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C28F4u);  if (depth < kMaxDepth) unit_0030(c, 158u, depth + 1u); else { c.pc = 0x001C1E40u; return; } if (c.pc != 0x001C28F4u) [[unlikely]] return; }
L_001C28F4:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C28FC:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C2920; } }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2918u);  if (depth < kMaxDepth) unit_0030(c, 158u, depth + 1u); else { c.pc = 0x001C1E40u; return; } if (c.pc != 0x001C2918u) [[unlikely]] return; }
L_001C2918:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C2920:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001C2940; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2938u);  if (depth < kMaxDepth) unit_0030(c, 154u, depth + 1u); else { c.pc = 0x001C1CE8u; return; } if (c.pc != 0x001C2938u) [[unlikely]] return; }
L_001C2938:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C2940:
    set32(c.r[17], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[17].d[0];  if (t) { goto L_001C2960; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2958u);  if (depth < kMaxDepth) unit_0030(c, 155u, depth + 1u); else { c.pc = 0x001C1D38u; return; } if (c.pc != 0x001C2958u) [[unlikely]] return; }
L_001C2958:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C2960:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[17].d[0];  if (t) { goto L_001C297C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2974u);  if (depth < kMaxDepth) unit_0030(c, 156u, depth + 1u); else { c.pc = 0x001C1D90u; return; } if (c.pc != 0x001C2974u) [[unlikely]] return; }
L_001C2974:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C297C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[17].d[0];  if (t) { goto L_001C2998; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2990u);  if (depth < kMaxDepth) unit_0030(c, 159u, depth + 1u); else { c.pc = 0x001C1E98u; return; } if (c.pc != 0x001C2990u) [[unlikely]] return; }
L_001C2990:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C2998:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[17].d[0];  if (t) { goto L_001C29B4; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C29ACu);  if (depth < kMaxDepth) unit_0030(c, 159u, depth + 1u); else { c.pc = 0x001C1E98u; return; } if (c.pc != 0x001C29ACu) [[unlikely]] return; }
L_001C29AC:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C29B4:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == c.r[17].d[0];  if (t) { goto L_001C29D0; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C29C8u);  if (depth < kMaxDepth) unit_0030(c, 159u, depth + 1u); else { c.pc = 0x001C1E98u; return; } if (c.pc != 0x001C29C8u) [[unlikely]] return; }
L_001C29C8:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C29D0:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == c.r[17].d[0];  if (t) { goto L_001C29EC; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C29E4u);  if (depth < kMaxDepth) unit_0030(c, 159u, depth + 1u); else { c.pc = 0x001C1E98u; return; } if (c.pc != 0x001C29E4u) [[unlikely]] return; }
L_001C29E4:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C29EC:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == c.r[17].d[0];  if (t) { goto L_001C2A08; } }
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2A00u);  if (depth < kMaxDepth) unit_0030(c, 159u, depth + 1u); else { c.pc = 0x001C1E98u; return; } if (c.pc != 0x001C2A00u) [[unlikely]] return; }
L_001C2A00:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C2A08:
    set32(c.r[5], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[17].d[0];  if (t) { goto L_001C2A28; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2A20u);  if (depth < kMaxDepth) unit_0030(c, 159u, depth + 1u); else { c.pc = 0x001C1E98u; return; } if (c.pc != 0x001C2A20u) [[unlikely]] return; }
L_001C2A20:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C2A28:
    set32(c.r[8], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[17].d[0];  if (t) { goto L_001C2A48; } }
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2A40u);  if (depth < kMaxDepth) unit_0030(c, 159u, depth + 1u); else { c.pc = 0x001C1E98u; return; } if (c.pc != 0x001C2A40u) [[unlikely]] return; }
L_001C2A40:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C2A48:
    set32(c.r[9], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[17].d[0];  if (t) { goto L_001C2A68; } }
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2A60u);  if (depth < kMaxDepth) unit_0030(c, 159u, depth + 1u); else { c.pc = 0x001C1E98u; return; } if (c.pc != 0x001C2A60u) [[unlikely]] return; }
L_001C2A60:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C2A68:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C2AA0:
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], 0u + 30u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 368u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[16]);
    set32(c.r[24], c.r[2].w[0] - 25504u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[18]);
    set32(c.r[5], 0u + 255u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] + c.r[24].w[0]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[20]);
    set32(c.r[8], 0u - 1u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001C2AFC; } }
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C2AFC:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3u));
    set32(c.r[6], 0u + 255u);
    st32((c.r[29].w[0]), c.r[8].w[0]);
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001C2B18; } }
    c.r[7].d[0] = ld8((c.r[3].w[0] + 3u));
    c.budget -= 1;
L_001C2B18:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 4u));
    set32(c.r[10], 0u - 1u);
    st32((c.r[29].w[0] + 4u), c.r[7].w[0]);
    set32(c.r[9], 0u + 255u);
    st32((c.r[29].w[0] + 112u), c.r[10].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001C2B3C; } }
    c.r[11].d[0] = ld8((c.r[3].w[0] + 4u));
    st32((c.r[29].w[0] + 112u), c.r[11].w[0]);
    c.budget -= 2;
L_001C2B3C:
    set32(c.r[12], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[11], 0u - 1u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5u));
    set32(c.r[10], 0u + 255u);
    st32((c.r[29].w[0] + 8u), c.r[12].w[0]);
    st32((c.r[29].w[0] + 116u), c.r[11].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001C2B64; } }
    c.r[12].d[0] = ld8((c.r[3].w[0] + 5u));
    st32((c.r[29].w[0] + 116u), c.r[12].w[0]);
    c.budget -= 2;
L_001C2B64:
    set32(c.r[11], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[12], 0u - 1u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 6u));
    st32((c.r[29].w[0] + 12u), c.r[11].w[0]);
    set32(c.r[11], 0u + 255u);
    st32((c.r[29].w[0] + 120u), c.r[12].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001C2B8C; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 6u));
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 2;
L_001C2B8C:
    set32(c.r[12], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[15], 0u + 255u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 7u));
    st32((c.r[29].w[0] + 16u), c.r[12].w[0]);
    set32(c.r[12], 0u - 1u);
    st32((c.r[29].w[0] + 124u), c.r[12].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001C2BB4; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 7u));
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 2;
L_001C2BB4:
    set32(c.r[12], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[16], 0u + 255u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 20u), c.r[12].w[0]);
    set32(c.r[12], 0u - 1u);
    st32((c.r[29].w[0] + 128u), c.r[12].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001C2BDC; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 2;
L_001C2BDC:
    set32(c.r[12], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[17], 0u + 255u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    st32((c.r[29].w[0] + 24u), c.r[12].w[0]);
    set32(c.r[12], 0u - 1u);
    st32((c.r[29].w[0] + 132u), c.r[12].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001C2C04; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 2;
L_001C2C04:
    set32(c.r[12], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[19], 0u + 255u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 10u));
    st32((c.r[29].w[0] + 28u), c.r[12].w[0]);
    set32(c.r[12], 0u - 1u);
    st32((c.r[29].w[0] + 136u), c.r[12].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001C2C2C; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 10u));
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 2;
L_001C2C2C:
    set32(c.r[12], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[21], 0u + 255u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 11u));
    st32((c.r[29].w[0] + 32u), c.r[12].w[0]);
    set32(c.r[12], 0u - 1u);
    st32((c.r[29].w[0] + 140u), c.r[12].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001C2C54; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 11u));
    st32((c.r[29].w[0] + 140u), c.r[3].w[0]);
    c.budget -= 2;
L_001C2C54:
    set32(c.r[2], 0u + 30u);
    set32(c.r[12], ld32((c.r[29].w[0] + 140u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[20], 0u + 255u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 36u), c.r[12].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 12u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_001C2C88; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 144u), c.r[3].w[0]);
    c.budget -= 2;
L_001C2C88:
    set32(c.r[2], 0u + 30u);
    set32(c.r[12], ld32((c.r[29].w[0] + 144u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[18], 0u + 255u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 40u), c.r[12].w[0]);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 13u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[9].d[0];  if (t) { goto L_001C2CBC; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 148u), c.r[3].w[0]);
    c.budget -= 2;
L_001C2CBC:
    set32(c.r[2], 0u + 30u);
    set32(c.r[12], ld32((c.r[29].w[0] + 148u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[14], 0u + 255u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 44u), c.r[12].w[0]);
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 14u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[10].d[0];  if (t) { goto L_001C2CF0; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    c.budget -= 2;
L_001C2CF0:
    set32(c.r[2], 0u + 30u);
    set32(c.r[10], ld32((c.r[29].w[0] + 152u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[12], 0u - 1u);
    st32((c.r[29].w[0] + 48u), c.r[10].w[0]);
    set32(c.r[13], 0u + 255u);
    st32((c.r[29].w[0] + 156u), c.r[12].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 15u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[11].d[0];  if (t) { goto L_001C2D24; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 2;
L_001C2D24:
    set32(c.r[2], 0u + 30u);
    set32(c.r[10], ld32((c.r[29].w[0] + 156u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[11], 0u - 1u);
    st32((c.r[29].w[0] + 52u), c.r[10].w[0]);
    set32(c.r[12], 0u + 255u);
    st32((c.r[29].w[0] + 160u), c.r[11].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 16u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[15].d[0];  if (t) { goto L_001C2D58; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 2;
L_001C2D58:
    set32(c.r[2], 0u + 30u);
    set32(c.r[10], ld32((c.r[29].w[0] + 160u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[11], 0u + 255u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 56u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 17u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_001C2D8C; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 2;
L_001C2D8C:
    set32(c.r[2], 0u + 30u);
    set32(c.r[10], ld32((c.r[29].w[0] + 164u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 60u), c.r[10].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[10], 0u + 255u);
    set32(c.r[3], c.r[5].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 18u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_001C2DC0; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 2;
L_001C2DC0:
    set32(c.r[2], 0u + 30u);
    set32(c.r[9], 0u + 255u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[17], 0u - 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 19u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_001C2DEC; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C2DEC:
    set32(c.r[2], 0u + 30u);
    st32((c.r[29].w[0] + 68u), c.r[17].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], 0u + 255u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 20u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_001C2E1C; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 172u), c.r[3].w[0]);
    c.budget -= 2;
L_001C2E1C:
    set32(c.r[2], 0u + 30u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[24].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 21u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_001C2E4C; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 176u), c.r[5].w[0]);
    c.budget -= 2;
L_001C2E4C:
    set32(c.r[2], 0u + 30u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[24].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[29].w[0] + 180u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 22u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_001C2E7C; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 180u), c.r[5].w[0]);
    c.budget -= 2;
L_001C2E7C:
    set32(c.r[2], 0u + 30u);
    set32(c.r[30], 0u - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 23u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[14].d[0];  if (t) { goto L_001C2EA4; } }
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C2EA4:
    set32(c.r[2], 0u + 30u);
    st32((c.r[29].w[0] + 84u), c.r[30].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[23], 0u - 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 24u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[13].d[0];  if (t) { goto L_001C2EC8; } }
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C2EC8:
    set32(c.r[2], 0u + 30u);
    st32((c.r[29].w[0] + 88u), c.r[23].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[22], 0u - 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 25u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[12].d[0];  if (t) { goto L_001C2EEC; } }
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C2EEC:
    set32(c.r[2], 0u + 30u);
    st32((c.r[29].w[0] + 92u), c.r[22].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[21], 0u - 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 26u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[11].d[0];  if (t) { goto L_001C2F10; } }
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C2F10:
    set32(c.r[2], 0u + 30u);
    st32((c.r[29].w[0] + 96u), c.r[21].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[20], 0u - 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 27u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[10].d[0];  if (t) { goto L_001C2F34; } }
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C2F34:
    set32(c.r[2], 0u + 30u);
    st32((c.r[29].w[0] + 100u), c.r[20].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[19], 0u - 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 28u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[9].d[0];  if (t) { goto L_001C2F58; } }
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C2F58:
    set32(c.r[2], 0u + 30u);
    st32((c.r[29].w[0] + 104u), c.r[19].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[18], 0u - 1u);
    set32(c.r[3], c.r[5].w[0] + c.r[24].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 29u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_001C2F7C; } }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C2F7C:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 108u), c.r[18].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C2FC0; } }
    set32(c.r[6], 0u - 1u);
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
L_001C2FA0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C2FC0; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C2FA0u | kUnwind; return; } goto L_001C2FA0; } }
L_001C2FC0:
    set32(c.r[2], 0u + 28u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001C2FD8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C338C; } }
L_001C2FD8:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_001C3000; } }
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[7]);
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2FF8u);  if (depth < kMaxDepth) unit_0030(c, 157u, depth + 1u); else { c.pc = 0x001C1DE8u; return; } if (c.pc != 0x001C2FF8u) [[unlikely]] return; }
L_001C2FF8:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[7]);
    c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_001C3000:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_001C3020; } }
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3018u);  if (depth < kMaxDepth) unit_0030(c, 157u, depth + 1u); else { c.pc = 0x001C1DE8u; return; } if (c.pc != 0x001C3018u) [[unlikely]] return; }
L_001C3018:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C3020:
    set32(c.r[10], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == c.r[2].d[0];  if (t) { goto L_001C3044; } }
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C303Cu);  if (depth < kMaxDepth) unit_0030(c, 157u, depth + 1u); else { c.pc = 0x001C1DE8u; return; } if (c.pc != 0x001C303Cu) [[unlikely]] return; }
L_001C303C:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C3044:
    set32(c.r[11], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[11].d[0] == c.r[2].d[0];  if (t) { goto L_001C3068; } }
    c.r[4].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3060u);  if (depth < kMaxDepth) unit_0030(c, 157u, depth + 1u); else { c.pc = 0x001C1DE8u; return; } if (c.pc != 0x001C3060u) [[unlikely]] return; }
L_001C3060:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C3068:
    set32(c.r[12], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[12].d[0] == c.r[2].d[0];  if (t) { goto L_001C308C; } }
    c.r[4].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3084u);  if (depth < kMaxDepth) unit_0030(c, 157u, depth + 1u); else { c.pc = 0x001C1DE8u; return; } if (c.pc != 0x001C3084u) [[unlikely]] return; }
L_001C3084:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C308C:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C30B0; } }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C30A8u);  if (depth < kMaxDepth) unit_0030(c, 157u, depth + 1u); else { c.pc = 0x001C1DE8u; return; } if (c.pc != 0x001C30A8u) [[unlikely]] return; }
L_001C30A8:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C30B0:
    set32(c.r[5], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001C30D4; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C30CCu);  if (depth < kMaxDepth) unit_0030(c, 157u, depth + 1u); else { c.pc = 0x001C1DE8u; return; } if (c.pc != 0x001C30CCu) [[unlikely]] return; }
L_001C30CC:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C30D4:
    set32(c.r[10], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == c.r[2].d[0];  if (t) { goto L_001C30F8; } }
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C30F0u);  if (depth < kMaxDepth) unit_0030(c, 157u, depth + 1u); else { c.pc = 0x001C1DE8u; return; } if (c.pc != 0x001C30F0u) [[unlikely]] return; }
L_001C30F0:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C30F8:
    set32(c.r[11], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[11].d[0] == c.r[2].d[0];  if (t) { goto L_001C311C; } }
    c.r[4].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3114u);  if (depth < kMaxDepth) unit_0030(c, 157u, depth + 1u); else { c.pc = 0x001C1DE8u; return; } if (c.pc != 0x001C3114u) [[unlikely]] return; }
L_001C3114:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C311C:
    set32(c.r[12], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[12].d[0] == c.r[2].d[0];  if (t) { goto L_001C3140; } }
    c.r[4].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3138u);  if (depth < kMaxDepth) unit_0030(c, 158u, depth + 1u); else { c.pc = 0x001C1E40u; return; } if (c.pc != 0x001C3138u) [[unlikely]] return; }
L_001C3138:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C3140:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C3164; } }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C315Cu);  if (depth < kMaxDepth) unit_0030(c, 158u, depth + 1u); else { c.pc = 0x001C1E40u; return; } if (c.pc != 0x001C315Cu) [[unlikely]] return; }
L_001C315C:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C3164:
    set32(c.r[5], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001C3188; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3180u);  if (depth < kMaxDepth) unit_0030(c, 158u, depth + 1u); else { c.pc = 0x001C1E40u; return; } if (c.pc != 0x001C3180u) [[unlikely]] return; }
L_001C3180:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C3188:
    set32(c.r[10], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == c.r[2].d[0];  if (t) { goto L_001C31AC; } }
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C31A4u);  if (depth < kMaxDepth) unit_0030(c, 158u, depth + 1u); else { c.pc = 0x001C1E40u; return; } if (c.pc != 0x001C31A4u) [[unlikely]] return; }
L_001C31A4:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C31AC:
    set32(c.r[11], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[11].d[0] == c.r[2].d[0];  if (t) { goto L_001C31D0; } }
    c.r[4].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C31C8u);  if (depth < kMaxDepth) unit_0030(c, 158u, depth + 1u); else { c.pc = 0x001C1E40u; return; } if (c.pc != 0x001C31C8u) [[unlikely]] return; }
L_001C31C8:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C31D0:
    set32(c.r[12], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[12].d[0] == c.r[2].d[0];  if (t) { goto L_001C31F4; } }
    c.r[4].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C31ECu);  if (depth < kMaxDepth) unit_0030(c, 158u, depth + 1u); else { c.pc = 0x001C1E40u; return; } if (c.pc != 0x001C31ECu) [[unlikely]] return; }
L_001C31EC:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C31F4:
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C3218; } }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3210u);  if (depth < kMaxDepth) unit_0030(c, 158u, depth + 1u); else { c.pc = 0x001C1E40u; return; } if (c.pc != 0x001C3210u) [[unlikely]] return; }
L_001C3210:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C3218:
    set32(c.r[5], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001C323C; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3234u);  if (depth < kMaxDepth) unit_0030(c, 158u, depth + 1u); else { c.pc = 0x001C1E40u; return; } if (c.pc != 0x001C3234u) [[unlikely]] return; }
L_001C3234:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C323C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001C325C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3254u);  if (depth < kMaxDepth) unit_0030(c, 154u, depth + 1u); else { c.pc = 0x001C1CE8u; return; } if (c.pc != 0x001C3254u) [[unlikely]] return; }
L_001C3254:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C325C:
    set32(c.r[10], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[17], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == c.r[17].d[0];  if (t) { goto L_001C3280; } }
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3278u);  if (depth < kMaxDepth) unit_0030(c, 155u, depth + 1u); else { c.pc = 0x001C1D38u; return; } if (c.pc != 0x001C3278u) [[unlikely]] return; }
L_001C3278:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C3280:
    set32(c.r[11], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == c.r[17].d[0];  if (t) { goto L_001C32A0; } }
    c.r[4].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3298u);  if (depth < kMaxDepth) unit_0030(c, 156u, depth + 1u); else { c.pc = 0x001C1D90u; return; } if (c.pc != 0x001C3298u) [[unlikely]] return; }
L_001C3298:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C32A0:
    set32(c.r[12], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == c.r[17].d[0];  if (t) { goto L_001C32C0; } }
    c.r[4].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C32B8u);  if (depth < kMaxDepth) unit_0030(c, 159u, depth + 1u); else { c.pc = 0x001C1E98u; return; } if (c.pc != 0x001C32B8u) [[unlikely]] return; }
L_001C32B8:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C32C0:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == c.r[17].d[0];  if (t) { goto L_001C32DC; } }
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C32D4u);  if (depth < kMaxDepth) unit_0030(c, 159u, depth + 1u); else { c.pc = 0x001C1E98u; return; } if (c.pc != 0x001C32D4u) [[unlikely]] return; }
L_001C32D4:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C32DC:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == c.r[17].d[0];  if (t) { goto L_001C32F8; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C32F0u);  if (depth < kMaxDepth) unit_0030(c, 159u, depth + 1u); else { c.pc = 0x001C1E98u; return; } if (c.pc != 0x001C32F0u) [[unlikely]] return; }
L_001C32F0:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C32F8:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == c.r[17].d[0];  if (t) { goto L_001C3314; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C330Cu);  if (depth < kMaxDepth) unit_0030(c, 159u, depth + 1u); else { c.pc = 0x001C1E98u; return; } if (c.pc != 0x001C330Cu) [[unlikely]] return; }
L_001C330C:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C3314:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[17].d[0];  if (t) { goto L_001C3330; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3328u);  if (depth < kMaxDepth) unit_0030(c, 159u, depth + 1u); else { c.pc = 0x001C1E98u; return; } if (c.pc != 0x001C3328u) [[unlikely]] return; }
L_001C3328:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C3330:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[17].d[0];  if (t) { goto L_001C334C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3344u);  if (depth < kMaxDepth) unit_0030(c, 159u, depth + 1u); else { c.pc = 0x001C1E98u; return; } if (c.pc != 0x001C3344u) [[unlikely]] return; }
L_001C3344:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C334C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[17].d[0];  if (t) { goto L_001C3368; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3360u);  if (depth < kMaxDepth) unit_0030(c, 159u, depth + 1u); else { c.pc = 0x001C1E98u; return; } if (c.pc != 0x001C3360u) [[unlikely]] return; }
L_001C3360:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C3368:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[17].d[0];  if (t) { goto L_001C3384; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C337Cu);  if (depth < kMaxDepth) unit_0030(c, 159u, depth + 1u); else { c.pc = 0x001C1E98u; return; } if (c.pc != 0x001C337Cu) [[unlikely]] return; }
L_001C337C:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_001C3384:
    set32(c.r[2], 0u + 2u);
    if (c.r[16].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 2;
L_001C338C:
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    set32(c.r[29], c.r[29].w[0] + 368u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C33C0:
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], 0u + 30u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C33E8:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C3418; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C3418:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3420:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C3450; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C3450:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3458:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C3488; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C3488:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3490:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C34C0; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C34C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C34C8:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C34F8; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C34F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3500:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C3530; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C3530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3538:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C3568; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C3568:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3570:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 9u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C35A0; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C35A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C35A8:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 10u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C35D8; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C35D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C35E0:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 11u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C3610; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C3610:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3618:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C3648; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C3648:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3650:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C3680; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C3680:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3688:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 14u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C36B8; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C36B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C36C0:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 15u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C36F0; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C36F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C36F8:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C3728; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C3728:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3730:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 17u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C3760; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C3760:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3768:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C3798; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C3798:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C37A0:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 19u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C37D0; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C37D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C37D8:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 20u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C3808; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C3808:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3810:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 21u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C3840; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C3840:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3848:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 22u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C3878; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C3878:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3880:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 23u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C38B0; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C38B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C38B8:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 24u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C38E8; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C38E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C38F0:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 25u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C3920; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C3920:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3928:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 26u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C3958; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C3958:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3960:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 27u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C3990; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C3990:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3998:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C39C8; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C39C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C39D0:
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 29u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001C3A00; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C3A00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3A08:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_001C3A20:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3A30u);  if (depth < kMaxDepth) unit_0030(c, 207u, depth + 1u); else { c.pc = 0x001C2AA0u; return; } if (c.pc != 0x001C3A30u) [[unlikely]] return; }
L_001C3A30:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[16].sd[0] < 130ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C3A20u | kUnwind; return; } goto L_001C3A20; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3A68:
    set32(c.r[2], 0u + 130u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3A78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 100u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C3AA4; } }
    st32((c.r[16].w[0] + 212u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C3C10; } }
L_001C3AA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3AB4u);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x001C3AB4u) [[unlikely]] return; }
L_001C3AB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C3C10; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 9016u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C3ADC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3AD4u);  if (depth < kMaxDepth) unit_0030(c, 11u, depth + 1u); else { c.pc = 0x001C01D8u; return; } if (c.pc != 0x001C3AD4u) [[unlikely]] return; }
L_001C3AD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C3C10; } }
L_001C3ADC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 928u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C3B30; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 8940u));
    c.f[2] = ld32((c.r[16].w[0] + 212u));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 17));
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[16].w[0] + 132u), c.f[1]);
    st32((c.r[16].w[0] + 212u), c.f[2]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C3C10; } }
L_001C3B30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B3Cu);  if (depth < kMaxDepth) unit_0030(c, 11u, depth + 1u); else { c.pc = 0x001C01D8u; return; } if (c.pc != 0x001C3B3Cu) [[unlikely]] return; }
L_001C3B3C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C3B60; } }
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = ld32((c.r[16].w[0] + 212u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C3C10; } }
L_001C3B60:
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], c.r[2].w[0] - 170u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C3BA0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8940u)));
    c.f[1] = ld32((c.r[16].w[0] + 212u));
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C3C0C; } }
L_001C3BA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3BB0u);  if (depth < kMaxDepth) unit_0088(c, 302u, depth + 1u); else { c.pc = 0x00323720u; return; } if (c.pc != 0x001C3BB0u) [[unlikely]] return; }
L_001C3BB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C3C10; } }
    c.f[2] = ld32((c.r[16].w[0] + 212u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C3BEC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 132u), c.f[1]);
    c.budget -= 6;
L_001C3BEC:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 8940u));
    c.f[1] = ld32((c.r[16].w[0] + 212u));
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 17));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
L_001C3C0C:
    st32((c.r[16].w[0] + 212u), c.f[1]);
    c.budget -= 1;
L_001C3C10:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3C28:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3C5Cu);  if (depth < kMaxDepth) unit_0031(c, 87u, depth + 1u); else { c.pc = 0x001C48A0u; return; } if (c.pc != 0x001C3C5Cu) [[unlikely]] return; }
L_001C3C5C:
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] - 19792u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3C70u);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001265F8u; return; } if (c.pc != 0x001C3C70u) [[unlikely]] return; }
L_001C3C70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C3C8C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3C84u);  if (depth < kMaxDepth) unit_003D(c, 197u, depth + 1u); else { c.pc = 0x001F7298u; return; } if (c.pc != 0x001C3C84u) [[unlikely]] return; }
L_001C3C84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C3CFC; } }
L_001C3C8C:
    set32(c.r[2], ld32((c.r[18].w[0] + 11188u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C3CC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3CA0u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001C3CA0u) [[unlikely]] return; }
L_001C3CA0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 64u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3CC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C3CC0u) [[unlikely]] return; }
L_001C3CC0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3CCCu);  if (depth < kMaxDepth) unit_0030(c, 9u, depth + 1u); else { c.pc = 0x001C0168u; return; } if (c.pc != 0x001C3CCCu) [[unlikely]] return; }
L_001C3CCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C3D08; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 13192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C3D08; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3CF0u);  if (depth < kMaxDepth) unit_006E(c, 72u, depth + 1u); else { c.pc = 0x002B8EA8u; return; } if (c.pc != 0x001C3CF0u) [[unlikely]] return; }
L_001C3CF0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C3D08; } }
L_001C3CFC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C3DA4; } }
L_001C3D08:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D14u);  if (depth < kMaxDepth) unit_0030(c, 34u, depth + 1u); else { c.pc = 0x001C0638u; return; } if (c.pc != 0x001C3D14u) [[unlikely]] return; }
L_001C3D14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D20u);  if (depth < kMaxDepth) unit_0089(c, 142u, depth + 1u); else { c.pc = 0x00325A50u; return; } if (c.pc != 0x001C3D20u) [[unlikely]] return; }
L_001C3D20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C3D84; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D34u);  if (depth < kMaxDepth) unit_0089(c, 140u, depth + 1u); else { c.pc = 0x003259F8u; return; } if (c.pc != 0x001C3D34u) [[unlikely]] return; }
L_001C3D34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C3D84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D44u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001C3D44u) [[unlikely]] return; }
L_001C3D44:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C3D60u) [[unlikely]] return; }
L_001C3D60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C3D84; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 11264u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C3D84; } }
    st32((c.r[17].w[0] + 208u), 0u);
    st32((c.r[17].w[0] + 212u), 0u);
    st32((c.r[17].w[0] + 216u), 0u);
    c.budget -= 3;
L_001C3D84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D90u);  if (depth < kMaxDepth) unit_0030(c, 15u, depth + 1u); else { c.pc = 0x001C0258u; return; } if (c.pc != 0x001C3D90u) [[unlikely]] return; }
L_001C3D90:
    set32(c.r[4], c.r[19].w[0] - 19792u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3DA4u);  if (depth < kMaxDepth) unit_0009(c, 54u, depth + 1u); else { c.pc = 0x00125630u; return; } if (c.pc != 0x001C3DA4u) [[unlikely]] return; }
L_001C3DA4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3DC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001C3E04; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C3E04; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] - 31936u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3DF8u);  if (depth < kMaxDepth) unit_0097(c, 220u, depth + 1u); else { c.pc = 0x0035E1C8u; return; } if (c.pc != 0x001C3DF8u) [[unlikely]] return; }
L_001C3DF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 21568u);
    st32((c.r[16].w[0] - 31936u), c.r[3].w[0]);
    c.budget -= 3;
L_001C3E04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3E18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3E20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3E34u);  if (depth < kMaxDepth) unit_0005(c, 192u, depth + 1u); else { c.pc = 0x00117210u; return; } if (c.pc != 0x001C3E34u) [[unlikely]] return; }
L_001C3E34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3E48:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] - 19792u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3E70u);  if (depth < kMaxDepth) unit_0009(c, 69u, depth + 1u); else { c.pc = 0x001258C8u; return; } if (c.pc != 0x001C3E70u) [[unlikely]] return; }
L_001C3E70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C3EA0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3E84u);  if (depth < kMaxDepth) unit_0009(c, 52u, depth + 1u); else { c.pc = 0x001255F8u; return; } if (c.pc != 0x001C3E84u) [[unlikely]] return; }
L_001C3E84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C3EA4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3E98u);  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x001255E0u; return; } if (c.pc != 0x001C3E98u) [[unlikely]] return; }
L_001C3E98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C3EA4; } }
L_001C3EA0:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001C3EA4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3EC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3ED8u);  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031FFE8u; return; } if (c.pc != 0x001C3ED8u) [[unlikely]] return; }
L_001C3ED8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3EE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_001C3F10; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C3F20; } }
L_001C3F10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F20u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x001C3F20u) [[unlikely]] return; }
L_001C3F20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C3F74; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 98u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C3F74; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F48u);  if (depth < kMaxDepth) unit_0089(c, 42u, depth + 1u); else { c.pc = 0x00324A28u; return; } if (c.pc != 0x001C3F48u) [[unlikely]] return; }
L_001C3F48:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F58u);  if (depth < kMaxDepth) unit_002F(c, 156u, depth + 1u); else { c.pc = 0x001BD988u; return; } if (c.pc != 0x001C3F58u) [[unlikely]] return; }
L_001C3F58:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F64u);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x001C3F64u) [[unlikely]] return; }
L_001C3F64:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.budget -= 4;
L_001C3F74:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3F88:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 6u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0031(c, 4u, depth); } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0031(c, 4u, depth); } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3FC8u);  if (depth < kMaxDepth) unit_002F(c, 138u, depth + 1u); else { c.pc = 0x001BD5D8u; return; } if (c.pc != 0x001C3FC8u) [[unlikely]] return; }
L_001C3FC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0031(c, 4u, depth); } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3FDCu);  if (depth < kMaxDepth) unit_001A(c, 150u, depth + 1u); else { c.pc = 0x00169CA0u; return; } if (c.pc != 0x001C3FDCu) [[unlikely]] return; }
L_001C3FDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0031(c, 4u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3FF8u);  if (depth < kMaxDepth) unit_0089(c, 42u, depth + 1u); else { c.pc = 0x00324A28u; return; } if (c.pc != 0x001C3FF8u) [[unlikely]] return; }
L_001C3FF8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
    [[clang::musttail]] return unit_0031(c, 1u, depth);
}

}
