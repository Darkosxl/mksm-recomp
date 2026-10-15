#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008D[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 12, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 34, 0, 0, 0, 35, 36, 0, 37, 0, 38, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 45,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 54, 0, 0, 0, 55, 56, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 62,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 77, 78, 0, 79, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 84, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 90, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 99, 100, 0, 101, 0,
    102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122,
    0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0,
    0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 190, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 198, 0, 199, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0,
    209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247,
    0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0,
    0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259,
    0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0,
    0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0,
    286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 290, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0,
};

void unit_008D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00334000;
    case 2u: goto L_0033400C;
    case 3u: goto L_00334038;
    case 4u: goto L_00334040;
    case 5u: goto L_00334068;
    case 6u: goto L_00334070;
    case 7u: goto L_0033409C;
    case 8u: goto L_003340A4;
    case 9u: goto L_003340D0;
    case 10u: goto L_003340D8;
    case 11u: goto L_00334104;
    case 12u: goto L_0033410C;
    case 13u: goto L_0033411C;
    case 14u: goto L_00334124;
    case 15u: goto L_00334150;
    case 16u: goto L_00334158;
    case 17u: goto L_00334190;
    case 18u: goto L_00334198;
    case 19u: goto L_003341D0;
    case 20u: goto L_003341D8;
    case 21u: goto L_00334204;
    case 22u: goto L_0033420C;
    case 23u: goto L_00334238;
    case 24u: goto L_00334240;
    case 25u: goto L_0033426C;
    case 26u: goto L_00334274;
    case 27u: goto L_003342A0;
    case 28u: goto L_003342A8;
    case 29u: goto L_003342B0;
    case 30u: goto L_003342E8;
    case 31u: goto L_0033434C;
    case 32u: goto L_00334360;
    case 33u: goto L_003343C4;
    case 34u: goto L_003343C8;
    case 35u: goto L_003343D8;
    case 36u: goto L_003343DC;
    case 37u: goto L_003343E4;
    case 38u: goto L_003343EC;
    case 39u: goto L_00334420;
    case 40u: goto L_00334454;
    case 41u: goto L_003344B8;
    case 42u: goto L_003344C0;
    case 43u: goto L_003344EC;
    case 44u: goto L_003344F4;
    case 45u: goto L_003344FC;
    case 46u: goto L_00334520;
    case 47u: goto L_0033460C;
    case 48u: goto L_0033463C;
    case 49u: goto L_00334650;
    case 50u: goto L_00334664;
    case 51u: goto L_00334674;
    case 52u: goto L_003346BC;
    case 53u: goto L_00334700;
    case 54u: goto L_0033470C;
    case 55u: goto L_0033471C;
    case 56u: goto L_00334720;
    case 57u: goto L_00334728;
    case 58u: goto L_00334730;
    case 59u: goto L_00334758;
    case 60u: goto L_00334768;
    case 61u: goto L_00334774;
    case 62u: goto L_0033477C;
    case 63u: goto L_003347A8;
    case 64u: goto L_003347B0;
    case 65u: goto L_003347C0;
    case 66u: goto L_003347C8;
    case 67u: goto L_003347D0;
    case 68u: goto L_003347F8;
    case 69u: goto L_00334848;
    case 70u: goto L_00334868;
    case 71u: goto L_00334880;
    case 72u: goto L_003348FC;
    case 73u: goto L_00334910;
    case 74u: goto L_00334968;
    case 75u: goto L_0033499C;
    case 76u: goto L_003349A8;
    case 77u: goto L_003349BC;
    case 78u: goto L_003349C0;
    case 79u: goto L_003349C8;
    case 80u: goto L_003349D0;
    case 81u: goto L_003349E8;
    case 82u: goto L_00334A1C;
    case 83u: goto L_00334A58;
    case 84u: goto L_00334A8C;
    case 85u: goto L_00334A98;
    case 86u: goto L_00334AA0;
    case 87u: goto L_00334AAC;
    case 88u: goto L_00334AD4;
    case 89u: goto L_00334ADC;
    case 90u: goto L_00334B14;
    case 91u: goto L_00334B1C;
    case 92u: goto L_00334B24;
    case 93u: goto L_00334B50;
    case 94u: goto L_00334BAC;
    case 95u: goto L_00334BC0;
    case 96u: goto L_00334C18;
    case 97u: goto L_00334C4C;
    case 98u: goto L_00334C58;
    case 99u: goto L_00334C6C;
    case 100u: goto L_00334C70;
    case 101u: goto L_00334C78;
    case 102u: goto L_00334C80;
    case 103u: goto L_00334C98;
    case 104u: goto L_00334CCC;
    case 105u: goto L_00334D08;
    case 106u: goto L_00334D3C;
    case 107u: goto L_00334D48;
    case 108u: goto L_00334D50;
    case 109u: goto L_00334D6C;
    case 110u: goto L_00334D74;
    case 111u: goto L_00334D9C;
    case 112u: goto L_00334DA4;
    case 113u: goto L_00334DDC;
    case 114u: goto L_00334DE4;
    case 115u: goto L_00334DEC;
    case 116u: goto L_00334E18;
    case 117u: goto L_00334E98;
    case 118u: goto L_00334EF0;
    case 119u: goto L_00334F68;
    case 120u: goto L_00334FC8;
    case 121u: goto L_00334FD8;
    case 122u: goto L_00334FFC;
    case 123u: goto L_00335014;
    case 124u: goto L_00335028;
    case 125u: goto L_00335078;
    case 126u: goto L_00335088;
    case 127u: goto L_0033509C;
    case 128u: goto L_003350AC;
    case 129u: goto L_003350C8;
    case 130u: goto L_00335118;
    case 131u: goto L_00335130;
    case 132u: goto L_00335148;
    case 133u: goto L_00335160;
    case 134u: goto L_003351A0;
    case 135u: goto L_003351B4;
    case 136u: goto L_003351C8;
    case 137u: goto L_003351DC;
    case 138u: goto L_00335238;
    case 139u: goto L_00335250;
    case 140u: goto L_00335268;
    case 141u: goto L_00335280;
    case 142u: goto L_003352C0;
    case 143u: goto L_003352D8;
    case 144u: goto L_003352F0;
    case 145u: goto L_00335308;
    case 146u: goto L_00335348;
    case 147u: goto L_0033535C;
    case 148u: goto L_0033536C;
    case 149u: goto L_00335398;
    case 150u: goto L_003353C4;
    case 151u: goto L_003353F0;
    case 152u: goto L_00335468;
    case 153u: goto L_00335530;
    case 154u: goto L_00335598;
    case 155u: goto L_003355A8;
    case 156u: goto L_003355B4;
    case 157u: goto L_003355C0;
    case 158u: goto L_00335608;
    case 159u: goto L_00335644;
    case 160u: goto L_00335658;
    case 161u: goto L_00335680;
    case 162u: goto L_003356BC;
    case 163u: goto L_003356D0;
    case 164u: goto L_00335734;
    case 165u: goto L_00335758;
    case 166u: goto L_0033577C;
    case 167u: goto L_003357B4;
    case 168u: goto L_003357D4;
    case 169u: goto L_0033581C;
    case 170u: goto L_00335840;
    case 171u: goto L_00335864;
    case 172u: goto L_003358CC;
    case 173u: goto L_003358DC;
    case 174u: goto L_003358E8;
    case 175u: goto L_00335900;
    case 176u: goto L_00335954;
    case 177u: goto L_003359A8;
    case 178u: goto L_003359C0;
    case 179u: goto L_00335A00;
    case 180u: goto L_00335A14;
    case 181u: goto L_00335A48;
    case 182u: goto L_00335B80;
    case 183u: goto L_00335BE4;
    case 184u: goto L_00335C98;
    case 185u: goto L_00335DA0;
    case 186u: goto L_00335DB8;
    case 187u: goto L_00335E8C;
    case 188u: goto L_00335E94;
    case 189u: goto L_00335EA4;
    case 190u: goto L_00335EAC;
    case 191u: goto L_00335EB4;
    case 192u: goto L_00335EC4;
    case 193u: goto L_00335F30;
    case 194u: goto L_0033603C;
    case 195u: goto L_00336054;
    case 196u: goto L_00336214;
    case 197u: goto L_0033621C;
    case 198u: goto L_0033622C;
    case 199u: goto L_00336234;
    case 200u: goto L_0033623C;
    case 201u: goto L_0033624C;
    case 202u: goto L_003362A8;
    case 203u: goto L_0033630C;
    case 204u: goto L_00336344;
    case 205u: goto L_003363BC;
    case 206u: goto L_003363D4;
    case 207u: goto L_003363E0;
    case 208u: goto L_003363F8;
    case 209u: goto L_00336400;
    case 210u: goto L_0033642C;
    case 211u: goto L_00336434;
    case 212u: goto L_00336460;
    case 213u: goto L_00336468;
    case 214u: goto L_00336470;
    case 215u: goto L_003364A8;
    case 216u: goto L_00336570;
    case 217u: goto L_003365C4;
    case 218u: goto L_003365F0;
    case 219u: goto L_0033661C;
    case 220u: goto L_00336680;
    case 221u: goto L_003366D8;
    case 222u: goto L_00336704;
    case 223u: goto L_00336730;
    case 224u: goto L_003367B0;
    case 225u: goto L_00336818;
    case 226u: goto L_00336854;
    case 227u: goto L_00336880;
    case 228u: goto L_00336898;
    case 229u: goto L_003368A8;
    case 230u: goto L_003368C0;
    case 231u: goto L_003368F8;
    case 232u: goto L_00336924;
    case 233u: goto L_0033693C;
    case 234u: goto L_0033694C;
    case 235u: goto L_00336964;
    case 236u: goto L_00336994;
    case 237u: goto L_00336A64;
    case 238u: goto L_00336A8C;
    case 239u: goto L_00336AA4;
    case 240u: goto L_00336AB4;
    case 241u: goto L_00336ADC;
    case 242u: goto L_00336B48;
    case 243u: goto L_00336B64;
    case 244u: goto L_00336B80;
    case 245u: goto L_00336BA0;
    case 246u: goto L_00336BE8;
    case 247u: goto L_00336BFC;
    case 248u: goto L_00336C1C;
    case 249u: goto L_00336C3C;
    case 250u: goto L_00336C58;
    case 251u: goto L_00336C78;
    case 252u: goto L_00336C98;
    case 253u: goto L_00336CA8;
    case 254u: goto L_00336CC8;
    case 255u: goto L_00336CE0;
    case 256u: goto L_00336D14;
    case 257u: goto L_00336D34;
    case 258u: goto L_00336D58;
    case 259u: goto L_00336D7C;
    case 260u: goto L_00336D9C;
    case 261u: goto L_00336DBC;
    case 262u: goto L_00336DEC;
    case 263u: goto L_00336E48;
    case 264u: goto L_00336EA8;
    case 265u: goto L_00336F54;
    case 266u: goto L_00336F6C;
    case 267u: goto L_00336FE8;
    case 268u: goto L_0033708C;
    case 269u: goto L_0033709C;
    case 270u: goto L_003370C4;
    case 271u: goto L_003370DC;
    case 272u: goto L_00337108;
    case 273u: goto L_00337120;
    case 274u: goto L_0033714C;
    case 275u: goto L_00337178;
    case 276u: goto L_00337184;
    case 277u: goto L_003371A0;
    case 278u: goto L_00337258;
    case 279u: goto L_003372CC;
    case 280u: goto L_003372E8;
    case 281u: goto L_003372F4;
    case 282u: goto L_00337340;
    case 283u: goto L_003373E0;
    case 284u: goto L_00337448;
    case 285u: goto L_00337474;
    case 286u: goto L_00337480;
    case 287u: goto L_003374A0;
    case 288u: goto L_00337530;
    case 289u: goto L_00337578;
    case 290u: goto L_00337604;
    case 291u: goto L_00337610;
    case 292u: goto L_00337620;
    case 293u: goto L_003376A0;
    case 294u: goto L_003376C0;
    case 295u: goto L_003376E0;
    case 296u: goto L_003376F8;
    case 297u: goto L_00337788;
    case 298u: goto L_003377A8;
    case 299u: goto L_003377C8;
    case 300u: goto L_003377E0;
    case 301u: goto L_00337870;
    case 302u: goto L_00337880;
    case 303u: goto L_003378A4;
    case 304u: goto L_003378C4;
    case 305u: goto L_003378F4;
    case 306u: goto L_0033793C;
    case 307u: goto L_0033795C;
    case 308u: goto L_003379AC;
    case 309u: goto L_003379CC;
    case 310u: goto L_003379EC;
    case 311u: goto L_00337A10;
    case 312u: goto L_00337A24;
    case 313u: goto L_00337A44;
    case 314u: goto L_00337A64;
    case 315u: goto L_00337A90;
    case 316u: goto L_00337AB0;
    case 317u: goto L_00337B00;
    case 318u: goto L_00337B10;
    case 319u: goto L_00337B30;
    case 320u: goto L_00337B54;
    case 321u: goto L_00337B60;
    case 322u: goto L_00337B80;
    case 323u: goto L_00337BA0;
    case 324u: goto L_00337BB8;
    case 325u: goto L_00337BE8;
    case 326u: goto L_00337C2C;
    case 327u: goto L_00337C84;
    case 328u: goto L_00337CAC;
    case 329u: goto L_00337CBC;
    case 330u: goto L_00337CF8;
    case 331u: goto L_00337D64;
    case 332u: goto L_00337E14;
    case 333u: goto L_00337E28;
    case 334u: goto L_00337E44;
    case 335u: goto L_00337E78;
    case 336u: goto L_00337EA8;
    case 337u: goto L_00337F34;
    case 338u: goto L_00337F44;
    case 339u: goto L_00337F68;
    case 340u: goto L_00337F7C;
    case 341u: goto L_00337FD0;
    case 342u: goto L_00337FF0;
    default: bad_entry(c, 0x00334000u); return;
    }
