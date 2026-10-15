#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0097[4096] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 0, 0, 13, 0, 14, 0, 0, 15, 0, 16, 0,
    0, 17, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35,
    0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0,
    0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0,
    0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0,
    0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 195,
    0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0,
    0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0,
    0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0,
    0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0,
    223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0,
    0, 0, 232, 0, 0, 0, 233, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254,
    0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269,
    0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0,
    0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0,
    0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 342, 0, 343, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0,
    348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0097(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0035C000;
    case 2u: goto L_0035C010;
    case 3u: goto L_0035C01C;
    case 4u: goto L_0035C02C;
    case 5u: goto L_0035C038;
    case 6u: goto L_0035C05C;
    case 7u: goto L_0035C0C0;
    case 8u: goto L_0035C0CC;
    case 9u: goto L_0035C0F8;
    case 10u: goto L_0035C138;
    case 11u: goto L_0035C144;
    case 12u: goto L_0035C14C;
    case 13u: goto L_0035C15C;
    case 14u: goto L_0035C164;
    case 15u: goto L_0035C170;
    case 16u: goto L_0035C178;
    case 17u: goto L_0035C184;
    case 18u: goto L_0035C18C;
    case 19u: goto L_0035C198;
    case 20u: goto L_0035C1B4;
    case 21u: goto L_0035C1BC;
    case 22u: goto L_0035C204;
    case 23u: goto L_0035C20C;
    case 24u: goto L_0035C21C;
    case 25u: goto L_0035C228;
    case 26u: goto L_0035C240;
    case 27u: goto L_0035C288;
    case 28u: goto L_0035C290;
    case 29u: goto L_0035C2B8;
    case 30u: goto L_0035C2E8;
    case 31u: goto L_0035C2F4;
    case 32u: goto L_0035C320;
    case 33u: goto L_0035C350;
    case 34u: goto L_0035C35C;
    case 35u: goto L_0035C37C;
    case 36u: goto L_0035C394;
    case 37u: goto L_0035C3B8;
    case 38u: goto L_0035C3C0;
    case 39u: goto L_0035C3D8;
    case 40u: goto L_0035C410;
    case 41u: goto L_0035C41C;
    case 42u: goto L_0035C438;
    case 43u: goto L_0035C45C;
    case 44u: goto L_0035C478;
    case 45u: goto L_0035C490;
    case 46u: goto L_0035C4B8;
    case 47u: goto L_0035C4D4;
    case 48u: goto L_0035C4FC;
    case 49u: goto L_0035C5A8;
    case 50u: goto L_0035C5C8;
    case 51u: goto L_0035C5D4;
    case 52u: goto L_0035C5D8;
    case 53u: goto L_0035C600;
    case 54u: goto L_0035C64C;
    case 55u: goto L_0035C708;
    case 56u: goto L_0035C74C;
    case 57u: goto L_0035C78C;
    case 58u: goto L_0035C7B0;
    case 59u: goto L_0035C7C8;
    case 60u: goto L_0035C7F0;
    case 61u: goto L_0035C820;
    case 62u: goto L_0035C840;
    case 63u: goto L_0035C84C;
    case 64u: goto L_0035C870;
    case 65u: goto L_0035C8A0;
    case 66u: goto L_0035C8A8;
    case 67u: goto L_0035C8E0;
    case 68u: goto L_0035C8E8;
    case 69u: goto L_0035C930;
    case 70u: goto L_0035C958;
    case 71u: goto L_0035C978;
    case 72u: goto L_0035C9C4;
    case 73u: goto L_0035CA08;
    case 74u: goto L_0035CA30;
    case 75u: goto L_0035CA48;
    case 76u: goto L_0035CA54;
    case 77u: goto L_0035CA90;
    case 78u: goto L_0035CA98;
    case 79u: goto L_0035CAB0;
    case 80u: goto L_0035CAD0;
    case 81u: goto L_0035CAD8;
    case 82u: goto L_0035CAF0;
    case 83u: goto L_0035CB10;
    case 84u: goto L_0035CB88;
    case 85u: goto L_0035CBC0;
    case 86u: goto L_0035CBD8;
    case 87u: goto L_0035CC18;
    case 88u: goto L_0035CC50;
    case 89u: goto L_0035CC84;
    case 90u: goto L_0035CCA4;
    case 91u: goto L_0035CCAC;
    case 92u: goto L_0035CCBC;
    case 93u: goto L_0035CD44;
    case 94u: goto L_0035CD74;
    case 95u: goto L_0035CD9C;
    case 96u: goto L_0035CDC0;
    case 97u: goto L_0035CE28;
    case 98u: goto L_0035CE38;
    case 99u: goto L_0035CE50;
    case 100u: goto L_0035CE68;
    case 101u: goto L_0035CE98;
    case 102u: goto L_0035CEA8;
    case 103u: goto L_0035CEB0;
    case 104u: goto L_0035CEB8;
    case 105u: goto L_0035CEE0;
    case 106u: goto L_0035CEF0;
    case 107u: goto L_0035CF00;
    case 108u: goto L_0035CF88;
    case 109u: goto L_0035CFA0;
    case 110u: goto L_0035CFC0;
    case 111u: goto L_0035D010;
    case 112u: goto L_0035D020;
    case 113u: goto L_0035D038;
    case 114u: goto L_0035D050;
    case 115u: goto L_0035D080;
    case 116u: goto L_0035D0A0;
    case 117u: goto L_0035D0C4;
    case 118u: goto L_0035D0D4;
    case 119u: goto L_0035D100;
    case 120u: goto L_0035D134;
    case 121u: goto L_0035D14C;
    case 122u: goto L_0035D170;
    case 123u: goto L_0035D190;
    case 124u: goto L_0035D1CC;
    case 125u: goto L_0035D200;
    case 126u: goto L_0035D23C;
    case 127u: goto L_0035D24C;
    case 128u: goto L_0035D258;
    case 129u: goto L_0035D274;
    case 130u: goto L_0035D288;
    case 131u: goto L_0035D2E8;
    case 132u: goto L_0035D354;
    case 133u: goto L_0035D36C;
    case 134u: goto L_0035D394;
    case 135u: goto L_0035D3D8;
    case 136u: goto L_0035D3F0;
    case 137u: goto L_0035D418;
    case 138u: goto L_0035D438;
    case 139u: goto L_0035D450;
    case 140u: goto L_0035D460;
    case 141u: goto L_0035D498;
    case 142u: goto L_0035D4D8;
    case 143u: goto L_0035D514;
    case 144u: goto L_0035D520;
    case 145u: goto L_0035D538;
    case 146u: goto L_0035D580;
    case 147u: goto L_0035D58C;
    case 148u: goto L_0035D598;
    case 149u: goto L_0035D614;
    case 150u: goto L_0035D64C;
    case 151u: goto L_0035D668;
    case 152u: goto L_0035D684;
    case 153u: goto L_0035D6A8;
    case 154u: goto L_0035D6F8;
    case 155u: goto L_0035D744;
    case 156u: goto L_0035D760;
    case 157u: goto L_0035D7A0;
    case 158u: goto L_0035D7D8;
    case 159u: goto L_0035D7F8;
    case 160u: goto L_0035D808;
    case 161u: goto L_0035D828;
    case 162u: goto L_0035D85C;
    case 163u: goto L_0035D878;
    case 164u: goto L_0035D898;
    case 165u: goto L_0035D8DC;
    case 166u: goto L_0035D8F8;
    case 167u: goto L_0035D910;
    case 168u: goto L_0035D98C;
    case 169u: goto L_0035D99C;
    case 170u: goto L_0035D9B0;
    case 171u: goto L_0035D9C8;
    case 172u: goto L_0035DA10;
    case 173u: goto L_0035DA30;
    case 174u: goto L_0035DAC0;
    case 175u: goto L_0035DAE8;
    case 176u: goto L_0035DB00;
    case 177u: goto L_0035DB18;
    case 178u: goto L_0035DB38;
    case 179u: goto L_0035DB70;
    case 180u: goto L_0035DB90;
    case 181u: goto L_0035DBB0;
    case 182u: goto L_0035DBCC;
    case 183u: goto L_0035DBE0;
    case 184u: goto L_0035DC3C;
    case 185u: goto L_0035DC50;
    case 186u: goto L_0035DC70;
    case 187u: goto L_0035DC98;
    case 188u: goto L_0035DCDC;
    case 189u: goto L_0035DCFC;
    case 190u: goto L_0035DD38;
    case 191u: goto L_0035DD88;
    case 192u: goto L_0035DDA0;
    case 193u: goto L_0035DDD8;
    case 194u: goto L_0035DDE8;
    case 195u: goto L_0035DDFC;
    case 196u: goto L_0035DE10;
    case 197u: goto L_0035DE48;
    case 198u: goto L_0035DE94;
    case 199u: goto L_0035DEA0;
    case 200u: goto L_0035DEC0;
    case 201u: goto L_0035DEE8;
    case 202u: goto L_0035DEF8;
    case 203u: goto L_0035DF10;
    case 204u: goto L_0035DF1C;
    case 205u: goto L_0035DF58;
    case 206u: goto L_0035DF68;
    case 207u: goto L_0035DFB8;
    case 208u: goto L_0035DFE0;
    case 209u: goto L_0035DFF8;
    case 210u: goto L_0035E00C;
    case 211u: goto L_0035E030;
    case 212u: goto L_0035E048;
    case 213u: goto L_0035E068;
    case 214u: goto L_0035E088;
    case 215u: goto L_0035E0E8;
    case 216u: goto L_0035E13C;
    case 217u: goto L_0035E15C;
    case 218u: goto L_0035E1A0;
    case 219u: goto L_0035E1B8;
    case 220u: goto L_0035E1C8;
    case 221u: goto L_0035E1E8;
    case 222u: goto L_0035E1F8;
    case 223u: goto L_0035E200;
    case 224u: goto L_0035E210;
    case 225u: goto L_0035E220;
    case 226u: goto L_0035E228;
    case 227u: goto L_0035E238;
    case 228u: goto L_0035E248;
    case 229u: goto L_0035E258;
    case 230u: goto L_0035E268;
    case 231u: goto L_0035E278;
    case 232u: goto L_0035E288;
    case 233u: goto L_0035E298;
    case 234u: goto L_0035E2A0;
    case 235u: goto L_0035E2B0;
    case 236u: goto L_0035E2C0;
    case 237u: goto L_0035E2F0;
    case 238u: goto L_0035E430;
    case 239u: goto L_0035E4D0;
    case 240u: goto L_0035E528;
    case 241u: goto L_0035E558;
    case 242u: goto L_0035E610;
    case 243u: goto L_0035E6B8;
    case 244u: goto L_0035E758;
    case 245u: goto L_0035E7C0;
    case 246u: goto L_0035E7F0;
    case 247u: goto L_0035E9D8;
    case 248u: goto L_0035EA04;
    case 249u: goto L_0035EA18;
    case 250u: goto L_0035EA58;
    case 251u: goto L_0035EA78;
    case 252u: goto L_0035EAAC;
    case 253u: goto L_0035EAC0;
    case 254u: goto L_0035EAFC;
    case 255u: goto L_0035EB14;
    case 256u: goto L_0035EB3C;
    case 257u: goto L_0035EB58;
    case 258u: goto L_0035EB90;
    case 259u: goto L_0035EBA0;
    case 260u: goto L_0035EBC4;
    case 261u: goto L_0035EBE0;
    case 262u: goto L_0035EC1C;
    case 263u: goto L_0035EC24;
    case 264u: goto L_0035EC2C;
    case 265u: goto L_0035EC48;
    case 266u: goto L_0035ECB8;
    case 267u: goto L_0035ED00;
    case 268u: goto L_0035ED20;
    case 269u: goto L_0035ED7C;
    case 270u: goto L_0035EDA0;
    case 271u: goto L_0035EDD4;
    case 272u: goto L_0035EDE0;
    case 273u: goto L_0035EE58;
    case 274u: goto L_0035EEBC;
    case 275u: goto L_0035EED0;
    case 276u: goto L_0035EF10;
    case 277u: goto L_0035EF90;
    case 278u: goto L_0035EFB0;
    case 279u: goto L_0035EFC8;
    case 280u: goto L_0035F040;
    case 281u: goto L_0035F088;
    case 282u: goto L_0035F0A4;
    case 283u: goto L_0035F114;
    case 284u: goto L_0035F138;
    case 285u: goto L_0035F160;
    case 286u: goto L_0035F1A8;
    case 287u: goto L_0035F1C8;
    case 288u: goto L_0035F21C;
    case 289u: goto L_0035F260;
    case 290u: goto L_0035F270;
    case 291u: goto L_0035F2A0;
    case 292u: goto L_0035F2C8;
    case 293u: goto L_0035F2E0;
    case 294u: goto L_0035F2F8;
    case 295u: goto L_0035F308;
    case 296u: goto L_0035F320;
    case 297u: goto L_0035F330;
    case 298u: goto L_0035F358;
    case 299u: goto L_0035F384;
    case 300u: goto L_0035F3B8;
    case 301u: goto L_0035F400;
    case 302u: goto L_0035F418;
    case 303u: goto L_0035F440;
    case 304u: goto L_0035F4A4;
    case 305u: goto L_0035F4EC;
    case 306u: goto L_0035F518;
    case 307u: goto L_0035F520;
    case 308u: goto L_0035F558;
    case 309u: goto L_0035F5A4;
    case 310u: goto L_0035F5BC;
    case 311u: goto L_0035F5C8;
    case 312u: goto L_0035F634;
    case 313u: goto L_0035F65C;
    case 314u: goto L_0035F684;
    case 315u: goto L_0035F6A4;
    case 316u: goto L_0035F6F8;
    case 317u: goto L_0035F714;
    case 318u: goto L_0035F73C;
    case 319u: goto L_0035F778;
    case 320u: goto L_0035F7A8;
    case 321u: goto L_0035F7B0;
    case 322u: goto L_0035F7B8;
    case 323u: goto L_0035F7C8;
    case 324u: goto L_0035F82C;
    case 325u: goto L_0035F854;
    case 326u: goto L_0035F8A4;
    case 327u: goto L_0035F8D8;
    case 328u: goto L_0035F8F0;
    case 329u: goto L_0035F918;
    case 330u: goto L_0035F930;
    case 331u: goto L_0035F950;
    case 332u: goto L_0035F968;
    case 333u: goto L_0035F9A0;
    case 334u: goto L_0035F9D8;
    case 335u: goto L_0035FA58;
    case 336u: goto L_0035FA94;
    case 337u: goto L_0035FB30;
    case 338u: goto L_0035FB58;
    case 339u: goto L_0035FBB0;
    case 340u: goto L_0035FBCC;
    case 341u: goto L_0035FBDC;
    case 342u: goto L_0035FBE4;
    case 343u: goto L_0035FBEC;
    case 344u: goto L_0035FC20;
    case 345u: goto L_0035FC90;
    case 346u: goto L_0035FCDC;
    case 347u: goto L_0035FCF4;
    case 348u: goto L_0035FD00;
    case 349u: goto L_0035FD44;
    case 350u: goto L_0035FDAC;
    case 351u: goto L_0035FDC8;
    case 352u: goto L_0035FDF8;
    case 353u: goto L_0035FE30;
    case 354u: goto L_0035FE88;
    case 355u: goto L_0035FEC4;
    case 356u: goto L_0035FEDC;
    case 357u: goto L_0035FF90;
    case 358u: goto L_0035FFC8;
    default: bad_entry(c, 0x0035C000u); return;
    }
