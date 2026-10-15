#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009E[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0,
    0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0,
    0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0,
    0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0,
    0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141,
    0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 154, 0, 0, 0, 0, 0, 0,
    0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221,
    0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0,
    232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0,
    0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0,
    0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0,
    0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0,
    0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 313, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 319, 0, 0, 0, 320, 0, 0, 321, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0,
    0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0,
    337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0,
    343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0,
    362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0,
    0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0,
    0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 380, 381, 0, 0, 382, 0, 383, 0, 384, 0, 385, 0, 0, 0, 386, 0, 387, 0, 0, 388, 0, 389, 0, 390, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 394, 0, 0, 395, 396, 0, 397, 0, 398, 0, 0, 0, 399, 0, 0, 400, 0, 0, 401, 0, 402,
    0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0,
    0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0,
    413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0,
    0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0,
    0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0,
    0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0,
};

void unit_009E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00378000;
    case 2u: goto L_00378024;
    case 3u: goto L_00378034;
    case 4u: goto L_00378050;
    case 5u: goto L_00378088;
    case 6u: goto L_003780A0;
    case 7u: goto L_003780C8;
    case 8u: goto L_003780EC;
    case 9u: goto L_00378114;
    case 10u: goto L_00378120;
    case 11u: goto L_00378138;
    case 12u: goto L_00378158;
    case 13u: goto L_00378168;
    case 14u: goto L_003781C8;
    case 15u: goto L_003781F8;
    case 16u: goto L_00378218;
    case 17u: goto L_00378228;
    case 18u: goto L_00378244;
    case 19u: goto L_00378258;
    case 20u: goto L_00378294;
    case 21u: goto L_003782C4;
    case 22u: goto L_003782F0;
    case 23u: goto L_00378300;
    case 24u: goto L_0037832C;
    case 25u: goto L_00378334;
    case 26u: goto L_00378368;
    case 27u: goto L_00378398;
    case 28u: goto L_003783B0;
    case 29u: goto L_003783C0;
    case 30u: goto L_003783D8;
    case 31u: goto L_003783E8;
    case 32u: goto L_00378400;
    case 33u: goto L_00378418;
    case 34u: goto L_00378430;
    case 35u: goto L_00378450;
    case 36u: goto L_00378480;
    case 37u: goto L_003784A0;
    case 38u: goto L_003784C4;
    case 39u: goto L_003784E0;
    case 40u: goto L_00378518;
    case 41u: goto L_00378538;
    case 42u: goto L_00378550;
    case 43u: goto L_00378568;
    case 44u: goto L_00378640;
    case 45u: goto L_00378660;
    case 46u: goto L_00378690;
    case 47u: goto L_003786B0;
    case 48u: goto L_003786E4;
    case 49u: goto L_00378738;
    case 50u: goto L_00378770;
    case 51u: goto L_003787A0;
    case 52u: goto L_003787B8;
    case 53u: goto L_003787D0;
    case 54u: goto L_003787E8;
    case 55u: goto L_00378804;
    case 56u: goto L_00378818;
    case 57u: goto L_00378848;
    case 58u: goto L_00378860;
    case 59u: goto L_00378888;
    case 60u: goto L_003788A0;
    case 61u: goto L_003788B8;
    case 62u: goto L_003788D8;
    case 63u: goto L_003788E8;
    case 64u: goto L_00378920;
    case 65u: goto L_00378940;
    case 66u: goto L_00378950;
    case 67u: goto L_00378980;
    case 68u: goto L_003789C0;
    case 69u: goto L_00378A08;
    case 70u: goto L_00378A10;
    case 71u: goto L_00378A30;
    case 72u: goto L_00378A90;
    case 73u: goto L_00378AA8;
    case 74u: goto L_00378B68;
    case 75u: goto L_00378BB4;
    case 76u: goto L_00378BE8;
    case 77u: goto L_00378BF8;
    case 78u: goto L_00378C00;
    case 79u: goto L_00378C3C;
    case 80u: goto L_00378C8C;
    case 81u: goto L_00378CA8;
    case 82u: goto L_00378CC4;
    case 83u: goto L_00378CDC;
    case 84u: goto L_00378E10;
    case 85u: goto L_00378E30;
    case 86u: goto L_00378E58;
    case 87u: goto L_00378E78;
    case 88u: goto L_00378E98;
    case 89u: goto L_00378EA8;
    case 90u: goto L_00378F88;
    case 91u: goto L_00378F98;
    case 92u: goto L_00378FA8;
    case 93u: goto L_00378FF8;
    case 94u: goto L_00379008;
    case 95u: goto L_00379034;
    case 96u: goto L_00379050;
    case 97u: goto L_00379078;
    case 98u: goto L_00379168;
    case 99u: goto L_00379188;
    case 100u: goto L_003791C0;
    case 101u: goto L_003791D8;
    case 102u: goto L_00379218;
    case 103u: goto L_00379220;
    case 104u: goto L_00379234;
    case 105u: goto L_00379240;
    case 106u: goto L_00379248;
    case 107u: goto L_00379290;
    case 108u: goto L_00379298;
    case 109u: goto L_003792C8;
    case 110u: goto L_003792F0;
    case 111u: goto L_00379340;
    case 112u: goto L_00379384;
    case 113u: goto L_00379488;
    case 114u: goto L_003794C8;
    case 115u: goto L_003794F8;
    case 116u: goto L_00379508;
    case 117u: goto L_0037953C;
    case 118u: goto L_00379578;
    case 119u: goto L_00379598;
    case 120u: goto L_003795B0;
    case 121u: goto L_003795C0;
    case 122u: goto L_00379648;
    case 123u: goto L_003796C8;
    case 124u: goto L_003796E8;
    case 125u: goto L_0037971C;
    case 126u: goto L_00379738;
    case 127u: goto L_003797A8;
    case 128u: goto L_003797E0;
    case 129u: goto L_00379824;
    case 130u: goto L_00379844;
    case 131u: goto L_003798A0;
    case 132u: goto L_003798D0;
    case 133u: goto L_00379918;
    case 134u: goto L_00379950;
    case 135u: goto L_00379988;
    case 136u: goto L_0037999C;
    case 137u: goto L_003799A8;
    case 138u: goto L_00379A10;
    case 139u: goto L_00379A8C;
    case 140u: goto L_00379AA8;
    case 141u: goto L_00379AFC;
    case 142u: goto L_00379B1C;
    case 143u: goto L_00379B50;
    case 144u: goto L_00379B80;
    case 145u: goto L_00379BB4;
    case 146u: goto L_00379BC4;
    case 147u: goto L_00379BF0;
    case 148u: goto L_00379C0C;
    case 149u: goto L_00379C50;
    case 150u: goto L_00379C60;
    case 151u: goto L_00379C90;
    case 152u: goto L_00379CAC;
    case 153u: goto L_00379CE0;
    case 154u: goto L_00379CE4;
    case 155u: goto L_00379D08;
    case 156u: goto L_00379E2C;
    case 157u: goto L_00379E70;
    case 158u: goto L_00379E94;
    case 159u: goto L_00379EC0;
    case 160u: goto L_00379F14;
    case 161u: goto L_00379F44;
    case 162u: goto L_00379F50;
    case 163u: goto L_00379F70;
    case 164u: goto L_00379FB4;
    case 165u: goto L_00379FD8;
    case 166u: goto L_0037A008;
    case 167u: goto L_0037A024;
    case 168u: goto L_0037A038;
    case 169u: goto L_0037A068;
    case 170u: goto L_0037A0B0;
    case 171u: goto L_0037A0C8;
    case 172u: goto L_0037A0F0;
    case 173u: goto L_0037A144;
    case 174u: goto L_0037A170;
    case 175u: goto L_0037A198;
    case 176u: goto L_0037A1E0;
    case 177u: goto L_0037A200;
    case 178u: goto L_0037A248;
    case 179u: goto L_0037A270;
    case 180u: goto L_0037A2C0;
    case 181u: goto L_0037A2E8;
    case 182u: goto L_0037A338;
    case 183u: goto L_0037A368;
    case 184u: goto L_0037A3B8;
    case 185u: goto L_0037A3E0;
    case 186u: goto L_0037A3F8;
    case 187u: goto L_0037A430;
    case 188u: goto L_0037A44C;
    case 189u: goto L_0037A460;
    case 190u: goto L_0037A478;
    case 191u: goto L_0037A490;
    case 192u: goto L_0037A4A8;
    case 193u: goto L_0037A4B8;
    case 194u: goto L_0037A4D0;
    case 195u: goto L_0037A4E8;
    case 196u: goto L_0037A558;
    case 197u: goto L_0037A5D8;
    case 198u: goto L_0037A5F4;
    case 199u: goto L_0037A608;
    case 200u: goto L_0037A660;
    case 201u: goto L_0037A688;
    case 202u: goto L_0037A6A4;
    case 203u: goto L_0037A6D8;
    case 204u: goto L_0037A718;
    case 205u: goto L_0037A734;
    case 206u: goto L_0037A748;
    case 207u: goto L_0037A758;
    case 208u: goto L_0037A768;
    case 209u: goto L_0037A780;
    case 210u: goto L_0037A790;
    case 211u: goto L_0037A7A0;
    case 212u: goto L_0037A7B0;
    case 213u: goto L_0037A7C0;
    case 214u: goto L_0037A7D0;
    case 215u: goto L_0037A80C;
    case 216u: goto L_0037A820;
    case 217u: goto L_0037A840;
    case 218u: goto L_0037A868;
    case 219u: goto L_0037A880;
    case 220u: goto L_0037A8B8;
    case 221u: goto L_0037A8FC;
    case 222u: goto L_0037A918;
    case 223u: goto L_0037A928;
    case 224u: goto L_0037A938;
    case 225u: goto L_0037A958;
    case 226u: goto L_0037A968;
    case 227u: goto L_0037A978;
    case 228u: goto L_0037A990;
    case 229u: goto L_0037A9B0;
    case 230u: goto L_0037A9E0;
    case 231u: goto L_0037A9F0;
    case 232u: goto L_0037AA00;
    case 233u: goto L_0037AA10;
    case 234u: goto L_0037AA38;
    case 235u: goto L_0037AA58;
    case 236u: goto L_0037AA68;
    case 237u: goto L_0037AA90;
    case 238u: goto L_0037AAA8;
    case 239u: goto L_0037AAB8;
    case 240u: goto L_0037AAD0;
    case 241u: goto L_0037AAE0;
    case 242u: goto L_0037AAF8;
    case 243u: goto L_0037AB08;
    case 244u: goto L_0037AB20;
    case 245u: goto L_0037AB30;
    case 246u: goto L_0037AB48;
    case 247u: goto L_0037AB58;
    case 248u: goto L_0037AB70;
    case 249u: goto L_0037AB80;
    case 250u: goto L_0037AB98;
    case 251u: goto L_0037ABA8;
    case 252u: goto L_0037ABE0;
    case 253u: goto L_0037ABF0;
    case 254u: goto L_0037AC08;
    case 255u: goto L_0037AC18;
    case 256u: goto L_0037AC30;
    case 257u: goto L_0037AC40;
    case 258u: goto L_0037AC58;
    case 259u: goto L_0037AC68;
    case 260u: goto L_0037AC9C;
    case 261u: goto L_0037ACBC;
    case 262u: goto L_0037ACD8;
    case 263u: goto L_0037ACF0;
    case 264u: goto L_0037AD00;
    case 265u: goto L_0037AD34;
    case 266u: goto L_0037AD54;
    case 267u: goto L_0037AD70;
    case 268u: goto L_0037AD88;
    case 269u: goto L_0037AD98;
    case 270u: goto L_0037ADB0;
    case 271u: goto L_0037ADC0;
    case 272u: goto L_0037ADD8;
    case 273u: goto L_0037ADE8;
    case 274u: goto L_0037AE00;
    case 275u: goto L_0037AE10;
    case 276u: goto L_0037AE28;
    case 277u: goto L_0037AE38;
    case 278u: goto L_0037AE50;
    case 279u: goto L_0037AE60;
    case 280u: goto L_0037AE78;
    case 281u: goto L_0037AE88;
    case 282u: goto L_0037AEA0;
    case 283u: goto L_0037AEB0;
    case 284u: goto L_0037AEC8;
    case 285u: goto L_0037AED8;
    case 286u: goto L_0037AEF0;
    case 287u: goto L_0037AF00;
    case 288u: goto L_0037AF18;
    case 289u: goto L_0037AF28;
    case 290u: goto L_0037AF40;
    case 291u: goto L_0037AF50;
    case 292u: goto L_0037AF68;
    case 293u: goto L_0037AF78;
    case 294u: goto L_0037AF90;
    case 295u: goto L_0037AFA0;
    case 296u: goto L_0037AFB8;
    case 297u: goto L_0037AFC8;
    case 298u: goto L_0037AFE0;
    case 299u: goto L_0037AFF0;
    case 300u: goto L_0037B008;
    case 301u: goto L_0037B018;
    case 302u: goto L_0037B030;
    case 303u: goto L_0037B040;
    case 304u: goto L_0037B058;
    case 305u: goto L_0037B068;
    case 306u: goto L_0037B114;
    case 307u: goto L_0037B138;
    case 308u: goto L_0037B154;
    case 309u: goto L_0037B218;
    case 310u: goto L_0037B244;
    case 311u: goto L_0037B298;
    case 312u: goto L_0037B2A8;
    case 313u: goto L_0037B2B0;
    case 314u: goto L_0037B2C0;
    case 315u: goto L_0037B2CC;
    case 316u: goto L_0037B310;
    case 317u: goto L_0037B344;
    case 318u: goto L_0037B350;
    case 319u: goto L_0037B358;
    case 320u: goto L_0037B368;
    case 321u: goto L_0037B374;
    case 322u: goto L_0037B3B8;
    case 323u: goto L_0037B3C8;
    case 324u: goto L_0037B3D8;
    case 325u: goto L_0037B40C;
    case 326u: goto L_0037B454;
    case 327u: goto L_0037B4A0;
    case 328u: goto L_0037B4C4;
    case 329u: goto L_0037B4E0;
    case 330u: goto L_0037B4F0;
    case 331u: goto L_0037B508;
    case 332u: goto L_0037B518;
    case 333u: goto L_0037B530;
    case 334u: goto L_0037B540;
    case 335u: goto L_0037B558;
    case 336u: goto L_0037B568;
    case 337u: goto L_0037B580;
    case 338u: goto L_0037B590;
    case 339u: goto L_0037B5A8;
    case 340u: goto L_0037B5B8;
    case 341u: goto L_0037B5D8;
    case 342u: goto L_0037B5EC;
    case 343u: goto L_0037B600;
    case 344u: goto L_0037B618;
    case 345u: goto L_0037B628;
    case 346u: goto L_0037B640;
    case 347u: goto L_0037B650;
    case 348u: goto L_0037B668;
    case 349u: goto L_0037B678;
    case 350u: goto L_0037B690;
    case 351u: goto L_0037B6A0;
    case 352u: goto L_0037B6B8;
    case 353u: goto L_0037B6C8;
    case 354u: goto L_0037B6E0;
    case 355u: goto L_0037B6F0;
    case 356u: goto L_0037B708;
    case 357u: goto L_0037B718;
    case 358u: goto L_0037B730;
    case 359u: goto L_0037B740;
    case 360u: goto L_0037B758;
    case 361u: goto L_0037B768;
    case 362u: goto L_0037B780;
    case 363u: goto L_0037B790;
    case 364u: goto L_0037B7A8;
    case 365u: goto L_0037B7B8;
    case 366u: goto L_0037B7D0;
    case 367u: goto L_0037B7E0;
    case 368u: goto L_0037B7F8;
    case 369u: goto L_0037B808;
    case 370u: goto L_0037B820;
    case 371u: goto L_0037B830;
    case 372u: goto L_0037B848;
    case 373u: goto L_0037B858;
    case 374u: goto L_0037B870;
    case 375u: goto L_0037B888;
    case 376u: goto L_0037B8A0;
    case 377u: goto L_0037B8B0;
    case 378u: goto L_0037B8C8;
    case 379u: goto L_0037B8D8;
    case 380u: goto L_0037B904;
    case 381u: goto L_0037B908;
    case 382u: goto L_0037B914;
    case 383u: goto L_0037B91C;
    case 384u: goto L_0037B924;
    case 385u: goto L_0037B92C;
    case 386u: goto L_0037B93C;
    case 387u: goto L_0037B944;
    case 388u: goto L_0037B950;
    case 389u: goto L_0037B958;
    case 390u: goto L_0037B960;
    case 391u: goto L_0037B970;
    case 392u: goto L_0037B988;
    case 393u: goto L_0037B9A8;
    case 394u: goto L_0037B9AC;
    case 395u: goto L_0037B9B8;
    case 396u: goto L_0037B9BC;
    case 397u: goto L_0037B9C4;
    case 398u: goto L_0037B9CC;
    case 399u: goto L_0037B9DC;
    case 400u: goto L_0037B9E8;
    case 401u: goto L_0037B9F4;
    case 402u: goto L_0037B9FC;
    case 403u: goto L_0037BA04;
    case 404u: goto L_0037BA20;
    case 405u: goto L_0037BA44;
    case 406u: goto L_0037BA5C;
    case 407u: goto L_0037BA78;
    case 408u: goto L_0037BA8C;
    case 409u: goto L_0037BAA0;
    case 410u: goto L_0037BAB4;
    case 411u: goto L_0037BAC8;
    case 412u: goto L_0037BADC;
    case 413u: goto L_0037BB00;
    case 414u: goto L_0037BB10;
    case 415u: goto L_0037BB48;
    case 416u: goto L_0037BB68;
    case 417u: goto L_0037BBA0;
    case 418u: goto L_0037BBC0;
    case 419u: goto L_0037BBD8;
    case 420u: goto L_0037BC14;
    case 421u: goto L_0037BC34;
    case 422u: goto L_0037BC60;
    case 423u: goto L_0037BC94;
    case 424u: goto L_0037BCF8;
    case 425u: goto L_0037BD14;
    case 426u: goto L_0037BD38;
    case 427u: goto L_0037BD6C;
    case 428u: goto L_0037BD90;
    case 429u: goto L_0037BDAC;
    case 430u: goto L_0037BDD0;
    case 431u: goto L_0037BE04;
    case 432u: goto L_0037BE28;
    case 433u: goto L_0037BE48;
    case 434u: goto L_0037BE78;
    case 435u: goto L_0037BE90;
    case 436u: goto L_0037BEA0;
    case 437u: goto L_0037BEC8;
    case 438u: goto L_0037BEF0;
    case 439u: goto L_0037BF20;
    case 440u: goto L_0037BF2C;
    case 441u: goto L_0037BFA8;
    case 442u: goto L_0037BFBC;
    case 443u: goto L_0037BFE0;
    case 444u: goto L_0037BFF0;
    default: bad_entry(c, 0x00378000u); return;
    }