L_00334000:
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00332E9Cu | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 215u, depth); } }
L_0033400C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 30u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334038u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334038u) [[unlikely]] return; }
L_00334038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00332F3Cu | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 221u, depth); } }
L_00334040:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 7856u);
    set32(c.r[7], c.r[7].w[0] - 8192u);
    set32(c.r[8], 0u + 353u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334068u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x00334068u) [[unlikely]] return; }
L_00334068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003330F4u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 232u, depth); } }
L_00334070:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 30u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033409Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033409Cu) [[unlikely]] return; }
L_0033409C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033317Cu | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 240u, depth); } }
L_003340A4:
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
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003340D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003340D0u) [[unlikely]] return; }
L_003340D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003331DCu | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 246u, depth); } }
L_003340D8:
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
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334104u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334104u) [[unlikely]] return; }
L_00334104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00333404u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 257u, depth); } }
L_0033410C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033411Cu);  if (depth < kMaxDepth) unit_008B(c, 337u, depth + 1u); else { c.pc = 0x0032FA68u; return; } if (c.pc != 0x0033411Cu) [[unlikely]] return; }
L_0033411C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00333540u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 265u, depth); } }
L_00334124:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], 0u + 30u);
    set32(c.r[8], ld32((c.r[5].w[0] + 8208u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334150u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334150u) [[unlikely]] return; }
L_00334150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003338C4u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 277u, depth); } }
L_00334158:
    set32(c.r[6], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003338DCu | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 280u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334190u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334190u) [[unlikely]] return; }
L_00334190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003338DCu | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 280u, depth); } }
L_00334198:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00333924u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 283u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003341D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003341D0u) [[unlikely]] return; }
L_003341D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00333924u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 283u, depth); } }
L_003341D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 30u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334204u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334204u) [[unlikely]] return; }
L_00334204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003339D0u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 290u, depth); } }
L_0033420C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], 0u + 80u);
    set32(c.r[7], 0u + 30u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334238u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334238u) [[unlikely]] return; }
L_00334238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00333A20u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 296u, depth); } }
L_00334240:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 30u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033426Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033426Cu) [[unlikely]] return; }
L_0033426C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00333B58u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 304u, depth); } }
L_00334274:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], 0u + 80u);
    set32(c.r[7], 0u + 30u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003342A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003342A0u) [[unlikely]] return; }
L_003342A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00333BA8u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 310u, depth); } }
L_003342A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003342B0u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x003342B0u) [[unlikely]] return; }
L_003342B0:
    ld128((c.r[29].w[0] + 528u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 512u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 384u));
    c.f[20] = ld32((c.r[29].w[0] + 544u));
    set32(c.r[29], c.r[29].w[0] + 560u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003342E8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    ld128((c.r[4].w[0] + 480u) & ~15u, c.r[3]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    ld128((c.r[4].w[0] + 496u) & ~15u, c.r[6]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[6]);
    ld128((c.r[4].w[0] + 512u) & ~15u, c.r[7]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.r[7]);
    ld128((c.r[4].w[0] + 528u) & ~15u, c.r[8]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.r[8]);
    set32(c.r[9], ld32((c.r[4].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[9].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033434C; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[6]);
    st128((c.r[29].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[9].w[0] + 480u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[7]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[8]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033434Cu);  if (depth < kMaxDepth) unit_00C2(c, 191u, depth + 1u); else { c.pc = 0x0040A620u; return; } if (c.pc != 0x0033434Cu) [[unlikely]] return; }
L_0033434C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00334360:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00334490; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], 0u + 80u);
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], 0u + 30u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003343C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003343C4u) [[unlikely]] return; }
L_003343C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003343C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 400u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003343D8u);  if (depth < kMaxDepth) unit_00AA(c, 135u, depth + 1u); else { c.pc = 0x003A8F58u; return; } if (c.pc != 0x003343D8u) [[unlikely]] return; }
L_003343D8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003343DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003343EC; } }
L_003343E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003343ECu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x003343ECu) [[unlikely]] return; }
L_003343EC:
    ld128((c.r[17].w[0] + 480u) & ~15u, c.r[5]);
    set32(c.r[20], c.r[29].w[0] + 128u);
    ld128((c.r[17].w[0] + 496u) & ~15u, c.r[2]);
    ld128((c.r[17].w[0] + 512u) & ~15u, c.r[3]);
    ld128((c.r[17].w[0] + 528u) & ~15u, c.r[4]);
    set32(c.r[16], ld32((c.r[17].w[0] + 420u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 4u)));
    st128((c.r[29].w[0]) & ~15u, c.r[5]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[4]);
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == c.r[6].d[0];  if (t) { goto L_00334464; } }
L_00334420:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[16].w[0] + 480u);
    ld128((c.r[29].w[0]) & ~15u, c.r[8]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[7]);
    set32(c.r[6], c.r[29].w[0] + 64u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[8]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[7]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[3]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334454u);  if (depth < kMaxDepth) unit_00C2(c, 191u, depth + 1u); else { c.pc = 0x0040A620u; return; } if (c.pc != 0x00334454u) [[unlikely]] return; }
L_00334454:
    set32(c.r[16], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00334420u | kUnwind; return; } goto L_00334420; } }
L_00334464:
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 16u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[18].w[0] + 32u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[18].w[0] + 64u) & ~15u, c.r[3]);
    st32((c.r[29].w[0] + 128u), c.r[18].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033449C; } }
L_00334490:
    set32(c.r[2], ld32((c.r[17].w[0] + 400u)));
    set32(c.r[20], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 3;
L_0033449C:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003344B8u);  if (depth < kMaxDepth) unit_008E(c, 180u, depth + 1u); else { c.pc = 0x0033A2D0u; return; } if (c.pc != 0x003344B8u) [[unlikely]] return; }
L_003344B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003344FC; } }
L_003344C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], 0u + 80u);
    set32(c.r[7], 0u + 30u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003344ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003344ECu) [[unlikely]] return; }
L_003344EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003343E4u | kUnwind; return; } goto L_003343E4; } }
L_003344F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003344FCu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x003344FCu) [[unlikely]] return; }
L_003344FC:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00334520:
    set32(c.r[29], c.r[29].w[0] - 368u);
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[7].d[0] = 0ull | 65535ull;
    st32((c.r[29].w[0] + 352u), c.f[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    set32(c.r[17], ld32((c.r[4].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.r[18].d[0] = c.r[18].d[0] & 1ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[1]);
    st8((c.r[29].w[0] + 28u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st16((c.r[29].w[0] + 30u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    st32((c.r[29].w[0] + 168u), c.f[3]);
    st32((c.r[29].w[0] + 172u), c.f[1]);
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st8((c.r[29].w[0] + 181u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    st8((c.r[29].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 60u), c.f[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 164u), 0u);
    st8((c.r[29].w[0] + 180u), static_cast<std::uint8_t>(0u));
    c.budget -= 59;
L_0033460C:
    set32(c.r[16], c.r[29].w[0] + 192u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.vu0.vf[1]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.vu0.vf[1]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    st32((c.r[29].w[0] + 212u), c.f[20]);
    st32((c.r[29].w[0] + 232u), c.f[20]);
    c.f[12] = ld32((c.r[17].w[0] + 28u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033463Cu);  if (depth < kMaxDepth) unit_00C2(c, 161u, depth + 1u); else { c.pc = 0x00409DC8u; return; } if (c.pc != 0x0033463Cu) [[unlikely]] return; }
L_0033463C:
    c.f[12] = ld32((c.r[17].w[0] + 36u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334650u);  if (depth < kMaxDepth) unit_00C2(c, 161u, depth + 1u); else { c.pc = 0x00409DC8u; return; } if (c.pc != 0x00334650u) [[unlikely]] return; }
L_00334650:
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334664u);  if (depth < kMaxDepth) unit_00C2(c, 161u, depth + 1u); else { c.pc = 0x00409DC8u; return; } if (c.pc != 0x00334664u) [[unlikely]] return; }
L_00334664:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334674u);  if (depth < kMaxDepth) unit_00C2(c, 177u, depth + 1u); else { c.pc = 0x0040A1E0u; return; } if (c.pc != 0x00334674u) [[unlikely]] return; }
L_00334674:
    c.f[2] = ld32((c.r[17].w[0] + 16u));
    c.f[12] = c.f[20];
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[29].w[0] + 240u), c.f[2]);
    st32((c.r[29].w[0] + 244u), c.f[0]);
    st32((c.r[29].w[0] + 248u), c.f[1]);
    st32((c.r[29].w[0] + 252u), 0u);
    st32((c.r[29].w[0] + 8u), c.r[19].w[0]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    c.budget -= 13;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_003346AC; } }
    c.f[12] = ld32((c.r[17].w[0]));
    c.budget -= 1;
L_003346AC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003346BCu);  if (depth < kMaxDepth) unit_00B6(c, 29u, depth + 1u); else { c.pc = 0x003D86C0u; return; } if (c.pc != 0x003346BCu) [[unlikely]] return; }
L_003346BC:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003346CC; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_003346CC:
    st8((c.r[29].w[0] + 180u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[5], 0u + 160u);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    set32(c.r[6], 0u + 36u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334700u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334700u) [[unlikely]] return; }
L_00334700:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 160u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0033470C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033471Cu);  if (depth < kMaxDepth) unit_00A2(c, 104u, depth + 1u); else { c.pc = 0x003891A0u; return; } if (c.pc != 0x0033471Cu) [[unlikely]] return; }
L_0033471C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00334720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334730; } }
L_00334728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334730u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00334730u) [[unlikely]] return; }
L_00334730:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    st32((c.r[3].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[2].w[0] + 24u), c.f[1]);
    c.budget -= 10;
L_00334758:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334768u);  if (depth < kMaxDepth) unit_008B(c, 337u, depth + 1u); else { c.pc = 0x0032FA68u; return; } if (c.pc != 0x00334768u) [[unlikely]] return; }
L_00334768:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003347D0; } }
L_00334774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033477Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0033477Cu) [[unlikely]] return; }
L_0033477C:
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
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003347A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003347A8u) [[unlikely]] return; }
L_003347A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00334728u | kUnwind; return; } goto L_00334728; } }
L_003347B0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003347C0u);  if (depth < kMaxDepth) unit_008B(c, 337u, depth + 1u); else { c.pc = 0x0032FA68u; return; } if (c.pc != 0x003347C0u) [[unlikely]] return; }
L_003347C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00334774u | kUnwind; return; } goto L_00334774; } }
L_003347C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003347D0u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x003347D0u) [[unlikely]] return; }
L_003347D0:
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    c.f[20] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[29], c.r[29].w[0] + 368u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003347F8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 428u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00334840; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00334840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00334854; } }
L_00334848:
    set32(c.r[19], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003348DC; } }