L_0035C000:
    set32(c.r[19], 0u + 1u);
    st32((c.r[18].w[0] + 24u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C5D0; } }
L_0035C010:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C5D0; } }
L_0035C01C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[19], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C02Cu);  if (depth < kMaxDepth) unit_0096(c, 293u, depth + 1u); else { c.pc = 0x0035B918u; return; } if (c.pc != 0x0035C02Cu) [[unlikely]] return; }
L_0035C02C:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C5D0; } }
L_0035C038:
    st32((c.r[18].w[0] + 48u), 0u);
    st32((c.r[18].w[0]), 0u);
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0] + 20u), 0u);
    st32((c.r[18].w[0] + 24u), 0u);
    st32((c.r[18].w[0] + 28u), 0u);
    st32((c.r[18].w[0] + 32u), 0u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C5D8; } }
L_0035C05C:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035C098; } }
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035C0A8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0035C0A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C0A8; } }
L_0035C098:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C0A8; } }
L_0035C0A4:
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_0035C0A8:
    set32(c.r[6], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] + 26848u);
    set32(c.r[19], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C0C0u);  if (depth < kMaxDepth) unit_0093(c, 247u, depth + 1u); else { c.pc = 0x0034E908u; return; } if (c.pc != 0x0035C0C0u) [[unlikely]] return; }
L_0035C0C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C5D0; } }
L_0035C0CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 32380u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035C5C8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 360u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C0F8u);  if (depth < kMaxDepth) unit_006C(c, 114u, depth + 1u); else { c.pc = 0x002B1418u; return; } if (c.pc != 0x0035C0F8u) [[unlikely]] return; }
L_0035C0F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035C5C8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C198; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 5392u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0035C000u < 16384u) { entry = entries_0097[(t - 0x0035C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035C138:
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C144u);  if (depth < kMaxDepth) unit_006C(c, 70u, depth + 1u); else { c.pc = 0x002B0C40u; return; } if (c.pc != 0x0035C144u) [[unlikely]] return; }
L_0035C144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C198; } }
L_0035C14C:
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[17], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C15Cu);  if (depth < kMaxDepth) unit_006C(c, 68u, depth + 1u); else { c.pc = 0x002B0C20u; return; } if (c.pc != 0x0035C15Cu) [[unlikely]] return; }
L_0035C15C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C198; } }
L_0035C164:
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C170u);  if (depth < kMaxDepth) unit_006C(c, 69u, depth + 1u); else { c.pc = 0x002B0C30u; return; } if (c.pc != 0x0035C170u) [[unlikely]] return; }
L_0035C170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C198; } }
L_0035C178:
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C184u);  if (depth < kMaxDepth) unit_006C(c, 71u, depth + 1u); else { c.pc = 0x002B0C70u; return; } if (c.pc != 0x0035C184u) [[unlikely]] return; }
L_0035C184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C198; } }
L_0035C18C:
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C198u);  if (depth < kMaxDepth) unit_006C(c, 72u, depth + 1u); else { c.pc = 0x002B0CA0u; return; } if (c.pc != 0x0035C198u) [[unlikely]] return; }
L_0035C198:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0035C5C8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 32380u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C1B4u);  if (depth < kMaxDepth) unit_006C(c, 102u, depth + 1u); else { c.pc = 0x002B1170u; return; } if (c.pc != 0x0035C1B4u) [[unlikely]] return; }
L_0035C1B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C5C8; } }
L_0035C1BC:
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 360u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035C5C8; } }
    set32(c.r[6], ld32((c.r[5].w[0] + 584u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0035C5C8; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[5].w[0] + 584u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C204u);  if (depth < kMaxDepth) unit_0095(c, 474u, depth + 1u); else { c.pc = 0x00357E78u; return; } if (c.pc != 0x0035C204u) [[unlikely]] return; }
L_0035C204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C5C8; } }
L_0035C20C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[19], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C21Cu);  if (depth < kMaxDepth) unit_0096(c, 305u, depth + 1u); else { c.pc = 0x0035BBF0u; return; } if (c.pc != 0x0035C21Cu) [[unlikely]] return; }
L_0035C21C:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C5D0; } }
L_0035C228:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C244; } }
    c.budget -= 1;
L_0035C240:
    set32(c.r[3], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 1;
L_0035C244:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035C5C8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C240u | kUnwind; return; } goto L_0035C240; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035C5C8; } }
    st32((c.r[3].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 52u), 0u);
    st32((c.r[3].w[0] + 48u), c.r[18].w[0]);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 32u), 0u);
    st32((c.r[3].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 24u), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 36u), 0u);
    st32((c.r[3].w[0] + 16u), 0u);
    c.budget -= 10;
L_0035C288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C5C8; } }
L_0035C290:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[19], 0u + 1u);
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C2B8u);  if (depth < kMaxDepth) unit_0097(c, 60u, depth + 1u); else { c.pc = 0x0035C7F0u; return; } if (c.pc != 0x0035C2B8u) [[unlikely]] return; }
L_0035C2B8:
    st32((c.r[17].w[0] + 52u), c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    st32((c.r[17].w[0] + 28u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[5], c.r[5].w[0] - 21424u);
    set32(c.r[6], c.r[6].w[0] - 21744u);
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 360u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C2E8u);  if (depth < kMaxDepth) unit_00A0(c, 187u, depth + 1u); else { c.pc = 0x00382418u; return; } if (c.pc != 0x0035C2E8u) [[unlikely]] return; }
L_0035C2E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C5D0; } }
L_0035C2F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[19], 0u + 1u);
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[17], c.r[17].w[0] + 60u);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.r[16].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C320u);  if (depth < kMaxDepth) unit_0097(c, 60u, depth + 1u); else { c.pc = 0x0035C7F0u; return; } if (c.pc != 0x0035C320u) [[unlikely]] return; }
L_0035C320:
    st32((c.r[17].w[0] + 52u), c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    st32((c.r[17].w[0] + 28u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[5], c.r[5].w[0] - 21424u);
    set32(c.r[6], c.r[6].w[0] - 21744u);
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 360u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C350u);  if (depth < kMaxDepth) unit_00A0(c, 187u, depth + 1u); else { c.pc = 0x00382418u; return; } if (c.pc != 0x0035C350u) [[unlikely]] return; }
L_0035C350:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C5D0; } }
L_0035C35C:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[19], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C5D8; } }
L_0035C37C:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 9488u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C394u);  if (depth < kMaxDepth) unit_0094(c, 140u, depth + 1u); else { c.pc = 0x00351AA0u; return; } if (c.pc != 0x0035C394u) [[unlikely]] return; }
L_0035C394:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0035C5C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 14192u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C3B8u);  if (depth < kMaxDepth) unit_0096(c, 232u, depth + 1u); else { c.pc = 0x0035AFF0u; return; } if (c.pc != 0x0035C3B8u) [[unlikely]] return; }
L_0035C3B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C5C8; } }
L_0035C3C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 360u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C3D8u);  if (depth < kMaxDepth) unit_0085(c, 62u, depth + 1u); else { c.pc = 0x00314A18u; return; } if (c.pc != 0x0035C3D8u) [[unlikely]] return; }
L_0035C3D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035C438; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_0035C438; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035C42C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C410u);  if (depth < kMaxDepth) unit_0084(c, 189u, depth + 1u); else { c.pc = 0x003129E8u; return; } if (c.pc != 0x0035C410u) [[unlikely]] return; }
L_0035C410:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C41Cu);  if (depth < kMaxDepth) unit_0085(c, 56u, depth + 1u); else { c.pc = 0x00314928u; return; } if (c.pc != 0x0035C41Cu) [[unlikely]] return; }
L_0035C41C:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C438; } }
L_0035C42C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C438u);  if (depth < kMaxDepth) unit_0085(c, 53u, depth + 1u); else { c.pc = 0x003148D0u; return; } if (c.pc != 0x0035C438u) [[unlikely]] return; }
L_0035C438:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035C464; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_0035C464; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C45Cu);  if (depth < kMaxDepth) unit_0085(c, 60u, depth + 1u); else { c.pc = 0x003149A0u; return; } if (c.pc != 0x0035C45Cu) [[unlikely]] return; }
L_0035C45C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035C5D8; } }
L_0035C464:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[19], 0u + 1u);
    st32((c.r[18].w[0] + 24u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C5D0; } }