L_00378000:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], ld32((c.r[5].w[0] + 56u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00378024u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00378024u) [[unlikely]] return; }
L_00378024:
    set32(c.r[2], ld32((c.r[18].w[0] - 21164u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00378000u | kUnwind; return; } goto L_00378000; } }
L_00378034:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378050:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[4].w[0] - 21176u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00378068; } }
    st32((c.r[4].w[0] - 21176u), 0u);
    c.budget -= 1;
L_00378068:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 21172u), c.r[2].w[0]);
    st32((c.r[4].w[0] - 21184u), c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378088:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[2].w[0] - 21176u), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003780A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23208u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003780C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00380000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 32000u);
    st32((c.r[3].w[0] - 23996u), c.r[2].w[0]);
    c.budget -= 4;
L_003780C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003780C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 23208u)));
    st32((c.r[2].w[0] - 23996u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003780ECu);  if (depth < kMaxDepth) unit_009D(c, 51u, depth + 1u); else { c.pc = 0x00374998u; return; } if (c.pc != 0x003780ECu) [[unlikely]] return; }
L_003780EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 18712u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], 0u + 840u);
    set32(c.r[8], 0u + 505u);
    set32(c.r[6], c.r[6].w[0] + 9840u);
    set32(c.r[7], c.r[7].w[0] + 9944u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378114u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x00378114u) [[unlikely]] return; }
L_00378114:
    set32(c.r[4], ld32((c.r[16].w[0] + 23208u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378120u);  if (depth < kMaxDepth) unit_009D(c, 17u, depth + 1u); else { c.pc = 0x00374150u; return; } if (c.pc != 0x00378120u) [[unlikely]] return; }
L_00378120:
    st32((c.r[16].w[0] + 23208u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378138:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] - 23996u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378158; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00378158u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00378158u) [[unlikely]] return; }
L_00378158:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378168:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[17].w[0] + 23212u)));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003781DC; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] - 21156u)));
    c.r[7].d[0] = c.r[29].d[0] | 4ull;
    st32((c.r[29].w[0]), c.f[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st8((c.r[29].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003781C8u);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x003781C8u) [[unlikely]] return; }
L_003781C8:
    set32(c.r[2], ld32((c.r[16].w[0] - 21156u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 23212u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[16].w[0] - 21156u), c.r[2].w[0]);
    c.budget -= 5;
L_003781DC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003781F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 23212u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00378218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378218u);  if (depth < kMaxDepth) unit_009D(c, 57u, depth + 1u); else { c.pc = 0x00374AA0u; return; } if (c.pc != 0x00378218u) [[unlikely]] return; }
L_00378218:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23212u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00378244; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378244:
    set32(c.r[2], ld32((c.r[2].w[0] + 832u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378258:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23212u)));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003782F0; } }
    c.r[2].d[0] = c.r[4].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037829C; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378294u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x00378294u) [[unlikely]] return; }
L_00378294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003782F0; } }
L_0037829C:
    set32(c.r[2], c.r[4].w[0] - 110u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(51ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003782CC; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003782C4u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x003782C4u) [[unlikely]] return; }
L_003782C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003782F0; } }
L_003782CC:
    c.r[2].d[0] = c.r[4].sd[0] < 110ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003782F0; } }
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[29].d[0] | 8ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003782F0u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x003782F0u) [[unlikely]] return; }
L_003782F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378300:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[17].w[0] + 23208u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037832Cu);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x0037832Cu) [[unlikely]] return; }
L_0037832C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378334u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x00378334u) [[unlikely]] return; }
L_00378334:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[1].w[0];
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 23208u)));
    c.r[7].d[0] = c.r[29].d[0] | 4ull;
    set32(c.r[5], ld32((c.r[16].w[0] - 21160u)));
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[0]);
    c.r[9].d[0] = 0ull + 0ull;
    st8((c.r[29].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[10], 0u + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378368u);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x00378368u) [[unlikely]] return; }
L_00378368:
    set32(c.r[2], ld32((c.r[16].w[0] - 21160u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 23208u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st32((c.r[16].w[0] - 21160u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[3].w[0] + 12u), 0u);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378398:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003783B0u);  if (depth < kMaxDepth) unit_009D(c, 243u, depth + 1u); else { c.pc = 0x003778C0u; return; } if (c.pc != 0x003783B0u) [[unlikely]] return; }
L_003783B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003783C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003783D8u);  if (depth < kMaxDepth) unit_009D(c, 243u, depth + 1u); else { c.pc = 0x003778C0u; return; } if (c.pc != 0x003783D8u) [[unlikely]] return; }
L_003783D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003783E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378400u);  if (depth < kMaxDepth) unit_009E(c, 33u, depth + 1u); else { c.pc = 0x00378418u; return; } if (c.pc != 0x00378400u) [[unlikely]] return; }
L_00378400:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378418:
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[4].w[0] + 16u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 6;
L_00378430:
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00378430u | kUnwind; return; } goto L_00378430; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + 17200u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378480u);  if (depth < kMaxDepth) unit_0071(c, 305u, depth + 1u); else { c.pc = 0x002C72F8u; return; } if (c.pc != 0x00378480u) [[unlikely]] return; }
L_00378480:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003784A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + 17200u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003784C4u);  if (depth < kMaxDepth) unit_0071(c, 305u, depth + 1u); else { c.pc = 0x002C72F8u; return; } if (c.pc != 0x003784C4u) [[unlikely]] return; }
L_003784C4:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003784E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0037861C; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[20].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 2;
L_00378518:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0037860C; } }
    set32(c.r[17], c.r[20].w[0] + 17200u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378538u);  if (depth < kMaxDepth) unit_0071(c, 271u, depth + 1u); else { c.pc = 0x002C6F10u; return; } if (c.pc != 0x00378538u) [[unlikely]] return; }