L_00334854:
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003348DC; } }
    set32(c.r[20], 0u + 1u);
    c.budget -= 2;
L_00334868:
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00334898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334880u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x00334880u) [[unlikely]] return; }
L_00334880:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00334898; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033489C; } }
L_00334898:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_0033489C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003348C8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003348C8; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    if (c.r[2].d[0] != 0) c.r[17].d[0] = 0ull;
    c.budget -= 4;
L_003348C8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00334848u | kUnwind; return; } goto L_00334848; } }
    set32(c.r[16], ld32((c.r[16].w[0] + 424u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00334868u | kUnwind; return; } goto L_00334868; } }
L_003348DC:
    st32((c.r[18].w[0] + 404u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00334AA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), 0u);
    c.budget -= 4;
L_003348FC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334910u);  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x00334910u) [[unlikely]] return; }
L_00334910:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 400u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[17], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 17248u);
    st32((c.r[29].w[0] + 16u), c.r[29].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[18].w[0]);
    set32(c.r[4], c.r[20].w[0] - 11856u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334968u);  if (depth < kMaxDepth) unit_008E(c, 71u, depth + 1u); else { c.pc = 0x00338FA0u; return; } if (c.pc != 0x00334968u) [[unlikely]] return; }
L_00334968:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 404u), c.r[3].w[0]);
    set32(c.r[5], 0u + 56u);
    set32(c.r[6], 0u + 30u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033499Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033499Cu) [[unlikely]] return; }
L_0033499C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 56u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003349A8:
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003349BCu);  if (depth < kMaxDepth) unit_00A9(c, 217u, depth + 1u); else { c.pc = 0x003A6B88u; return; } if (c.pc != 0x003349BCu) [[unlikely]] return; }
L_003349BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003349C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003349D0; } }
L_003349C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003349D0u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x003349D0u) [[unlikely]] return; }
L_003349D0:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003349E8u);  if (depth < kMaxDepth) unit_008D(c, 46u, depth + 1u); else { c.pc = 0x00334520u; return; } if (c.pc != 0x003349E8u) [[unlikely]] return; }
L_003349E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00340000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] - 11856u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] - 19728u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334A1Cu);  if (depth < kMaxDepth) unit_008E(c, 71u, depth + 1u); else { c.pc = 0x00338FA0u; return; } if (c.pc != 0x00334A1Cu) [[unlikely]] return; }
L_00334A1C:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00334A58; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00334A58; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334A58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334A58u) [[unlikely]] return; }
L_00334A58:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_00334A8C; } }
    set32(c.r[8], ld32((c.r[21].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334A8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334A8Cu) [[unlikely]] return; }
L_00334A8C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334B24; } }
L_00334A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334AA0u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00334AA0u) [[unlikely]] return; }
L_00334AA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334B24; } }
L_00334AAC:
    set32(c.r[8], ld32((c.r[21].w[0] + 8208u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[7], 0u + 30u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334AD4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334AD4u) [[unlikely]] return; }
L_00334AD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003349C8u | kUnwind; return; } goto L_003349C8; } }
L_00334ADC:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00334A98u | kUnwind; return; } goto L_00334A98; } }
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
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334B14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334B14u) [[unlikely]] return; }
L_00334B14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00334A98u | kUnwind; return; } goto L_00334A98; } }
L_00334B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334B24u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x00334B24u) [[unlikely]] return; }
L_00334B24:
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
L_00334B50:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 428u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00334B94; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00334B94:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00334D50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), 0u);
    c.budget -= 4;
L_00334BAC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334BC0u);  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x00334BC0u) [[unlikely]] return; }
L_00334BC0:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 400u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[18], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 17248u);
    st32((c.r[29].w[0] + 16u), c.r[29].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[4], c.r[20].w[0] - 11856u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334C18u);  if (depth < kMaxDepth) unit_008E(c, 71u, depth + 1u); else { c.pc = 0x00338FA0u; return; } if (c.pc != 0x00334C18u) [[unlikely]] return; }
L_00334C18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 408u), c.r[3].w[0]);
    set32(c.r[5], 0u + 56u);
    set32(c.r[6], 0u + 30u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334C4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334C4Cu) [[unlikely]] return; }
L_00334C4C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 56u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00334C58:
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334C6Cu);  if (depth < kMaxDepth) unit_00A9(c, 217u, depth + 1u); else { c.pc = 0x003A6B88u; return; } if (c.pc != 0x00334C6Cu) [[unlikely]] return; }
L_00334C6C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00334C70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334C80; } }
L_00334C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334C80u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00334C80u) [[unlikely]] return; }
L_00334C80:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334C98u);  if (depth < kMaxDepth) unit_008D(c, 46u, depth + 1u); else { c.pc = 0x00334520u; return; } if (c.pc != 0x00334C98u) [[unlikely]] return; }
L_00334C98:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00340000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] - 11856u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] - 19728u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334CCCu);  if (depth < kMaxDepth) unit_008E(c, 71u, depth + 1u); else { c.pc = 0x00338FA0u; return; } if (c.pc != 0x00334CCCu) [[unlikely]] return; }
L_00334CCC:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00334D08; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00334D08; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334D08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334D08u) [[unlikely]] return; }
L_00334D08:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_00334D3C; } }
    set32(c.r[8], ld32((c.r[21].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334D3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334D3Cu) [[unlikely]] return; }
L_00334D3C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334DEC; } }
L_00334D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334D50u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00334D50u) [[unlikely]] return; }
L_00334D50:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 408u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 400u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334D6Cu);  if (depth < kMaxDepth) unit_008D(c, 46u, depth + 1u); else { c.pc = 0x00334520u; return; } if (c.pc != 0x00334D6Cu) [[unlikely]] return; }
L_00334D6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334DEC; } }
L_00334D74:
    set32(c.r[8], ld32((c.r[21].w[0] + 8208u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[7], 0u + 30u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334D9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334D9Cu) [[unlikely]] return; }
L_00334D9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00334C78u | kUnwind; return; } goto L_00334C78; } }
L_00334DA4:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00334D48u | kUnwind; return; } goto L_00334D48; } }
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
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334DDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334DDCu) [[unlikely]] return; }
L_00334DDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00334D48u | kUnwind; return; } goto L_00334D48; } }
L_00334DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334DECu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x00334DECu) [[unlikely]] return; }
L_00334DEC:
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
L_00334E18:
    set32(c.r[29], c.r[29].w[0] - 448u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 272u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 432u), c.f[20]);
    set32(c.r[3], ld32((c.r[21].w[0] + 540u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00334E74; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334E78; } }
L_00334E74:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00334E78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003363B0; } }
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u - 1u);
    set32(c.r[5], 0u + 268u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334F10; } }
    c.budget -= 1;
L_00334E98:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00334EB4; } }
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334EB8; } }
L_00334EB4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00334EB8:
    set32(c.r[3], ld32((c.r[2].w[0] + 256u)));
    set32(c.r[23], c.r[22].w[0] + 1u);
    set32(c.r[2], c.r[22].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00334F0C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00334EF4; } }
    st32((c.r[2].w[0] + 124u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334F0C; } }
    c.budget -= 1;
L_00334EF0:
    set32(c.r[4], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 1;
L_00334EF4:
    set32(c.r[2], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00334EF0u | kUnwind; return; } goto L_00334EF0; } }
    st32((c.r[4].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 1;
L_00334F0C:
    c.r[22].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_00334F10:
    set32(c.r[3], ld32((c.r[21].w[0] + 540u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00334F30; } }
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334F34; } }
L_00334F30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00334F34:
    set32(c.r[2], ld32((c.r[2].w[0] + 252u)));
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00334E98u | kUnwind; return; } goto L_00334E98; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[20] = c.r[1].w[0];
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[29].w[0] + 64u);
    set32(c.r[20], c.r[29].w[0] + 128u);
    set32(c.r[30], c.r[29].w[0] + 192u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335414; } }
    c.budget -= 1;
L_00334F68:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00334F8C; } }
    set32(c.r[4], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00334F90; } }
L_00334F8C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00334F90:
    set32(c.r[2], 0u + 544u);
    set32(c.r[3], ld32((c.r[3].w[0] + 240u)));
    mmi::mult(c, 0, c.r[22].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00334FE0; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334FC8u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x00334FC8u) [[unlikely]] return; }
L_00334FC8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334FD8u);  if (depth < kMaxDepth) unit_008E(c, 47u, depth + 1u); else { c.pc = 0x00338748u; return; } if (c.pc != 0x00334FD8u) [[unlikely]] return; }
L_00334FD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003353C4; } }
L_00334FE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_00335014; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 592u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334FFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334FFCu) [[unlikely]] return; }
L_00334FFC:
    set32(c.r[4], c.r[18].w[0] + 128u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335014u);  if (depth < kMaxDepth) unit_008D(c, 325u, depth + 1u); else { c.pc = 0x00337BE8u; return; } if (c.pc != 0x00335014u) [[unlikely]] return; }
L_00335014:
    set32(c.r[4], ld32((c.r[18].w[0] + 420u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00335040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335028u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x00335028u) [[unlikely]] return; }
L_00335028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00335040; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 420u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335044; } }
L_00335040:
    set32(c.r[3], ld32((c.r[18].w[0] + 420u)));
    c.budget -= 1;
L_00335044:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003350B4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003350B4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_003350B4; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 592u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00335078u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00335078u) [[unlikely]] return; }
L_00335078:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335088u);  if (depth < kMaxDepth) unit_0045(c, 3u, depth + 1u); else { c.pc = 0x00214058u; return; } if (c.pc != 0x00335088u) [[unlikely]] return; }
L_00335088:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033509Cu);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x0033509Cu) [[unlikely]] return; }
L_0033509C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003350ACu);  if (depth < kMaxDepth) unit_008E(c, 47u, depth + 1u); else { c.pc = 0x00338748u; return; } if (c.pc != 0x003350ACu) [[unlikely]] return; }
L_003350AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003353C4; } }
L_003350B4:
    set32(c.r[4], ld32((c.r[18].w[0] + 420u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003350E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003350C8u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x003350C8u) [[unlikely]] return; }
L_003350C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003350E0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 420u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003350E4; } }
L_003350E0:
    set32(c.r[17], ld32((c.r[18].w[0] + 420u)));
    c.budget -= 1;
L_003350E4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003353C4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00335190; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00335190; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[23].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335118u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x00335118u) [[unlikely]] return; }
L_00335118:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335130u);  if (depth < kMaxDepth) unit_0045(c, 38u, depth + 1u); else { c.pc = 0x002148A0u; return; } if (c.pc != 0x00335130u) [[unlikely]] return; }
L_00335130:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 144u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335148u);  if (depth < kMaxDepth) unit_0045(c, 36u, depth + 1u); else { c.pc = 0x00214778u; return; } if (c.pc != 0x00335148u) [[unlikely]] return; }
L_00335148:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 140u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335160u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x00335160u) [[unlikely]] return; }
L_00335160:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.f[0] = ld32((c.r[2].w[0] + 124u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.f[0] = ld32((c.r[2].w[0] + 132u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003351F8; } }
L_00335190:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[23].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003351A0u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x003351A0u) [[unlikely]] return; }
L_003351A0:
    c.f[12] = ld32((c.r[16].w[0] + 28u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003351B4u);  if (depth < kMaxDepth) unit_0045(c, 38u, depth + 1u); else { c.pc = 0x002148A0u; return; } if (c.pc != 0x003351B4u) [[unlikely]] return; }