L_0035C478:
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 360u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C490u);  if (depth < kMaxDepth) unit_0085(c, 62u, depth + 1u); else { c.pc = 0x00314A18u; return; } if (c.pc != 0x0035C490u) [[unlikely]] return; }
L_0035C490:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035C4A8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_0035C4A8:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0035C4C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C4B8u);  if (depth < kMaxDepth) unit_0085(c, 60u, depth + 1u); else { c.pc = 0x003149A0u; return; } if (c.pc != 0x0035C4B8u) [[unlikely]] return; }
L_0035C4B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035C5D8; } }
L_0035C4C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[19], 0u + 1u);
    st32((c.r[18].w[0] + 24u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C5D0; } }
L_0035C4D4:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[19], 0u + 1u);
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[5].w[0] + 372u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 368u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C5D0; } }
L_0035C4FC:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[7].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0035C528; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0035C53C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C574; } }
L_0035C528:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 56u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C58C; } }
L_0035C53C:
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 360u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0035C564; } }
    set32(c.r[2], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C58C; } }
L_0035C564:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C58C; } }
L_0035C574:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 2u);
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
L_0035C58C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0035C5B0; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 364u)));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C5A8u);  if (depth < kMaxDepth) unit_0097(c, 83u, depth + 1u); else { c.pc = 0x0035CB10u; return; } if (c.pc != 0x0035C5A8u) [[unlikely]] return; }
L_0035C5A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C5C8; } }
L_0035C5B0:
    set32(c.r[2], ld32((c.r[6].w[0] + 364u)));
    c.r[5].d[0] = ~(0ull | c.r[3].d[0]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C5C8u);  if (depth < kMaxDepth) unit_0097(c, 83u, depth + 1u); else { c.pc = 0x0035CB10u; return; } if (c.pc != 0x0035C5C8u) [[unlikely]] return; }
L_0035C5C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[19], 0u + 1u);
    c.budget -= 2;
L_0035C5D0:
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0035C5D4:
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 1;
L_0035C5D8:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035C600:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[4], c.r[19].w[0] + 60u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C64C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035C64C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C64Cu);  if (depth < kMaxDepth) unit_0097(c, 86u, depth + 1u); else { c.pc = 0x0035CBD8u; return; } if (c.pc != 0x0035C64Cu) [[unlikely]] return; }
L_0035C64C:
    set32(c.r[2], ld32((c.r[19].w[0] + 368u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0035C78C; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 372u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035C678; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0035C684; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C6A0; } }
L_0035C678:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C6AC; } }
L_0035C684:
    set32(c.r[3], ld32((c.r[19].w[0] + 360u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.r[2].d[0] = c.r[18].d[0] ^ c.r[2].d[0];
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C6AC; } }
L_0035C6A0:
    set32(c.r[2], c.r[4].w[0] - 2u);
    c.r[2].d[0] = c.r[18].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0035C6AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C78C; } }
    set32(c.r[4], 0u + 13248u);
    set32(c.r[3], c.r[18].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    c.f[1] = ld32((c.r[20].w[0]));
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + 24112u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 128u));
    st32((c.r[16].w[0] + 10868u), 0u);
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 10864u), c.f[2]);
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 10872u), c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C708u);  if (depth < kMaxDepth) unit_008B(c, 104u, depth + 1u); else { c.pc = 0x0032CCC8u; return; } if (c.pc != 0x0035C708u) [[unlikely]] return; }
L_0035C708:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x35860000u);
    c.r[1].d[0] = c.r[1].d[0] | 14269ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0035C740; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 10872u), 0u);
    st32((c.r[16].w[0] + 10864u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C74C; } }
L_0035C740:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C74Cu);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0035C74Cu) [[unlikely]] return; }
L_0035C74C:
    set32(c.r[2], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 27456u);
    set32(c.r[7], 0u + 804u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], c.r[6].w[0] + 15024u);
    set32(c.r[5], ld32((c.r[19].w[0] + 368u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[7].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 564u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C78Cu);  if (depth < kMaxDepth) unit_0093(c, 156u, depth + 1u); else { c.pc = 0x0034DC78u; return; } if (c.pc != 0x0035C78Cu) [[unlikely]] return; }
L_0035C78C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035C7B0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035C7C8:
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035C7F0:
    st32((c.r[4].w[0] + 48u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035C820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C858; } }
    c.budget -= 1;
L_0035C840:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C84Cu);  if (depth < kMaxDepth) unit_0096(c, 313u, depth + 1u); else { c.pc = 0x0035BEB8u; return; } if (c.pc != 0x0035C84Cu) [[unlikely]] return; }
L_0035C84C:
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C840u | kUnwind; return; } goto L_0035C840; } }
L_0035C858:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035C870:
    st32((c.r[4].w[0] + 56u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035C8A0:
    set32(c.r[5], c.r[4].w[0] + 360u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_0035C8A8:
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 20u), 0u);
    st32((c.r[3].w[0] + 24u), 0u);
    st32((c.r[3].w[0] + 28u), 0u);
    st32((c.r[3].w[0] + 32u), 0u);
    st32((c.r[3].w[0] + 48u), 0u);
    set32(c.r[3], c.r[3].w[0] + 60u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C8A8u | kUnwind; return; } goto L_0035C8A8; } }
    st32((c.r[4].w[0] + 360u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035C8E0:
    set32(c.r[5], c.r[4].w[0] + 360u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_0035C8E8:
    st32((c.r[3].w[0] + 56u), c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 20u), 0u);
    st32((c.r[3].w[0] + 24u), 0u);
    st32((c.r[3].w[0] + 28u), 0u);
    st32((c.r[3].w[0] + 32u), 0u);
    st32((c.r[3].w[0] + 48u), 0u);
    st32((c.r[3].w[0] + 40u), 0u);
    st32((c.r[3].w[0] + 44u), 0u);
    set32(c.r[3], c.r[3].w[0] + 60u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C8E8u | kUnwind; return; } goto L_0035C8E8; } }
    set32(c.r[3], c.r[4].w[0] + 180u);
    set32(c.r[5], c.r[4].w[0] + 120u);
    set32(c.r[6], c.r[4].w[0] + 300u);
    c.budget -= 4;
L_0035C930:
    st32((c.r[3].w[0] + 40u), c.r[5].w[0]);
    st32((c.r[3].w[0] - 16u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 60u);
    set32(c.r[3], c.r[3].w[0] + 60u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C930u | kUnwind; return; } goto L_0035C930; } }
    st32((c.r[4].w[0] + 360u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035C958:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 360u);
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
L_0035C978:
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 20u), 0u);
    st32((c.r[3].w[0] + 24u), 0u);
    st32((c.r[3].w[0] + 28u), 0u);
    st32((c.r[3].w[0] + 32u), 0u);
    st32((c.r[3].w[0] + 48u), 0u);
    set32(c.r[3], c.r[3].w[0] + 60u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C978u | kUnwind; return; } goto L_0035C978; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 372u), 0u);
    st32((c.r[16].w[0] + 360u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 368u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C9C4u);  if (depth < kMaxDepth) unit_0097(c, 83u, depth + 1u); else { c.pc = 0x0035CB10u; return; } if (c.pc != 0x0035C9C4u) [[unlikely]] return; }
L_0035C9C4:
    set32(c.r[2], c.r[16].w[0] + 120u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st32((c.r[2].w[0] + 52u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035CA08:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[19], 0u + 60u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
L_0035CA30:
    mmi::mult(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[3].w[0] + 1u);
    set32(c.r[16], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035CA60; } }
L_0035CA48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA54u);  if (depth < kMaxDepth) unit_0096(c, 313u, depth + 1u); else { c.pc = 0x0035BEB8u; return; } if (c.pc != 0x0035CA54u) [[unlikely]] return; }
L_0035CA54:
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035CA48u | kUnwind; return; } goto L_0035CA48; } }
L_0035CA60:
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035CA30u | kUnwind; return; } goto L_0035CA30; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035CA90:
    set32(c.r[3], c.r[4].w[0] + 360u);
    c.budget -= 2;
L_0035CA98:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035CAB0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035CAB0:
    set32(c.r[4], c.r[4].w[0] + 60u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035CA98u | kUnwind; return; } goto L_0035CA98; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035CAD0:
    set32(c.r[3], c.r[4].w[0] + 360u);
    c.budget -= 2;
L_0035CAD8:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035CAF0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035CAF0:
    set32(c.r[4], c.r[4].w[0] + 60u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035CAD8u | kUnwind; return; } goto L_0035CAD8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035CB10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[17].w[0] + 364u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 360u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 23216u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035CB64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[2].w[0] + 23212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CB68; } }
L_0035CB64:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035CB68:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035CB94; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CB88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035CB88u) [[unlikely]] return; }
L_0035CB88:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035CB98; } }
L_0035CB94:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035CB98:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035CBC0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 364u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 360u)));
    set32(c.r[5], c.r[5].w[0] - 21032u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CBC0u);  if (depth < kMaxDepth) unit_00A0(c, 187u, depth + 1u); else { c.pc = 0x00382418u; return; } if (c.pc != 0x0035CBC0u) [[unlikely]] return; }
L_0035CBC0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035CBD8:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035CC0C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    st32((c.r[2].w[0] + 48u), 0u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    c.budget -= 8;
L_0035CC0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035CC18:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[5].w[0] + 5712u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CC50u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x0035CC50u) [[unlikely]] return; }
L_0035CC50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035CD9C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CC84u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0035CC84u) [[unlikely]] return; }
L_0035CC84:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035CCBC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CCA4u);  if (depth < kMaxDepth) unit_0087(c, 230u, depth + 1u); else { c.pc = 0x0031F4C8u; return; } if (c.pc != 0x0035CCA4u) [[unlikely]] return; }
L_0035CCA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CCACu);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0035CCACu) [[unlikely]] return; }
L_0035CCAC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CCBCu);  if (depth < kMaxDepth) unit_009C(c, 30u, depth + 1u); else { c.pc = 0x00370328u; return; } if (c.pc != 0x0035CCBCu) [[unlikely]] return; }
L_0035CCBC:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035CCE8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], c.r[17].w[0] + 12u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CD38; } }
L_0035CCE8:
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035CD00; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_0035CD00:
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035CD14; } }
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0035CD14:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0035CD4C; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0035CD7C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], c.r[17].w[0] + 12u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
L_0035CD38:
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CD44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035CD44u) [[unlikely]] return; }
L_0035CD44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CD9C; } }
L_0035CD4C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0035CD7C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[7], c.r[17].w[0] + 12u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CD74u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035CD74u) [[unlikely]] return; }
L_0035CD74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CD9C; } }
L_0035CD7C:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[8], c.r[17].w[0] + 12u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CD9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035CD9Cu) [[unlikely]] return; }
L_0035CD9C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035CDC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0035CE70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035CE70; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], c.r[4].w[0] + 24384u);
    set32(c.r[3], c.r[3].w[0] + 5768u);
    set32(c.r[2], c.r[2].w[0] + 5720u);
    set32(c.r[20], c.r[18].w[0] + 16u);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[16], 0u + 13u);
    set32(c.r[19], 0u - 1u);
    c.budget -= 14;
L_0035CE28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CE38u);  if (depth < kMaxDepth) unit_0097(c, 137u, depth + 1u); else { c.pc = 0x0035D418u; return; } if (c.pc != 0x0035CE38u) [[unlikely]] return; }
L_0035CE38:
    set32(c.r[17], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035CE28u | kUnwind; return; } goto L_0035CE28; } }
    st32((c.r[20].w[0] + 280u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CE50u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0035CE50u) [[unlikely]] return; }
L_0035CE50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 5688u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CE68u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x0035CE68u) [[unlikely]] return; }
L_0035CE68:
    set32(c.r[2], 0u + 14u);
    st32((c.r[18].w[0] + 296u), c.r[2].w[0]);
    c.budget -= 2;