L_00378538:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037860C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378550u);  if (depth < kMaxDepth) unit_0071(c, 307u, depth + 1u); else { c.pc = 0x002C7360u; return; } if (c.pc != 0x00378550u) [[unlikely]] return; }
L_00378550:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378568u);  if (depth < kMaxDepth) unit_0071(c, 315u, depth + 1u); else { c.pc = 0x002C7578u; return; } if (c.pc != 0x00378568u) [[unlikely]] return; }
L_00378568:
    c.r[2].d[0] = ld8((c.r[29].w[0]));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 1u));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 3u));
    set32(c.r[4], c.r[4].w[0] - 128u);
    set32(c.r[5], c.r[5].w[0] - 128u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[3].w[0] - 128u);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.budget -= 22;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00378600; } }
    c.f[1] = c.f[1] & fp::kAbs;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[4] = c.r[1].w[0];
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[1] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00378600; } }
    c.f[0] = c.f[2] & fp::kAbs;
    c.f[1] = c.f[3] & fp::kAbs;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0037860C; } }
L_00378600:
    st32((c.r[19].w[0] + 16u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037861C; } }
L_0037860C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00378518u | kUnwind; return; } goto L_00378518; } }
L_0037861C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378640:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + 12u);
    set32(c.r[5], 0u - 1u);
    c.r[3].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = 0ull;
    c.budget -= 8;
L_00378660:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[6].d[0];
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00378660u | kUnwind; return; } goto L_00378660; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378690:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003786B0u);  if (depth < kMaxDepth) unit_009E(c, 51u, depth + 1u); else { c.pc = 0x003787A0u; return; } if (c.pc != 0x003786B0u) [[unlikely]] return; }
L_003786B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00378708; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003786D0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378704; } }
L_003786D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[4].w[0] + 17200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003786E4u);  if (depth < kMaxDepth) unit_0071(c, 305u, depth + 1u); else { c.pc = 0x002C72F8u; return; } if (c.pc != 0x003786E4u) [[unlikely]] return; }
L_003786E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003786FC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378754; } }
L_003786FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_00378704:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_00378708:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00378750; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00378750; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 17200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378738u);  if (depth < kMaxDepth) unit_0071(c, 305u, depth + 1u); else { c.pc = 0x002C72F8u; return; } if (c.pc != 0x00378738u) [[unlikely]] return; }
L_00378738:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_00378750:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00378754:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378770:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00378798; } }
    set32(c.r[2], c.r[3].w[0] - 2u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 7;
L_00378798:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003787A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003787B8:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003787D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003787E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[2].w[0] + 17200u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378804u);  if (depth < kMaxDepth) unit_0071(c, 271u, depth + 1u); else { c.pc = 0x002C6F10u; return; } if (c.pc != 0x00378804u) [[unlikely]] return; }
L_00378804:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378818:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00378868; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 17200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378848u);  if (depth < kMaxDepth) unit_0071(c, 271u, depth + 1u); else { c.pc = 0x002C6F10u; return; } if (c.pc != 0x00378848u) [[unlikely]] return; }
L_00378848:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00378868; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378860u);  if (depth < kMaxDepth) unit_0071(c, 169u, depth + 1u); else { c.pc = 0x002C5960u; return; } if (c.pc != 0x00378860u) [[unlikely]] return; }
L_00378860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003788A0; } }
L_00378868:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003788A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 17200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378888u);  if (depth < kMaxDepth) unit_0071(c, 271u, depth + 1u); else { c.pc = 0x002C6F10u; return; } if (c.pc != 0x00378888u) [[unlikely]] return; }
L_00378888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003788A0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003788A0u);  if (depth < kMaxDepth) unit_0071(c, 169u, depth + 1u); else { c.pc = 0x002C5960u; return; } if (c.pc != 0x003788A0u) [[unlikely]] return; }
L_003788A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003788B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 8;
L_003788D8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 17200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003788E8u);  if (depth < kMaxDepth) unit_0071(c, 271u, depth + 1u); else { c.pc = 0x002C6F10u; return; } if (c.pc != 0x003788E8u) [[unlikely]] return; }
L_003788E8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003788D8u | kUnwind; return; } goto L_003788D8; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378920:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 12u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_00378940:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378950u);  if (depth < kMaxDepth) unit_00A0(c, 208u, depth + 1u); else { c.pc = 0x00382820u; return; } if (c.pc != 0x00378950u) [[unlikely]] return; }
L_00378950:
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00378940u | kUnwind; return; } goto L_00378940; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378980:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378A00; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003789C0; } }
    ldl(c.r[2], (c.r[5].w[0] + 7u));
    ldr(c.r[2], (c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    sdl(c.r[2], (c.r[4].w[0] + 19u));
    sdr(c.r[2], (c.r[4].w[0] + 12u));
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003789C0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378A00; } }
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 12u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003789C0u | kUnwind; return; } goto L_003789C0; } }
    ldl(c.r[3], (c.r[5].w[0] + 7u));
    ldr(c.r[3], (c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    sdl(c.r[3], (c.r[2].w[0] + 7u));
    sdr(c.r[3], (c.r[2].w[0]));
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 6;
L_00378A00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378A08:
    set32(c.r[4], c.r[4].w[0] + 76u);
    set32(c.r[2], 0u + 4u);
    c.budget -= 2;
L_00378A10:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 16u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00378A10u | kUnwind; return; } goto L_00378A10; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378A30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23224u)));
    set32(c.r[4], c.r[3].w[0] + 23224u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378E10; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378D38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 10128u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00378000u < 16384u) { entry = entries_009E[(t - 0x00378000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00378A90:
    set32(c.r[16], c.r[19].w[0] + 23224u);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[5].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378AA8u);  if (depth < kMaxDepth) unit_0044(c, 69u, depth + 1u); else { c.pc = 0x00211878u; return; } if (c.pc != 0x00378AA8u) [[unlikely]] return; }
L_00378AA8:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[17], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00378AD4; } }
    st32((c.r[4].w[0] + 48u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378AE4; } }
L_00378AD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], c.r[17].w[0] + 63u);
    c.r[2].d[0] = c.r[2].d[0] | 65472ull;
    c.r[17].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
L_00378AE4:
    set32(c.r[18], c.r[19].w[0] + 23224u);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00378B08; } }
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378D38; } }
L_00378B08:
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378B3C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], 0u - 2048u);
    set32(c.r[2], c.r[2].w[0] + 2047u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
L_00378B3C:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00378B5C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378B78; } }
L_00378B5C:
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378B68u);  if (depth < kMaxDepth) unit_0044(c, 114u, depth + 1u); else { c.pc = 0x00212380u; return; } if (c.pc != 0x00378B68u) [[unlikely]] return; }
L_00378B68:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_00378B78:
    set32(c.r[18], c.r[19].w[0] + 23224u);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00378BD4; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], c.r[7].w[0] + 10064u);
    set32(c.r[8], c.r[8].w[0] + 10104u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 755u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378BB4u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00378BB4u) [[unlikely]] return; }
L_00378BB4:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[2].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[3].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 8;
L_00378BD4:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378BE8u);  if (depth < kMaxDepth) unit_0044(c, 115u, depth + 1u); else { c.pc = 0x002123A0u; return; } if (c.pc != 0x00378BE8u) [[unlikely]] return; }
L_00378BE8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378D38; } }
L_00378BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378C00u);  if (depth < kMaxDepth) unit_0044(c, 117u, depth + 1u); else { c.pc = 0x002123C8u; return; } if (c.pc != 0x00378C00u) [[unlikely]] return; }
L_00378C00:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00378C28; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00378D38; } }
    set32(c.r[2], c.r[19].w[0] + 23224u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378D38; } }
L_00378C28:
    set32(c.r[3], c.r[19].w[0] + 23224u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378D38; } }
L_00378C3C:
    set32(c.r[16], c.r[19].w[0] + 23224u);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00378C98; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.r[7].d[0] = c.r[29].d[0] | 4ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[29].w[0]), c.r[6].w[0]);
    set32(c.r[17], c.r[6].w[0] - c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65472ull;
    set32(c.r[3], c.r[17].w[0] + 63u);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    c.r[17].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[4].w[0] + c.r[17].w[0]);
    c.r[8].d[0] = c.r[29].d[0] | 8ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378C8Cu);  if (depth < kMaxDepth) unit_00D9(c, 153u, depth + 1u); else { c.pc = 0x00467670u; return; } if (c.pc != 0x00378C8Cu) [[unlikely]] return; }
L_00378C8C:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[29].w[0])));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
L_00378C98:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378D38; } }
L_00378CA8:
    set32(c.r[16], c.r[19].w[0] + 23224u);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378CCC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00378CC4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00378CC4u) [[unlikely]] return; }
L_00378CC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378D38; } }
L_00378CCC:
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378D38; } }
L_00378CDC:
    set32(c.r[7], c.r[19].w[0] + 23224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[7].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = ld32((c.r[5].w[0] - 19060u));
    set32(c.r[6], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[2], c.r[3].w[0] + 52u);
    st32((c.r[7].w[0] + 16u), c.r[2].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] - 19056u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    st32((c.r[5].w[0] - 19060u), c.f[0]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00378D28; } }
    st32((c.r[7].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378D38; } }
L_00378D28:
    set32(c.r[2], ld32((c.r[19].w[0] + 23224u)));
    set32(c.r[3], 0u - 2u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[19].w[0] + 23224u), c.r[2].w[0]);
    c.budget -= 4;
L_00378D38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 19048u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00378E10; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[3], ld32((c.r[5].w[0] - 31664u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 23216u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00378E10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = ld32((c.r[2].w[0] - 19060u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[1] = ld32((c.r[4].w[0] - 19056u));
    c.f[2] = ld32((c.r[3].w[0] - 19052u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[2], ld32((c.r[5].w[0] - 31664u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    st32((c.r[6].w[0] + 23216u), c.r[2].w[0]);
    fpu_div(c, 16u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[16]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00378DAC; } }
    c.f[16] = c.f[1];
    c.budget -= 1;
L_00378DAC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[16]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00378DC8; } }
    c.f[16] = c.f[0];
    c.budget -= 1;
L_00378DC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[16]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00378E10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[12] = ld32((c.r[2].w[0] - 19044u));
    c.f[13] = ld32((c.r[3].w[0] - 19040u));
    c.f[14] = ld32((c.r[4].w[0] - 19036u));
    c.f[15] = ld32((c.r[5].w[0] - 19032u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378E10u);  if (depth < kMaxDepth) unit_0052(c, 121u, depth + 1u); else { c.pc = 0x0024B780u; return; } if (c.pc != 0x00378E10u) [[unlikely]] return; }
L_00378E10:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378E30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 19060u), c.f[12]);
    st32((c.r[4].w[0] - 19052u), c.f[13]);
    st32((c.r[5].w[0] - 19048u), c.r[2].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378E58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] - 19060u), 0u);
    st32((c.r[5].w[0] - 19048u), c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378E78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = ld32((c.r[3].w[0] - 19060u));
    st32((c.r[2].w[0] - 19056u), c.f[13]);
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[3].w[0] - 19060u), c.f[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378E98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[2].w[0] - 19048u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378EA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 19048u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00378F88; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[3], ld32((c.r[5].w[0] - 31664u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 23216u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00378F88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = ld32((c.r[2].w[0] - 19060u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[1] = ld32((c.r[4].w[0] - 19056u));
    c.f[2] = ld32((c.r[3].w[0] - 19052u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[2], ld32((c.r[5].w[0] - 31664u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    st32((c.r[6].w[0] + 23216u), c.r[2].w[0]);
    fpu_div(c, 16u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[16]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00378F24; } }
    c.f[16] = c.f[1];
    c.budget -= 1;
L_00378F24:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[16]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00378F40; } }
    c.f[16] = c.f[0];
    c.budget -= 1;
L_00378F40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[16]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00378F88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[12] = ld32((c.r[2].w[0] - 19044u));
    c.f[13] = ld32((c.r[3].w[0] - 19040u));
    c.f[14] = ld32((c.r[4].w[0] - 19036u));
    c.f[15] = ld32((c.r[5].w[0] - 19032u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378F88u);  if (depth < kMaxDepth) unit_0052(c, 121u, depth + 1u); else { c.pc = 0x0024B780u; return; } if (c.pc != 0x00378F88u) [[unlikely]] return; }
L_00378F88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378F98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[2].w[0] - 19040u), c.f[12]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378FA8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00378FCC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[3].w[0] + 23224u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378FD4; } }
L_00378FCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st32((c.r[2].w[0] + 23224u), 0u);
    c.budget -= 2;
L_00378FD4:
    set32(c.r[2], c.r[2].w[0] + 23224u);
    set32(c.r[3], c.r[2].w[0] + 24u);
    set32(c.r[4], c.r[2].w[0] + 1744u);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 1740u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378FF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st32((c.r[2].w[0] + 23236u), c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00379008:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], 0u + 52u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379034u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x00379034u) [[unlikely]] return; }
L_00379034:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00379050; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 56u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379050u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x00379050u) [[unlikely]] return; }
L_00379050:
    set32(c.r[3], c.r[16].w[0] + 56u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00379078:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[13].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 23224u)));
    c.r[14].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[11], c.r[2].w[0] + 23224u);
    c.r[12].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003790BC; } }
    set32(c.r[4], ld32((c.r[11].w[0] + 1740u)));
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[11].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[8], c.r[2].w[0] - 28664u);
    st32((c.r[3].w[0] + 44u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003790C4; } }