L_003351B4:
    c.f[12] = ld32((c.r[16].w[0] + 36u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003351C8u);  if (depth < kMaxDepth) unit_0045(c, 36u, depth + 1u); else { c.pc = 0x00214778u; return; } if (c.pc != 0x003351C8u) [[unlikely]] return; }
L_003351C8:
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003351DCu);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x003351DCu) [[unlikely]] return; }
L_003351DC:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 7;
L_003351F8:
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0033521C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003352B0; } }
L_0033521C:
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003352B0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335238u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x00335238u) [[unlikely]] return; }
L_00335238:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335250u);  if (depth < kMaxDepth) unit_0045(c, 38u, depth + 1u); else { c.pc = 0x002148A0u; return; } if (c.pc != 0x00335250u) [[unlikely]] return; }
L_00335250:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 144u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335268u);  if (depth < kMaxDepth) unit_0045(c, 36u, depth + 1u); else { c.pc = 0x00214778u; return; } if (c.pc != 0x00335268u) [[unlikely]] return; }
L_00335268:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 140u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335280u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x00335280u) [[unlikely]] return; }
L_00335280:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.f[0] = ld32((c.r[2].w[0] + 124u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 180u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.f[0] = ld32((c.r[2].w[0] + 132u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335330; } }
L_003352B0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003352C0u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x003352C0u) [[unlikely]] return; }
L_003352C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 28u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003352D8u);  if (depth < kMaxDepth) unit_0045(c, 38u, depth + 1u); else { c.pc = 0x002148A0u; return; } if (c.pc != 0x003352D8u) [[unlikely]] return; }
L_003352D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 36u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003352F0u);  if (depth < kMaxDepth) unit_0045(c, 36u, depth + 1u); else { c.pc = 0x00214778u; return; } if (c.pc != 0x003352F0u) [[unlikely]] return; }
L_003352F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 32u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335308u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x00335308u) [[unlikely]] return; }
L_00335308:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 180u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.budget -= 10;
L_00335330:
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335348u);  if (depth < kMaxDepth) unit_0045(c, 3u, depth + 1u); else { c.pc = 0x00214058u; return; } if (c.pc != 0x00335348u) [[unlikely]] return; }
L_00335348:
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033535Cu);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x0033535Cu) [[unlikely]] return; }
L_0033535C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033536Cu);  if (depth < kMaxDepth) unit_008E(c, 47u, depth + 1u); else { c.pc = 0x00338748u; return; } if (c.pc != 0x0033536Cu) [[unlikely]] return; }
L_0033536C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    set32(c.r[7], c.r[3].w[0] - 8112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], c.r[2].w[0] - 8200u);
    set32(c.r[9], 0u + 18u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335398u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00335398u) [[unlikely]] return; }
L_00335398:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] + 12136u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003353C4; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003353C4u);  if (depth < kMaxDepth) unit_00A2(c, 60u, depth + 1u); else { c.pc = 0x00388968u; return; } if (c.pc != 0x003353C4u) [[unlikely]] return; }
L_003353C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 420u)));
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033540C; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 428u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003353F4; } }
    st32((c.r[2].w[0] + 428u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033540C; } }
    c.budget -= 1;
L_003353F0:
    set32(c.r[3], ld32((c.r[3].w[0] + 424u)));
    c.budget -= 1;
L_003353F4:
    set32(c.r[2], ld32((c.r[3].w[0] + 424u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003353F0u | kUnwind; return; } goto L_003353F0; } }
    st32((c.r[3].w[0] + 424u), c.r[18].w[0]);
    c.budget -= 1;
L_0033540C:
    set32(c.r[3], ld32((c.r[21].w[0] + 540u)));
    c.r[22].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 2;
L_00335414:
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00335438; } }
    set32(c.r[4], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033543C; } }
L_00335438:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033543C:
    set32(c.r[2], ld32((c.r[2].w[0] + 236u)));
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00334F68u | kUnwind; return; } goto L_00334F68; } }
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 1u);
    set32(c.r[8], 0u + 268u);
    set32(c.r[7], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003354E4; } }
L_00335468:
    set32(c.r[2], ld32((c.r[21].w[0] + 540u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[9].d[0];  if (t) { goto L_00335488; } }
    mmi::mult(c, 0, c.r[2].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033548C; } }
L_00335488:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033548C:
    set32(c.r[2], ld32((c.r[2].w[0] + 240u)));
    set32(c.r[5], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 420u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003354D8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 428u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003354C4; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    c.budget -= 5;
L_003354C4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[7].d[0];  if (t) { goto L_003354D8; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003354D8:
    set32(c.r[3], ld32((c.r[21].w[0] + 540u)));
    set32(c.r[6], c.r[6].w[0] + 544u);
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 3;
L_003354E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[9].d[0];  if (t) { goto L_00335500; } }
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335504; } }
L_00335500:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00335504:
    set32(c.r[2], ld32((c.r[2].w[0] + 236u)));
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00335468u | kUnwind; return; } goto L_00335468; } }
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[19], 0u + 1u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033595C; } }
    c.budget -= 1;
L_00335530:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00335554; } }
    set32(c.r[4], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335558; } }
L_00335554:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00335558:
    set32(c.r[2], 0u + 544u);
    set32(c.r[3], ld32((c.r[3].w[0] + 240u)));
    mmi::mult(c, 0, c.r[22].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[18].d[0] = c.r[18].d[0] & 1ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003355CC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335598u);  if (depth < kMaxDepth) unit_008D(c, 93u, depth + 1u); else { c.pc = 0x00334B50u; return; } if (c.pc != 0x00335598u) [[unlikely]] return; }
L_00335598:
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003355A8u);  if (depth < kMaxDepth) unit_008D(c, 68u, depth + 1u); else { c.pc = 0x003347F8u; return; } if (c.pc != 0x003355A8u) [[unlikely]] return; }
L_003355A8:
    st32((c.r[16].w[0] + 412u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003355DC; } }
L_003355B4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033562C; } }
L_003355C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003356A4; } }
L_003355CC:
    st32((c.r[16].w[0] + 404u), 0u);
    st32((c.r[16].w[0] + 408u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 412u), 0u);
    c.budget -= 4;
L_003355DC:
    set32(c.r[17], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00335658; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[6], 0u + 100u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00335628; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00335608:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003355B4u | kUnwind; return; } goto L_003355B4; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00335608u | kUnwind; return; } goto L_00335608; } }
L_00335628:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033562C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00335644; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335644u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00395C58u; return; } if (c.pc != 0x00335644u) [[unlikely]] return; }
L_00335644:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 100u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335658u);  if (depth < kMaxDepth) unit_00A5(c, 138u, depth + 1u); else { c.pc = 0x00395B98u; return; } if (c.pc != 0x00335658u) [[unlikely]] return; }
L_00335658:
    set32(c.r[17], ld32((c.r[16].w[0] + 412u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003356DC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[6], 0u + 100u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003356A0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00335680:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003355C0u | kUnwind; return; } goto L_003355C0; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00335680u | kUnwind; return; } goto L_00335680; } }
L_003356A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003356A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003356BC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003356BCu);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00395C58u; return; } if (c.pc != 0x003356BCu) [[unlikely]] return; }
L_003356BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 100u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003356D0u);  if (depth < kMaxDepth) unit_00A5(c, 138u, depth + 1u); else { c.pc = 0x00395B98u; return; } if (c.pc != 0x003356D0u) [[unlikely]] return; }
L_003356D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 412u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003356E0; } }
L_003356DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_003356E0:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033571C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033571C; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = 0ull;
    c.budget -= 5;
L_0033571C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003357DC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[21].w[0] + 568u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335734u);  if (depth < kMaxDepth) unit_00A2(c, 56u, depth + 1u); else { c.pc = 0x00388890u; return; } if (c.pc != 0x00335734u) [[unlikely]] return; }
L_00335734:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[30].w[0] - 8112u);
    set32(c.r[8], c.r[20].w[0] - 8200u);
    set32(c.r[9], 0u + 18u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335758u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00335758u) [[unlikely]] return; }
L_00335758:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 12136u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033577Cu);  if (depth < kMaxDepth) unit_00A2(c, 60u, depth + 1u); else { c.pc = 0x00388968u; return; } if (c.pc != 0x0033577Cu) [[unlikely]] return; }
L_0033577C:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00335794; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 412u)));
    c.budget -= 1;
L_00335794:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00335840; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003357A8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 412u)));
    c.budget -= 1;
L_003357A8:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003357B4u);  if (depth < kMaxDepth) unit_00A2(c, 60u, depth + 1u); else { c.pc = 0x00388968u; return; } if (c.pc != 0x003357B4u) [[unlikely]] return; }
L_003357B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_003357C8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 412u)));
    c.budget -= 1;
L_003357C8:
    set32(c.r[5], ld32((c.r[21].w[0] + 568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003357D4u);  if (depth < kMaxDepth) unit_00A2(c, 56u, depth + 1u); else { c.pc = 0x00388890u; return; } if (c.pc != 0x003357D4u) [[unlikely]] return; }
L_003357D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335840; } }
L_003357DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00335900; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00335840; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[30].w[0] - 8112u);
    set32(c.r[8], c.r[20].w[0] - 8200u);
    set32(c.r[9], 0u + 18u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033581Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0033581Cu) [[unlikely]] return; }
L_0033581C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 12136u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335840u);  if (depth < kMaxDepth) unit_00A2(c, 60u, depth + 1u); else { c.pc = 0x00388968u; return; } if (c.pc != 0x00335840u) [[unlikely]] return; }
L_00335840:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00335900; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033587C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335864u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x00335864u) [[unlikely]] return; }
L_00335864:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033587C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335880; } }
L_0033587C:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_00335880:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003358AC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003358AC; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    if (c.r[2].d[0] != 0) c.r[17].d[0] = 0ull;
    c.budget -= 4;
L_003358AC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00335900; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_003358F0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003358CCu);  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C380u; return; } if (c.pc != 0x003358CCu) [[unlikely]] return; }
L_003358CC:
    set32(c.r[4], ld32((c.r[21].w[0] + 548u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003358DCu);  if (depth < kMaxDepth) unit_00A5(c, 62u, depth + 1u); else { c.pc = 0x00394BA0u; return; } if (c.pc != 0x003358DCu) [[unlikely]] return; }
L_003358DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003358E8u);  if (depth < kMaxDepth) unit_00A2(c, 69u, depth + 1u); else { c.pc = 0x00388AC0u; return; } if (c.pc != 0x003358E8u) [[unlikely]] return; }
L_003358E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335900; } }
L_003358F0:
    set32(c.r[4], ld32((c.r[21].w[0] + 548u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335900u);  if (depth < kMaxDepth) unit_00A5(c, 62u, depth + 1u); else { c.pc = 0x00394BA0u; return; } if (c.pc != 0x00335900u) [[unlikely]] return; }
L_00335900:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00335938; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00335938; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = 0ull;
    c.budget -= 5;
L_00335938:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00335954; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 588u)));
    set32(c.r[4], c.r[16].w[0] + 128u);
    set32(c.r[6], ld32((c.r[21].w[0] + 592u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335954u);  if (depth < kMaxDepth) unit_008E(c, 12u, depth + 1u); else { c.pc = 0x00338138u; return; } if (c.pc != 0x00335954u) [[unlikely]] return; }
L_00335954:
    set32(c.r[3], ld32((c.r[21].w[0] + 540u)));
    c.r[22].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 2;
L_0033595C:
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00335980; } }
    set32(c.r[4], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335984; } }
L_00335980:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00335984:
    set32(c.r[2], ld32((c.r[2].w[0] + 236u)));
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00335530u | kUnwind; return; } goto L_00335530; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.r[30].d[0] = 0ull + 0ull;
    set32(c.r[19], 0u - 1u);
    set32(c.r[18], 0u + 268u);
    c.budget -= 5;
L_003359A8:
    st32((c.r[29].w[0] + 256u), 0u);
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[20].w[0] + 1u);
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335AFC; } }
L_003359C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_003359DC; } }
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003359E0; } }
L_003359DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003359E0:
    set32(c.r[4], 0u + 544u);
    set32(c.r[2], ld32((c.r[2].w[0] + 240u)));
    mmi::mult(c, 0, c.r[22].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335A34; } }