L_0035CE70:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035CE98:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035CEA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035CEB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035CEB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 20u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[2], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CEE0u);  if (depth < kMaxDepth) unit_0097(c, 137u, depth + 1u); else { c.pc = 0x0035D418u; return; } if (c.pc != 0x0035CEE0u) [[unlikely]] return; }
L_0035CEE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035CEF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] + 24396u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035CF00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035CF88; } }
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[3] = c.r[1].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0035CF70; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_0035CF70:
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CF88u);  if (depth < kMaxDepth) unit_0049(c, 209u, depth + 1u); else { c.pc = 0x00226AA0u; return; } if (c.pc != 0x0035CF88u) [[unlikely]] return; }
L_0035CF88:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0035CFA0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CFA0u);  if (depth < kMaxDepth) unit_0097(c, 136u, depth + 1u); else { c.pc = 0x0035D3F0u; return; } if (c.pc != 0x0035CFA0u) [[unlikely]] return; }
L_0035CFA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].sd[0] < 1ll ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035CFC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 5768u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] + 5720u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[18], 0u + 13u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[20], c.r[17].w[0] + 16u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[19], 0u - 1u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 20;
L_0035D010:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D020u);  if (depth < kMaxDepth) unit_0097(c, 137u, depth + 1u); else { c.pc = 0x0035D418u; return; } if (c.pc != 0x0035D020u) [[unlikely]] return; }
L_0035D020:
    set32(c.r[16], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D010u | kUnwind; return; } goto L_0035D010; } }
    st32((c.r[20].w[0] + 280u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D038u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0035D038u) [[unlikely]] return; }
L_0035D038:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 5688u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D050u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x0035D050u) [[unlikely]] return; }
L_0035D050:
    set32(c.r[3], 0u + 14u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 296u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035D080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D0A0u);  if (depth < kMaxDepth) unit_0068(c, 298u, depth + 1u); else { c.pc = 0x002A3B08u; return; } if (c.pc != 0x0035D0A0u) [[unlikely]] return; }
L_0035D0A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035D0E4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D0E4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D0C4u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0035D0C4u) [[unlikely]] return; }
L_0035D0C4:
    set32(c.r[5], ld32((c.r[16].w[0] + 224u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D0D4u);  if (depth < kMaxDepth) unit_0066(c, 175u, depth + 1u); else { c.pc = 0x00299C28u; return; } if (c.pc != 0x0035D0D4u) [[unlikely]] return; }
L_0035D0D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 528u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 224u), 0u);
    st8((c.r[17].w[0] + 10090u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0035D0E4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035D100:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st8((c.r[16].w[0] + 10090u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D134u);  if (depth < kMaxDepth) unit_0068(c, 298u, depth + 1u); else { c.pc = 0x002A3B08u; return; } if (c.pc != 0x0035D134u) [[unlikely]] return; }
L_0035D134:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D14C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D14Cu);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x0035D14Cu) [[unlikely]] return; }
L_0035D14C:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], 0u + 20u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - 4u);
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D170u);  if (depth < kMaxDepth) unit_0097(c, 135u, depth + 1u); else { c.pc = 0x0035D3D8u; return; } if (c.pc != 0x0035D170u) [[unlikely]] return; }
L_0035D170:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035D190:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[8], c.r[16].w[0] + 12u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D1CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D1CCu) [[unlikely]] return; }
L_0035D1CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], 0u + 20u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[18].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035D200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10090u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D24C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D24C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D23Cu);  if (depth < kMaxDepth) unit_0008(c, 62u, depth + 1u); else { c.pc = 0x00120BD0u; return; } if (c.pc != 0x0035D23Cu) [[unlikely]] return; }
L_0035D23C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D24Cu);  if (depth < kMaxDepth) unit_0077(c, 154u, depth + 1u); else { c.pc = 0x002DE3E0u; return; } if (c.pc != 0x0035D24Cu) [[unlikely]] return; }
L_0035D24C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D258u);  if (depth < kMaxDepth) unit_0068(c, 298u, depth + 1u); else { c.pc = 0x002A3B08u; return; } if (c.pc != 0x0035D258u) [[unlikely]] return; }
L_0035D258:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D274; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D274u);  if (depth < kMaxDepth) unit_0062(c, 129u, depth + 1u); else { c.pc = 0x0028A128u; return; } if (c.pc != 0x0035D274u) [[unlikely]] return; }
L_0035D274:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035D288:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 20u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[18].w[0] + 16u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 104u), c.f[21]);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    set32(c.r[2], ld32((c.r[16].w[0] + 280u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 17;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0035D3AC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[19], c.r[18].w[0] + 12u);
    c.f[20] = 0u;
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[20], 0u + 20u);
    c.budget -= 7;
L_0035D2E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0035D394; } }
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D354; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0035D33C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_0035D33C:
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D354u);  if (depth < kMaxDepth) unit_0049(c, 209u, depth + 1u); else { c.pc = 0x00226AA0u; return; } if (c.pc != 0x0035D354u) [[unlikely]] return; }
L_0035D354:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0035D36C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D36Cu);  if (depth < kMaxDepth) unit_0097(c, 136u, depth + 1u); else { c.pc = 0x0035D3F0u; return; } if (c.pc != 0x0035D36Cu) [[unlikely]] return; }
L_0035D36C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0035D394; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D394u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D394u) [[unlikely]] return; }
L_0035D394:
    set32(c.r[2], ld32((c.r[17].w[0] + 280u)));
    set32(c.r[16], c.r[16].w[0] + 20u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D2E8u | kUnwind; return; } goto L_0035D2E8; } }
L_0035D3AC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 104u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035D3D8:
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035D3F0:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0035D410; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 5;
L_0035D410:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035D418:
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035D438:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D450u);  if (depth < kMaxDepth) unit_0097(c, 96u, depth + 1u); else { c.pc = 0x0035CDC0u; return; } if (c.pc != 0x0035D450u) [[unlikely]] return; }
L_0035D450:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035D460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 13192u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0035D520; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D498u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0035D498u) [[unlikely]] return; }
L_0035D498:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035D508; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 9284u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D4C4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D4E0; } }
L_0035D4C4:
    st16((c.r[3].w[0] + 9284u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D4D8u);  if (depth < kMaxDepth) unit_006D(c, 184u, depth + 1u); else { c.pc = 0x002B7D10u; return; } if (c.pc != 0x0035D4D8u) [[unlikely]] return; }
L_0035D4D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D508; } }
L_0035D4E0:
    set32(c.r[2], ld32((c.r[3].w[0] + 13192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0035D4F8; } }
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D508; } }
L_0035D4F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D508; } }
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_0035D508:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D514u);  if (depth < kMaxDepth) unit_0097(c, 157u, depth + 1u); else { c.pc = 0x0035D7A0u; return; } if (c.pc != 0x0035D514u) [[unlikely]] return; }
L_0035D514:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D520u);  if (depth < kMaxDepth) unit_0097(c, 171u, depth + 1u); else { c.pc = 0x0035D9C8u; return; } if (c.pc != 0x0035D520u) [[unlikely]] return; }
L_0035D520:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035D538:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 13192u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_0035D684; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D684; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D580u);  if (depth < kMaxDepth) unit_0036(c, 292u, depth + 1u); else { c.pc = 0x001DA830u; return; } if (c.pc != 0x0035D580u) [[unlikely]] return; }
L_0035D580:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D58Cu);  if (depth < kMaxDepth) unit_0000(c, 75u, depth + 1u); else { c.pc = 0x00100CF8u; return; } if (c.pc != 0x0035D58Cu) [[unlikely]] return; }
L_0035D58C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D598u);  if (depth < kMaxDepth) unit_0089(c, 135u, depth + 1u); else { c.pc = 0x00325920u; return; } if (c.pc != 0x0035D598u) [[unlikely]] return; }
L_0035D598:
    set32(c.r[2], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[5], 0u + 1536u);
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 6944u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8940u)));
    set32(c.r[2], c.r[2].w[0] - 1524u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035D5EC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 564u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D5DC; } }
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D684; } }
L_0035D5DC:
    set32(c.r[2], 0u + 42u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D684; } }
L_0035D5EC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 7676u)));
    c.r[2].d[0] = c.r[2].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D600; } }
    st16((c.r[6].w[0] + 7676u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 1;
L_0035D600:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D614u);  if (depth < kMaxDepth) unit_0088(c, 333u, depth + 1u); else { c.pc = 0x00323FF8u; return; } if (c.pc != 0x0035D614u) [[unlikely]] return; }
L_0035D614:
    set32(c.r[2], ld32((c.r[17].w[0] + 560u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D624; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0035D624:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 19740u)));
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D64Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D64Cu) [[unlikely]] return; }
L_0035D64C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D65C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0035D65C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D668u);  if (depth < kMaxDepth) unit_0097(c, 214u, depth + 1u); else { c.pc = 0x0035E088u; return; } if (c.pc != 0x0035D668u) [[unlikely]] return; }
L_0035D668:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D684u);  if (depth < kMaxDepth) unit_0081(c, 86u, depth + 1u); else { c.pc = 0x003052C8u; return; } if (c.pc != 0x0035D684u) [[unlikely]] return; }
L_0035D684:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035D6A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 13192u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_0035D784; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D6EC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D784; } }
L_0035D6EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D6F8u);  if (depth < kMaxDepth) unit_0097(c, 202u, depth + 1u); else { c.pc = 0x0035DEF8u; return; } if (c.pc != 0x0035D6F8u) [[unlikely]] return; }
L_0035D6F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0035D70C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D784; } }
L_0035D70C:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9040u));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0035D730; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D734; } }
L_0035D730:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_0035D734:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D744u);  if (depth < kMaxDepth) unit_0097(c, 197u, depth + 1u); else { c.pc = 0x0035DE48u; return; } if (c.pc != 0x0035D744u) [[unlikely]] return; }
L_0035D744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D76C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 11u);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D760u);  if (depth < kMaxDepth) unit_0097(c, 206u, depth + 1u); else { c.pc = 0x0035DF68u; return; } if (c.pc != 0x0035D760u) [[unlikely]] return; }
L_0035D760:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D784; } }
L_0035D76C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 18008u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 9832u), c.r[3].w[0]);
    c.budget -= 6;
L_0035D784:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035D7A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 13192u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035D9B0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D9B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D7D8u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x0035D7D8u) [[unlikely]] return; }
L_0035D7D8:
    set32(c.r[16], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 128u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 132u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D7F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D7F8u) [[unlikely]] return; }
L_0035D7F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0035D828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D808u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x0035D808u) [[unlikely]] return; }
L_0035D808:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D828u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D828u) [[unlikely]] return; }
L_0035D828:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], 0u + 1536u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] - 6944u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] - 956u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0035D888; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D85Cu);  if (depth < kMaxDepth) unit_0097(c, 202u, depth + 1u); else { c.pc = 0x0035DEF8u; return; } if (c.pc != 0x0035D85Cu) [[unlikely]] return; }
L_0035D85C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D9B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] - 27328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D878u);  if (depth < kMaxDepth) unit_0048(c, 294u, depth + 1u); else { c.pc = 0x00223E70u; return; } if (c.pc != 0x0035D878u) [[unlikely]] return; }
L_0035D878:
    c.r[3].d[0] = 0ull + 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[16].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035D9B0; } }
L_0035D888:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D898u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0035D898u) [[unlikely]] return; }
L_0035D898:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035D8CC; } }
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0035D9B0; } }
L_0035D8CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], c.r[4].w[0] - 27328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D8DCu);  if (depth < kMaxDepth) unit_0048(c, 294u, depth + 1u); else { c.pc = 0x00223E70u; return; } if (c.pc != 0x0035D8DCu) [[unlikely]] return; }
L_0035D8DC:
    c.r[3].d[0] = 0ull + 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[16].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035D900; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D8F8u);  if (depth < kMaxDepth) unit_0089(c, 142u, depth + 1u); else { c.pc = 0x00325A50u; return; } if (c.pc != 0x0035D8F8u) [[unlikely]] return; }
L_0035D8F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D9B0; } }
L_0035D900:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D910u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x0035D910u) [[unlikely]] return; }
L_0035D910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D9B0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[1] = ld32((c.r[2].w[0] + 18932u));
    set32(c.r[4], 0u + 128u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    set32(c.r[5], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_0035D9A4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[2].w[0] + 116u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 18924u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035D9B0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[16], c.r[16].w[0] + 9872u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D98Cu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0035D98Cu) [[unlikely]] return; }