L_003790BC:
    set32(c.r[2], ld32((c.r[11].w[0] + 20u)));
    st32((c.r[2].w[0] + 44u), 0u);
    c.budget -= 2;
L_003790C4:
    set32(c.r[3], c.r[14].w[0] + 23224u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[2].w[0]), c.r[13].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[2].w[0] + 4u), c.r[12].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[4].w[0] + 28u), c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[5].w[0] + 36u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st32((c.r[5].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[4].w[0] + 40u), c.r[10].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[2].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[4].w[0] + 24u), 0u);
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[5].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 1740u)));
    set32(c.r[2], c.r[2].w[0] + 52u);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 1740u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 88u);
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 1740u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 1740u)));
    st32((c.r[2].w[0]), 0u);
    c.budget -= 41;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00379168:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23244u)));
    set32(c.r[2], c.r[2].w[0] - 52u);
    st32((c.r[2].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00379188:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[5].w[0] + 23224u);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003791B4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 23224u)));
    set32(c.r[2], c.r[4].w[0] + 24u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[5].w[0] + 23224u), c.r[3].w[0]);
    c.budget -= 6;
L_003791B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003791C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23224u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003791D8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[17], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[16], ld32((c.r[2].w[0] - 31664u)));
    c.budget -= 16;
L_00379218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379220u);  if (depth < kMaxDepth) unit_009E(c, 71u, depth + 1u); else { c.pc = 0x00378A30u; return; } if (c.pc != 0x00379220u) [[unlikely]] return; }
L_00379220:
    set32(c.r[2], ld32((c.r[20].w[0] - 31664u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0037924C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379234u);  if (depth < kMaxDepth) unit_0037(c, 94u, depth + 1u); else { c.pc = 0x001DCB20u; return; } if (c.pc != 0x00379234u) [[unlikely]] return; }
L_00379234:
    set32(c.r[4], c.r[19].w[0] + 17200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379240u);  if (depth < kMaxDepth) unit_0071(c, 235u, depth + 1u); else { c.pc = 0x002C6878u; return; } if (c.pc != 0x00379240u) [[unlikely]] return; }
L_00379240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379248u);  if (depth < kMaxDepth) unit_009E(c, 11u, depth + 1u); else { c.pc = 0x00378138u; return; } if (c.pc != 0x00379248u) [[unlikely]] return; }
L_00379248:
    set32(c.r[16], ld32((c.r[18].w[0] - 31664u)));
    c.budget -= 1;
L_0037924C:
    set32(c.r[2], ld32((c.r[21].w[0] + 23224u)));
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00379218u | kUnwind; return; } goto L_00379218; } }
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
L_00379290:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00379298:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 23224u)));
    set32(c.r[4], c.r[3].w[0] + 23224u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003792E0; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003792E0; } }
L_003792C8:
    set32(c.r[4], c.r[4].w[0] + 52u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003792C8u | kUnwind; return; } goto L_003792C8; } }
L_003792E0:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003792F0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st32((c.r[29].w[0] + 128u), c.f[20]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 3u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    set32(c.r[18], c.r[19].w[0] + 19592u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 20;
L_00379340:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379488; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00379398; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00379398; } }
    c.f[12] = 0u;
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.f[15] = c.f[20];
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379384u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00379384u) [[unlikely]] return; }
L_00379384:
    st32((c.r[19].w[0] + 19592u), 0u);
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0] + 8u), 0u);
    st32((c.r[18].w[0] + 12u), c.f[20]);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 5;
L_00379398:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003793CC; } }
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[3] = ld32((c.r[16].w[0] + 68u));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003793F8; } }
L_003793CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379400; } }
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    c.f[3] = ld32((c.r[16].w[0] + 80u));
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.budget -= 8;
L_003793F8:
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    c.budget -= 2;
L_00379400:
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    st32((c.r[22].w[0] + 6304u), c.f[0]);
    st32((c.r[21].w[0] + 6308u), c.f[1]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379438; } }
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379474; } }
L_00379438:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379454; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379478; } }
L_00379454:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379478; } }
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_00379474:
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.budget -= 1;
L_00379478:
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    st32((c.r[20].w[0] + 19572u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379488u);  if (depth < kMaxDepth) unit_004C(c, 100u, depth + 1u); else { c.pc = 0x00231818u; return; } if (c.pc != 0x00379488u) [[unlikely]] return; }
L_00379488:
    set32(c.r[16], c.r[16].w[0] + 112u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00379340u | kUnwind; return; } goto L_00379340; } }
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003794C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[0] = c.f[13];
    set32(c.r[3], c.r[2].w[0] + 19576u);
    st32((c.r[2].w[0] + 19576u), c.f[12]);
    set32(c.r[4], c.r[5].w[0] + 16u);
    c.f[15] = 0u;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[3].w[0] + 8u), c.f[14]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003794F8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x003794F8u) [[unlikely]] return; }
L_003794F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00379508:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], c.r[5].w[0] + 32u);
    st32((c.r[29].w[0] + 40u), c.f[23]);
    st32((c.r[29].w[0] + 32u), c.f[22]);
    c.f[23] = c.f[14];
    st32((c.r[29].w[0] + 24u), c.f[21]);
    c.f[22] = c.f[13];
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.f[21] = c.f[12];
    c.f[20] = c.f[15];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037953Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0037953Cu) [[unlikely]] return; }
L_0037953C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 19592u), c.f[21]);
    set32(c.r[2], c.r[3].w[0] + 19592u);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[22]);
    st32((c.r[2].w[0] + 8u), c.f[23]);
    c.f[23] = ld32((c.r[29].w[0] + 40u));
    c.f[22] = ld32((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 24u));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00379578:
    st32((c.r[5].w[0] + 52u), c.f[12]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st32((c.r[5].w[0] + 56u), c.f[13]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st32((c.r[2].w[0] + 6304u), c.f[12]);
    st32((c.r[3].w[0] + 6308u), c.f[13]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00379598:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[5].w[0] + 48u), c.f[12]);
    st32((c.r[2].w[0] + 19572u), c.f[12]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003795B0:
    st32((c.r[5].w[0] + 60u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003795C0:
    set32(c.r[2], ld32((c.r[5].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003795F4; } }
    c.f[1] = ld32((c.r[5].w[0] + 52u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[0] = ld32((c.r[5].w[0] + 56u));
    c.f[2] = ld32((c.r[5].w[0] + 64u));
    c.f[3] = ld32((c.r[5].w[0] + 68u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 72u), c.r[2].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379620; } }
L_003795F4:
    set32(c.r[2], ld32((c.r[5].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379628; } }
    c.f[1] = ld32((c.r[5].w[0] + 52u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[0] = ld32((c.r[5].w[0] + 56u));
    c.f[2] = ld32((c.r[5].w[0] + 76u));
    c.f[3] = ld32((c.r[5].w[0] + 80u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 84u), c.r[2].w[0]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.budget -= 8;
L_00379620:
    st32((c.r[5].w[0] + 52u), c.f[1]);
    st32((c.r[5].w[0] + 56u), c.f[0]);
    c.budget -= 2;
L_00379628:
    c.f[1] = ld32((c.r[5].w[0] + 56u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.f[0] = ld32((c.r[5].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st32((c.r[2].w[0] + 6308u), c.f[1]);
    st32((c.r[3].w[0] + 6304u), c.f[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00379648:
    set32(c.r[2], ld32((c.r[5].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379670; } }
    c.f[0] = ld32((c.r[5].w[0] + 48u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[1] = ld32((c.r[5].w[0] + 104u));
    st32((c.r[5].w[0] + 92u), c.r[2].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003796AC; } }
L_00379670:
    set32(c.r[2], ld32((c.r[5].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037968C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[5].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003796B0; } }
L_0037968C:
    set32(c.r[2], ld32((c.r[5].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003796B0; } }
    c.f[0] = ld32((c.r[5].w[0] + 48u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[1] = ld32((c.r[5].w[0] + 108u));
    st32((c.r[5].w[0] + 100u), c.r[2].w[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_003796AC:
    st32((c.r[5].w[0] + 48u), c.f[0]);
    c.budget -= 1;
L_003796B0:
    c.f[0] = ld32((c.r[5].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[2].w[0] + 19572u), c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003796C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003796F0; } }
L_003796E8:
    set32(c.r[16], c.r[16].w[0] + 112u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_003796F0:
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379720; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003796E8u | kUnwind; return; } goto L_003796E8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037971Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0037971Cu) [[unlikely]] return; }
L_0037971C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00379720:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00379738:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 144u), c.f[26]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 136u), c.f[25]);
    c.f[26] = c.f[15];
    st32((c.r[29].w[0] + 128u), c.f[24]);
    c.f[25] = c.f[18];
    st32((c.r[29].w[0] + 120u), c.f[23]);
    c.f[24] = c.f[17];
    st32((c.r[29].w[0] + 112u), c.f[22]);
    c.f[23] = c.f[16];
    st32((c.r[29].w[0] + 104u), c.f[21]);
    c.f[22] = c.f[13];
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.f[21] = c.f[14];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.f[20] = c.f[12];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 28;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003797B0; } }
L_003797A8:
    set32(c.r[16], c.r[16].w[0] + 112u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_003797B0:
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003797E0; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003797A8u | kUnwind; return; } goto L_003797A8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 112u);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003797E0u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x003797E0u) [[unlikely]] return; }
L_003797E0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003798D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[12] = c.f[20];
    set32(c.r[3], c.r[2].w[0] + 19576u);
    st32((c.r[2].w[0] + 19576u), c.f[20]);
    c.f[15] = 0u;
    c.f[13] = c.f[22];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.f[14] = c.f[21];
    st32((c.r[3].w[0] + 8u), c.f[21]);
    set32(c.r[4], c.r[17].w[0] + 16u);
    st32((c.r[3].w[0] + 4u), c.f[22]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379824u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00379824u) [[unlikely]] return; }
L_00379824:
    set32(c.r[16], c.r[18].w[0] + 448u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.f[12] = c.f[23];
    c.f[13] = c.f[24];
    c.f[14] = c.f[25];
    c.f[15] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379844u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00379844u) [[unlikely]] return; }
L_00379844:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[3].w[0] + 19592u), c.f[23]);
    set32(c.r[2], c.r[3].w[0] + 19592u);
    st32((c.r[2].w[0] + 4u), c.f[24]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st32((c.r[2].w[0] + 8u), c.f[25]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], c.r[17].w[0] + 64u);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 56u), c.f[20]);
    set32(c.r[6], 0u + 48u);
    st32((c.r[3].w[0] + 6308u), c.f[20]);
    st32((c.r[7].w[0] + 6304u), c.f[0]);
    st32((c.r[17].w[0] + 48u), c.f[26]);
    st32((c.r[19].w[0] + 19572u), c.f[26]);
    st32((c.r[17].w[0] + 60u), c.r[20].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003798A0u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x003798A0u) [[unlikely]] return; }
L_003798A0:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003798B4; } }
    st32((c.r[17].w[0] + 48u), 0u);
    st32((c.r[19].w[0] + 19572u), 0u);
    c.budget -= 2;
L_003798B4:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 48u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003798D0u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x003798D0u) [[unlikely]] return; }
L_003798D0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[26] = ld32((c.r[29].w[0] + 144u));
    c.f[25] = ld32((c.r[29].w[0] + 136u));
    c.f[24] = ld32((c.r[29].w[0] + 128u));
    c.f[23] = ld32((c.r[29].w[0] + 120u));
    c.f[22] = ld32((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 104u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00379918:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[12] = 0u;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[13] = c.f[12];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.f[15] = c.f[20];
    c.f[14] = c.f[12];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379950u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00379950u) [[unlikely]] return; }
L_00379950:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 19592u), 0u);
    set32(c.r[2], c.r[3].w[0] + 19592u);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[16].w[0]), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00379988:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0037999C; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037999C:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003799A8:
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[4].w[0] + 468u), c.r[6].w[0]);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 456u), c.r[5].w[0]);
    fpu_div(c, 13u, c.f[13], c.f[1]);
    fpu_div(c, 15u, c.f[15], c.f[0]);
    fpu_div(c, 12u, c.f[12], c.f[1]);
    fpu_div(c, 14u, c.f[14], c.f[0]);
    st32((c.r[4].w[0] + 452u), c.f[13]);
    st32((c.r[4].w[0] + 464u), c.f[15]);
    st32((c.r[4].w[0] + 448u), c.f[12]);
    st32((c.r[4].w[0] + 460u), c.f[14]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00379A10:
    st32((c.r[4].w[0] + 480u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 472u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 476u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 484u), c.r[8].w[0]);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00379A4C; } }
    mmi::div(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x00379A30u);  goto L_00379A34; }