L_00335A00:
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00335A2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335A14u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x00335A14u) [[unlikely]] return; }
L_00335A14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00335A2C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335A30; } }
L_00335A2C:
    set32(c.r[16], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_00335A30:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00335A34:
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00335A60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335A48u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x00335A48u) [[unlikely]] return; }
L_00335A48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00335A60; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335A64; } }
L_00335A60:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_00335A64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00335A78; } }
    c.r[2].d[0] = c.r[20].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00335A00u | kUnwind; return; } goto L_00335A00; } }
L_00335A78:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[20].d[0];  if (t) { goto L_00335AF4; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 540u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_00335AA0; } }
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335AA4; } }
L_00335AA0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00335AA4:
    set32(c.r[2], ld32((c.r[21].w[0] + 540u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_00335AC4; } }
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335AC8; } }
L_00335AC4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00335AC8:
    set32(c.r[4], 0u + 544u);
    mmi::mult(c, 0, c.r[22].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 248u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 240u)));
    set32(c.r[2], c.r[30].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[30], c.r[30].w[0] + 1u);
    st32((c.r[29].w[0] + 256u), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 11;
L_00335AF4:
    set32(c.r[3], ld32((c.r[21].w[0] + 540u)));
    c.r[22].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 2;
L_00335AFC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_00335B18; } }
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335B1C; } }
L_00335B18:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00335B1C:
    set32(c.r[2], ld32((c.r[2].w[0] + 236u)));
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003359C0u | kUnwind; return; } goto L_003359C0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[20], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003359A8u | kUnwind; return; } goto L_003359A8; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 540u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00335B68; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335B6C; } }
L_00335B68:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00335B6C:
    st32((c.r[2].w[0] + 244u), c.r[30].w[0]);
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336250; } }
    c.budget -= 1;
L_00335B80:
    set32(c.r[3], ld32((c.r[21].w[0] + 540u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00335BA8; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335BAC; } }
L_00335BA8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00335BAC:
    set32(c.r[2], 0u + 40u);
    set32(c.r[3], ld32((c.r[3].w[0] + 220u)));
    mmi::mult(c, 0, c.r[22].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0033624C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033624C; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335BE4u);  if (depth < kMaxDepth) unit_008D(c, 284u, depth + 1u); else { c.pc = 0x00337448u; return; } if (c.pc != 0x00335BE4u) [[unlikely]] return; }
L_00335BE4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033624C; } }
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.f[2] = ld32((c.r[18].w[0] + 16u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    st32((c.r[29].w[0] + 28u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[2] = ld32((c.r[18].w[0] + 28u));
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    st32((c.r[29].w[0] + 40u), c.f[2]);
    c.f[20] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 24;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00335ECC; } }
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00335ECC; } }
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 40u), 0u);
    st32((c.r[29].w[0] + 44u), 0u);
    set32(c.r[4], ld32((c.r[21].w[0] + 548u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335C98u);  if (depth < kMaxDepth) unit_00A5(c, 69u, depth + 1u); else { c.pc = 0x00394CA8u; return; } if (c.pc != 0x00335C98u) [[unlikely]] return; }
L_00335C98:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 36u), c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 40u), c.r[17].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    vu::move(c.vu0, 15u, 6u, 1u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 3u, 6u, 6u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 2u, c.vu0.vf[3].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[3].w[0]);
    vu::mulbc(c.vu0, 14u, 6u, 6u, c.vu0.q);
    st128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[6]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 0u, c.vu0.vf[0].w[0]);
    vu::msubbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[0].w[3]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.vu0.vf[1]);
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    st32((c.r[29].w[0] + 172u), c.f[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 15u, 2u, 6u, 1u);
    vu::opmula(c.vu0, 1u, 6u);
    vu::opmsub(c.vu0, 5u, 6u, 1u);
    vu::mul(c.vu0, 1u, 4u, 1u, 1u);
    vu::add(c.vu0, 1u, 3u, 1u, 1u);
    vu::mulabc(c.vu0, 1u, 0u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 1u, 0u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 1u, 2u, 0u, c.vu0.vf[2].w[2]);
    vu::opmula(c.vu0, 1u, 5u);
    vu::maddabc(c.vu0, 14u, 5u, c.vu0.vf[3].w[3]);
    vu::maddabc(c.vu0, 14u, 6u, c.vu0.vf[4].w[3]);
    vu::maddabc(c.vu0, 14u, 1u, c.vu0.vf[2].w[3]);
    vu::opmsub(c.vu0, 2u, 5u, 1u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 0u, c.vu0.vf[0].w[0]);
    vu::msubbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[0].w[3]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.vu0.vf[1]);
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    st32((c.r[29].w[0] + 172u), c.f[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 15u, 2u, 6u, 1u);
    vu::opmula(c.vu0, 1u, 6u);
    vu::opmsub(c.vu0, 5u, 6u, 1u);
    vu::mul(c.vu0, 1u, 4u, 1u, 1u);
    vu::add(c.vu0, 1u, 3u, 1u, 1u);
    vu::mulabc(c.vu0, 1u, 0u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 1u, 0u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 1u, 2u, 0u, c.vu0.vf[2].w[2]);
    vu::opmula(c.vu0, 1u, 5u);
    vu::maddabc(c.vu0, 14u, 5u, c.vu0.vf[3].w[3]);
    vu::maddabc(c.vu0, 14u, 6u, c.vu0.vf[4].w[3]);
    vu::maddabc(c.vu0, 14u, 1u, c.vu0.vf[2].w[3]);
    vu::opmsub(c.vu0, 2u, 5u, 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], c.r[5].w[0] + 128u);
    c.budget -= 66;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335DA0u);  if (depth < kMaxDepth) unit_00C2(c, 196u, depth + 1u); else { c.pc = 0x0040A6B0u; return; } if (c.pc != 0x00335DA0u) [[unlikely]] return; }
L_00335DA0:
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335DB8u);  if (depth < kMaxDepth) unit_00C2(c, 196u, depth + 1u); else { c.pc = 0x0040A6B0u; return; } if (c.pc != 0x00335DB8u) [[unlikely]] return; }
L_00335DB8:
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[8], c.r[29].w[0] + 144u);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    c.f[2] = c.f[1] & fp::kAbs;
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[1] = ld32((c.r[29].w[0] + 152u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    set32(c.r[7], c.r[29].w[0] + 96u);
    c.r[2].d[0] = 0ull + 0ull;
    c.f[1] = c.f[1] & fp::kAbs;
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00335DFC; } }
    c.f[2] = c.f[0];
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_00335DFC:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00335E14; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_00335E14:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[8].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.f[20]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], 0u + 160u);
    st32((c.r[6].w[0]), c.f[0]);
    set32(c.r[16], 0u + 160u);
    set32(c.r[6], 0u + 35u);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[2]);
    vu::opmula(c.vu0, 1u, 2u);
    vu::opmsub(c.vu0, 1u, 2u, 1u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[1]);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 30;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00335E8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00335E8Cu) [[unlikely]] return; }
L_00335E8C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 2;
L_00335E94:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335EA4u);  if (depth < kMaxDepth) unit_00A1(c, 358u, depth + 1u); else { c.pc = 0x003879B0u; return; } if (c.pc != 0x00335EA4u) [[unlikely]] return; }
L_00335EA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335EB4; } }
L_00335EAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335EB4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00335EB4u) [[unlikely]] return; }
L_00335EB4:
    set32(c.r[4], ld32((c.r[21].w[0] + 548u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335EC4u);  if (depth < kMaxDepth) unit_00A4(c, 65u, depth + 1u); else { c.pc = 0x00390EE0u; return; } if (c.pc != 0x00335EC4u) [[unlikely]] return; }
L_00335EC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033624C; } }
L_00335ECC:
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[19], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 40u), 0u);
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[19].w[0] + 132u), c.f[1]);
    st32((c.r[19].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 168u), 0u);
    set32(c.r[4], ld32((c.r[21].w[0] + 548u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335F30u);  if (depth < kMaxDepth) unit_00A5(c, 69u, depth + 1u); else { c.pc = 0x00394CA8u; return; } if (c.pc != 0x00335F30u) [[unlikely]] return; }
L_00335F30:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 36u), c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 40u), c.r[16].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    vu::move(c.vu0, 15u, 6u, 1u);
    set32(c.r[20], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 3u, 6u, 6u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 2u, c.vu0.vf[3].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[3].w[0]);
    vu::mulbc(c.vu0, 14u, 6u, 6u, c.vu0.q);
    st128((c.r[29].w[0] + 176u) & ~15u, c.vu0.vf[6]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 0u, c.vu0.vf[0].w[0]);
    vu::msubbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[0].w[3]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.vu0.vf[1]);
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    st32((c.r[29].w[0] + 204u), c.f[0]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 15u, 2u, 6u, 1u);
    vu::opmula(c.vu0, 1u, 6u);
    vu::opmsub(c.vu0, 5u, 6u, 1u);
    vu::mul(c.vu0, 1u, 4u, 1u, 1u);
    vu::add(c.vu0, 1u, 3u, 1u, 1u);
    vu::mulabc(c.vu0, 1u, 0u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 1u, 0u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 1u, 2u, 0u, c.vu0.vf[2].w[2]);
    vu::opmula(c.vu0, 1u, 5u);
    vu::maddabc(c.vu0, 14u, 5u, c.vu0.vf[3].w[3]);
    vu::maddabc(c.vu0, 14u, 6u, c.vu0.vf[4].w[3]);
    vu::maddabc(c.vu0, 14u, 1u, c.vu0.vf[2].w[3]);
    vu::opmsub(c.vu0, 2u, 5u, 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 0u, c.vu0.vf[0].w[0]);
    vu::msubbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[0].w[3]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.vu0.vf[1]);
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    st32((c.r[29].w[0] + 204u), c.f[0]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 15u, 2u, 6u, 1u);
    vu::opmula(c.vu0, 1u, 6u);
    vu::opmsub(c.vu0, 5u, 6u, 1u);
    vu::mul(c.vu0, 1u, 4u, 1u, 1u);
    vu::add(c.vu0, 1u, 3u, 1u, 1u);
    vu::mulabc(c.vu0, 1u, 0u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 1u, 0u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 1u, 2u, 0u, c.vu0.vf[2].w[2]);
    vu::opmula(c.vu0, 1u, 5u);
    vu::maddabc(c.vu0, 14u, 5u, c.vu0.vf[3].w[3]);
    vu::maddabc(c.vu0, 14u, 6u, c.vu0.vf[4].w[3]);
    vu::maddabc(c.vu0, 14u, 1u, c.vu0.vf[2].w[3]);
    vu::opmsub(c.vu0, 2u, 5u, 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[2]);
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[5], c.r[5].w[0] + 128u);
    c.budget -= 67;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033603Cu);  if (depth < kMaxDepth) unit_00C2(c, 196u, depth + 1u); else { c.pc = 0x0040A6B0u; return; } if (c.pc != 0x0033603Cu) [[unlikely]] return; }