L_0035D98C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D99Cu);  if (depth < kMaxDepth) unit_0062(c, 16u, depth + 1u); else { c.pc = 0x00288208u; return; } if (c.pc != 0x0035D99Cu) [[unlikely]] return; }
L_0035D99C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D9B0; } }
L_0035D9A4:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D9B0u);  if (depth < kMaxDepth) unit_0049(c, 209u, depth + 1u); else { c.pc = 0x00226AA0u; return; } if (c.pc != 0x0035D9B0u) [[unlikely]] return; }
L_0035D9B0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035D9C8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 13192u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0035DB18; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035DB18; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA10u);  if (depth < kMaxDepth) unit_0097(c, 214u, depth + 1u); else { c.pc = 0x0035E088u; return; } if (c.pc != 0x0035DA10u) [[unlikely]] return; }
L_0035DA10:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[8], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] + 16u);
    set32(c.r[7], ld32((c.r[2].w[0] + 36u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 13192u)));
    c.budget -= 8;
L_0035DA30:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[8].d[0];  if (t) { goto L_0035DA50; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_0035DA50; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035DA68; } }
L_0035DA50:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035DA30u | kUnwind; return; } goto L_0035DA30; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035DA68:
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0035DB18; } }
    c.r[3].d[0] = ld64((c.r[5].w[0] + 560u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0035DB18; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035DA9C; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0035DB18; } }
L_0035DA9C:
    set32(c.r[2], ld32((c.r[5].w[0] + 13192u)));
    set32(c.r[19], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0035DB18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[18], c.r[2].w[0] - 19312u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DAC0u);  if (depth < kMaxDepth) unit_0089(c, 9u, depth + 1u); else { c.pc = 0x00324198u; return; } if (c.pc != 0x0035DAC0u) [[unlikely]] return; }
L_0035DAC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7676u)));
    c.r[2].d[0] = c.r[2].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035DAD8; } }
    st16((c.r[3].w[0] + 7676u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 1;
L_0035DAD8:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DAE8u);  if (depth < kMaxDepth) unit_0088(c, 333u, depth + 1u); else { c.pc = 0x00323FF8u; return; } if (c.pc != 0x0035DAE8u) [[unlikely]] return; }
L_0035DAE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB00u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0035DB00u) [[unlikely]] return; }
L_0035DB00:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u + 12u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB18u);  if (depth < kMaxDepth) unit_0097(c, 214u, depth + 1u); else { c.pc = 0x0035E088u; return; } if (c.pc != 0x0035DB18u) [[unlikely]] return; }
L_0035DB18:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035DB38:
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0035DB88; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035DB88; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] | 41152ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] + 27456u);
    set32(c.r[4], c.r[4].w[0] + 24688u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 428u);
    set32(c.r[2], 0u + 13u);
    c.budget -= 9;
L_0035DB70:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 32u);
    set32(c.r[3], c.r[3].w[0] - 13248u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035DB70u | kUnwind; return; } goto L_0035DB70; } }
L_0035DB88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035DB90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 5960u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[3].w[0] + 18928u), c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035DBB0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 27328u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DBCCu);  if (depth < kMaxDepth) unit_0048(c, 294u, depth + 1u); else { c.pc = 0x00223E70u; return; } if (c.pc != 0x0035DBCCu) [[unlikely]] return; }
L_0035DBCC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035DBE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], ld32((c.r[2].w[0] + 18928u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0035DC3C; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 13192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DC24; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035DC3C; } }
L_0035DC24:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DC3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035DC3Cu) [[unlikely]] return; }
L_0035DC3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035DC50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] | 41152ull;
    set32(c.r[3], c.r[3].w[0] + 27456u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 13u);
    set32(c.r[2], c.r[4].w[0] + 428u);
    c.budget -= 8;
L_0035DC70:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 32u);
    set32(c.r[3], c.r[3].w[0] - 13248u);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035DC70u | kUnwind; return; } goto L_0035DC70; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035DC98:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 13192u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_0035DD68; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DCDCu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0035DCDCu) [[unlikely]] return; }
L_0035DCDC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0035DD68; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0035DD04; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DCFCu);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x0035DCFCu) [[unlikely]] return; }
L_0035DCFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_0035DD68; } }
L_0035DD04:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 9284u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DD24; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DD40; } }
L_0035DD24:
    st16((c.r[3].w[0] + 9284u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD38u);  if (depth < kMaxDepth) unit_006D(c, 184u, depth + 1u); else { c.pc = 0x002B7D10u; return; } if (c.pc != 0x0035DD38u) [[unlikely]] return; }
L_0035DD38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035DD68; } }
L_0035DD40:
    set32(c.r[2], ld32((c.r[3].w[0] + 13192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0035DD58; } }
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035DD68; } }
L_0035DD58:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035DD68; } }
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_0035DD68:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035DD88:
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035DDA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 13u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[19], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 14;
L_0035DDD8:
    set32(c.r[4], c.r[20].w[0] + 9872u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DDE8u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0035DDE8u) [[unlikely]] return; }
L_0035DDE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035DE10; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DDFCu);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x0035DDFCu) [[unlikely]] return; }
L_0035DDFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_0035DE10; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DE10u);  if (depth < kMaxDepth) unit_0097(c, 140u, depth + 1u); else { c.pc = 0x0035D460u; return; } if (c.pc != 0x0035DE10u) [[unlikely]] return; }
L_0035DE10:
    set32(c.r[16], c.r[16].w[0] + 32u);
    set32(c.r[18], c.r[18].w[0] + 13248u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035DDD8u | kUnwind; return; } goto L_0035DDD8; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035DE48:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 13192u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_0035DE94; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 13248u);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[6].d[0];
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035DE94:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035DEA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 13192u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0035DEC0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035DEC0:
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0035DEE8; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[6].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035DEE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035DEF8:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 13192u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0035DF1C; } }
L_0035DF10:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035DF1C:
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035DF10u | kUnwind; return; } goto L_0035DF10; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035DF10u | kUnwind; return; } goto L_0035DF10; } }
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035DF4C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0035DF58; } }
L_0035DF4C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035DF58:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035DF68:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 13192u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_0035E00C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[17], c.r[2].w[0] - 19312u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DFB8u);  if (depth < kMaxDepth) unit_0089(c, 9u, depth + 1u); else { c.pc = 0x00324198u; return; } if (c.pc != 0x0035DFB8u) [[unlikely]] return; }
L_0035DFB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7676u)));
    c.r[2].d[0] = c.r[2].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035DFD0; } }
    st16((c.r[3].w[0] + 7676u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 1;
L_0035DFD0:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DFE0u);  if (depth < kMaxDepth) unit_0088(c, 333u, depth + 1u); else { c.pc = 0x00323FF8u; return; } if (c.pc != 0x0035DFE0u) [[unlikely]] return; }
L_0035DFE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DFF8u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0035DFF8u) [[unlikely]] return; }
L_0035DFF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0] + 7700u), c.r[20].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E00Cu);  if (depth < kMaxDepth) unit_0097(c, 214u, depth + 1u); else { c.pc = 0x0035E088u; return; } if (c.pc != 0x0035E00Cu) [[unlikely]] return; }
L_0035E00C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E030:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], ld32((c.r[2].w[0] + 13192u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 6;
L_0035E048:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[7].d[0];  if (t) { goto L_0035E068; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0035E068; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E068:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035E048u | kUnwind; return; } goto L_0035E048; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E088:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[3].d[0] = c.r[3].d[0] | 54400ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    set32(c.r[22], c.r[17].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    set32(c.r[23], c.r[5].w[0] - 6944u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[30], c.r[2].w[0] - 13248u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[21], 0u + 13248u);
    set32(c.r[20], 0u + 1536u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 24;
L_0035E0E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 1524u);
    set32(c.r[16], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E114; } }
    mmi::mult(c, 0, c.r[2].w[0], c.r[21].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[30].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E118; } }
L_0035E114:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035E118:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035E15C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0035E15C; } }
    set32(c.r[4], c.r[19].w[0] + 9872u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E13Cu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0035E13Cu) [[unlikely]] return; }
L_0035E13C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E15C; } }
    st32((c.r[16].w[0] + 128u), 0u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 928u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E15Cu);  if (depth < kMaxDepth) unit_0061(c, 88u, depth + 1u); else { c.pc = 0x00284FE0u; return; } if (c.pc != 0x0035E15Cu) [[unlikely]] return; }
L_0035E15C:
    set32(c.r[17], c.r[17].w[0] + 13248u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035E0E8u | kUnwind; return; } goto L_0035E0E8; } }
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
L_0035E1A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E1B8u);  if (depth < kMaxDepth) unit_0097(c, 178u, depth + 1u); else { c.pc = 0x0035DB38u; return; } if (c.pc != 0x0035E1B8u) [[unlikely]] return; }
L_0035E1B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E1C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 5984u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[3].w[0] + 19740u), c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E1E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E1F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E200:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E210:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E220:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E228:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E238:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E248:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E258:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E268:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E278:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E288:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E298:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E2A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E2B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E2C0:
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    c.r[24].d[0] = c.r[4].d[0] + 0ull;
    c.r[15].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E428; } }
    c.r[14].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[13], 0u + 16u);
    set32(c.r[12], 0u + 8u);
    set32(c.r[11], 0u + 24u);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 6;
L_0035E2F0:
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.r[5].d[0] = c.r[2].d[0] & 31ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] & 224ull;
    c.r[3].d[0] = c.r[5].d[0] & 24ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[13].d[0];  if (t) { goto L_0035E338; } }
    c.r[2].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E328; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[12].d[0];  if (t) { goto L_0035E358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E360; } }
L_0035E328:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[11].d[0];  if (t) { goto L_0035E348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E360; } }
L_0035E338:
    c.r[2].d[0] = c.r[5].d[0] & 7ull;
    c.r[5].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E360; } }
L_0035E348:
    c.r[2].d[0] = c.r[5].d[0] & 7ull;
    c.r[5].d[0] = c.r[2].d[0] | 24ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E360; } }
L_0035E358:
    c.r[2].d[0] = c.r[5].d[0] & 7ull;
    c.r[5].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 2;
L_0035E360:
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[15].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[4].d[0] = c.r[7].d[0] & 31ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[9].d[0] = c.r[7].d[0] & 224ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[4].d[0] & 24ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.r[10].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    c.r[7].d[0] = c.r[2].d[0] & 255ull;
    c.r[8].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 15;
    { const bool t = c.r[5].d[0] == c.r[13].d[0];  if (t) { goto L_0035E3C8; } }
    c.r[2].d[0] = c.r[5].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E3B8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[12].d[0];  if (t) { goto L_0035E3E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E3F0; } }
L_0035E3B8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[11].d[0];  if (t) { goto L_0035E3D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E3F0; } }
L_0035E3C8:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.r[4].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E3F0; } }
L_0035E3D8:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.r[4].d[0] = c.r[2].d[0] | 24ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E3F0; } }
L_0035E3E8:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.r[4].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 2;
L_0035E3F0:
    set32(c.r[3], c.r[7].w[0] << 16);
    set32(c.r[2], c.r[8].w[0] << 8);
    set32(c.r[5], ld32((c.r[24].w[0] + 56u)));
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[25].d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[10].d[0];
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035E2F0u | kUnwind; return; } goto L_0035E2F0; } }
L_0035E428:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E430:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    set32(c.r[6], c.r[6].w[0] << 5);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[19], c.r[6].w[0] + c.r[7].w[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 26196u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 500u)));
    set32(c.r[23], ld32((c.r[20].w[0] + 496u)));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.budget -= 22;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035E498; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0035E498; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035E4A4; } }
L_0035E498:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E5DC; } }
L_0035E4A4:
    set32(c.r[2], ld32((c.r[23].w[0])));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0035E5D8; } }
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[11], c.r[19].w[0] << 1);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.r[21].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 12u), c.r[11].w[0]);
    c.budget -= 6;