L_00379A34:
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379A58; } }
L_00379A4C:
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 3;
L_00379A58:
    st32((c.r[4].w[0] + 488u), c.f[0]);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00379A8C; } }
    mmi::div(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.budget -= 3;
    if (c.r[8].d[0] == 0ull) { breakpoint(c, 0x00379A6Cu);  goto L_00379A70; }
L_00379A70:
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 492u), c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00379A8C:
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 492u), c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00379AA8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 1680u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 1684u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379CE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 10160u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00378000u < 16384u) { entry = entries_009E[(t - 0x00378000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00379AFC:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1624u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379CE4; } }
L_00379B1C:
    set32(c.r[5], ld32((c.r[16].w[0] + 1684u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 1680u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[16].w[0] + 1684u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[2], ld32((c.r[3].w[0] + 1624u)));
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379CD8; } }
L_00379B50:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 1680u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1684u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 1624u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379CD8; } }
L_00379B80:
    set32(c.r[5], ld32((c.r[16].w[0] + 1684u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 1680u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2u);
    st32((c.r[16].w[0] + 1684u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[2], ld32((c.r[3].w[0] + 1624u)));
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379CD8; } }
L_00379BB4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 1692u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379CE4; } }
L_00379BC4:
    set32(c.r[3], ld32((c.r[16].w[0] + 1692u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00379C54; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 592u)));
    c.r[2].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379C28; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379BF0u);  if (depth < kMaxDepth) unit_009E(c, 209u, depth + 1u); else { c.pc = 0x0037A780u; return; } if (c.pc != 0x00379BF0u) [[unlikely]] return; }
L_00379BF0:
    set32(c.r[3], ld32((c.r[16].w[0] + 592u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 596u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379C0Cu);  if (depth < kMaxDepth) unit_009E(c, 211u, depth + 1u); else { c.pc = 0x0037A7A0u; return; } if (c.pc != 0x00379C0Cu) [[unlikely]] return; }
L_00379C0C:
    set32(c.r[3], ld32((c.r[16].w[0] + 592u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 600u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 592u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 592u), c.r[2].w[0]);
    c.budget -= 7;
L_00379C28:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 1684u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    st32((c.r[16].w[0] + 1680u), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 1624u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379C50u);  if (depth < kMaxDepth) unit_009E(c, 140u, depth + 1u); else { c.pc = 0x00379AA8u; return; } if (c.pc != 0x00379C50u) [[unlikely]] return; }
L_00379C50:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00379C54:
    st32((c.r[16].w[0] + 1692u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379CE4; } }
L_00379C60:
    set32(c.r[2], ld32((c.r[16].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00379C74; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 592u), c.r[2].w[0]);
    c.budget -= 2;
L_00379C74:
    set32(c.r[2], ld32((c.r[16].w[0] + 592u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 596u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379C90u);  if (depth < kMaxDepth) unit_009E(c, 210u, depth + 1u); else { c.pc = 0x0037A790u; return; } if (c.pc != 0x00379C90u) [[unlikely]] return; }
L_00379C90:
    set32(c.r[2], ld32((c.r[16].w[0] + 592u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 600u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379CACu);  if (depth < kMaxDepth) unit_009E(c, 212u, depth + 1u); else { c.pc = 0x0037A7B0u; return; } if (c.pc != 0x00379CACu) [[unlikely]] return; }
L_00379CAC:
    set32(c.r[3], ld32((c.r[16].w[0] + 1684u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 1680u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 1684u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[5], ld32((c.r[2].w[0] + 1624u)));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 11;
L_00379CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379CE0u);  if (depth < kMaxDepth) unit_009E(c, 140u, depth + 1u); else { c.pc = 0x00379AA8u; return; } if (c.pc != 0x00379CE0u) [[unlikely]] return; }
L_00379CE0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00379CE4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00379D08:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 1676u)));
    set32(c.r[19], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == c.r[16].d[0];  if (t) { goto L_00379EA4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00379D80; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00379D60; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379D74; } }
L_00379D60:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00379D70; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 2;
L_00379D70:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_00379D74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379DC4; } }
L_00379D80:
    set32(c.r[2], 0u + 28u);
    set32(c.r[4], 0u + 1u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00379DC4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 80u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379DC4; } }
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 1;
L_00379DC4:
    set32(c.r[18], 0u + 28u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00379DF4; } }
    mmi::mult(c, 0, c.r[5].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379EA4; } }
L_00379DF4:
    mmi::mult(c, 0, c.r[5].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], 0u + 1u);
    set32(c.r[20], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00379E3C; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379E2C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E2Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00379E2Cu) [[unlikely]] return; }
L_00379E2C:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 4;
L_00379E3C:
    set32(c.r[3], 0u + 28u);
    set32(c.r[4], 0u + 1u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00379E78; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379E94; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00379E70u) [[unlikely]] return; }
L_00379E70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379E94; } }
L_00379E78:
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379E94; } }
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E94u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00379E94u) [[unlikely]] return; }
L_00379E94:
    set32(c.r[2], 0u + 28u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 4;
L_00379EA4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00379FDC; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 1664u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00379F28; } }
    set32(c.r[18], 0u + 2u);
    c.budget -= 1;
L_00379EC0:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_00379ED4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00379F1C; } }
L_00379ED4:
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00379EEC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_00379EEC:
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00379F18; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 28u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00379F14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00379F14u) [[unlikely]] return; }
L_00379F14:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00379F18:
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_00379F1C:
    set32(c.r[6], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00379EC0u | kUnwind; return; } goto L_00379EC0; } }
L_00379F28:
    set32(c.r[3], 0u + 28u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00379F44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00379F44u) [[unlikely]] return; }
L_00379F44:
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00379FC4; } }
L_00379F50:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00379F90; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00379F70:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00379F70u | kUnwind; return; } goto L_00379F70; } }
L_00379F90:
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379FB4u);  if (depth < kMaxDepth) unit_009E(c, 140u, depth + 1u); else { c.pc = 0x00379AA8u; return; } if (c.pc != 0x00379FB4u) [[unlikely]] return; }
L_00379FB4:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00379F50u | kUnwind; return; } goto L_00379F50; } }
L_00379FC4:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379FD8u);  if (depth < kMaxDepth) unit_009E(c, 140u, depth + 1u); else { c.pc = 0x00379AA8u; return; } if (c.pc != 0x00379FD8u) [[unlikely]] return; }
L_00379FD8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00379FDC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A008:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A024u);  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A938u; return; } if (c.pc != 0x0037A024u) [[unlikely]] return; }
L_0037A024:
    st32((c.r[16].w[0] + 1664u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1668u), 0u);
    set32(c.r[3], 0u + 8u);
    c.budget -= 5;
L_0037A038:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A038u | kUnwind; return; } goto L_0037A038; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A068:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037A08C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[7].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_0037A08C:
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037A0B4; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] + 28u)));
    st32((c.r[7].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A0B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037A0B0u) [[unlikely]] return; }
L_0037A0B0:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0037A0B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A0C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 1664u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0037A158; } }
    set32(c.r[17], 0u + 2u);
    c.budget -= 2;
L_0037A0F0:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0037A104; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0037A14C; } }
L_0037A104:
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037A11C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_0037A11C:
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037A148; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 28u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A144u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037A144u) [[unlikely]] return; }
L_0037A144:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0037A148:
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0037A14C:
    set32(c.r[6], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A0F0u | kUnwind; return; } goto L_0037A0F0; } }
L_0037A158:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A170:
    st32((c.r[4].w[0] + 1668u), c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] - 2u);
    st32((c.r[4].w[0] + 1664u), 0u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_0037A1C0; } }
    set32(c.r[7], c.r[5].w[0] + 32u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
L_0037A198:
    st32((c.r[3].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[8].w[0]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 32u);
    set32(c.r[3], c.r[4].w[0] + 32u);
    c.r[2].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A198u | kUnwind; return; } goto L_0037A198; } }
L_0037A1C0:
    set32(c.r[2], c.r[8].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A1E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A200u);  if (depth < kMaxDepth) unit_009E(c, 195u, depth + 1u); else { c.pc = 0x0037A4E8u; return; } if (c.pc != 0x0037A200u) [[unlikely]] return; }
L_0037A200:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037A218; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A230; } }
L_0037A218:
    st32((c.r[3].w[0]), c.r[16].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), 0u);
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[3].w[0] + 16u), 0u);
    c.budget -= 6;
L_0037A230:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A248:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A270u);  if (depth < kMaxDepth) unit_009E(c, 195u, depth + 1u); else { c.pc = 0x0037A4E8u; return; } if (c.pc != 0x0037A270u) [[unlikely]] return; }
L_0037A270:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037A288; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A2A0; } }
L_0037A288:
    st32((c.r[3].w[0]), c.r[17].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[16].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[3].w[0] + 16u), 0u);
    c.budget -= 6;
L_0037A2A0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A2C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A2E8u);  if (depth < kMaxDepth) unit_009E(c, 195u, depth + 1u); else { c.pc = 0x0037A4E8u; return; } if (c.pc != 0x0037A2E8u) [[unlikely]] return; }
L_0037A2E8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037A300; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A318; } }
L_0037A300:
    st32((c.r[3].w[0]), c.r[16].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), 0u);
    st32((c.r[3].w[0] + 12u), 0u);
    c.budget -= 6;
L_0037A318:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A338:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A368u);  if (depth < kMaxDepth) unit_009E(c, 195u, depth + 1u); else { c.pc = 0x0037A4E8u; return; } if (c.pc != 0x0037A368u) [[unlikely]] return; }
L_0037A368:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037A380; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A398; } }
L_0037A380:
    st32((c.r[3].w[0]), c.r[16].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[19].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 6;
L_0037A398:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A3B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 1664u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0037A410; } }
    c.budget -= 1;