L_0033603C:
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336054u);  if (depth < kMaxDepth) unit_00C2(c, 196u, depth + 1u); else { c.pc = 0x0040A6B0u; return; } if (c.pc != 0x00336054u) [[unlikely]] return; }
L_00336054:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[7], c.r[29].w[0] + 112u);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = c.f[0] & fp::kAbs;
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.f[0] = c.f[0] & fp::kAbs;
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00336094; } }
    c.f[2] = c.f[1];
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_00336094:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003360AC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_003360AC:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[20].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[2] = c.r[1].w[0];
    st32((c.r[6].w[0]), c.f[0]);
    set32(c.r[5], 0u + 224u);
    set32(c.r[6], 0u + 35u);
    set32(c.r[16], 0u + 224u);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 4u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 4u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 8u, 4u, 3u, c.vu0.vf[4].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[4].w[0]);
    vu::mulbc(c.vu0, 14u, 1u, 1u, c.vu0.q);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    vu::opmula(c.vu0, 2u, 1u);
    vu::opmsub(c.vu0, 2u, 1u, 2u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[2]);
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 15u, 6u, 2u, 1u);
    vu::opmula(c.vu0, 1u, 2u);
    vu::opmsub(c.vu0, 5u, 2u, 1u);
    vu::mul(c.vu0, 1u, 4u, 1u, 1u);
    vu::add(c.vu0, 1u, 3u, 1u, 1u);
    vu::mulabc(c.vu0, 1u, 0u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 1u, 0u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 1u, 6u, 0u, c.vu0.vf[6].w[2]);
    vu::opmula(c.vu0, 1u, 5u);
    vu::maddabc(c.vu0, 14u, 5u, c.vu0.vf[3].w[3]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[4].w[3]);
    vu::maddabc(c.vu0, 14u, 1u, c.vu0.vf[6].w[3]);
    vu::opmsub(c.vu0, 6u, 5u, 1u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.vu0.vf[6]);
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 0u, c.vu0.vf[0].w[0]);
    vu::msubbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[0].w[3]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.vu0.vf[1]);
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    st32((c.r[29].w[0] + 220u), c.f[0]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 15u, 2u, 6u, 1u);
    vu::opmula(c.vu0, 1u, 6u);
    vu::opmsub(c.vu0, 5u, 6u, 1u);
    vu::mul(c.vu0, 1u, 4u, 1u, 1u);
    vu::add(c.vu0, 1u, 3u, 1u, 1u);
    vu::mulabc(c.vu0, 1u, 0u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 1u, 0u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 1u, 2u, 0u, c.vu0.vf[2].w[2]);
    vu::opmula(c.vu0, 1u, 5u);
    vu::maddabc(c.vu0, 14u, 5u, c.vu0.vf[3].w[3]);
    vu::maddabc(c.vu0, 14u, 6u, c.vu0.vf[4].w[3]);
    vu::maddabc(c.vu0, 14u, 1u, c.vu0.vf[2].w[3]);
    vu::opmsub(c.vu0, 2u, 5u, 1u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[2]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 164u), c.f[1]);
    st32((c.r[19].w[0] + 136u), c.f[2]);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 90;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00336214u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00336214u) [[unlikely]] return; }
L_00336214:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 2;
L_0033621C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033622Cu);  if (depth < kMaxDepth) unit_00A1(c, 401u, depth + 1u); else { c.pc = 0x00387FF8u; return; } if (c.pc != 0x0033622Cu) [[unlikely]] return; }
L_0033622C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033623C; } }
L_00336234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033623Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0033623Cu) [[unlikely]] return; }
L_0033623C:
    set32(c.r[4], ld32((c.r[21].w[0] + 548u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033624Cu);  if (depth < kMaxDepth) unit_00A4(c, 65u, depth + 1u); else { c.pc = 0x00390EE0u; return; } if (c.pc != 0x0033624Cu) [[unlikely]] return; }
L_0033624C:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_00336250:
    set32(c.r[3], ld32((c.r[21].w[0] + 540u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00336278; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033627C; } }
L_00336278:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033627C:
    set32(c.r[2], ld32((c.r[2].w[0] + 168u)));
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00335B80u | kUnwind; return; } goto L_00335B80; } }
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[18], 0u - 1u);
    set32(c.r[17], 0u + 268u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336350; } }
    c.budget -= 1;
L_003362A8:
    set32(c.r[2], ld32((c.r[21].w[0] + 540u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_003362C8; } }
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003362CC; } }
L_003362C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003362CC:
    set32(c.r[3], ld32((c.r[2].w[0] + 240u)));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00336344; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336314; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033630Cu);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033BD88u; return; } if (c.pc != 0x0033630Cu) [[unlikely]] return; }
L_0033630C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336344; } }
L_00336314:
    set32(c.r[2], ld32((c.r[3].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336344; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00336344; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336344u);  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C380u; return; } if (c.pc != 0x00336344u) [[unlikely]] return; }
L_00336344:
    set32(c.r[3], ld32((c.r[21].w[0] + 540u)));
    set32(c.r[16], c.r[16].w[0] + 544u);
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 3;
L_00336350:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[18].d[0];  if (t) { goto L_0033636C; } }
    mmi::mult(c, 0, c.r[3].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336370; } }
L_0033636C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00336370:
    set32(c.r[2], ld32((c.r[2].w[0] + 236u)));
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003362A8u | kUnwind; return; } goto L_003362A8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003363A4; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003363A8; } }
L_003363A4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003363A8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 232u), c.r[2].w[0]);
    c.budget -= 2;
L_003363B0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003363BCu);  if (depth < kMaxDepth) unit_008E(c, 297u, depth + 1u); else { c.pc = 0x0033B470u; return; } if (c.pc != 0x003363BCu) [[unlikely]] return; }
L_003363BC:
    set32(c.r[4], ld32((c.r[21].w[0] + 548u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[12] = c.r[1].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003363D4u);  if (depth < kMaxDepth) unit_00A5(c, 84u, depth + 1u); else { c.pc = 0x00394F50u; return; } if (c.pc != 0x003363D4u) [[unlikely]] return; }
L_003363D4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003363E0u);  if (depth < kMaxDepth) unit_008E(c, 298u, depth + 1u); else { c.pc = 0x0033B488u; return; } if (c.pc != 0x003363E0u) [[unlikely]] return; }
L_003363E0:
    set32(c.r[2], ld32((c.r[21].w[0] + 548u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 208u)));
    st32((c.r[3].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[21].w[0] + 548u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003363F8u);  if (depth < kMaxDepth) unit_00A3(c, 221u, depth + 1u); else { c.pc = 0x0038F2B8u; return; } if (c.pc != 0x003363F8u) [[unlikely]] return; }
L_003363F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336470; } }
L_00336400:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 35u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033642Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033642Cu) [[unlikely]] return; }
L_0033642C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00335EACu | kUnwind; return; } goto L_00335EAC; } }
L_00336434:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 35u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00336460u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00336460u) [[unlikely]] return; }
L_00336460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00336234u | kUnwind; return; } goto L_00336234; } }
L_00336468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336470u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x00336470u) [[unlikely]] return; }
L_00336470:
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 272u));
    c.f[20] = ld32((c.r[29].w[0] + 432u));
    set32(c.r[29], c.r[29].w[0] + 448u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003364A8:
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 540u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00336504; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336508; } }
L_00336504:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00336508:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336544; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 540u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00336538; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033653C; } }
L_00336538:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033653C:
    set32(c.r[2], ld32((c.r[2].w[0] + 232u)));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00336544:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00336E10; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[22], 0u - 1u);
    set32(c.r[20], 0u + 268u);
    c.r[17].d[0] = c.r[17].d[0] | 64639ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336630; } }
    c.budget -= 1;
L_00336570:
    set32(c.r[2], ld32((c.r[21].w[0] + 540u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_00336590; } }
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336594; } }
L_00336590:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00336594:
    set32(c.r[3], ld32((c.r[2].w[0] + 264u)));
    set32(c.r[16], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336628; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003365C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003365C4u) [[unlikely]] return; }
L_003365C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003365F8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033661C; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033661C; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 548u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003365F0u);  if (depth < kMaxDepth) unit_00A3(c, 263u, depth + 1u); else { c.pc = 0x0038FB40u; return; } if (c.pc != 0x003365F0u) [[unlikely]] return; }
L_003365F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033661C; } }
L_003365F8:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033661C; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033661C; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 548u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033661Cu);  if (depth < kMaxDepth) unit_00A5(c, 62u, depth + 1u); else { c.pc = 0x00394BA0u; return; } if (c.pc != 0x0033661Cu) [[unlikely]] return; }
L_0033661C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[17].d[0];
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00336628:
    set32(c.r[18], c.r[18].w[0] + 36u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_00336630:
    set32(c.r[3], ld32((c.r[21].w[0] + 540u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[22].d[0];  if (t) { goto L_00336650; } }
    mmi::mult(c, 0, c.r[3].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336654; } }
L_00336650:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00336654:
    set32(c.r[2], ld32((c.r[2].w[0] + 260u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00336570u | kUnwind; return; } goto L_00336570; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[20], 0u - 1u);
    set32(c.r[18], 0u + 268u);
    c.r[17].d[0] = c.r[17].d[0] | 64639ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336744; } }
L_00336680:
    set32(c.r[2], ld32((c.r[21].w[0] + 540u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_003366A0; } }
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003366A4; } }
L_003366A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003366A4:
    set32(c.r[4], ld32((c.r[2].w[0] + 256u)));
    set32(c.r[3], c.r[19].w[0] << 7);
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033673C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003366D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003366D8u) [[unlikely]] return; }
L_003366D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033670C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00336730; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336730; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 548u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336704u);  if (depth < kMaxDepth) unit_00A3(c, 263u, depth + 1u); else { c.pc = 0x0038FB40u; return; } if (c.pc != 0x00336704u) [[unlikely]] return; }
L_00336704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336730; } }
L_0033670C:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00336730; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00336730; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 548u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336730u);  if (depth < kMaxDepth) unit_00A5(c, 62u, depth + 1u); else { c.pc = 0x00394BA0u; return; } if (c.pc != 0x00336730u) [[unlikely]] return; }
L_00336730:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[17].d[0];
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0033673C:
    set32(c.r[3], ld32((c.r[21].w[0] + 540u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_00336744:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[20].d[0];  if (t) { goto L_00336760; } }
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336764; } }
L_00336760:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00336764:
    set32(c.r[2], ld32((c.r[2].w[0] + 252u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00336680u | kUnwind; return; } goto L_00336680; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00336798; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033679C; } }
L_00336798:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033679C:
    set32(c.r[2], ld32((c.r[2].w[0] + 244u)));
    set32(c.r[19], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[19].sd[0] < 0;  if (t) { goto L_00336E10; } }
    set32(c.r[30], 0u + 6u);
    c.budget -= 1;
L_003367B0:
    set32(c.r[3], ld32((c.r[21].w[0] + 540u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003367D8; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003367DC; } }
L_003367D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003367DC:
    set32(c.r[2], ld32((c.r[2].w[0] + 248u)));
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[23], c.r[19].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336E04; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00336818u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00336818u) [[unlikely]] return; }
L_00336818:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033696C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003368C0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003368C0; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00336854u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00336854u) [[unlikely]] return; }
L_00336854:
    c.r[2].d[0] = c.r[2].d[0] ^ 6ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00336880u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00336880u) [[unlikely]] return; }
L_00336880:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[30].d[0];  if (t) { goto L_00336898; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336898u);  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C380u; return; } if (c.pc != 0x00336898u) [[unlikely]] return; }
L_00336898:
    set32(c.r[4], ld32((c.r[21].w[0] + 548u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003368A8u);  if (depth < kMaxDepth) unit_00A3(c, 263u, depth + 1u); else { c.pc = 0x0038FB40u; return; } if (c.pc != 0x003368A8u) [[unlikely]] return; }
L_003368A8:
    set32(c.r[4], c.r[18].w[0] + 128u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003368C0u);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x003368C0u) [[unlikely]] return; }
L_003368C0:
    set32(c.r[3], ld32((c.r[18].w[0] + 412u)));
    set32(c.r[23], c.r[19].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00336DEC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336DEC; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003368F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003368F8u) [[unlikely]] return; }
L_003368F8:
    c.r[2].d[0] = c.r[2].d[0] ^ 6ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 412u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00336924u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00336924u) [[unlikely]] return; }
L_00336924:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[30].d[0];  if (t) { goto L_0033693C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033693Cu);  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C380u; return; } if (c.pc != 0x0033693Cu) [[unlikely]] return; }
L_0033693C:
    set32(c.r[4], ld32((c.r[21].w[0] + 548u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 412u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033694Cu);  if (depth < kMaxDepth) unit_00A3(c, 263u, depth + 1u); else { c.pc = 0x0038FB40u; return; } if (c.pc != 0x0033694Cu) [[unlikely]] return; }
L_0033694C:
    set32(c.r[4], c.r[18].w[0] + 128u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336964u);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x00336964u) [[unlikely]] return; }