L_0035E4D0:
    set32(c.r[2], 0u + 1028u);
    set32(c.r[11], ld32((c.r[29].w[0] + 4u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[11].w[0] + 4u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[30], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[22], ld32((c.r[2].w[0])));
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035E5C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] - 368u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E528u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035E528u) [[unlikely]] return; }
L_0035E528:
    set32(c.r[11], ld32((c.r[29].w[0] + 8u)));
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[4], c.r[11].w[0] + c.r[2].w[0]);
    set32(c.r[12], c.r[3].w[0] + 26200u);
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[10], 0u + 768u);
    set32(c.r[11], ld32((c.r[29].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[21].w[0] + c.r[11].w[0]);
    c.budget -= 12;
L_0035E558:
    set32(c.r[2], ld32((c.r[20].w[0] + 104u)));
    set32(c.r[7], c.r[19].w[0] + c.r[8].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[10].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[2], c.r[2].w[0] - 768u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0035E5AC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 6ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E5AC; } }
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[21], c.r[21].w[0] + 24u);
    st32((c.r[3].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[3].w[0] + 4u), c.r[22].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[9].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + 24u);
    c.budget -= 8;
L_0035E5AC:
    set32(c.r[8], c.r[8].w[0] + 2u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 6u);
    c.r[2].d[0] = c.r[8].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035E558u | kUnwind; return; } goto L_0035E558; } }
L_0035E5C4:
    set32(c.r[2], ld32((c.r[23].w[0])));
    c.r[17].d[0] = c.r[30].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035E4D0u | kUnwind; return; } goto L_0035E4D0; } }
L_0035E5D8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0035E5DC:
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
L_0035E610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[8], 0u + 768u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 26200u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    mmi::mult(c, 0, c.r[2].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 768u);
    set32(c.r[16], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[2].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E668; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0035E668:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035E684; } }
    c.r[4].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 1;
L_0035E684:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035E738; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035E6DC; } }
    c.r[2].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E6AC; } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E6E4; } }
L_0035E6AC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E6B8u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0035E6B8u) [[unlikely]] return; }
L_0035E6B8:
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E6E4; } }
L_0035E6DC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_0035E6E4:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[4], c.r[4].w[0] + 25168u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E738; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 26196u)));
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E73C; } }
L_0035E738:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035E73C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E758:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[11].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[25].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.r[13].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[11].w[0] + 12u)));
    c.f[0] = ld32((c.r[11].w[0] + 8u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[8] = c.r[1].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[14].d[0] = 0ull + 0ull;
    fpu_div(c, 11u, c.f[2], c.f[0]);
    fpu_div(c, 12u, c.f[2], c.f[1]);
    c.budget -= 25;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0035E9C8; } }
    c.budget -= 1;
L_0035E7C0:
    set32(c.r[2], ld32((c.r[11].w[0] + 8u)));
    c.r[10].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[7] = c.r[1].w[0];
    set32(c.r[24], c.r[14].w[0] + 1u);
    c.f[10] = fp::add(c.f[8], c.f[12]);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0035E9B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[9] = c.r[1].w[0];
    c.r[15].d[0] = c.r[14].d[0] & 1ull;
    set32(c.r[16], 0u + 7u);
    c.budget -= 4;
L_0035E7F0:
    c.f[1] = ld32((c.r[8].w[0] + 12u));
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    c.f[5] = fp::mul(c.f[8], c.f[1]);
    c.f[2] = ld32((c.r[8].w[0] + 16u));
    c.f[4] = fp::mul(c.f[7], c.f[0]);
    c.f[3] = ld32((c.r[8].w[0] + 20u));
    c.f[1] = fp::mul(c.f[7], c.f[1]);
    c.f[0] = fp::mul(c.f[8], c.f[0]);
    c.f[4] = fp::add(c.f[5], c.f[4]);
    c.f[6] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    c.f[6] = fp::add(c.f[6], c.f[2]);
    c.f[3] = fp::mul(c.f[6], c.f[3]);
    c.f[4] = fp::add(c.f[4], c.f[3]);
    c.budget -= 16;
    { const bool t = c.r[25].d[0] == 0ull;  if (t) { goto L_0035E858; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_0035E84C; } }
    c.r[2].d[0] = c.r[10].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E858; } }
L_0035E84C:
    c.r[2].d[0] = c.r[10].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035E998; } }
L_0035E858:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[6]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0035E998; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[5] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[5]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0035E998; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0035E998; } }
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[5]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0035E998; } }
    set32(c.r[4], ld32((c.r[9].w[0])));
    set32(c.r[3], ld32((c.r[11].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[12], c.r[3].w[0] + c.r[14].w[0]);
    set32(c.r[6], ld32((c.r[11].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    mmi::mult(c, 0, c.r[12].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[10].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 3));
    c.r[4].d[0] = c.r[6].d[0] & 7ull;
    set32(c.r[4], c.r[16].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[4].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E998; } }
    c.f[0] = ld32((c.r[13].w[0] + 12u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[13].w[0] + 16u)));
    c.f[4] = fp::add(c.f[4], c.f[5]);
    c.f[1] = ld32((c.r[13].w[0] + 4u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[9]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[2] = ld32((c.r[13].w[0] + 8u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[5]);
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.f[2] = fp::sub(c.f[2], c.f[9]);
    c.f[3] = fp::add(c.f[6], c.f[5]);
    c.f[0] = ld32((c.r[13].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[3] = fp::mul(c.f[3], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[5]);
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 31;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0035E998; } }
    set32(c.r[4], ld32((c.r[11].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 8u));
    set32(c.r[3], ld32((c.r[4].w[0])));
    mmi::mult(c, 0, c.r[12].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
L_0035E998:
    set32(c.r[2], ld32((c.r[11].w[0] + 8u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.f[7] = fp::add(c.f[7], c.f[11]);
    c.r[2].d[0] = c.r[10].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035E7F0u | kUnwind; return; } goto L_0035E7F0; } }
L_0035E9B0:
    set32(c.r[2], ld32((c.r[11].w[0] + 12u)));
    c.r[14].d[0] = c.r[24].d[0] + 0ull;
    c.f[8] = c.f[10];
    c.r[2].d[0] = c.r[14].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035E7C0u | kUnwind; return; } goto L_0035E7C0; } }
L_0035E9C8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035E9D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0035EA04; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0035EA04; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[4], c.r[4].w[0] + 25152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EA04u);  if (depth < kMaxDepth) unit_0097(c, 249u, depth + 1u); else { c.pc = 0x0035EA18u; return; } if (c.pc != 0x0035EA04u) [[unlikely]] return; }
L_0035EA04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035EA18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035EA60; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + 6328u);
    set32(c.r[7], c.r[7].w[0] + 6416u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 97u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EA58u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0035EA58u) [[unlikely]] return; }
L_0035EA58:
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 2;
L_0035EA60:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035EA78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 768u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] + 26200u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[6], 0u + 768u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 768u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EAACu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0035EAACu) [[unlikely]] return; }
L_0035EAAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035EAC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 18704u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] - 3028u), c.r[8].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EAFCu);  if (depth < kMaxDepth) unit_0057(c, 196u, depth + 1u); else { c.pc = 0x0025ECA0u; return; } if (c.pc != 0x0035EAFCu) [[unlikely]] return; }
L_0035EAFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[3].w[0] - 364u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB14u);  if (depth < kMaxDepth) unit_005B(c, 129u, depth + 1u); else { c.pc = 0x0026D590u; return; } if (c.pc != 0x0035EB14u) [[unlikely]] return; }
L_0035EB14:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] + 6432u);
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[7], c.r[7].w[0] + 6480u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[8], 0u + 173u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB3Cu);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0035EB3Cu) [[unlikely]] return; }
L_0035EB3C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035EB58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0035EB90; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] - 5440u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB90u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x0035EB90u) [[unlikely]] return; }
L_0035EB90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035EBA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EBC4u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x0035EBC4u) [[unlikely]] return; }
L_0035EBC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 18704u)));
    set32(c.r[6], c.r[6].w[0] + 25168u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EBE0u);  if (depth < kMaxDepth) unit_00A0(c, 205u, depth + 1u); else { c.pc = 0x003827D8u; return; } if (c.pc != 0x0035EBE0u) [[unlikely]] return; }
L_0035EBE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 18712u)));
    set32(c.r[7], c.r[3].w[0] + 26196u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0035EC1C; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] - 5440u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EC1Cu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x0035EC1Cu) [[unlikely]] return; }
L_0035EC1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EC24u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x0035EC24u) [[unlikely]] return; }
L_0035EC24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EC2Cu);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x0035EC2Cu) [[unlikely]] return; }
L_0035EC2C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035EC48:
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035EC7C; } }
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[4].w[0] + 15u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EC80; } }
L_0035EC7C:
    st32((c.r[6].w[0]), 0u);
    c.budget -= 1;
L_0035EC80:
    c.r[2].d[0] = c.r[4].d[0] & 15ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] + 25168u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], ld32((c.r[6].w[0] + 26196u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[5].w[0] + 24u));
    st32((c.r[8].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035ECB8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[5], c.r[5].w[0] + 25168u);
    set32(c.r[2], ld32((c.r[8].w[0] + 26196u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 24u));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035ED00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 25168u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035ED20:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 26196u)));
    set32(c.r[18], ld32((c.r[20].w[0] + 496u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 500u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035EE24; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0035EE24; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035ED88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EE24; } }
L_0035ED7C:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EE28; } }
L_0035ED88:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0035EE24; } }
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0035EDA0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[16], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035EE0C; } }
    set32(c.r[7], ld32((c.r[22].w[0] - 368u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EDD4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035EDD4u) [[unlikely]] return; }
L_0035EDD4:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0035EDE0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035EDF8; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035ED7Cu | kUnwind; return; } goto L_0035ED7C; } }
L_0035EDF8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035EDE0u | kUnwind; return; } goto L_0035EDE0; } }
L_0035EE0C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 1028u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035EDA0u | kUnwind; return; } goto L_0035EDA0; } }
L_0035EE24:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035EE28:
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
L_0035EE58:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[10], c.r[2].w[0] + 31u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[10].d[0];
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[11].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[11].w[0]), c.r[2].w[0]);
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & 15ull;
    c.r[7].d[0] = c.r[9].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[10].w[0]), c.r[3].w[0]);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.r[9].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[11].w[0])));
    set32(c.r[6], ld32((c.r[10].w[0])));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EEBCu);  if (depth < kMaxDepth) unit_0097(c, 275u, depth + 1u); else { c.pc = 0x0035EED0u; return; } if (c.pc != 0x0035EEBCu) [[unlikely]] return; }
L_0035EEBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035EED0:
    set32(c.r[29], c.r[29].w[0] - 832u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 816u) & ~15u, c.r[16]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 800u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 784u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    st64((c.r[29].w[0] + 768u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EF10u);  if (depth < kMaxDepth) unit_0097(c, 238u, depth + 1u); else { c.pc = 0x0035E430u; return; } if (c.pc != 0x0035EF10u) [[unlikely]] return; }
L_0035EF10:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035EF28; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0035EF28:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035EF3C; } }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EF74; } }
L_0035EF3C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[6], 0u + 24u);
    set32(c.r[2], c.r[29].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 12u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 24u));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 14;
L_0035EF74:
    ld128((c.r[29].w[0] + 816u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 800u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 784u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 768u));
    set32(c.r[29], c.r[29].w[0] + 832u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035EF90:
    set32(c.r[29], c.r[29].w[0] - 816u);
    st128((c.r[29].w[0] + 784u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 800u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 768u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EFB0u);  if (depth < kMaxDepth) unit_0097(c, 238u, depth + 1u); else { c.pc = 0x0035E430u; return; } if (c.pc != 0x0035EFB0u) [[unlikely]] return; }
L_0035EFB0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035F020; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EFC8u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0035EFC8u) [[unlikely]] return; }
L_0035EFC8:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], 0u + 24u);
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x0035EFD4u);  goto L_0035EFD8; }
L_0035EFD8:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[29].w[0]);
    ldl(c.r[6], (c.r[3].w[0] + 7u));
    ldr(c.r[6], (c.r[3].w[0]));
    ldl(c.r[7], (c.r[3].w[0] + 15u));
    ldr(c.r[7], (c.r[3].w[0] + 8u));
    ldl(c.r[4], (c.r[3].w[0] + 23u));
    ldr(c.r[4], (c.r[3].w[0] + 16u));
    sdl(c.r[6], (c.r[17].w[0] + 7u));
    sdr(c.r[6], (c.r[17].w[0]));
    sdl(c.r[7], (c.r[17].w[0] + 15u));
    sdr(c.r[7], (c.r[17].w[0] + 8u));
    sdl(c.r[4], (c.r[17].w[0] + 23u));
    sdr(c.r[4], (c.r[17].w[0] + 16u));
    c.budget -= 18;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F024; } }