L_0037A3E0:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0037A404; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A3F8u);  if (depth < kMaxDepth) unit_009E(c, 196u, depth + 1u); else { c.pc = 0x0037A558u; return; } if (c.pc != 0x0037A3F8u) [[unlikely]] return; }
L_0037A3F8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A408; } }
L_0037A404:
    set32(c.r[5], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 1;
L_0037A408:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A3E0u | kUnwind; return; } goto L_0037A3E0; } }
L_0037A410:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037A44C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A44Cu);  if (depth < kMaxDepth) unit_009E(c, 196u, depth + 1u); else { c.pc = 0x0037A558u; return; } if (c.pc != 0x0037A44Cu) [[unlikely]] return; }
L_0037A44C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A478u);  if (depth < kMaxDepth) unit_009E(c, 192u, depth + 1u); else { c.pc = 0x0037A4A8u; return; } if (c.pc != 0x0037A478u) [[unlikely]] return; }
L_0037A478:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037A490; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A490u);  if (depth < kMaxDepth) unit_009E(c, 196u, depth + 1u); else { c.pc = 0x0037A558u; return; } if (c.pc != 0x0037A490u) [[unlikely]] return; }
L_0037A490:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A4A8:
    set32(c.r[3], ld32((c.r[4].w[0] + 1664u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037A4DC; } }
    c.budget -= 1;
L_0037A4B8:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0037A4D0; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A4D0:
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A4B8u | kUnwind; return; } goto L_0037A4B8; } }
L_0037A4DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A4E8:
    set32(c.r[2], ld32((c.r[4].w[0] + 1668u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037A548; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    st32((c.r[4].w[0] + 1668u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037A510; } }
    st32((c.r[2].w[0] + 20u), 0u);
    c.budget -= 1;
L_0037A510:
    set32(c.r[2], ld32((c.r[4].w[0] + 1664u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037A530; } }
    st32((c.r[4].w[0] + 1664u), c.r[5].w[0]);
    st32((c.r[5].w[0] + 24u), 0u);
    st32((c.r[5].w[0] + 20u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A548; } }
L_0037A530:
    st32((c.r[5].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 1664u)));
    st32((c.r[5].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1664u)));
    st32((c.r[3].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 1664u), c.r[5].w[0]);
    c.budget -= 6;
L_0037A548:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A558:
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037A580; } }
    st32((c.r[4].w[0] + 1664u), c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0037A598; } }
    st32((c.r[6].w[0] + 20u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A598; } }
L_0037A580:
    st32((c.r[2].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037A598; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0037A598:
    set32(c.r[2], ld32((c.r[4].w[0] + 1668u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037A5B8; } }
    st32((c.r[4].w[0] + 1668u), c.r[5].w[0]);
    st32((c.r[5].w[0] + 20u), 0u);
    st32((c.r[5].w[0] + 24u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037A5C8; } }
L_0037A5B8:
    st32((c.r[5].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 1668u)));
    st32((c.r[5].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 1668u), c.r[5].w[0]);
    c.budget -= 4;
L_0037A5C8:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A5D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[5].w[0] << 2);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[5].w[0] + 1624u), c.r[6].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A5F4u);  if (depth < kMaxDepth) unit_009E(c, 208u, depth + 1u); else { c.pc = 0x0037A768u; return; } if (c.pc != 0x0037A5F4u) [[unlikely]] return; }
L_0037A5F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A608:
    set32(c.r[3], 0u + 28u);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[9].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 24u), c.r[10].w[0]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 592u)));
    c.r[2].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037A6C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A688u);  if (depth < kMaxDepth) unit_009E(c, 209u, depth + 1u); else { c.pc = 0x0037A780u; return; } if (c.pc != 0x0037A688u) [[unlikely]] return; }
L_0037A688:
    set32(c.r[3], ld32((c.r[16].w[0] + 592u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 596u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A6A4u);  if (depth < kMaxDepth) unit_009E(c, 211u, depth + 1u); else { c.pc = 0x0037A7A0u; return; } if (c.pc != 0x0037A6A4u) [[unlikely]] return; }
L_0037A6A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 592u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 600u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 592u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 592u), c.r[2].w[0]);
    c.budget -= 7;
L_0037A6C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A6D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 592u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037A6FC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 592u), c.r[2].w[0]);
    c.budget -= 2;
L_0037A6FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 592u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 596u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A718u);  if (depth < kMaxDepth) unit_009E(c, 210u, depth + 1u); else { c.pc = 0x0037A790u; return; } if (c.pc != 0x0037A718u) [[unlikely]] return; }
L_0037A718:
    set32(c.r[2], ld32((c.r[16].w[0] + 592u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 600u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A734u);  if (depth < kMaxDepth) unit_009E(c, 212u, depth + 1u); else { c.pc = 0x0037A7B0u; return; } if (c.pc != 0x0037A734u) [[unlikely]] return; }
L_0037A734:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A748:
    st32((c.r[4].w[0] + 1620u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A758:
    set32(c.r[2], ld32((c.r[4].w[0] + 1620u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A768:
    set32(c.r[2], ld32((c.r[4].w[0] + 1620u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 1620u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A780:
    set32(c.r[2], ld32((c.r[4].w[0] + 1680u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A790:
    st32((c.r[4].w[0] + 1680u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A7A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 1684u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A7B0:
    st32((c.r[4].w[0] + 1684u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A7C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 1684u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A7D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 1684u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 1680u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[2].w[0] + 1684u), c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[5], ld32((c.r[2].w[0] + 1624u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A80Cu);  if (depth < kMaxDepth) unit_009E(c, 140u, depth + 1u); else { c.pc = 0x00379AA8u; return; } if (c.pc != 0x0037A80Cu) [[unlikely]] return; }
L_0037A80C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A820:
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037A860; } }
    c.budget -= 1;
L_0037A840:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A840u | kUnwind; return; } goto L_0037A840; } }
L_0037A860:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A868:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037A8A0; } }
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_0037A880:
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037A8A0; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A880u | kUnwind; return; } goto L_0037A880; } }
L_0037A8A0:
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A8B8:
    set32(c.r[3], 0u + 28u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 18704u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[7].w[0] + 10192u);
    set32(c.r[8], c.r[8].w[0] + 10224u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 566u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A8FCu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0037A8FCu) [[unlikely]] return; }
L_0037A8FC:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A918:
    st32((c.r[4].w[0] + 72u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A928:
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A938:
    set32(c.r[2], ld32((c.r[4].w[0] + 1672u)));
    st32((c.r[4].w[0] + 1676u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0037A94C; } }
    st32((c.r[4].w[0] + 1672u), c.r[5].w[0]);
    c.budget -= 1;
L_0037A94C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A958:
    set32(c.r[2], ld32((c.r[4].w[0] + 1672u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A968:
    set32(c.r[2], ld32((c.r[4].w[0] + 1676u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A978:
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037A990; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 1676u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A990:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037A9A0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 2;
L_0037A9A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A9B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 80u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037A9D8; } }
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 1;
L_0037A9D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A9E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A9F0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AA00:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AA10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[2].w[0] + 17200u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], 0u + 12u);
    c.budget -= 10;
L_0037AA38:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 121ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037AA38u | kUnwind; return; } goto L_0037AA38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AA58u);  if (depth < kMaxDepth) unit_0071(c, 235u, depth + 1u); else { c.pc = 0x002C6878u; return; } if (c.pc != 0x0037AA58u) [[unlikely]] return; }
L_0037AA58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AA68u);  if (depth < kMaxDepth) unit_0071(c, 311u, depth + 1u); else { c.pc = 0x002C7468u; return; } if (c.pc != 0x0037AA68u) [[unlikely]] return; }
L_0037AA68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037AA38u | kUnwind; return; } goto L_0037AA38; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AA90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AAA8u);  if (depth < kMaxDepth) unit_005C(c, 41u, depth + 1u); else { c.pc = 0x002704F8u; return; } if (c.pc != 0x0037AAA8u) [[unlikely]] return; }
L_0037AAA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AAB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AAD0u);  if (depth < kMaxDepth) unit_005C(c, 43u, depth + 1u); else { c.pc = 0x00270518u; return; } if (c.pc != 0x0037AAD0u) [[unlikely]] return; }
L_0037AAD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AAE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AAF8u);  if (depth < kMaxDepth) unit_005C(c, 60u, depth + 1u); else { c.pc = 0x00270698u; return; } if (c.pc != 0x0037AAF8u) [[unlikely]] return; }
L_0037AAF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AB08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AB20u);  if (depth < kMaxDepth) unit_005C(c, 64u, depth + 1u); else { c.pc = 0x002706F0u; return; } if (c.pc != 0x0037AB20u) [[unlikely]] return; }
L_0037AB20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AB30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AB48u);  if (depth < kMaxDepth) unit_005C(c, 66u, depth + 1u); else { c.pc = 0x00270710u; return; } if (c.pc != 0x0037AB48u) [[unlikely]] return; }
L_0037AB48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AB58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AB70u);  if (depth < kMaxDepth) unit_005C(c, 45u, depth + 1u); else { c.pc = 0x00270538u; return; } if (c.pc != 0x0037AB70u) [[unlikely]] return; }
L_0037AB70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AB80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AB98u);  if (depth < kMaxDepth) unit_005C(c, 55u, depth + 1u); else { c.pc = 0x00270638u; return; } if (c.pc != 0x0037AB98u) [[unlikely]] return; }
L_0037AB98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037ABA8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[4], c.r[4].w[0] - 31120u);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[12], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[13], ld32((c.r[29].w[0] + 72u)));
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[12].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[13].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ABE0u);  if (depth < kMaxDepth) unit_005C(c, 68u, depth + 1u); else { c.pc = 0x00270730u; return; } if (c.pc != 0x0037ABE0u) [[unlikely]] return; }
L_0037ABE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037ABF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC08u);  if (depth < kMaxDepth) unit_005C(c, 85u, depth + 1u); else { c.pc = 0x00270998u; return; } if (c.pc != 0x0037AC08u) [[unlikely]] return; }
L_0037AC08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AC18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC30u);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x002709F0u; return; } if (c.pc != 0x0037AC30u) [[unlikely]] return; }
L_0037AC30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AC40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC58u);  if (depth < kMaxDepth) unit_005C(c, 95u, depth + 1u); else { c.pc = 0x00270A98u; return; } if (c.pc != 0x0037AC58u) [[unlikely]] return; }
L_0037AC58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AC68:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 14040u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC9Cu);  if (depth < kMaxDepth) unit_009C(c, 111u, depth + 1u); else { c.pc = 0x00370B70u; return; } if (c.pc != 0x0037AC9Cu) [[unlikely]] return; }
L_0037AC9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ACBCu);  if (depth < kMaxDepth) unit_005C(c, 97u, depth + 1u); else { c.pc = 0x00270AD0u; return; } if (c.pc != 0x0037ACBCu) [[unlikely]] return; }
L_0037ACBC:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037ACD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ACF0u);  if (depth < kMaxDepth) unit_005C(c, 103u, depth + 1u); else { c.pc = 0x00270B78u; return; } if (c.pc != 0x0037ACF0u) [[unlikely]] return; }
L_0037ACF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AD00:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 14040u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AD34u);  if (depth < kMaxDepth) unit_009C(c, 111u, depth + 1u); else { c.pc = 0x00370B70u; return; } if (c.pc != 0x0037AD34u) [[unlikely]] return; }
L_0037AD34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AD54u);  if (depth < kMaxDepth) unit_005C(c, 109u, depth + 1u); else { c.pc = 0x00270C30u; return; } if (c.pc != 0x0037AD54u) [[unlikely]] return; }
L_0037AD54:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AD70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AD88u);  if (depth < kMaxDepth) unit_005C(c, 115u, depth + 1u); else { c.pc = 0x00270CD8u; return; } if (c.pc != 0x0037AD88u) [[unlikely]] return; }
L_0037AD88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AD98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ADB0u);  if (depth < kMaxDepth) unit_005C(c, 121u, depth + 1u); else { c.pc = 0x00270D90u; return; } if (c.pc != 0x0037ADB0u) [[unlikely]] return; }
L_0037ADB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037ADC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ADD8u);  if (depth < kMaxDepth) unit_005C(c, 123u, depth + 1u); else { c.pc = 0x00270DC0u; return; } if (c.pc != 0x0037ADD8u) [[unlikely]] return; }
L_0037ADD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037ADE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AE00u);  if (depth < kMaxDepth) unit_005C(c, 125u, depth + 1u); else { c.pc = 0x00270DF0u; return; } if (c.pc != 0x0037AE00u) [[unlikely]] return; }
L_0037AE00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AE10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AE28u);  if (depth < kMaxDepth) unit_005C(c, 127u, depth + 1u); else { c.pc = 0x00270E18u; return; } if (c.pc != 0x0037AE28u) [[unlikely]] return; }
L_0037AE28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AE38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AE50u);  if (depth < kMaxDepth) unit_005C(c, 130u, depth + 1u); else { c.pc = 0x00270E58u; return; } if (c.pc != 0x0037AE50u) [[unlikely]] return; }
L_0037AE50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AE60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AE78u);  if (depth < kMaxDepth) unit_005C(c, 132u, depth + 1u); else { c.pc = 0x00270E80u; return; } if (c.pc != 0x0037AE78u) [[unlikely]] return; }
L_0037AE78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AE88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AEA0u);  if (depth < kMaxDepth) unit_005C(c, 134u, depth + 1u); else { c.pc = 0x00270EA8u; return; } if (c.pc != 0x0037AEA0u) [[unlikely]] return; }
L_0037AEA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AEB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AEC8u);  if (depth < kMaxDepth) unit_005C(c, 136u, depth + 1u); else { c.pc = 0x00270ED0u; return; } if (c.pc != 0x0037AEC8u) [[unlikely]] return; }
L_0037AEC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AED8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AEF0u);  if (depth < kMaxDepth) unit_005C(c, 137u, depth + 1u); else { c.pc = 0x00270EE0u; return; } if (c.pc != 0x0037AEF0u) [[unlikely]] return; }
L_0037AEF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AF00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AF18u);  if (depth < kMaxDepth) unit_005C(c, 138u, depth + 1u); else { c.pc = 0x00270EF0u; return; } if (c.pc != 0x0037AF18u) [[unlikely]] return; }
L_0037AF18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AF28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AF40u);  if (depth < kMaxDepth) unit_005C(c, 141u, depth + 1u); else { c.pc = 0x00270FC8u; return; } if (c.pc != 0x0037AF40u) [[unlikely]] return; }
L_0037AF40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AF50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AF68u);  if (depth < kMaxDepth) unit_005C(c, 144u, depth + 1u); else { c.pc = 0x00271080u; return; } if (c.pc != 0x0037AF68u) [[unlikely]] return; }
L_0037AF68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AF78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AF90u);  if (depth < kMaxDepth) unit_005C(c, 147u, depth + 1u); else { c.pc = 0x00271138u; return; } if (c.pc != 0x0037AF90u) [[unlikely]] return; }
L_0037AF90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AFA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AFB8u);  if (depth < kMaxDepth) unit_005C(c, 149u, depth + 1u); else { c.pc = 0x00271178u; return; } if (c.pc != 0x0037AFB8u) [[unlikely]] return; }
L_0037AFB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AFC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AFE0u);  if (depth < kMaxDepth) unit_005C(c, 151u, depth + 1u); else { c.pc = 0x002711A0u; return; } if (c.pc != 0x0037AFE0u) [[unlikely]] return; }
L_0037AFE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037AFF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B008u);  if (depth < kMaxDepth) unit_005C(c, 153u, depth + 1u); else { c.pc = 0x002711C8u; return; } if (c.pc != 0x0037B008u) [[unlikely]] return; }
L_0037B008:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B018:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B030u);  if (depth < kMaxDepth) unit_005C(c, 155u, depth + 1u); else { c.pc = 0x002711F0u; return; } if (c.pc != 0x0037B030u) [[unlikely]] return; }
L_0037B030:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B058u);  if (depth < kMaxDepth) unit_005C(c, 157u, depth + 1u); else { c.pc = 0x00271240u; return; } if (c.pc != 0x0037B058u) [[unlikely]] return; }
L_0037B058:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B068:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], ld32((c.r[8].w[0] - 15672u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[10], ld32((c.r[7].w[0] - 15676u)));
    c.r[11].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[9], c.r[2].w[0] + 28304u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[10].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[8].w[0] - 15672u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[6].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] << 31);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0037B0C8; } }
    set32(c.r[2], 0u + 250u);
    st32((c.r[8].w[0] - 15672u), c.r[2].w[0]);
    c.budget -= 2;