L_00336964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336DEC; } }
L_0033696C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[4], c.r[2].w[0] - 11856u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], c.r[29].w[0] + 64u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336994u);  if (depth < kMaxDepth) unit_008E(c, 71u, depth + 1u); else { c.pc = 0x00338FA0u; return; } if (c.pc != 0x00336994u) [[unlikely]] return; }
L_00336994:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 404u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], ld32((c.r[18].w[0] + 412u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[22].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00336A0C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[17].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003369D0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003369D4; } }
L_003369D0:
    set32(c.r[20], 0u + 1u);
    c.budget -= 1;
L_003369D4:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00336A00; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336A34; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00336A34; } }
L_00336A00:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336A34; } }
L_00336A0C:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00336A34; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[6].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00336A34:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00336AB4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[5].d[0];
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00336A64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00336A64u) [[unlikely]] return; }
L_00336A64:
    c.r[2].d[0] = c.r[2].d[0] ^ 6ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00336A8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00336A8Cu) [[unlikely]] return; }
L_00336A8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[30].d[0];  if (t) { goto L_00336AA4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336AA4u);  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C380u; return; } if (c.pc != 0x00336AA4u) [[unlikely]] return; }
L_00336AA4:
    set32(c.r[4], ld32((c.r[21].w[0] + 548u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336AB4u);  if (depth < kMaxDepth) unit_00A3(c, 263u, depth + 1u); else { c.pc = 0x0038FB40u; return; } if (c.pc != 0x00336AB4u) [[unlikely]] return; }
L_00336AB4:
    set32(c.r[23], c.r[19].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00336CE0; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00336AEC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00336AE0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336ADCu);  if (depth < kMaxDepth) unit_008D(c, 68u, depth + 1u); else { c.pc = 0x003347F8u; return; } if (c.pc != 0x00336ADCu) [[unlikely]] return; }
L_00336ADC:
    st32((c.r[18].w[0] + 412u), c.r[2].w[0]);
    c.budget -= 1;
L_00336AE0:
    set32(c.r[20], ld32((c.r[18].w[0] + 412u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336AF0; } }
L_00336AEC:
    set32(c.r[20], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_00336AF0:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_00336B80; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 60u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    ld128((c.r[4].w[0] + 176u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    ld128((c.r[4].w[0] + 64u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    ld128((c.r[4].w[0] + 80u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    st32((c.r[18].w[0] + 8u), c.r[20].w[0]);
    set32(c.r[16], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 156u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00336B48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00336B48u) [[unlikely]] return; }
L_00336B48:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 168u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00336B64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00336B64u) [[unlikely]] return; }
L_00336B64:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 180u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00336B80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00336B80u) [[unlikely]] return; }
L_00336B80:
    set32(c.r[17], ld32((c.r[18].w[0] + 416u)));
    set32(c.r[23], c.r[19].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00336C98; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 416u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336BB8; } }
    c.budget -= 1;
L_00336BA0:
    set32(c.r[17], ld32((c.r[17].w[0] + 416u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 416u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00336BA0u | kUnwind; return; } goto L_00336BA0; } }
L_00336BB8:
    st32((c.r[18].w[0] + 8u), c.r[20].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[5], c.r[5].w[0] + 176u);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 188u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00336BE8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00336BE8u) [[unlikely]] return; }
L_00336BE8:
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    c.r[19].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336BFCu);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x00336BFCu) [[unlikely]] return; }
L_00336BFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00336C1C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336C1C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336C1Cu);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x00336C1Cu) [[unlikely]] return; }
L_00336C1C:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 168u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00336C3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00336C3Cu) [[unlikely]] return; }
L_00336C3C:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] + 80u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336C58u);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x00336C58u) [[unlikely]] return; }
L_00336C58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00336C78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336C78; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336C78u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x00336C78u) [[unlikely]] return; }
L_00336C78:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 180u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00336C98u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00336C98u) [[unlikely]] return; }
L_00336C98:
    set32(c.r[4], ld32((c.r[21].w[0] + 548u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336CA8u);  if (depth < kMaxDepth) unit_00A5(c, 62u, depth + 1u); else { c.pc = 0x00394BA0u; return; } if (c.pc != 0x00336CA8u) [[unlikely]] return; }
L_00336CA8:
    set32(c.r[3], ld32((c.r[18].w[0] + 128u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00336CD0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336CC8u);  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C380u; return; } if (c.pc != 0x00336CC8u) [[unlikely]] return; }
L_00336CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336CE0; } }
L_00336CD0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336CE0u);  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C380u; return; } if (c.pc != 0x00336CE0u) [[unlikely]] return; }
L_00336CE0:
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336DEC; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336D58; } }
    set32(c.r[17], c.r[18].w[0] + 448u);
    set32(c.r[19], c.r[18].w[0] + 464u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336D14u);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x00336D14u) [[unlikely]] return; }
L_00336D14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00336D34; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336D34; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336D34u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x00336D34u) [[unlikely]] return; }
L_00336D34:
    set32(c.r[7], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 200u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 204u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00336D58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00336D58u) [[unlikely]] return; }
L_00336D58:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336DBC; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[17], c.r[18].w[0] + 432u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336D7Cu);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x00336D7Cu) [[unlikely]] return; }
L_00336D7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00336D9C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336D9C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336D9Cu);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x00336D9Cu) [[unlikely]] return; }
L_00336D9C:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 192u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 196u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00336DBCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00336DBCu) [[unlikely]] return; }
L_00336DBC:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65407ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00336DEC; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336DECu);  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C380u; return; } if (c.pc != 0x00336DECu) [[unlikely]] return; }
L_00336DEC:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 63615ull;
    st32((c.r[18].w[0] + 416u), 0u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_00336E04:
    c.r[19].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003367B0u | kUnwind; return; } goto L_003367B0; } }
L_00336E10:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00336E48:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 144u), c.f[20]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4324u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00336FB8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[20] = c.r[1].w[0];
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[21], 0u - 1u);
    set32(c.r[20], 0u + 268u);
    set32(c.r[22], 0u + 1u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336F74; } }
    c.budget -= 1;
L_00336EA8:
    set32(c.r[2], ld32((c.r[17].w[0] + 540u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_00336EC8; } }
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336ECC; } }
L_00336EC8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00336ECC:
    set32(c.r[2], ld32((c.r[2].w[0] + 240u)));
    set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    set32(c.r[16], c.r[4].w[0] + 128u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_00336F6C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336F6C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336F6C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00336F6C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336F6C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336F6C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4328u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336F54; } }
    st32((c.r[29].w[0]), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[20]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336F54u);  if (depth < kMaxDepth) unit_008E(c, 311u, depth + 1u); else { c.pc = 0x0033B670u; return; } if (c.pc != 0x00336F54u) [[unlikely]] return; }
L_00336F54:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336F6Cu);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x00336F6Cu) [[unlikely]] return; }
L_00336F6C:
    set32(c.r[18], c.r[18].w[0] + 544u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_00336F74:
    set32(c.r[2], ld32((c.r[17].w[0] + 540u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_00336F94; } }
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336F98; } }
L_00336F94:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00336F98:
    set32(c.r[2], ld32((c.r[2].w[0] + 236u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00336EA8u | kUnwind; return; } goto L_00336EA8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4328u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336FB8; } }
    st32((c.r[17].w[0] + 4328u), 0u);
    c.budget -= 1;
L_00336FB8:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00336FE8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[20]);
    set32(c.r[3], ld32((c.r[17].w[0] + 540u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033702C; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337030; } }
L_0033702C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00337030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033706C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 540u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00337060; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337064; } }
L_00337060:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00337064:
    set32(c.r[2], ld32((c.r[2].w[0] + 232u)));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0033706C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00337184; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[20] = c.r[1].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033708Cu);  if (depth < kMaxDepth) unit_008D(c, 215u, depth + 1u); else { c.pc = 0x003364A8u; return; } if (c.pc != 0x0033708Cu) [[unlikely]] return; }
L_0033708C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033709Cu);  if (depth < kMaxDepth) unit_008E(c, 329u, depth + 1u); else { c.pc = 0x0033B950u; return; } if (c.pc != 0x0033709Cu) [[unlikely]] return; }
L_0033709C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4280u)));
    st32((c.r[17].w[0] + 4276u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 572u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003370CC; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003370C4u);  if (depth < kMaxDepth) unit_00B6(c, 148u, depth + 1u); else { c.pc = 0x003DACA8u; return; } if (c.pc != 0x003370C4u) [[unlikely]] return; }
L_003370C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003370DC; } }
L_003370CC:
    set32(c.r[4], ld32((c.r[17].w[0] + 548u)));
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003370DCu);  if (depth < kMaxDepth) unit_00A5(c, 84u, depth + 1u); else { c.pc = 0x00394F50u; return; } if (c.pc != 0x003370DCu) [[unlikely]] return; }
L_003370DC:
    set32(c.r[4], ld32((c.r[17].w[0] + 556u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00337108; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 564u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337108; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[12] = c.r[1].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337108u);  if (depth < kMaxDepth) unit_00A5(c, 84u, depth + 1u); else { c.pc = 0x00394F50u; return; } if (c.pc != 0x00337108u) [[unlikely]] return; }
L_00337108:
    st32((c.r[17].w[0] + 4276u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 4280u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00337164; } }
L_00337120:
    set32(c.r[3], ld32((c.r[17].w[0] + 4280u)));
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033714C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 548u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033714Cu);  if (depth < kMaxDepth) unit_00A5(c, 59u, depth + 1u); else { c.pc = 0x00394B58u; return; } if (c.pc != 0x0033714Cu) [[unlikely]] return; }
L_0033714C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4280u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00337120u | kUnwind; return; } goto L_00337120; } }
L_00337164:
    set32(c.r[2], ld32((c.r[17].w[0] + 4280u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337178u);  if (depth < kMaxDepth) unit_008D(c, 277u, depth + 1u); else { c.pc = 0x003371A0u; return; } if (c.pc != 0x00337178u) [[unlikely]] return; }
L_00337178:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337184u);  if (depth < kMaxDepth) unit_008B(c, 294u, depth + 1u); else { c.pc = 0x0032F368u; return; } if (c.pc != 0x00337184u) [[unlikely]] return; }
L_00337184:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003371A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 540u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003371F4; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003371F8; } }
L_003371F4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003371F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337234; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 540u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00337228; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033722C; } }
L_00337228:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033722C:
    set32(c.r[2], ld32((c.r[2].w[0] + 232u)));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00337234:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00337418; } }
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[21], 0u - 1u);
    set32(c.r[20], 0u + 268u);
    set32(c.r[22], 0u + 3u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003373E4; } }
    c.budget -= 1;
L_00337258:
    set32(c.r[2], ld32((c.r[17].w[0] + 540u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_00337278; } }
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033727C; } }
L_00337278:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033727C:
    set32(c.r[2], ld32((c.r[2].w[0] + 248u)));
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[18], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003372F4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003372F4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003372CCu);  if (depth < kMaxDepth) unit_008E(c, 325u, depth + 1u); else { c.pc = 0x0033B890u; return; } if (c.pc != 0x003372CCu) [[unlikely]] return; }
L_003372CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003372E8u);  if (depth < kMaxDepth) unit_008E(c, 325u, depth + 1u); else { c.pc = 0x0033B890u; return; } if (c.pc != 0x003372E8u) [[unlikely]] return; }
L_003372E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003372F4u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x003372F4u) [[unlikely]] return; }
L_003372F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003373E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003373E0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00337340; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_00337340; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 596u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337340; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00337340u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00337340u) [[unlikely]] return; }
L_00337340:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00337374; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00337374; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_00337374:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003373E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033739C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003373E0; } }
L_0033739C:
    set32(c.r[2], c.r[16].w[0] + 128u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_003373C4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_003373C8; } }
L_003373C4:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_003373C8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003373E0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 588u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 592u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003373E0u);  if (depth < kMaxDepth) unit_008E(c, 12u, depth + 1u); else { c.pc = 0x00338138u; return; } if (c.pc != 0x003373E0u) [[unlikely]] return; }
L_003373E0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_003373E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 540u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_00337404; } }
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337408; } }
L_00337404:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00337408:
    set32(c.r[2], ld32((c.r[2].w[0] + 244u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00337258u | kUnwind; return; } goto L_00337258; } }