L_0035F020:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035F024:
    ld128((c.r[29].w[0] + 800u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 784u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 768u));
    set32(c.r[29], c.r[29].w[0] + 816u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035F040:
    set32(c.r[29], c.r[29].w[0] - 928u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 880u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 864u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 848u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 920u), c.f[21]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 912u), c.f[20]);
    c.f[21] = c.f[13];
    st128((c.r[29].w[0] + 896u) & ~15u, c.r[16]);
    c.f[20] = c.f[12];
    st64((c.r[29].w[0] + 832u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F088u);  if (depth < kMaxDepth) unit_0097(c, 238u, depth + 1u); else { c.pc = 0x0035E430u; return; } if (c.pc != 0x0035F088u) [[unlikely]] return; }
L_0035F088:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035F0F4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F0A4u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0035F0A4u) [[unlikely]] return; }
L_0035F0A4:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x0035F0ACu);  goto L_0035F0B0; }
L_0035F0B0:
    set32(c.r[2], 0u + 24u);
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[18].w[0]);
    ldl(c.r[6], (c.r[2].w[0] + 7u));
    ldr(c.r[6], (c.r[2].w[0]));
    ldl(c.r[7], (c.r[2].w[0] + 15u));
    ldr(c.r[7], (c.r[2].w[0] + 8u));
    ldl(c.r[3], (c.r[2].w[0] + 23u));
    ldr(c.r[3], (c.r[2].w[0] + 16u));
    sdl(c.r[6], (c.r[29].w[0] + 39u));
    sdr(c.r[6], (c.r[29].w[0] + 32u));
    sdl(c.r[7], (c.r[29].w[0] + 47u));
    sdr(c.r[7], (c.r[29].w[0] + 40u));
    sdl(c.r[3], (c.r[29].w[0] + 55u));
    sdr(c.r[3], (c.r[29].w[0] + 48u));
    c.budget -= 17;
L_0035F0F4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035F138; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F114u);  if (depth < kMaxDepth) unit_0097(c, 242u, depth + 1u); else { c.pc = 0x0035E610u; return; } if (c.pc != 0x0035F114u) [[unlikely]] return; }
L_0035F114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F138; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[21];
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F138u);  if (depth < kMaxDepth) unit_0097(c, 285u, depth + 1u); else { c.pc = 0x0035F160u; return; } if (c.pc != 0x0035F138u) [[unlikely]] return; }
L_0035F138:
    ld128((c.r[29].w[0] + 896u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 880u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 864u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 848u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 832u));
    c.f[21] = ld32((c.r[29].w[0] + 920u));
    c.f[20] = ld32((c.r[29].w[0] + 912u));
    set32(c.r[29], c.r[29].w[0] + 928u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035F160:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[6], 0u + 248u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    set32(c.r[7], 0u + 8u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 200u), c.f[21]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    c.f[21] = c.f[12];
    c.f[20] = c.f[13];
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F1A8u);  if (depth < kMaxDepth) unit_0097(c, 236u, depth + 1u); else { c.pc = 0x0035E2C0u; return; } if (c.pc != 0x0035F1A8u) [[unlikely]] return; }
L_0035F1A8:
    set32(c.r[16], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[8].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F1C8u);  if (depth < kMaxDepth) unit_0097(c, 292u, depth + 1u); else { c.pc = 0x0035F2C8u; return; } if (c.pc != 0x0035F1C8u) [[unlikely]] return; }
L_0035F1C8:
    st32((c.r[29].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[19], c.r[29].w[0] + 96u);
    set32(c.r[16], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[7], ld32((c.r[17].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[17].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 16u)));
    st32((c.r[29].w[0] + 96u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.r[7].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[8].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F21Cu);  if (depth < kMaxDepth) unit_0097(c, 292u, depth + 1u); else { c.pc = 0x0035F2C8u; return; } if (c.pc != 0x0035F21Cu) [[unlikely]] return; }
L_0035F21C:
    st32((c.r[29].w[0] + 48u), c.r[16].w[0]);
    c.f[12] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F260u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x0035F260u) [[unlikely]] return; }
L_0035F260:
    c.f[12] = c.f[20];
    st32((c.r[29].w[0] + 76u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F270u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x0035F270u) [[unlikely]] return; }
L_0035F270:
    c.f[12] = c.f[21];
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 84u), 0u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], c.r[29].w[0] + 64u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F2A0u);  if (depth < kMaxDepth) unit_0097(c, 244u, depth + 1u); else { c.pc = 0x0035E758u; return; } if (c.pc != 0x0035F2A0u) [[unlikely]] return; }
L_0035F2A0:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 200u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035F2C8:
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035F2E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F2F8u);  if (depth < kMaxDepth) unit_0097(c, 247u, depth + 1u); else { c.pc = 0x0035E9D8u; return; } if (c.pc != 0x0035F2F8u) [[unlikely]] return; }
L_0035F2F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035F308:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F320u);  if (depth < kMaxDepth) unit_0097(c, 247u, depth + 1u); else { c.pc = 0x0035E9D8u; return; } if (c.pc != 0x0035F320u) [[unlikely]] return; }
L_0035F320:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035F330:
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035F358:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], c.r[17].w[0] + 4u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F384u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0035F384u) [[unlikely]] return; }
L_0035F384:
    set32(c.r[3], 0u + 100u);
    c.r[6].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0035F394u);  goto L_0035F398; }
L_0035F398:
    c.r[7].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_0035F3E0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035F3E0; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0035F3B8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F3E0; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035F3B8u | kUnwind; return; } goto L_0035F3B8; } }
L_0035F3E0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035F400:
    set32(c.r[2], c.r[4].w[0] + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0035F430; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0035F418:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035F418u | kUnwind; return; } goto L_0035F418; } }
L_0035F430:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035F440:
    set32(c.r[29], c.r[29].w[0] - 624u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 528u) & ~15u, c.r[21]);
    set32(c.r[2], c.r[2].w[0] + 19264u);
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    set32(c.r[21], 0u + 1u);
    st128((c.r[29].w[0] + 512u) & ~15u, c.r[22]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 464u), c.r[31].d[0]);
    st32((c.r[2].w[0] + 96u), c.r[21].w[0]);
    st32((c.r[29].w[0] + 432u), c.r[21].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 21100u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F4A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035F4A4u) [[unlikely]] return; }
L_0035F4A4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 21088u)));
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 432u)));
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    st32((c.r[29].w[0] + 432u), c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0035F4F8; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00740000u);
    set32(c.r[2], ld32((c.r[20].w[0] - 8800u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035F4F0; } }
    set32(c.r[4], c.r[19].w[0] - 30096u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F4ECu);  if (depth < kMaxDepth) unit_0098(c, 124u, depth + 1u); else { c.pc = 0x003619B0u; return; } if (c.pc != 0x0035F4ECu) [[unlikely]] return; }
L_0035F4EC:
    st32((c.r[20].w[0] - 8800u), c.r[21].w[0]);
    c.budget -= 1;
L_0035F4F0:
    set32(c.r[2], c.r[19].w[0] - 30096u);
    st32((c.r[22].w[0] + 21088u), c.r[2].w[0]);
    c.budget -= 2;
L_0035F4F8:
    set32(c.r[22], ld32((c.r[22].w[0] + 21088u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 432u)));
    st32((c.r[29].w[0] + 436u), c.r[22].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035F518; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F518u);  if (depth < kMaxDepth) unit_0098(c, 96u, depth + 1u); else { c.pc = 0x00361370u; return; } if (c.pc != 0x0035F518u) [[unlikely]] return; }
L_0035F518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F520u);  if (depth < kMaxDepth) unit_0099(c, 215u, depth + 1u); else { c.pc = 0x00366A00u; return; } if (c.pc != 0x0035F520u) [[unlikely]] return; }
L_0035F520:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[19].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 6544u);
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0035F54C; } }
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[30], c.r[29].w[0] + 16u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F578; } }
L_0035F54C:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[30], c.r[29].w[0] + 16u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
L_0035F558:
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035F574; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035F558u | kUnwind; return; } goto L_0035F558; } }
L_0035F574:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0035F578:
    c.r[2].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F5AC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0035F598; } }
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F5C0; } }
L_0035F598:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F5A4u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x0035F5A4u) [[unlikely]] return; }
L_0035F5A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F5C0; } }
L_0035F5AC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F5BCu);  if (depth < kMaxDepth) unit_00DD(c, 90u, depth + 1u); else { c.pc = 0x004753A0u; return; } if (c.pc != 0x0035F5BCu) [[unlikely]] return; }
L_0035F5BC:
    st8((c.r[19].w[0] + 15u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0035F5C0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_0035F5C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 65u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F5E8; } }
    set32(c.r[2], c.r[3].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 3;
L_0035F5E8:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035F5C8u | kUnwind; return; } goto L_0035F5C8; } }
    set32(c.r[19], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[17].w[0] + 6512u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 16u);
    ldl(c.r[6], (c.r[2].w[0] + 7u));
    ldr(c.r[6], (c.r[2].w[0]));
    ldl(c.r[7], (c.r[2].w[0] + 15u));
    ldr(c.r[7], (c.r[2].w[0] + 8u));
    sdl(c.r[6], (c.r[29].w[0] + 23u));
    sdr(c.r[6], (c.r[29].w[0] + 16u));
    sdl(c.r[7], (c.r[29].w[0] + 31u));
    sdr(c.r[7], (c.r[29].w[0] + 24u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F634u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x0035F634u) [[unlikely]] return; }
L_0035F634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035F648; } }
    set32(c.r[22], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F6A8; } }
L_0035F648:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 6520u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F65Cu);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x0035F65Cu) [[unlikely]] return; }
L_0035F65C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035F670; } }
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F6A8; } }
L_0035F670:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 6536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F684u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x0035F684u) [[unlikely]] return; }
L_0035F684:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035F698; } }
    set32(c.r[22], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F6A8; } }
L_0035F698:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F6A4u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x0035F6A4u) [[unlikely]] return; }
L_0035F6A4:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0035F6A8:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] < 0;  if (t) { goto L_0035FBB0; } }
    c.r[2].d[0] = c.r[22].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035F6C8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035FBB4; } }
L_0035F6C8:
    c.r[2].d[0] = c.r[22].sd[0] < 9ll ? 1ull : 0ull;
    set32(c.r[3], c.r[19].w[0] + 4u);
    if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[3].d[0];
    c.r[6].d[0] = c.r[22].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 440u), c.r[19].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 452u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0035FA28; } }
    c.budget -= 1;
L_0035F6F8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 32u);
    set32(c.r[19], c.r[19].w[0] + 152u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F714u);  if (depth < kMaxDepth) unit_0098(c, 132u, depth + 1u); else { c.pc = 0x00361B18u; return; } if (c.pc != 0x0035F714u) [[unlikely]] return; }
L_0035F714:
    set32(c.r[7], ld32((c.r[29].w[0] + 432u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0035F72C; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F740; } }
L_0035F72C:
    set32(c.r[4], ld32((c.r[29].w[0] + 436u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F73Cu);  if (depth < kMaxDepth) unit_0098(c, 323u, depth + 1u); else { c.pc = 0x00363A98u; return; } if (c.pc != 0x0035F73Cu) [[unlikely]] return; }
L_0035F73C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0035F740:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[22].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 112u)));
    st32((c.r[17].w[0] + 244u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0035F7C8; } }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F778u);  if (depth < kMaxDepth) unit_008B(c, 182u, depth + 1u); else { c.pc = 0x0032DBF0u; return; } if (c.pc != 0x0035F778u) [[unlikely]] return; }