L_0037B0C8:
    set32(c.r[2], c.r[10].w[0] - 1u);
    st32((c.r[7].w[0] - 15676u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0037B0E0; } }
    set32(c.r[2], 0u + 240u);
    st32((c.r[7].w[0] - 15676u), c.r[2].w[0]);
    c.budget -= 2;
L_0037B0E0:
    set32(c.r[3], ld32((c.r[8].w[0] - 15672u)));
    set32(c.r[2], ld32((c.r[7].w[0] - 15676u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0037B0F8; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st32((c.r[7].w[0] - 15676u), c.r[2].w[0]);
    c.budget -= 2;
L_0037B0F8:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_0037B114; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B114:
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B138:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B154u);  if (depth < kMaxDepth) unit_009E(c, 305u, depth + 1u); else { c.pc = 0x0037B068u; return; } if (c.pc != 0x0037B154u) [[unlikely]] return; }
L_0037B154:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0037B160u);  goto L_0037B164; }
L_0037B164:
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0037B180; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B184; } }
L_0037B180:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_0037B184:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B19C; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_0037B19C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B1AC; } }
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_0037B1AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037B1EC; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037B1DC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0037B1DC:
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B200; } }
L_0037B1EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B200; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0037B200:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B218:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B244u);  if (depth < kMaxDepth) unit_00A1(c, 265u, depth + 1u); else { c.pc = 0x00386818u; return; } if (c.pc != 0x0037B244u) [[unlikely]] return; }
L_0037B244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B288; } }
    c.r[4].d[0] = ld8((c.r[29].w[0] + 3u));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 5u));
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 6u));
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[7].d[0] = ld8((c.r[29].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[6].d[0] = ld8((c.r[29].w[0] + 7u));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 15;
L_0037B288:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B298u);  if (depth < kMaxDepth) unit_00DD(c, 308u, depth + 1u); else { c.pc = 0x004777E0u; return; } if (c.pc != 0x0037B298u) [[unlikely]] return; }
L_0037B298:
    c.r[18].d[0] = c.r[18].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[20], 0u + 255u);
    set32(c.r[19], c.r[2].w[0] + 28304u);
    c.budget -= 4;
L_0037B2A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B2B0u);  if (depth < kMaxDepth) unit_00DD(c, 309u, depth + 1u); else { c.pc = 0x004777F0u; return; } if (c.pc != 0x0037B2B0u) [[unlikely]] return; }
L_0037B2B0:
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B2C0u);  if (depth < kMaxDepth) unit_00DD(c, 309u, depth + 1u); else { c.pc = 0x004777F0u; return; } if (c.pc != 0x0037B2C0u) [[unlikely]] return; }
L_0037B2C0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B2CCu);  if (depth < kMaxDepth) unit_00DD(c, 309u, depth + 1u); else { c.pc = 0x004777F0u; return; } if (c.pc != 0x0037B2CCu) [[unlikely]] return; }
L_0037B2CC:
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = c.r[16].d[0] & c.r[18].d[0];
    st32((c.r[19].w[0]), c.r[16].w[0]);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037B2A8u | kUnwind; return; } goto L_0037B2A8; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B310:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[18].d[0] | 65535ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[20], 0u + 255u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B344u);  if (depth < kMaxDepth) unit_00DD(c, 308u, depth + 1u); else { c.pc = 0x004777E0u; return; } if (c.pc != 0x0037B344u) [[unlikely]] return; }
L_0037B344:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[19], c.r[2].w[0] + 28304u);
    c.budget -= 3;
L_0037B350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B358u);  if (depth < kMaxDepth) unit_00DD(c, 309u, depth + 1u); else { c.pc = 0x004777F0u; return; } if (c.pc != 0x0037B358u) [[unlikely]] return; }
L_0037B358:
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B368u);  if (depth < kMaxDepth) unit_00DD(c, 309u, depth + 1u); else { c.pc = 0x004777F0u; return; } if (c.pc != 0x0037B368u) [[unlikely]] return; }
L_0037B368:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B374u);  if (depth < kMaxDepth) unit_00DD(c, 309u, depth + 1u); else { c.pc = 0x004777F0u; return; } if (c.pc != 0x0037B374u) [[unlikely]] return; }
L_0037B374:
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = c.r[16].d[0] & c.r[18].d[0];
    st32((c.r[19].w[0]), c.r[16].w[0]);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037B350u | kUnwind; return; } goto L_0037B350; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B3B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B3C8u);  if (depth < kMaxDepth) unit_009E(c, 305u, depth + 1u); else { c.pc = 0x0037B068u; return; } if (c.pc != 0x0037B3C8u) [[unlikely]] return; }
L_0037B3C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B3D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0] + 24u), c.f[21]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.f[21] = c.f[13];
    c.f[20] = c.f[12];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0037B438; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B40Cu);  if (depth < kMaxDepth) unit_009E(c, 305u, depth + 1u); else { c.pc = 0x0037B068u; return; } if (c.pc != 0x0037B40Cu) [[unlikely]] return; }
L_0037B40C:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.f[1] = c.r[1].w[0];
    c.f[2] = fp::sub(c.f[21], c.f[20]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B484; } }
L_0037B438:
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0037B480; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B454u);  if (depth < kMaxDepth) unit_009E(c, 305u, depth + 1u); else { c.pc = 0x0037B068u; return; } if (c.pc != 0x0037B454u) [[unlikely]] return; }
L_0037B454:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.f[1] = c.r[1].w[0];
    c.f[2] = fp::sub(c.f[20], c.f[21]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[21], c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B484; } }
L_0037B480:
    c.f[0] = c.f[20];
    c.budget -= 1;