L_00337418:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00337448:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[7].w[0] + 540u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00337480; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337484; } }
L_00337474:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00337480:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00337484:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337524; } }
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[7].w[0] + 540u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003374EC; } }
    c.budget -= 1;
L_003374A0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_003374C4; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003374C8; } }
L_003374C4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003374C8:
    set32(c.r[2], 0u + 544u);
    set32(c.r[4], ld32((c.r[3].w[0] + 240u)));
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00337474u | kUnwind; return; } goto L_00337474; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_003374EC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_00337510; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337514; } }
L_00337510:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00337514:
    set32(c.r[2], ld32((c.r[2].w[0] + 236u)));
    c.r[2].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003374A0u | kUnwind; return; } goto L_003374A0; } }
L_00337524:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00337530:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[7].w[0] + 540u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033755C; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337560; } }
L_0033755C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00337560:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337610; } }
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[7].w[0] + 540u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003375C0; } }
L_00337578:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0033759C; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003375A0; } }
L_0033759C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003375A0:
    set32(c.r[4], ld32((c.r[2].w[0] + 256u)));
    set32(c.r[2], c.r[8].w[0] << 7);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00337604; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_003375C0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_003375E4; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003375E8; } }
L_003375E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003375E8:
    set32(c.r[2], ld32((c.r[2].w[0] + 252u)));
    c.r[2].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00337578u | kUnwind; return; } goto L_00337578; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00337604:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00337610:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00337620:
    set32(c.r[29], c.r[29].w[0] - 64u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    ld128((c.r[3].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    vu::mul(c.vu0, 14u, 1u, 2u, 2u);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 3u, c.vu0.vf[1].w[2]);
    vu::sqrt(c.vu0, c.vu0.vf[1].w[0]);
    vu::addbc(c.vu0, 8u, 1u, 0u, c.vu0.q);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    c.r[2] = c.vu0.vf[1];
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[12], c.f[0]);
    set32(c.r[2], c.f[12]);
    c.vu0.vf[1] = c.r[2];
    vu::mulbc(c.vu0, 15u, 2u, 2u, c.vu0.vf[1].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    set32(c.r[16], ld32((c.r[5].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003376A0u);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x003376A0u) [[unlikely]] return; }
L_003376A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003376C0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003376C0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003376C0u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x003376C0u) [[unlikely]] return; }
L_003376C0:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 180u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003376E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003376E0u) [[unlikely]] return; }
L_003376E0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003376F8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[5], ld32((c.r[4].w[0] + 112u)));
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    ld128((c.r[2].w[0] + 64u) & ~15u, c.vu0.vf[2]);
    vu::mul(c.vu0, 14u, 1u, 2u, 2u);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 3u, c.vu0.vf[1].w[2]);
    vu::sqrt(c.vu0, c.vu0.vf[1].w[0]);
    vu::addbc(c.vu0, 8u, 1u, 0u, c.vu0.q);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    c.r[2] = c.vu0.vf[1];
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[12], c.f[0]);
    set32(c.r[2], c.f[12]);
    c.vu0.vf[1] = c.r[2];
    vu::mulbc(c.vu0, 15u, 2u, 2u, c.vu0.vf[1].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    set32(c.r[16], ld32((c.r[5].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337788u);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x00337788u) [[unlikely]] return; }
L_00337788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003377A8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003377A8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003377A8u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x003377A8u) [[unlikely]] return; }
L_003377A8:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 168u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003377C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003377C8u) [[unlikely]] return; }
L_003377C8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003377E0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    set32(c.r[16], c.r[17].w[0] + 192u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[18], c.r[2].w[0] - 11856u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[17].w[0] + 240u));
    c.f[2] = ld32((c.r[17].w[0] + 244u));
    c.f[3] = ld32((c.r[17].w[0] + 248u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 100u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 32u), c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[3]);
    st32((c.r[17].w[0] + 108u), c.f[4]);
    st128((c.r[17].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    st32((c.r[17].w[0] + 44u), c.f[4]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337870u);  if (depth < kMaxDepth) unit_008C(c, 4u, depth + 1u); else { c.pc = 0x003300D8u; return; } if (c.pc != 0x00337870u) [[unlikely]] return; }
L_00337870:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337880u);  if (depth < kMaxDepth) unit_00C2(c, 177u, depth + 1u); else { c.pc = 0x0040A1E0u; return; } if (c.pc != 0x00337880u) [[unlikely]] return; }
L_00337880:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 588u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 84u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003378A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003378A4u) [[unlikely]] return; }
L_003378A4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003378B8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_003378B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003378C4u);  if (depth < kMaxDepth) unit_00A0(c, 127u, depth + 1u); else { c.pc = 0x00381840u; return; } if (c.pc != 0x003378C4u) [[unlikely]] return; }
L_003378C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003378F4; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003378F4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 548u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003378F4u);  if (depth < kMaxDepth) unit_00A5(c, 59u, depth + 1u); else { c.pc = 0x00394B58u; return; } if (c.pc != 0x003378F4u) [[unlikely]] return; }
L_003378F4:
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[18], c.r[17].w[0] + 48u);
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.r[20].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[1] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[29].w[0] + 64u), c.f[3]);
    st32((c.r[29].w[0] + 68u), c.f[2]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    st32((c.r[29].w[0] + 76u), c.f[1]);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[16], ld32((c.r[3].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033793Cu);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x0033793Cu) [[unlikely]] return; }
L_0033793C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033795C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033795C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033795Cu);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x0033795Cu) [[unlikely]] return; }
L_0033795C:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033797C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00337980; } }
L_0033797C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00337980:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003379AC; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 60u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 156u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003379ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003379ACu) [[unlikely]] return; }
L_003379AC:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] - 17168u);
    set32(c.r[16], ld32((c.r[3].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003379CCu);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x003379CCu) [[unlikely]] return; }
L_003379CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003379EC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003379EC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003379ECu);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x003379ECu) [[unlikely]] return; }
L_003379EC:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], c.r[19].w[0] - 17168u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 168u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00337A10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00337A10u) [[unlikely]] return; }
L_00337A10:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337A24u);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x00337A24u) [[unlikely]] return; }
L_00337A24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00337A44; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337A44; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337A44u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x00337A44u) [[unlikely]] return; }
L_00337A44:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 180u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00337A64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00337A64u) [[unlikely]] return; }
L_00337A64:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00337A7C; } }
    set32(c.r[16], ld32((c.r[3].w[0] + 412u)));
    c.budget -= 1;
L_00337A7C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00337BA0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337A90u);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x00337A90u) [[unlikely]] return; }
L_00337A90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00337AB0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337AB0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337AB0u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x00337AB0u) [[unlikely]] return; }
L_00337AB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337AD0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00337AD4; } }
L_00337AD0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00337AD4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00337B00; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 60u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 156u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00337B00u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00337B00u) [[unlikely]] return; }
L_00337B00:
    set32(c.r[18], c.r[19].w[0] - 17168u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337B10u);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x00337B10u) [[unlikely]] return; }
L_00337B10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00337B30; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337B30; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337B30u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x00337B30u) [[unlikely]] return; }
L_00337B30:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], c.r[19].w[0] - 17168u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 168u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00337B54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00337B54u) [[unlikely]] return; }
L_00337B54:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337B60u);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x00337B60u) [[unlikely]] return; }
L_00337B60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00337B80; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337B80; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337B80u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x00337B80u) [[unlikely]] return; }
L_00337B80:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 180u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00337BA0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00337BA0u) [[unlikely]] return; }
L_00337BA0:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337BB8u);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x00337BB8u) [[unlikely]] return; }
L_00337BB8:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00337BE8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    set32(c.r[4], c.r[16].w[0] + 192u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337C2Cu);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x00337C2Cu) [[unlikely]] return; }
L_00337C2C:
    st32((c.r[16].w[0] + 112u), c.r[18].w[0]);
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    st32((c.r[16].w[0]), c.r[19].w[0]);
    set32(c.r[4], c.r[16].w[0] + 16u);
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[5], c.r[16].w[0] + 32u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 36u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    st32((c.r[16].w[0] + 44u), c.f[20]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337C84u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00337C84u) [[unlikely]] return; }
L_00337C84:
    st32((c.r[16].w[0] + 108u), c.f[20]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[16].w[0] + 96u), 0u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 80u) & ~15u, c.r[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337CACu);  if (depth < kMaxDepth) unit_008C(c, 4u, depth + 1u); else { c.pc = 0x003300D8u; return; } if (c.pc != 0x00337CACu) [[unlikely]] return; }
L_00337CAC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337CBCu);  if (depth < kMaxDepth) unit_00C2(c, 177u, depth + 1u); else { c.pc = 0x0040A1E0u; return; } if (c.pc != 0x00337CBCu) [[unlikely]] return; }
L_00337CBC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 64u) & ~15u, c.r[3]);
    st32((c.r[16].w[0] + 76u), c.f[20]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00337CF8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[18].w[0] + 112u)));
    c.budget -= 16;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00337E78; } }
    set32(c.r[2], c.r[17].w[0] - 2u);
    set32(c.r[20], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337DC8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00337D7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337D64u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x00337D64u) [[unlikely]] return; }
L_00337D64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337D7C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337D80; } }
L_00337D7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_00337D80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337DA8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337DA8; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.r[19].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00337DA8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00337DC8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[17], 0u + 4u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_00337DC8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00337DD4; } }
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_00337DD4:
    st32((c.r[18].w[0]), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[17].d[0];  if (t) { goto L_00337E44; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[18].w[0] + 112u)));
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337E44; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00337E1C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337E14u);  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C380u; return; } if (c.pc != 0x00337E14u) [[unlikely]] return; }
L_00337E14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337E28; } }
L_00337E1C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337E28u);  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C380u; return; } if (c.pc != 0x00337E28u) [[unlikely]] return; }
L_00337E28:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00337E44; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337E44u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x00337E44u) [[unlikely]] return; }
L_00337E44:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 112u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00340000u);
    st32((c.r[29].w[0]), c.r[21].w[0]);
    set32(c.r[4], c.r[4].w[0] - 11856u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 18480u);
    c.r[9].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337E78u);  if (depth < kMaxDepth) unit_008E(c, 71u, depth + 1u); else { c.pc = 0x00338FA0u; return; } if (c.pc != 0x00337E78u) [[unlikely]] return; }
L_00337E78:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00337EA8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[2] = c.r[1].w[0];
    set32(c.r[16], c.r[16].w[0] - 11856u);
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    set32(c.r[18], c.r[17].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    st32((c.r[17].w[0] + 96u), 0u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 100u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 108u), c.f[3]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    st128((c.r[17].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    st32((c.r[17].w[0] + 44u), c.f[3]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337F34u);  if (depth < kMaxDepth) unit_008C(c, 4u, depth + 1u); else { c.pc = 0x003300D8u; return; } if (c.pc != 0x00337F34u) [[unlikely]] return; }
L_00337F34:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337F44u);  if (depth < kMaxDepth) unit_00C2(c, 177u, depth + 1u); else { c.pc = 0x0040A1E0u; return; } if (c.pc != 0x00337F44u) [[unlikely]] return; }
L_00337F44:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[17].w[0] + 192u);
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 588u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 84u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00337F68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00337F68u) [[unlikely]] return; }
L_00337F68:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 548u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337F7Cu);  if (depth < kMaxDepth) unit_00A5(c, 59u, depth + 1u); else { c.pc = 0x00394B58u; return; } if (c.pc != 0x00337F7Cu) [[unlikely]] return; }
L_00337F7C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00337F94; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_00337F94:
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 40u));
    c.f[3] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[2]);
    st32((c.r[29].w[0] + 76u), c.f[3]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[16], ld32((c.r[3].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337FD0u);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x00337FD0u) [[unlikely]] return; }
L_00337FD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00337FF0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337FF0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337FF0u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x00337FF0u) [[unlikely]] return; }
L_00337FF0:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_008E(c, 3u, depth); } }
    [[clang::musttail]] return unit_008E(c, 2u, depth);
}

}