L_0035F778:
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[29].w[0] + 28u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F7A8u);  if (depth < kMaxDepth) unit_008B(c, 229u, depth + 1u); else { c.pc = 0x0032E3F8u; return; } if (c.pc != 0x0035F7A8u) [[unlikely]] return; }
L_0035F7A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F7B8; } }
L_0035F7B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F7B8u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0035F7B8u) [[unlikely]] return; }
L_0035F7B8:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F7C8u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0035F7C8u) [[unlikely]] return; }
L_0035F7C8:
    c.r[2].d[0] = c.r[22].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035F7E0; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[19], c.r[19].w[0] + 4u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_0035F7E0:
    c.r[2].d[0] = c.r[22].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035F7F4; } }
    st32((c.r[17].w[0]), c.r[19].w[0]);
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.budget -= 2;
L_0035F7F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0035F82C; } }
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[17].w[0] + 240u), c.r[19].w[0]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F82Cu);  if (depth < kMaxDepth) unit_0099(c, 235u, depth + 1u); else { c.pc = 0x00366BE0u; return; } if (c.pc != 0x0035F82Cu) [[unlikely]] return; }
L_0035F82C:
    set32(c.r[6], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[2], c.r[6].w[0] << 2);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F854u);  if (depth < kMaxDepth) unit_0098(c, 338u, depth + 1u); else { c.pc = 0x00363E28u; return; } if (c.pc != 0x0035F854u) [[unlikely]] return; }
L_0035F854:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[22].sd[0] <= 0;  if (t) { goto L_0035F87C; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_0035F87C:
    c.r[2].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035F894; } }
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_0035F894:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F8A4u);  if (depth < kMaxDepth) unit_0098(c, 337u, depth + 1u); else { c.pc = 0x00363E10u; return; } if (c.pc != 0x0035F8A4u) [[unlikely]] return; }
L_0035F8A4:
    st32((c.r[29].w[0] + 448u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[22].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035FA10; } }
    set32(c.r[21], c.r[17].w[0] + 112u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 112u), 0u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 123u)));
    set32(c.r[23], c.r[3].w[0] - 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F8D8u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0035F8D8u) [[unlikely]] return; }
L_0035F8D8:
    st32((c.r[29].w[0] + 444u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[23].sd[0] <= 0;  if (t) { goto L_0035FA10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[17], c.r[29].w[0] + 320u);
    c.budget -= 3;
L_0035F8F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 444u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], c.r[3].w[0] + 6600u);
    set32(c.r[5], 0u + 128u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[2].w[0] + 6552u);
    set32(c.r[9], 0u + 561u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F918u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0035F918u) [[unlikely]] return; }
L_0035F918:
    st32((c.r[21].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 304u);
    st8((c.r[29].w[0] + 320u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F930u);  if (depth < kMaxDepth) unit_0098(c, 186u, depth + 1u); else { c.pc = 0x003625D8u; return; } if (c.pc != 0x0035F930u) [[unlikely]] return; }
L_0035F930:
    set32(c.r[18], ld32((c.r[21].w[0] + 112u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[16], c.r[18].w[0] + 16u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F950u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x0035F950u) [[unlikely]] return; }
L_0035F950:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[20].w[0] + 1u);
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[5], 0u + 3u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 352u);
    c.budget -= 6;
L_0035F968:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[6], 0u - 1u);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035F968u | kUnwind; return; } goto L_0035F968; } }
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[17].w[0] + 48u);
    set32(c.r[7], c.r[16].w[0] + 80u);
    set32(c.r[6], c.r[17].w[0] + 80u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 6;
L_0035F9A0:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035F9A0u | kUnwind; return; } goto L_0035F9A0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 7;
L_0035F9D8:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    st32((c.r[5].w[0]), c.f[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035F9D8u | kUnwind; return; } goto L_0035F9D8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 416u)));
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = c.r[20].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    st32((c.r[18].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[21].w[0] + 112u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035F8F0u | kUnwind; return; } goto L_0035F8F0; } }
L_0035FA10:
    set32(c.r[7], ld32((c.r[29].w[0] + 440u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 448u)));
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035F6F8u | kUnwind; return; } goto L_0035F6F8; } }
L_0035FA28:
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 440u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0035FAF8; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 436u)));
    c.r[2].d[0] = 0ull | 54448ull;
    set32(c.r[18], 0u + 28u);
    set32(c.r[16], c.r[8].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_0035FA58:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[2], c.r[5].w[0] << 2);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FA94u);  if (depth < kMaxDepth) unit_0099(c, 85u, depth + 1u); else { c.pc = 0x003650C8u; return; } if (c.pc != 0x0035FA94u) [[unlikely]] return; }
L_0035FA94:
    set32(c.r[3], ld32((c.r[16].w[0] + 28000u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    ldl(c.r[4], (c.r[29].w[0] + 23u));
    ldr(c.r[4], (c.r[29].w[0] + 16u));
    ldl(c.r[5], (c.r[29].w[0] + 31u));
    ldr(c.r[5], (c.r[29].w[0] + 24u));
    ldl(c.r[6], (c.r[29].w[0] + 39u));
    ldr(c.r[6], (c.r[29].w[0] + 32u));
    set32(c.r[7], ld32((c.r[29].w[0] + 40u)));
    sdl(c.r[4], (c.r[3].w[0] + 7u));
    sdr(c.r[4], (c.r[3].w[0]));
    sdl(c.r[5], (c.r[3].w[0] + 15u));
    sdr(c.r[5], (c.r[3].w[0] + 8u));
    sdl(c.r[6], (c.r[3].w[0] + 23u));
    sdr(c.r[6], (c.r[3].w[0] + 16u));
    st32((c.r[3].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28000u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 28000u), c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 440u)));
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035FA58u | kUnwind; return; } goto L_0035FA58; } }
L_0035FAF8:
    set32(c.r[4], ld32((c.r[29].w[0] + 436u)));
    c.r[2].d[0] = 0ull | 54448ull;
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 28004u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 452u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0035FB9C; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0035FB9C; } }
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[21], 0u + 12u);
    c.budget -= 2;
L_0035FB30:
    set32(c.r[18], ld32((c.r[19].w[0])));
    set32(c.r[20], c.r[20].w[0] - 1u);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[16], ld32((c.r[19].w[0])));
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB58u);  if (depth < kMaxDepth) unit_0099(c, 48u, depth + 1u); else { c.pc = 0x00364930u; return; } if (c.pc != 0x0035FB58u) [[unlikely]] return; }
L_0035FB58:
    st32((c.r[29].w[0] + 16u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 720u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[21].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    ldl(c.r[5], (c.r[29].w[0] + 23u));
    ldr(c.r[5], (c.r[29].w[0] + 16u));
    set32(c.r[6], ld32((c.r[29].w[0] + 24u)));
    sdl(c.r[5], (c.r[3].w[0] + 7u));
    sdr(c.r[5], (c.r[3].w[0]));
    st32((c.r[3].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 720u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 720u), c.r[4].w[0]);
    c.budget -= 17;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035FB30u | kUnwind; return; } goto L_0035FB30; } }
L_0035FB9C:
    set32(c.r[2], ld32((c.r[29].w[0] + 436u)));
    c.r[4].d[0] = 0ull | 54448ull;
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FBB0u);  if (depth < kMaxDepth) unit_0099(c, 91u, depth + 1u); else { c.pc = 0x003651D0u; return; } if (c.pc != 0x0035FBB0u) [[unlikely]] return; }
L_0035FBB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 1;
L_0035FBB4:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] + 19264u);
    st32((c.r[3].w[0] + 96u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035FBEC; } }
L_0035FBCC:
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FBDCu);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0035FBDCu) [[unlikely]] return; }
L_0035FBDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035F7B0u | kUnwind; return; } goto L_0035F7B0; } }
L_0035FBE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FBECu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0035FBECu) [[unlikely]] return; }
L_0035FBEC:
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 528u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 512u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 464u));
    set32(c.r[29], c.r[29].w[0] + 624u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035FC20:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 18;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0035FC80; } }
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[29].w[0] + 48u);
    set32(c.r[20], c.r[29].w[0] + 64u);
    set32(c.r[21], c.r[29].w[0] + 96u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035FCB0; } }
L_0035FC80:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[29].w[0] + 48u);
    set32(c.r[20], c.r[29].w[0] + 64u);
    set32(c.r[21], c.r[29].w[0] + 96u);
    c.budget -= 4;
L_0035FC90:
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035FCAC; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035FC90u | kUnwind; return; } goto L_0035FC90; } }
L_0035FCAC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0035FCB0:
    c.r[2].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035FCE4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0035FCD0; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035FCF8; } }
L_0035FCD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FCDCu);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x0035FCDCu) [[unlikely]] return; }
L_0035FCDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035FCF8; } }
L_0035FCE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FCF4u);  if (depth < kMaxDepth) unit_00DD(c, 90u, depth + 1u); else { c.pc = 0x004753A0u; return; } if (c.pc != 0x0035FCF4u) [[unlikely]] return; }
L_0035FCF4:
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0035FCF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0035FD00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 65u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035FD20; } }
    set32(c.r[2], c.r[3].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 3;
L_0035FD20:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035FD00u | kUnwind; return; } goto L_0035FD00; } }
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st8((c.r[29].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FD44u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x0035FD44u) [[unlikely]] return; }
L_0035FD44:
    c.f[4] = ld32((c.r[17].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.f[3] = ld32((c.r[17].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 16928ull;
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[4], 0u + 96u);
    c.f[5] = ld32((c.r[18].w[0] + 8u));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[2], ld32((c.r[23].w[0])));
    st32((c.r[29].w[0] + 32u), c.r[22].w[0]);
    st32((c.r[29].w[0] + 48u), c.f[3]);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    st32((c.r[29].w[0] + 56u), c.f[4]);
    st32((c.r[29].w[0] + 64u), c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[2]);
    st32((c.r[29].w[0] + 72u), c.f[5]);
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 1920u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[3].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FDACu);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x0035FDACu) [[unlikely]] return; }
L_0035FDAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[5], 0u - 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 7;
L_0035FDC8:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035FDC8u | kUnwind; return; } goto L_0035FDC8; } }
    c.r[3].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 48u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[6], c.r[16].w[0] + 80u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
L_0035FDF8:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035FDF8u | kUnwind; return; } goto L_0035FDF8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 7;
L_0035FE30:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035FE30u | kUnwind; return; } goto L_0035FE30; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1920u)));
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    st32((c.r[17].w[0] + 1920u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035FE88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    c.r[3].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035FEDC; } }
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035FEE8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FEC4u);  if (depth < kMaxDepth) unit_0098(c, 242u, depth + 1u); else { c.pc = 0x00362D40u; return; } if (c.pc != 0x0035FEC4u) [[unlikely]] return; }
L_0035FEC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035FEE8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035FEE8; } }
L_0035FEDC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035FF78; } }
L_0035FEE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 112u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035FF18; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 260u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 121u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035FEDCu | kUnwind; return; } goto L_0035FEDC; } }
L_0035FF18:
    set32(c.r[3], ld32((c.r[5].w[0] + 112u)));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035FF74; } }
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035FF74; } }
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035FF74; } }
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035FF74; } }
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035FF74; } }
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035FF74; } }
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035FF78; } }
L_0035FF74:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0035FF78:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035FF90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 21120u)));
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035FFD4; } }
L_0035FFC8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0098(c, 7u, depth); } }
L_0035FFD4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 21088u)));
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0098(c, 4u, depth); } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00740000u);
    set32(c.r[2], ld32((c.r[18].w[0] - 8800u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0098(c, 3u, depth); } }
    set32(c.r[4], c.r[16].w[0] - 30096u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0098(c, 1u, depth);
}

}