L_0037B484:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 24u));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B4A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[6].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B4C4u);  if (depth < kMaxDepth) unit_009E(c, 329u, depth + 1u); else { c.pc = 0x0037B4E0u; return; } if (c.pc != 0x0037B4C4u) [[unlikely]] return; }
L_0037B4C4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B4E0:
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B4F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B508u);  if (depth < kMaxDepth) unit_005C(c, 175u, depth + 1u); else { c.pc = 0x00271478u; return; } if (c.pc != 0x0037B508u) [[unlikely]] return; }
L_0037B508:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B518:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B530u);  if (depth < kMaxDepth) unit_005C(c, 184u, depth + 1u); else { c.pc = 0x00271578u; return; } if (c.pc != 0x0037B530u) [[unlikely]] return; }
L_0037B530:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B540:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B558u);  if (depth < kMaxDepth) unit_005C(c, 188u, depth + 1u); else { c.pc = 0x002715B0u; return; } if (c.pc != 0x0037B558u) [[unlikely]] return; }
L_0037B558:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B568:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B580u);  if (depth < kMaxDepth) unit_005C(c, 191u, depth + 1u); else { c.pc = 0x002715F8u; return; } if (c.pc != 0x0037B580u) [[unlikely]] return; }
L_0037B580:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B5A8u);  if (depth < kMaxDepth) unit_005C(c, 166u, depth + 1u); else { c.pc = 0x00271350u; return; } if (c.pc != 0x0037B5A8u) [[unlikely]] return; }
L_0037B5A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B5B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B5D8u);  if (depth < kMaxDepth) unit_005C(c, 37u, depth + 1u); else { c.pc = 0x00270418u; return; } if (c.pc != 0x0037B5D8u) [[unlikely]] return; }
L_0037B5D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B5ECu);  if (depth < kMaxDepth) unit_005C(c, 192u, depth + 1u); else { c.pc = 0x00271628u; return; } if (c.pc != 0x0037B5ECu) [[unlikely]] return; }
L_0037B5EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B618u);  if (depth < kMaxDepth) unit_005C(c, 194u, depth + 1u); else { c.pc = 0x002716B8u; return; } if (c.pc != 0x0037B618u) [[unlikely]] return; }
L_0037B618:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B628:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B640u);  if (depth < kMaxDepth) unit_005C(c, 195u, depth + 1u); else { c.pc = 0x002716C8u; return; } if (c.pc != 0x0037B640u) [[unlikely]] return; }
L_0037B640:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B650:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B668u);  if (depth < kMaxDepth) unit_005C(c, 198u, depth + 1u); else { c.pc = 0x00271720u; return; } if (c.pc != 0x0037B668u) [[unlikely]] return; }
L_0037B668:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B678:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B690u);  if (depth < kMaxDepth) unit_005C(c, 200u, depth + 1u); else { c.pc = 0x00271748u; return; } if (c.pc != 0x0037B690u) [[unlikely]] return; }
L_0037B690:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B6A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B6B8u);  if (depth < kMaxDepth) unit_005C(c, 208u, depth + 1u); else { c.pc = 0x002717F0u; return; } if (c.pc != 0x0037B6B8u) [[unlikely]] return; }
L_0037B6B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B6C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B6E0u);  if (depth < kMaxDepth) unit_005C(c, 218u, depth + 1u); else { c.pc = 0x00271928u; return; } if (c.pc != 0x0037B6E0u) [[unlikely]] return; }
L_0037B6E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B6F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B708u);  if (depth < kMaxDepth) unit_005C(c, 220u, depth + 1u); else { c.pc = 0x00271978u; return; } if (c.pc != 0x0037B708u) [[unlikely]] return; }
L_0037B708:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B718:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B730u);  if (depth < kMaxDepth) unit_005C(c, 221u, depth + 1u); else { c.pc = 0x00271988u; return; } if (c.pc != 0x0037B730u) [[unlikely]] return; }
L_0037B730:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B758u);  if (depth < kMaxDepth) unit_005C(c, 229u, depth + 1u); else { c.pc = 0x00271B08u; return; } if (c.pc != 0x0037B758u) [[unlikely]] return; }
L_0037B758:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B768:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B780u);  if (depth < kMaxDepth) unit_005C(c, 237u, depth + 1u); else { c.pc = 0x00271C90u; return; } if (c.pc != 0x0037B780u) [[unlikely]] return; }
L_0037B780:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B7A8u);  if (depth < kMaxDepth) unit_005C(c, 244u, depth + 1u); else { c.pc = 0x00271EF0u; return; } if (c.pc != 0x0037B7A8u) [[unlikely]] return; }
L_0037B7A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B7B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B7D0u);  if (depth < kMaxDepth) unit_005C(c, 247u, depth + 1u); else { c.pc = 0x00271F30u; return; } if (c.pc != 0x0037B7D0u) [[unlikely]] return; }
L_0037B7D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B7E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B7F8u);  if (depth < kMaxDepth) unit_005C(c, 250u, depth + 1u); else { c.pc = 0x00271F78u; return; } if (c.pc != 0x0037B7F8u) [[unlikely]] return; }
L_0037B7F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B808:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B820u);  if (depth < kMaxDepth) unit_005C(c, 254u, depth + 1u); else { c.pc = 0x00271FF8u; return; } if (c.pc != 0x0037B820u) [[unlikely]] return; }
L_0037B820:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B830:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B848u);  if (depth < kMaxDepth) unit_005C(c, 261u, depth + 1u); else { c.pc = 0x00272098u; return; } if (c.pc != 0x0037B848u) [[unlikely]] return; }
L_0037B848:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B858:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B870u);  if (depth < kMaxDepth) unit_005C(c, 254u, depth + 1u); else { c.pc = 0x00271FF8u; return; } if (c.pc != 0x0037B870u) [[unlikely]] return; }
L_0037B870:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B888:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B8A0u);  if (depth < kMaxDepth) unit_005C(c, 263u, depth + 1u); else { c.pc = 0x002720C8u; return; } if (c.pc != 0x0037B8A0u) [[unlikely]] return; }
L_0037B8A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B8B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B8C8u);  if (depth < kMaxDepth) unit_005C(c, 264u, depth + 1u); else { c.pc = 0x002720D0u; return; } if (c.pc != 0x0037B8C8u) [[unlikely]] return; }
L_0037B8C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B8D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0037B970; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037B960; } }
    set32(c.r[4], 0u + 9712u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B904u);  if (depth < kMaxDepth) unit_008E(c, 253u, depth + 1u); else { c.pc = 0x0033AD30u; return; } if (c.pc != 0x0037B904u) [[unlikely]] return; }
L_0037B904:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0037B908:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B914u);  if (depth < kMaxDepth) unit_009E(c, 432u, depth + 1u); else { c.pc = 0x0037BE28u; return; } if (c.pc != 0x0037B914u) [[unlikely]] return; }
L_0037B914:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st32((c.r[3].w[0] + 29336u), c.r[2].w[0]);
    c.budget -= 2;
L_0037B91C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B92C; } }
L_0037B924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B92Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0037B92Cu) [[unlikely]] return; }
L_0037B92C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[4].d[0] = c.r[4].d[0] | 32639ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B93Cu);  if (depth < kMaxDepth) unit_0044(c, 241u, depth + 1u); else { c.pc = 0x002135A0u; return; } if (c.pc != 0x0037B93Cu) [[unlikely]] return; }
L_0037B93C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B970; } }
L_0037B944:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B950u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x0037B950u) [[unlikely]] return; }
L_0037B950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037B924u | kUnwind; return; } goto L_0037B924; } }
L_0037B958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B960u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0037B960u) [[unlikely]] return; }
L_0037B960:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 29336u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B970u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x0037B970u) [[unlikely]] return; }
L_0037B970:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B988:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 9712u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B9A8u);  if (depth < kMaxDepth) unit_008E(c, 253u, depth + 1u); else { c.pc = 0x0033AD30u; return; } if (c.pc != 0x0037B9A8u) [[unlikely]] return; }
L_0037B9A8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0037B9AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B9B8u);  if (depth < kMaxDepth) unit_009E(c, 432u, depth + 1u); else { c.pc = 0x0037BE28u; return; } if (c.pc != 0x0037B9B8u) [[unlikely]] return; }
L_0037B9B8:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0037B9BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B9CC; } }
L_0037B9C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B9CCu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0037B9CCu) [[unlikely]] return; }
L_0037B9CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[4].d[0] = c.r[4].d[0] | 32639ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B9DCu);  if (depth < kMaxDepth) unit_0044(c, 241u, depth + 1u); else { c.pc = 0x002135A0u; return; } if (c.pc != 0x0037B9DCu) [[unlikely]] return; }
L_0037B9DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037BA04; } }
L_0037B9E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B9F4u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x0037B9F4u) [[unlikely]] return; }
L_0037B9F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037B9C4u | kUnwind; return; } goto L_0037B9C4; } }
L_0037B9FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BA04u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0037BA04u) [[unlikely]] return; }
L_0037BA04:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BA20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BA44u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x0037BA44u) [[unlikely]] return; }
L_0037BA44:
    c.r[16].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0037BA5C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BA5Cu);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x0037BA5Cu) [[unlikely]] return; }
L_0037BA5C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BA78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BA8Cu);  if (depth < kMaxDepth) unit_009E(c, 435u, depth + 1u); else { c.pc = 0x0037BE90u; return; } if (c.pc != 0x0037BA8Cu) [[unlikely]] return; }
L_0037BA8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BAA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BAB4u);  if (depth < kMaxDepth) unit_009E(c, 441u, depth + 1u); else { c.pc = 0x0037BFA8u; return; } if (c.pc != 0x0037BAB4u) [[unlikely]] return; }
L_0037BAB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BAC8:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0037BADC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BADC:
    c.r[2].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037BB00; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BB00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BB10:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0037BB3C; } }
    c.r[2].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037BB3C; } }
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037BB48; } }
L_0037BB3C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BB48:
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037BB5C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037BB5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BB68:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0037BB94; } }
    c.r[2].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037BB94; } }
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037BBA0; } }
L_0037BB94:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BBA0:
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037BBB4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037BBB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BBC0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0037BBD0; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 1;
L_0037BBD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BBD8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 16088u)));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037BC40; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BC14u);  if (depth < kMaxDepth) unit_009E(c, 441u, depth + 1u); else { c.pc = 0x0037BFA8u; return; } if (c.pc != 0x0037BC14u) [[unlikely]] return; }
L_0037BC14:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0037BC40; } }
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BC34u);  if (depth < kMaxDepth) unit_009E(c, 438u, depth + 1u); else { c.pc = 0x0037BEF0u; return; } if (c.pc != 0x0037BC34u) [[unlikely]] return; }
L_0037BC34:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037BC44; } }
L_0037BC40:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037BC44:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BC60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BC94u);  if (depth < kMaxDepth) unit_009E(c, 441u, depth + 1u); else { c.pc = 0x0037BFA8u; return; } if (c.pc != 0x0037BC94u) [[unlikely]] return; }
L_0037BC94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037BCA8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037BCD8; } }
L_0037BCA8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0037BCB4; } }
    st32((c.r[2].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 1;
L_0037BCB4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0037BCC0; } }
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_0037BCC0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0037BCCC; } }
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 1;
L_0037BCCC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0037BCD8; } }
    st32((c.r[2].w[0] + 8u), c.r[19].w[0]);
    c.budget -= 1;
L_0037BCD8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BCF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BD14u);  if (depth < kMaxDepth) unit_009E(c, 441u, depth + 1u); else { c.pc = 0x0037BFA8u; return; } if (c.pc != 0x0037BD14u) [[unlikely]] return; }
L_0037BD14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037BD20; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_0037BD20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BD38:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0037BD5C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037BD7C; } }
L_0037BD5C:
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[5].w[0] + 104u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BD6Cu);  if (depth < kMaxDepth) unit_009E(c, 441u, depth + 1u); else { c.pc = 0x0037BFA8u; return; } if (c.pc != 0x0037BD6Cu) [[unlikely]] return; }
L_0037BD6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037BD78; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_0037BD78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0037BD7C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BD90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BDACu);  if (depth < kMaxDepth) unit_009E(c, 441u, depth + 1u); else { c.pc = 0x0037BFA8u; return; } if (c.pc != 0x0037BDACu) [[unlikely]] return; }
L_0037BDAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037BDB8; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_0037BDB8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BDD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0037BDF4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037BE14; } }
L_0037BDF4:
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[5].w[0] + 104u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BE04u);  if (depth < kMaxDepth) unit_009E(c, 441u, depth + 1u); else { c.pc = 0x0037BFA8u; return; } if (c.pc != 0x0037BE04u) [[unlikely]] return; }
L_0037BE04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037BE10; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_0037BE10:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0037BE14:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BE28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 8u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 8;
L_0037BE48:
    st32((c.r[2].w[0] + 72u), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037BE48u | kUnwind; return; } goto L_0037BE48; } }
    set32(c.r[4], c.r[16].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 9600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BE78u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0037BE78u) [[unlikely]] return; }
L_0037BE78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BE90:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], c.r[4].w[0] + 4u);
    c.budget -= 4;
L_0037BEA0:
    st32((c.r[2].w[0] + 72u), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037BEA0u | kUnwind; return; } goto L_0037BEA0; } }
    set32(c.r[5], c.r[4].w[0] + 9732u);
    set32(c.r[3], c.r[4].w[0] + 132u);
    set32(c.r[4], c.r[4].w[0] + 128u);
    c.budget -= 3;
L_0037BEC8:
    st32((c.r[4].w[0]), 0u);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 24u);
    set32(c.r[3], c.r[3].w[0] + 24u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037BEC8u | kUnwind; return; } goto L_0037BEC8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BEF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 16088u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037BF20; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0037BF20; } }
    c.r[2].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037BF2C; } }
L_0037BF20:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BF2C:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037BF20u | kUnwind; return; } goto L_0037BF20; } }
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + 76u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037BF54; } }
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_0037BF54:
    set32(c.r[2], c.r[7].w[0] + 40u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037BF6C; } }
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 1;
L_0037BF6C:
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[5], c.r[7].w[0] + 4u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BFA8:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0037BFBC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BFBC:
    c.r[2].d[0] = c.r[5].sd[0] < 400ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037BFE0; } }
    set32(c.r[2], 0u + 24u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 112u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BFE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BFF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { [[clang::musttail]] return unit_009F(c, 3u, depth); } }
    [[clang::musttail]] return unit_009F(c, 2u, depth);
}

}
