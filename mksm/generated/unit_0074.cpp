#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0074[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0,
    0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0,
    0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0,
    0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0,
    0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0,
    0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0,
    0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0,
    0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215,
    0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 232,
    0, 0, 233, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0,
    0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0,
    0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282,
    0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0,
    0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0,
    0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0,
    0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0,
    0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0,
    339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0,
    0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0,
    0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0,
    0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0,
};

void unit_0074(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002D0000;
    case 2u: goto L_002D0014;
    case 3u: goto L_002D0040;
    case 4u: goto L_002D004C;
    case 5u: goto L_002D0068;
    case 6u: goto L_002D0080;
    case 7u: goto L_002D009C;
    case 8u: goto L_002D00B8;
    case 9u: goto L_002D011C;
    case 10u: goto L_002D013C;
    case 11u: goto L_002D0154;
    case 12u: goto L_002D0170;
    case 13u: goto L_002D0188;
    case 14u: goto L_002D01EC;
    case 15u: goto L_002D0208;
    case 16u: goto L_002D0214;
    case 17u: goto L_002D0250;
    case 18u: goto L_002D0288;
    case 19u: goto L_002D02BC;
    case 20u: goto L_002D02D8;
    case 21u: goto L_002D0338;
    case 22u: goto L_002D034C;
    case 23u: goto L_002D03A8;
    case 24u: goto L_002D03C8;
    case 25u: goto L_002D03E0;
    case 26u: goto L_002D0430;
    case 27u: goto L_002D0458;
    case 28u: goto L_002D0484;
    case 29u: goto L_002D0498;
    case 30u: goto L_002D04D0;
    case 31u: goto L_002D04E8;
    case 32u: goto L_002D0548;
    case 33u: goto L_002D055C;
    case 34u: goto L_002D05B8;
    case 35u: goto L_002D05E8;
    case 36u: goto L_002D0850;
    case 37u: goto L_002D0868;
    case 38u: goto L_002D0880;
    case 39u: goto L_002D0898;
    case 40u: goto L_002D08A0;
    case 41u: goto L_002D08C0;
    case 42u: goto L_002D0910;
    case 43u: goto L_002D092C;
    case 44u: goto L_002D0940;
    case 45u: goto L_002D09E0;
    case 46u: goto L_002D09EC;
    case 47u: goto L_002D0A0C;
    case 48u: goto L_002D0A34;
    case 49u: goto L_002D0A40;
    case 50u: goto L_002D0A58;
    case 51u: goto L_002D0A60;
    case 52u: goto L_002D0A80;
    case 53u: goto L_002D0A94;
    case 54u: goto L_002D0AA4;
    case 55u: goto L_002D0AAC;
    case 56u: goto L_002D0AB4;
    case 57u: goto L_002D0ABC;
    case 58u: goto L_002D0AC8;
    case 59u: goto L_002D0AE0;
    case 60u: goto L_002D0B8C;
    case 61u: goto L_002D0BB0;
    case 62u: goto L_002D0BC4;
    case 63u: goto L_002D0BDC;
    case 64u: goto L_002D0C00;
    case 65u: goto L_002D0C18;
    case 66u: goto L_002D0C30;
    case 67u: goto L_002D0C48;
    case 68u: goto L_002D0C60;
    case 69u: goto L_002D0C78;
    case 70u: goto L_002D0C90;
    case 71u: goto L_002D0CA4;
    case 72u: goto L_002D0CC8;
    case 73u: goto L_002D0D40;
    case 74u: goto L_002D0D84;
    case 75u: goto L_002D0DC0;
    case 76u: goto L_002D0DE8;
    case 77u: goto L_002D0E60;
    case 78u: goto L_002D0E88;
    case 79u: goto L_002D0E9C;
    case 80u: goto L_002D0EB0;
    case 81u: goto L_002D0EC0;
    case 82u: goto L_002D0ECC;
    case 83u: goto L_002D0EDC;
    case 84u: goto L_002D0EE8;
    case 85u: goto L_002D0EF8;
    case 86u: goto L_002D0F70;
    case 87u: goto L_002D10E4;
    case 88u: goto L_002D10F8;
    case 89u: goto L_002D1138;
    case 90u: goto L_002D1150;
    case 91u: goto L_002D1170;
    case 92u: goto L_002D1188;
    case 93u: goto L_002D11A0;
    case 94u: goto L_002D11B8;
    case 95u: goto L_002D11C8;
    case 96u: goto L_002D11F0;
    case 97u: goto L_002D1214;
    case 98u: goto L_002D1228;
    case 99u: goto L_002D1240;
    case 100u: goto L_002D1258;
    case 101u: goto L_002D1294;
    case 102u: goto L_002D12AC;
    case 103u: goto L_002D12C4;
    case 104u: goto L_002D12DC;
    case 105u: goto L_002D12F4;
    case 106u: goto L_002D130C;
    case 107u: goto L_002D1324;
    case 108u: goto L_002D1348;
    case 109u: goto L_002D1410;
    case 110u: goto L_002D144C;
    case 111u: goto L_002D1460;
    case 112u: goto L_002D1474;
    case 113u: goto L_002D1488;
    case 114u: goto L_002D149C;
    case 115u: goto L_002D14B0;
    case 116u: goto L_002D14C4;
    case 117u: goto L_002D1510;
    case 118u: goto L_002D1550;
    case 119u: goto L_002D1574;
    case 120u: goto L_002D1588;
    case 121u: goto L_002D15A0;
    case 122u: goto L_002D15EC;
    case 123u: goto L_002D1620;
    case 124u: goto L_002D1654;
    case 125u: goto L_002D1670;
    case 126u: goto L_002D1690;
    case 127u: goto L_002D16C8;
    case 128u: goto L_002D1704;
    case 129u: goto L_002D1718;
    case 130u: goto L_002D1730;
    case 131u: goto L_002D1738;
    case 132u: goto L_002D1740;
    case 133u: goto L_002D1750;
    case 134u: goto L_002D1770;
    case 135u: goto L_002D1780;
    case 136u: goto L_002D1790;
    case 137u: goto L_002D17F0;
    case 138u: goto L_002D18E8;
    case 139u: goto L_002D19C0;
    case 140u: goto L_002D1A18;
    case 141u: goto L_002D1A30;
    case 142u: goto L_002D1A40;
    case 143u: goto L_002D1A70;
    case 144u: goto L_002D1A80;
    case 145u: goto L_002D1A98;
    case 146u: goto L_002D1AA8;
    case 147u: goto L_002D1ACC;
    case 148u: goto L_002D1AF8;
    case 149u: goto L_002D1B08;
    case 150u: goto L_002D1B30;
    case 151u: goto L_002D1B40;
    case 152u: goto L_002D1B58;
    case 153u: goto L_002D1B70;
    case 154u: goto L_002D1BF8;
    case 155u: goto L_002D1C08;
    case 156u: goto L_002D1C1C;
    case 157u: goto L_002D1C38;
    case 158u: goto L_002D1CB0;
    case 159u: goto L_002D1CC0;
    case 160u: goto L_002D1CD4;
    case 161u: goto L_002D1CF0;
    case 162u: goto L_002D1D40;
    case 163u: goto L_002D1D84;
    case 164u: goto L_002D1D98;
    case 165u: goto L_002D1DA8;
    case 166u: goto L_002D1DD0;
    case 167u: goto L_002D1E00;
    case 168u: goto L_002D1E3C;
    case 169u: goto L_002D1EA0;
    case 170u: goto L_002D1EB4;
    case 171u: goto L_002D1EE8;
    case 172u: goto L_002D1F04;
    case 173u: goto L_002D1F18;
    case 174u: goto L_002D1F2C;
    case 175u: goto L_002D1F40;
    case 176u: goto L_002D1F78;
    case 177u: goto L_002D1F94;
    case 178u: goto L_002D1FAC;
    case 179u: goto L_002D1FC0;
    case 180u: goto L_002D1FD8;
    case 181u: goto L_002D2028;
    case 182u: goto L_002D2078;
    case 183u: goto L_002D2084;
    case 184u: goto L_002D20A0;
    case 185u: goto L_002D20C0;
    case 186u: goto L_002D2104;
    case 187u: goto L_002D2124;
    case 188u: goto L_002D2178;
    case 189u: goto L_002D21A8;
    case 190u: goto L_002D2220;
    case 191u: goto L_002D2258;
    case 192u: goto L_002D229C;
    case 193u: goto L_002D22AC;
    case 194u: goto L_002D22E0;
    case 195u: goto L_002D22F8;
    case 196u: goto L_002D2304;
    case 197u: goto L_002D2328;
    case 198u: goto L_002D2378;
    case 199u: goto L_002D239C;
    case 200u: goto L_002D23C8;
    case 201u: goto L_002D23F8;
    case 202u: goto L_002D2438;
    case 203u: goto L_002D2454;
    case 204u: goto L_002D2460;
    case 205u: goto L_002D24A8;
    case 206u: goto L_002D24D4;
    case 207u: goto L_002D24F0;
    case 208u: goto L_002D2560;
    case 209u: goto L_002D2580;
    case 210u: goto L_002D258C;
    case 211u: goto L_002D25B8;
    case 212u: goto L_002D2678;
    case 213u: goto L_002D2698;
    case 214u: goto L_002D26E4;
    case 215u: goto L_002D26FC;
    case 216u: goto L_002D2710;
    case 217u: goto L_002D2720;
    case 218u: goto L_002D2734;
    case 219u: goto L_002D2748;
    case 220u: goto L_002D2758;
    case 221u: goto L_002D2780;
    case 222u: goto L_002D2790;
    case 223u: goto L_002D27A4;
    case 224u: goto L_002D27BC;
    case 225u: goto L_002D27D0;
    case 226u: goto L_002D27E0;
    case 227u: goto L_002D2810;
    case 228u: goto L_002D2820;
    case 229u: goto L_002D2834;
    case 230u: goto L_002D2858;
    case 231u: goto L_002D286C;
    case 232u: goto L_002D287C;
    case 233u: goto L_002D2888;
    case 234u: goto L_002D2894;
    case 235u: goto L_002D28A4;
    case 236u: goto L_002D28D4;
    case 237u: goto L_002D28E0;
    case 238u: goto L_002D28F4;
    case 239u: goto L_002D2930;
    case 240u: goto L_002D2984;
    case 241u: goto L_002D2994;
    case 242u: goto L_002D29A8;
    case 243u: goto L_002D29D4;
    case 244u: goto L_002D2A04;
    case 245u: goto L_002D2A18;
    case 246u: goto L_002D2A2C;
    case 247u: goto L_002D2A3C;
    case 248u: goto L_002D2A4C;
    case 249u: goto L_002D2A60;
    case 250u: goto L_002D2A80;
    case 251u: goto L_002D2A94;
    case 252u: goto L_002D2AC4;
    case 253u: goto L_002D2AF4;
    case 254u: goto L_002D2B08;
    case 255u: goto L_002D2B1C;
    case 256u: goto L_002D2B4C;
    case 257u: goto L_002D2B5C;
    case 258u: goto L_002D2B88;
    case 259u: goto L_002D2BB8;
    case 260u: goto L_002D2BCC;
    case 261u: goto L_002D2BE0;
    case 262u: goto L_002D2C04;
    case 263u: goto L_002D2C30;
    case 264u: goto L_002D2C40;
    case 265u: goto L_002D2D10;
    case 266u: goto L_002D2D30;
    case 267u: goto L_002D2D40;
    case 268u: goto L_002D2D54;
    case 269u: goto L_002D2D94;
    case 270u: goto L_002D2DB0;
    case 271u: goto L_002D2DF0;
    case 272u: goto L_002D2E44;
    case 273u: goto L_002D2E70;
    case 274u: goto L_002D2EC4;
    case 275u: goto L_002D2EF4;
    case 276u: goto L_002D2F14;
    case 277u: goto L_002D2F1C;
    case 278u: goto L_002D2F28;
    case 279u: goto L_002D2F48;
    case 280u: goto L_002D2FC8;
    case 281u: goto L_002D2FF0;
    case 282u: goto L_002D2FFC;
    case 283u: goto L_002D301C;
    case 284u: goto L_002D309C;
    case 285u: goto L_002D30A8;
    case 286u: goto L_002D30D0;
    case 287u: goto L_002D3174;
    case 288u: goto L_002D31A4;
    case 289u: goto L_002D31AC;
    case 290u: goto L_002D31C0;
    case 291u: goto L_002D322C;
    case 292u: goto L_002D3280;
    case 293u: goto L_002D3338;
    case 294u: goto L_002D3378;
    case 295u: goto L_002D338C;
    case 296u: goto L_002D339C;
    case 297u: goto L_002D33AC;
    case 298u: goto L_002D33BC;
    case 299u: goto L_002D33D8;
    case 300u: goto L_002D33EC;
    case 301u: goto L_002D3404;
    case 302u: goto L_002D3414;
    case 303u: goto L_002D3430;
    case 304u: goto L_002D3438;
    case 305u: goto L_002D3464;
    case 306u: goto L_002D3474;
    case 307u: goto L_002D3484;
    case 308u: goto L_002D34CC;
    case 309u: goto L_002D34D4;
    case 310u: goto L_002D3508;
    case 311u: goto L_002D3544;
    case 312u: goto L_002D356C;
    case 313u: goto L_002D3578;
    case 314u: goto L_002D359C;
    case 315u: goto L_002D3600;
    case 316u: goto L_002D3614;
    case 317u: goto L_002D3664;
    case 318u: goto L_002D36A0;
    case 319u: goto L_002D3748;
    case 320u: goto L_002D3788;
    case 321u: goto L_002D37D4;
    case 322u: goto L_002D3880;
    case 323u: goto L_002D38C0;
    case 324u: goto L_002D38D8;
    case 325u: goto L_002D38F0;
    case 326u: goto L_002D3908;
    case 327u: goto L_002D3918;
    case 328u: goto L_002D3930;
    case 329u: goto L_002D3940;
    case 330u: goto L_002D3958;
    case 331u: goto L_002D3968;
    case 332u: goto L_002D3980;
    case 333u: goto L_002D3990;
    case 334u: goto L_002D39B0;
    case 335u: goto L_002D39D8;
    case 336u: goto L_002D3A10;
    case 337u: goto L_002D3A40;
    case 338u: goto L_002D3A60;
    case 339u: goto L_002D3A80;
    case 340u: goto L_002D3AEC;
    case 341u: goto L_002D3B08;
    case 342u: goto L_002D3B1C;
    case 343u: goto L_002D3B30;
    case 344u: goto L_002D3B44;
    case 345u: goto L_002D3B68;
    case 346u: goto L_002D3BB4;
    case 347u: goto L_002D3BD4;
    case 348u: goto L_002D3C10;
    case 349u: goto L_002D3C40;
    case 350u: goto L_002D3C60;
    case 351u: goto L_002D3C94;
    case 352u: goto L_002D3CC0;
    case 353u: goto L_002D3CE4;
    case 354u: goto L_002D3D68;
    case 355u: goto L_002D3D90;
    case 356u: goto L_002D3DC0;
    case 357u: goto L_002D3DD0;
    case 358u: goto L_002D3DF0;
    case 359u: goto L_002D3E04;
    case 360u: goto L_002D3E18;
    case 361u: goto L_002D3E4C;
    case 362u: goto L_002D3E58;
    case 363u: goto L_002D3E80;
    case 364u: goto L_002D3EB0;
    case 365u: goto L_002D3EF8;
    case 366u: goto L_002D3F2C;
    case 367u: goto L_002D3F5C;
    case 368u: goto L_002D3F70;
    case 369u: goto L_002D3F84;
    case 370u: goto L_002D3FC0;
    case 371u: goto L_002D3FF0;
    default: bad_entry(c, 0x002D0000u); return;
    }
L_002D0000:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 36u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CFFE8u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 287u, depth); } }
L_002D0014:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
L_002D0040:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D004Cu);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x002D004Cu) [[unlikely]] return; }
L_002D004C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 32u), 0u);
    set32(c.r[4], c.r[3].w[0] + 14208u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0068u);  if (depth < kMaxDepth) unit_0049(c, 257u, depth + 1u); else { c.pc = 0x00227088u; return; } if (c.pc != 0x002D0068u) [[unlikely]] return; }
L_002D0068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] - 25872u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0080u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x002D0080u) [[unlikely]] return; }
L_002D0080:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002D013C; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D009Cu);  if (depth < kMaxDepth) unit_0090(c, 172u, depth + 1u); else { c.pc = 0x003418C8u; return; } if (c.pc != 0x002D009Cu) [[unlikely]] return; }
L_002D009C:
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002D00E4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 2;
L_002D00B8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_002D00D0; } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D0110; } }
L_002D00D0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 36u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D00B8u | kUnwind; return; } goto L_002D00B8; } }
L_002D00E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
L_002D0110:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D011Cu);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x002D011Cu) [[unlikely]] return; }
L_002D011C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[4], c.r[3].w[0] + 14208u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D013Cu);  if (depth < kMaxDepth) unit_0049(c, 257u, depth + 1u); else { c.pc = 0x00227088u; return; } if (c.pc != 0x002D013Cu) [[unlikely]] return; }
L_002D013C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] - 25856u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0154u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x002D0154u) [[unlikely]] return; }
L_002D0154:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002D0208; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0170u);  if (depth < kMaxDepth) unit_0090(c, 172u, depth + 1u); else { c.pc = 0x003418C8u; return; } if (c.pc != 0x002D0170u) [[unlikely]] return; }
L_002D0170:
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002D01B4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_002D0188:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_002D01A0; } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D01E0; } }
L_002D01A0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 36u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D0188u | kUnwind; return; } goto L_002D0188; } }
L_002D01B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
L_002D01E0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D01ECu);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x002D01ECu) [[unlikely]] return; }
L_002D01EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[4], c.r[3].w[0] + 14208u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0208u);  if (depth < kMaxDepth) unit_0049(c, 257u, depth + 1u); else { c.pc = 0x00227088u; return; } if (c.pc != 0x002D0208u) [[unlikely]] return; }
L_002D0208:
    set32(c.r[20], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CFE00u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 274u, depth); } }
L_002D0214:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D0250; } }
    set32(c.r[5], 0u + 36u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[7], c.r[7].w[0] - 25840u);
    set32(c.r[8], c.r[8].w[0] - 25784u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 174u);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0250u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x002D0250u) [[unlikely]] return; }
L_002D0250:
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
L_002D0288:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D031C; } }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D02BCu);  if (depth < kMaxDepth) unit_0073(c, 267u, depth + 1u); else { c.pc = 0x002CFC08u; return; } if (c.pc != 0x002D02BCu) [[unlikely]] return; }
L_002D02BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002D0384; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002D02D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0] - 21468u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[7], c.r[7].w[0] + 36u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D02D8u | kUnwind; return; } goto L_002D02D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D0384; } }
L_002D031C:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002D0384; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002D0338:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D034Cu);  if (depth < kMaxDepth) unit_0073(c, 267u, depth + 1u); else { c.pc = 0x002CFC08u; return; } if (c.pc != 0x002D034Cu) [[unlikely]] return; }
L_002D034C:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[19].w[0] - 21468u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    set32(c.r[17], c.r[17].w[0] + 36u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D0338u | kUnwind; return; } goto L_002D0338; } }
L_002D0384:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D03A8:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 44u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002D03F4; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 40u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_002D03C8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002D03E0; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D03E0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 36u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D03C8u | kUnwind; return; } goto L_002D03C8; } }
L_002D03F4:
    set32(c.r[4], ld32((c.r[6].w[0] + 44u)));
    set32(c.r[2], 0u + 36u);
    set32(c.r[3], ld32((c.r[6].w[0] + 40u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 40u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[6].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D0430:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    st32((c.r[4].w[0] + 20u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[8].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D0458:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 22432u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0484u);  if (depth < kMaxDepth) unit_0073(c, 271u, depth + 1u); else { c.pc = 0x002CFD90u; return; } if (c.pc != 0x002D0484u) [[unlikely]] return; }
L_002D0484:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D0498:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[2], ld32((c.r[3].w[0] + 22432u)));
    set32(c.r[17], c.r[3].w[0] + 22432u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D052C; } }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D04D0u);  if (depth < kMaxDepth) unit_0073(c, 267u, depth + 1u); else { c.pc = 0x002CFC08u; return; } if (c.pc != 0x002D04D0u) [[unlikely]] return; }
L_002D04D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002D0594; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002D04E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0] - 21468u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[7], c.r[7].w[0] + 36u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D04E8u | kUnwind; return; } goto L_002D04E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D0594; } }
L_002D052C:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002D0594; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002D0548:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D055Cu);  if (depth < kMaxDepth) unit_0073(c, 267u, depth + 1u); else { c.pc = 0x002CFC08u; return; } if (c.pc != 0x002D055Cu) [[unlikely]] return; }
L_002D055C:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[19].w[0] - 21468u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    set32(c.r[16], c.r[16].w[0] + 36u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D0548u | kUnwind; return; } goto L_002D0548; } }
L_002D0594:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D05B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[3].w[0] + 22432u);
    st32((c.r[3].w[0] + 22432u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[2].w[0] + 20u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[7].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D05E8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] + 22512u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22512u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D08A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 7296u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D08A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D06B0; } }
    set32(c.r[7], c.r[4].w[0] + 19632u);
    ldl(c.r[2], (c.r[7].w[0] + 7u));
    ldr(c.r[2], (c.r[7].w[0]));
    ldl(c.r[3], (c.r[7].w[0] + 15u));
    ldr(c.r[3], (c.r[7].w[0] + 8u));
    ldl(c.r[6], (c.r[7].w[0] + 23u));
    ldr(c.r[6], (c.r[7].w[0] + 16u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[3], (c.r[29].w[0] + 15u));
    sdr(c.r[3], (c.r[29].w[0] + 8u));
    sdl(c.r[6], (c.r[29].w[0] + 23u));
    sdr(c.r[6], (c.r[29].w[0] + 16u));
    set32(c.r[2], ld32((c.r[7].w[0] + 24u)));
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    ldl(c.r[8], (c.r[29].w[0] + 7u));
    ldr(c.r[8], (c.r[29].w[0]));
    ldl(c.r[3], (c.r[29].w[0] + 15u));
    ldr(c.r[3], (c.r[29].w[0] + 8u));
    ldl(c.r[6], (c.r[29].w[0] + 23u));
    ldr(c.r[6], (c.r[29].w[0] + 16u));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    sdl(c.r[8], (c.r[16].w[0] + 167u));
    sdr(c.r[8], (c.r[16].w[0] + 160u));
    sdl(c.r[3], (c.r[16].w[0] + 175u));
    sdr(c.r[3], (c.r[16].w[0] + 168u));
    sdl(c.r[6], (c.r[16].w[0] + 183u));
    sdr(c.r[6], (c.r[16].w[0] + 176u));
    st32((c.r[16].w[0] + 184u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 31;
L_002D06B0:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], c.r[3].w[0] + 19632u);
    ldl(c.r[8], (c.r[7].w[0] + 7u));
    ldr(c.r[8], (c.r[7].w[0]));
    ldl(c.r[2], (c.r[7].w[0] + 15u));
    ldr(c.r[2], (c.r[7].w[0] + 8u));
    ldl(c.r[6], (c.r[7].w[0] + 23u));
    ldr(c.r[6], (c.r[7].w[0] + 16u));
    sdl(c.r[8], (c.r[29].w[0] + 7u));
    sdr(c.r[8], (c.r[29].w[0]));
    sdl(c.r[2], (c.r[29].w[0] + 15u));
    sdr(c.r[2], (c.r[29].w[0] + 8u));
    sdl(c.r[6], (c.r[29].w[0] + 23u));
    sdr(c.r[6], (c.r[29].w[0] + 16u));
    set32(c.r[8], ld32((c.r[7].w[0] + 24u)));
    st32((c.r[29].w[0] + 24u), c.r[8].w[0]);
    ldl(c.r[8], (c.r[29].w[0] + 7u));
    ldr(c.r[8], (c.r[29].w[0]));
    ldl(c.r[2], (c.r[29].w[0] + 15u));
    ldr(c.r[2], (c.r[29].w[0] + 8u));
    ldl(c.r[6], (c.r[29].w[0] + 23u));
    ldr(c.r[6], (c.r[29].w[0] + 16u));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    sdl(c.r[8], (c.r[16].w[0] + 139u));
    sdr(c.r[8], (c.r[16].w[0] + 132u));
    sdl(c.r[2], (c.r[16].w[0] + 147u));
    sdr(c.r[2], (c.r[16].w[0] + 140u));
    sdl(c.r[6], (c.r[16].w[0] + 155u));
    sdr(c.r[6], (c.r[16].w[0] + 148u));
    st32((c.r[16].w[0] + 156u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 34;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D07B0; } }
    set32(c.r[7], c.r[3].w[0] + 19632u);
    ldl(c.r[8], (c.r[7].w[0] + 7u));
    ldr(c.r[8], (c.r[7].w[0]));
    ldl(c.r[2], (c.r[7].w[0] + 15u));
    ldr(c.r[2], (c.r[7].w[0] + 8u));
    ldl(c.r[6], (c.r[7].w[0] + 23u));
    ldr(c.r[6], (c.r[7].w[0] + 16u));
    sdl(c.r[8], (c.r[29].w[0] + 7u));
    sdr(c.r[8], (c.r[29].w[0]));
    sdl(c.r[2], (c.r[29].w[0] + 15u));
    sdr(c.r[2], (c.r[29].w[0] + 8u));
    sdl(c.r[6], (c.r[29].w[0] + 23u));
    sdr(c.r[6], (c.r[29].w[0] + 16u));
    set32(c.r[8], ld32((c.r[7].w[0] + 24u)));
    st32((c.r[29].w[0] + 24u), c.r[8].w[0]);
    set32(c.r[17], 0u + 1u);
    ldl(c.r[8], (c.r[29].w[0] + 7u));
    ldr(c.r[8], (c.r[29].w[0]));
    ldl(c.r[2], (c.r[29].w[0] + 15u));
    ldr(c.r[2], (c.r[29].w[0] + 8u));
    ldl(c.r[3], (c.r[29].w[0] + 23u));
    ldr(c.r[3], (c.r[29].w[0] + 16u));
    set32(c.r[6], ld32((c.r[29].w[0] + 24u)));
    sdl(c.r[8], (c.r[16].w[0] + 27u));
    sdr(c.r[8], (c.r[16].w[0] + 20u));
    sdl(c.r[2], (c.r[16].w[0] + 35u));
    sdr(c.r[2], (c.r[16].w[0] + 28u));
    sdl(c.r[3], (c.r[16].w[0] + 43u));
    sdr(c.r[3], (c.r[16].w[0] + 36u));
    st32((c.r[16].w[0] + 44u), c.r[6].w[0]);
    c.budget -= 30;
L_002D07B0:
    set32(c.r[3], c.r[4].w[0] + 19632u);
    ldl(c.r[7], (c.r[3].w[0] + 7u));
    ldr(c.r[7], (c.r[3].w[0]));
    ldl(c.r[8], (c.r[3].w[0] + 15u));
    ldr(c.r[8], (c.r[3].w[0] + 8u));
    ldl(c.r[2], (c.r[3].w[0] + 23u));
    ldr(c.r[2], (c.r[3].w[0] + 16u));
    sdl(c.r[7], (c.r[29].w[0] + 7u));
    sdr(c.r[7], (c.r[29].w[0]));
    sdl(c.r[8], (c.r[29].w[0] + 15u));
    sdr(c.r[8], (c.r[29].w[0] + 8u));
    sdl(c.r[2], (c.r[29].w[0] + 23u));
    sdr(c.r[2], (c.r[29].w[0] + 16u));
    set32(c.r[7], ld32((c.r[3].w[0] + 24u)));
    st32((c.r[29].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[18], c.r[16].w[0] + 104u);
    st32((c.r[16].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    ldl(c.r[4], (c.r[29].w[0] + 7u));
    ldr(c.r[4], (c.r[29].w[0]));
    ldl(c.r[5], (c.r[29].w[0] + 15u));
    ldr(c.r[5], (c.r[29].w[0] + 8u));
    ldl(c.r[6], (c.r[29].w[0] + 23u));
    ldr(c.r[6], (c.r[29].w[0] + 16u));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    sdl(c.r[4], (c.r[16].w[0] + 111u));
    sdr(c.r[4], (c.r[16].w[0] + 104u));
    sdl(c.r[5], (c.r[16].w[0] + 119u));
    sdr(c.r[5], (c.r[16].w[0] + 112u));
    sdl(c.r[6], (c.r[16].w[0] + 127u));
    sdr(c.r[6], (c.r[16].w[0] + 120u));
    st32((c.r[16].w[0] + 128u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 36;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D0870; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0850u);  if (depth < kMaxDepth) unit_0074(c, 126u, depth + 1u); else { c.pc = 0x002D1690u; return; } if (c.pc != 0x002D0850u) [[unlikely]] return; }
L_002D0850:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 20u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 76u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0868u);  if (depth < kMaxDepth) unit_0074(c, 100u, depth + 1u); else { c.pc = 0x002D1258u; return; } if (c.pc != 0x002D0868u) [[unlikely]] return; }
L_002D0868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D08A0; } }
L_002D0870:
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0880u);  if (depth < kMaxDepth) unit_0074(c, 126u, depth + 1u); else { c.pc = 0x002D1690u; return; } if (c.pc != 0x002D0880u) [[unlikely]] return; }
L_002D0880:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 48u);
    set32(c.r[4], c.r[16].w[0] + 76u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0898u);  if (depth < kMaxDepth) unit_0074(c, 100u, depth + 1u); else { c.pc = 0x002D1258u; return; } if (c.pc != 0x002D0898u) [[unlikely]] return; }
L_002D0898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D08A0u);  if (depth < kMaxDepth) unit_0074(c, 127u, depth + 1u); else { c.pc = 0x002D16C8u; return; } if (c.pc != 0x002D08A0u) [[unlikely]] return; }
L_002D08A0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D08C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], ld32((c.r[2].w[0] + 22512u)));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D0AC8; } }
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D0ABC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 25760u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002D0000u < 16384u) { entry = entries_0074[(t - 0x002D0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D0910:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[2].w[0] + 22616u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] - 84u);
    set32(c.r[6], c.r[4].w[0] - 92u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D092Cu);  if (depth < kMaxDepth) unit_0074(c, 109u, depth + 1u); else { c.pc = 0x002D1410u; return; } if (c.pc != 0x002D092Cu) [[unlikely]] return; }
L_002D092C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D0ABC; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D0A4C; } }
L_002D0940:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[7], c.r[3].w[0] + 19632u);
    ldl(c.r[4], (c.r[7].w[0] + 7u));
    ldr(c.r[4], (c.r[7].w[0]));
    ldl(c.r[5], (c.r[7].w[0] + 15u));
    ldr(c.r[5], (c.r[7].w[0] + 8u));
    ldl(c.r[6], (c.r[7].w[0] + 23u));
    ldr(c.r[6], (c.r[7].w[0] + 16u));
    sdl(c.r[4], (c.r[29].w[0] + 7u));
    sdr(c.r[4], (c.r[29].w[0]));
    sdl(c.r[5], (c.r[29].w[0] + 15u));
    sdr(c.r[5], (c.r[29].w[0] + 8u));
    sdl(c.r[6], (c.r[29].w[0] + 23u));
    sdr(c.r[6], (c.r[29].w[0] + 16u));
    set32(c.r[4], ld32((c.r[7].w[0] + 24u)));
    st32((c.r[29].w[0] + 24u), c.r[4].w[0]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 22616u);
    set32(c.r[7], c.r[2].w[0] + 22616u);
    ldl(c.r[8], (c.r[29].w[0] + 7u));
    ldr(c.r[8], (c.r[29].w[0]));
    ldl(c.r[3], (c.r[29].w[0] + 15u));
    ldr(c.r[3], (c.r[29].w[0] + 8u));
    ldl(c.r[6], (c.r[29].w[0] + 23u));
    ldr(c.r[6], (c.r[29].w[0] + 16u));
    sdl(c.r[8], (c.r[7].w[0] + 7u));
    sdr(c.r[8], (c.r[7].w[0]));
    sdl(c.r[3], (c.r[7].w[0] + 15u));
    sdr(c.r[3], (c.r[7].w[0] + 8u));
    sdl(c.r[6], (c.r[7].w[0] + 23u));
    sdr(c.r[6], (c.r[7].w[0] + 16u));
    set32(c.r[8], ld32((c.r[29].w[0] + 24u)));
    st32((c.r[7].w[0] + 24u), c.r[8].w[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 28u);
    set32(c.r[6], c.r[5].w[0] - 56u);
    set32(c.r[7], ld32((c.r[5].w[0] - 88u)));
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D09E0u);  if (depth < kMaxDepth) unit_0074(c, 100u, depth + 1u); else { c.pc = 0x002D1258u; return; } if (c.pc != 0x002D09E0u) [[unlikely]] return; }
L_002D09E0:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D0A4C; } }
L_002D09EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[16], c.r[2].w[0] + 22616u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] - 56u);
    set32(c.r[6], c.r[16].w[0] - 88u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0A0Cu);  if (depth < kMaxDepth) unit_0074(c, 109u, depth + 1u); else { c.pc = 0x002D1410u; return; } if (c.pc != 0x002D0A0Cu) [[unlikely]] return; }
L_002D0A0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D0ABC; } }
    set32(c.r[2], ld32((c.r[16].w[0] - 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D0A48; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0A34u);  if (depth < kMaxDepth) unit_0074(c, 126u, depth + 1u); else { c.pc = 0x002D1690u; return; } if (c.pc != 0x002D0A34u) [[unlikely]] return; }
L_002D0A34:
    set32(c.r[4], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0A40u);  if (depth < kMaxDepth) unit_0074(c, 59u, depth + 1u); else { c.pc = 0x002D0AE0u; return; } if (c.pc != 0x002D0A40u) [[unlikely]] return; }
L_002D0A40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D0ABC; } }
L_002D0A48:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D0A4C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0A58u);  if (depth < kMaxDepth) unit_0074(c, 126u, depth + 1u); else { c.pc = 0x002D1690u; return; } if (c.pc != 0x002D0A58u) [[unlikely]] return; }
L_002D0A58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D0ABC; } }
L_002D0A60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[16], c.r[2].w[0] + 22616u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] - 84u);
    set32(c.r[6], c.r[16].w[0] - 92u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0A80u);  if (depth < kMaxDepth) unit_0074(c, 109u, depth + 1u); else { c.pc = 0x002D1410u; return; } if (c.pc != 0x002D0A80u) [[unlikely]] return; }
L_002D0A80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D0ABC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0A94u);  if (depth < kMaxDepth) unit_0074(c, 118u, depth + 1u); else { c.pc = 0x002D1550u; return; } if (c.pc != 0x002D0A94u) [[unlikely]] return; }
L_002D0A94:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0AA4u);  if (depth < kMaxDepth) unit_0074(c, 126u, depth + 1u); else { c.pc = 0x002D1690u; return; } if (c.pc != 0x002D0AA4u) [[unlikely]] return; }
L_002D0AA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0AACu);  if (depth < kMaxDepth) unit_0074(c, 127u, depth + 1u); else { c.pc = 0x002D16C8u; return; } if (c.pc != 0x002D0AACu) [[unlikely]] return; }
L_002D0AAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0AB4u);  if (depth < kMaxDepth) unit_0049(c, 230u, depth + 1u); else { c.pc = 0x00226D18u; return; } if (c.pc != 0x002D0AB4u) [[unlikely]] return; }
L_002D0AB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D0AC8; } }
L_002D0ABC:
    set32(c.r[4], c.r[17].w[0] + 22616u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0AC8u);  if (depth < kMaxDepth) unit_0049(c, 229u, depth + 1u); else { c.pc = 0x00226CC0u; return; } if (c.pc != 0x002D0AC8u) [[unlikely]] return; }
L_002D0AC8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D0AE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[2].w[0] + 22512u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[4], ld32((c.r[2].w[0] + 22512u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[3], 0u + 4u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D0CA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] - 9692u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002D0CA4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D0CA4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D0CA4; } }
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D0CA4; } }
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D0B94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 19740u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D0B94; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 180u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0B8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D0B8Cu) [[unlikely]] return; }
L_002D0B8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D0CA4; } }
L_002D0B94:
    set32(c.r[18], c.r[17].w[0] + 22512u);
    set32(c.r[19], c.r[18].w[0] + 20u);
    st32((c.r[18].w[0] + 12u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[20], c.r[18].w[0] + 104u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0BB0u);  if (depth < kMaxDepth) unit_0074(c, 118u, depth + 1u); else { c.pc = 0x002D1550u; return; } if (c.pc != 0x002D0BB0u) [[unlikely]] return; }
L_002D0BB0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 28u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0BC4u);  if (depth < kMaxDepth) unit_0044(c, 5u, depth + 1u); else { c.pc = 0x002100D0u; return; } if (c.pc != 0x002D0BC4u) [[unlikely]] return; }
L_002D0BC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D0BE4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0BDCu);  if (depth < kMaxDepth) unit_0074(c, 126u, depth + 1u); else { c.pc = 0x002D1690u; return; } if (c.pc != 0x002D0BDCu) [[unlikely]] return; }
L_002D0BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D0CA4; } }
L_002D0BE4:
    set32(c.r[16], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[17], c.r[18].w[0] + 76u);
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0C00u);  if (depth < kMaxDepth) unit_0074(c, 108u, depth + 1u); else { c.pc = 0x002D1348u; return; } if (c.pc != 0x002D0C00u) [[unlikely]] return; }
L_002D0C00:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0C18u);  if (depth < kMaxDepth) unit_0074(c, 108u, depth + 1u); else { c.pc = 0x002D1348u; return; } if (c.pc != 0x002D0C18u) [[unlikely]] return; }
L_002D0C18:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0C30u);  if (depth < kMaxDepth) unit_0074(c, 108u, depth + 1u); else { c.pc = 0x002D1348u; return; } if (c.pc != 0x002D0C30u) [[unlikely]] return; }
L_002D0C30:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0C48u);  if (depth < kMaxDepth) unit_0074(c, 108u, depth + 1u); else { c.pc = 0x002D1348u; return; } if (c.pc != 0x002D0C48u) [[unlikely]] return; }
L_002D0C48:
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0C60u);  if (depth < kMaxDepth) unit_0074(c, 108u, depth + 1u); else { c.pc = 0x002D1348u; return; } if (c.pc != 0x002D0C60u) [[unlikely]] return; }
L_002D0C60:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0C78u);  if (depth < kMaxDepth) unit_0074(c, 108u, depth + 1u); else { c.pc = 0x002D1348u; return; } if (c.pc != 0x002D0C78u) [[unlikely]] return; }
L_002D0C78:
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0C90u);  if (depth < kMaxDepth) unit_0074(c, 108u, depth + 1u); else { c.pc = 0x002D1348u; return; } if (c.pc != 0x002D0C90u) [[unlikely]] return; }
L_002D0C90:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0CA4u);  if (depth < kMaxDepth) unit_0074(c, 126u, depth + 1u); else { c.pc = 0x002D1690u; return; } if (c.pc != 0x002D0CA4u) [[unlikely]] return; }
L_002D0CA4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D0CC8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 268u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[16].w[0] + 22512u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    st32((c.r[16].w[0] + 240u), c.r[4].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[17], c.r[17].w[0] - 6080u);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[9].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[10], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0D40u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002D0D40u) [[unlikely]] return; }
L_002D0D40:
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 136u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 14208u);
    st32((c.r[16].w[0] + 208u), c.f[0]);
    st32((c.r[16].w[0] + 212u), c.f[1]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 216u), c.f[2]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    st32((c.r[16].w[0] + 220u), c.f[20]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0D84u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002D0D84u) [[unlikely]] return; }
L_002D0D84:
    c.f[2] = ld32((c.r[17].w[0] + 136u));
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    c.f[17] = c.f[2];
    c.f[12] = ld32((c.r[16].w[0] + 208u));
    c.f[16] = c.f[1];
    c.f[13] = ld32((c.r[16].w[0] + 212u));
    c.f[15] = c.f[0];
    c.f[14] = ld32((c.r[16].w[0] + 216u));
    st32((c.r[16].w[0] + 236u), c.f[20]);
    st32((c.r[16].w[0] + 228u), c.f[1]);
    st32((c.r[16].w[0] + 232u), c.f[2]);
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0DC0u);  if (depth < kMaxDepth) unit_007A(c, 170u, depth + 1u); else { c.pc = 0x002E9F78u; return; } if (c.pc != 0x002D0DC0u) [[unlikely]] return; }
L_002D0DC0:
    st32((c.r[16].w[0] + 188u), c.f[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D0DE8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[19], 0u + 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 128u), c.f[20]);
    set32(c.r[4], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[5], c.r[2].w[0] - 1u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D0F48; } }
    set32(c.r[2], 0u + 268u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 14152u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0E60u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002D0E60u) [[unlikely]] return; }
L_002D0E60:
    c.f[2] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    set32(c.r[5], c.r[18].w[0] + 208u);
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    st32((c.r[29].w[0] + 32u), c.f[1]);
    st32((c.r[29].w[0] + 40u), c.f[2]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0E88u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D0E88u) [[unlikely]] return; }
L_002D0E88:
    set32(c.r[17], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[18].w[0] + 224u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0E9Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D0E9Cu) [[unlikely]] return; }
L_002D0E9C:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0EB0u);  if (depth < kMaxDepth) unit_0045(c, 16u, depth + 1u); else { c.pc = 0x00214208u; return; } if (c.pc != 0x002D0EB0u) [[unlikely]] return; }
L_002D0EB0:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0EC0u);  if (depth < kMaxDepth) unit_0045(c, 16u, depth + 1u); else { c.pc = 0x00214208u; return; } if (c.pc != 0x002D0EC0u) [[unlikely]] return; }
L_002D0EC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0ECCu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x002D0ECCu) [[unlikely]] return; }
L_002D0ECC:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0EDCu);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x002D0EDCu) [[unlikely]] return; }
L_002D0EDC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0EE8u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x002D0EE8u) [[unlikely]] return; }
L_002D0EE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0EF8u);  if (depth < kMaxDepth) unit_008B(c, 106u, depth + 1u); else { c.pc = 0x0032CD08u; return; } if (c.pc != 0x002D0EF8u) [[unlikely]] return; }
L_002D0EF8:
    c.f[1] = 0u;
    c.f[2] = fp::mul(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D0F44; } }
    c.f[0] = ld32((c.r[18].w[0] + 188u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D0F40; } }
    fpu_div(c, 0u, c.f[2], c.f[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 192u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D0F44; } }
L_002D0F40:
    set32(c.r[19], 0u + 2u);
    c.budget -= 1;
L_002D0F44:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002D0F48:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D0F70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 22512u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[6] = ld32((c.r[2].w[0] + 76u));
    c.f[6] = fp::cvt_s_w(c.f[6]);
    set32(c.r[14], ld32((c.r[2].w[0] + 128u)));
    c.f[5] = ld32((c.r[2].w[0] + 80u));
    c.f[5] = fp::cvt_s_w(c.f[5]);
    set32(c.r[11], ld32((c.r[2].w[0] + 104u)));
    c.f[4] = ld32((c.r[2].w[0] + 84u));
    c.f[4] = fp::cvt_s_w(c.f[4]);
    set32(c.r[12], ld32((c.r[2].w[0] + 108u)));
    c.f[0] = ld32((c.r[2].w[0] + 88u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[13], ld32((c.r[2].w[0] + 112u)));
    c.f[1] = ld32((c.r[2].w[0] + 92u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[10], ld32((c.r[2].w[0] + 116u)));
    c.f[2] = ld32((c.r[2].w[0] + 96u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[9], ld32((c.r[2].w[0] + 120u)));
    c.f[3] = ld32((c.r[2].w[0] + 100u));
    c.f[3] = fp::cvt_s_w(c.f[3]);
    set32(c.r[8], ld32((c.r[2].w[0] + 124u)));
    c.f[6] = fp::mul(c.f[6], c.f[12]);
    set32(c.r[6], c.r[3].w[0] + 19632u);
    ldl(c.r[2], (c.r[6].w[0] + 7u));
    ldr(c.r[2], (c.r[6].w[0]));
    ldl(c.r[4], (c.r[6].w[0] + 15u));
    ldr(c.r[4], (c.r[6].w[0] + 8u));
    ldl(c.r[5], (c.r[6].w[0] + 23u));
    ldr(c.r[5], (c.r[6].w[0] + 16u));
    sdl(c.r[2], (c.r[29].w[0] + 39u));
    sdr(c.r[2], (c.r[29].w[0] + 32u));
    sdl(c.r[4], (c.r[29].w[0] + 47u));
    sdr(c.r[4], (c.r[29].w[0] + 40u));
    sdl(c.r[5], (c.r[29].w[0] + 55u));
    sdr(c.r[5], (c.r[29].w[0] + 48u));
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.f[5] = fp::mul(c.f[5], c.f[12]);
    ldl(c.r[2], (c.r[29].w[0] + 39u));
    ldr(c.r[2], (c.r[29].w[0] + 32u));
    ldl(c.r[3], (c.r[29].w[0] + 47u));
    ldr(c.r[3], (c.r[29].w[0] + 40u));
    ldl(c.r[4], (c.r[29].w[0] + 55u));
    ldr(c.r[4], (c.r[29].w[0] + 48u));
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[3], (c.r[29].w[0] + 15u));
    sdr(c.r[3], (c.r[29].w[0] + 8u));
    sdl(c.r[4], (c.r[29].w[0] + 23u));
    sdr(c.r[4], (c.r[29].w[0] + 16u));
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    c.f[4] = fp::mul(c.f[4], c.f[12]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    c.f[7] = fp::cvt_w_s(c.f[6]);
    set32(c.r[2], c.f[7]);
    c.f[6] = fp::cvt_w_s(c.f[5]);
    set32(c.r[3], c.f[6]);
    c.f[1] = fp::mul(c.f[1], c.f[12]);
    c.f[5] = fp::cvt_w_s(c.f[4]);
    set32(c.r[5], c.f[5]);
    set32(c.r[11], c.r[11].w[0] + c.r[2].w[0]);
    c.f[2] = fp::mul(c.f[2], c.f[12]);
    set32(c.r[12], c.r[12].w[0] + c.r[3].w[0]);
    c.f[4] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[4]);
    st32((c.r[29].w[0]), c.r[11].w[0]);
    c.f[3] = fp::mul(c.f[3], c.f[12]);
    set32(c.r[13], c.r[13].w[0] + c.r[5].w[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[0]);
    st32((c.r[29].w[0] + 4u), c.r[12].w[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[2], c.f[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[7].w[0]);
    c.f[0] = fp::cvt_w_s(c.f[3]);
    set32(c.r[3], c.f[0]);
    st32((c.r[29].w[0] + 8u), c.r[13].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[6].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[9].w[0]);
    set32(c.r[14], c.r[14].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[14].w[0]);
    c.budget -= 93;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D10E4u);  if (depth < kMaxDepth) unit_0049(c, 229u, depth + 1u); else { c.pc = 0x00226CC0u; return; } if (c.pc != 0x002D10E4u) [[unlikely]] return; }
L_002D10E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D10F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002D1188; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D1188; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] + 22480u);
    set32(c.r[2], c.r[2].w[0] - 25624u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1138u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x002D1138u) [[unlikely]] return; }
L_002D1138:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 25704u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1150u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x002D1150u) [[unlikely]] return; }
L_002D1150:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] + 22496u);
    set32(c.r[2], c.r[2].w[0] - 25672u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1170u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x002D1170u) [[unlikely]] return; }
L_002D1170:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 25688u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1188u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x002D1188u) [[unlikely]] return; }
L_002D1188:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D11A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[2].w[0] + 22516u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D11B8u);  if (depth < kMaxDepth) unit_0049(c, 230u, depth + 1u); else { c.pc = 0x00226D18u; return; } if (c.pc != 0x002D11B8u) [[unlikely]] return; }
L_002D11B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D11C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[2].w[0] + 22512u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D11F0u);  if (depth < kMaxDepth) unit_0049(c, 230u, depth + 1u); else { c.pc = 0x00226D18u; return; } if (c.pc != 0x002D11F0u) [[unlikely]] return; }
L_002D11F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D1228; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[17].w[0] + 160u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 28u);
    st32((c.r[2].w[0] - 9692u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1214u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x002D1214u) [[unlikely]] return; }
L_002D1214:
    set32(c.r[4], c.r[17].w[0] + 132u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 28u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1228u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x002D1228u) [[unlikely]] return; }
L_002D1228:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1240:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 22512u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1258:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1294u);  if (depth < kMaxDepth) unit_0074(c, 108u, depth + 1u); else { c.pc = 0x002D1348u; return; } if (c.pc != 0x002D1294u) [[unlikely]] return; }
L_002D1294:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D12ACu);  if (depth < kMaxDepth) unit_0074(c, 108u, depth + 1u); else { c.pc = 0x002D1348u; return; } if (c.pc != 0x002D12ACu) [[unlikely]] return; }
L_002D12AC:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D12C4u);  if (depth < kMaxDepth) unit_0074(c, 108u, depth + 1u); else { c.pc = 0x002D1348u; return; } if (c.pc != 0x002D12C4u) [[unlikely]] return; }
L_002D12C4:
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D12DCu);  if (depth < kMaxDepth) unit_0074(c, 108u, depth + 1u); else { c.pc = 0x002D1348u; return; } if (c.pc != 0x002D12DCu) [[unlikely]] return; }
L_002D12DC:
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D12F4u);  if (depth < kMaxDepth) unit_0074(c, 108u, depth + 1u); else { c.pc = 0x002D1348u; return; } if (c.pc != 0x002D12F4u) [[unlikely]] return; }
L_002D12F4:
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D130Cu);  if (depth < kMaxDepth) unit_0074(c, 108u, depth + 1u); else { c.pc = 0x002D1348u; return; } if (c.pc != 0x002D130Cu) [[unlikely]] return; }
L_002D130C:
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1324u);  if (depth < kMaxDepth) unit_0074(c, 108u, depth + 1u); else { c.pc = 0x002D1348u; return; } if (c.pc != 0x002D1324u) [[unlikely]] return; }
L_002D1324:
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1348:
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = c.r[1].w[0];
    fpu_div(c, 1u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D13A0; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D13D4; } }
L_002D13A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D13D8; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D13D8; } }
L_002D13D4:
    c.f[1] = c.f[2];
    c.budget -= 1;
L_002D13D8:
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002D13F8; } }
    set32(c.r[4], 0u - 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D1404; } }
L_002D13F8:
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[4].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_002D1404:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1410:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 22588u)));
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[16], c.r[16].w[0] + 22588u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D144Cu);  if (depth < kMaxDepth) unit_0074(c, 117u, depth + 1u); else { c.pc = 0x002D1510u; return; } if (c.pc != 0x002D144Cu) [[unlikely]] return; }
L_002D144C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1460u);  if (depth < kMaxDepth) unit_0074(c, 117u, depth + 1u); else { c.pc = 0x002D1510u; return; } if (c.pc != 0x002D1460u) [[unlikely]] return; }
L_002D1460:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1474u);  if (depth < kMaxDepth) unit_0074(c, 117u, depth + 1u); else { c.pc = 0x002D1510u; return; } if (c.pc != 0x002D1474u) [[unlikely]] return; }
L_002D1474:
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], c.r[17].w[0] + 12u);
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1488u);  if (depth < kMaxDepth) unit_0074(c, 117u, depth + 1u); else { c.pc = 0x002D1510u; return; } if (c.pc != 0x002D1488u) [[unlikely]] return; }
L_002D1488:
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D149Cu);  if (depth < kMaxDepth) unit_0074(c, 117u, depth + 1u); else { c.pc = 0x002D1510u; return; } if (c.pc != 0x002D149Cu) [[unlikely]] return; }
L_002D149C:
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D14B0u);  if (depth < kMaxDepth) unit_0074(c, 117u, depth + 1u); else { c.pc = 0x002D1510u; return; } if (c.pc != 0x002D14B0u) [[unlikely]] return; }
L_002D14B0:
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[4], c.r[17].w[0] + 24u);
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D14C4u);  if (depth < kMaxDepth) unit_0074(c, 117u, depth + 1u); else { c.pc = 0x002D1510u; return; } if (c.pc != 0x002D14C4u) [[unlikely]] return; }
L_002D14C4:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002D14E4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D14EC; } }
L_002D14E4:
    st32((c.r[19].w[0]), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002D14EC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1510:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D1548; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { goto L_002D1538; } }
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D153C; } }
L_002D1538:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002D153C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D1548; } }
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_002D1548:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 28u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] + 22672u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1574u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x002D1574u) [[unlikely]] return; }
L_002D1574:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] - 28u);
    set32(c.r[6], 0u + 28u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1588u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x002D1588u) [[unlikely]] return; }
L_002D1588:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D15A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22512u)));
    set32(c.r[6], c.r[2].w[0] + 22512u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D1614; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002D15EC; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[6].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[6].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[6].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[6].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    st32((c.r[6].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D15EC:
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[6].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[6].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[6].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[6].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    st32((c.r[6].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 10;
L_002D1614:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1620:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22512u)));
    set32(c.r[6], c.r[2].w[0] + 22512u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D1664; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002D1654; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[6].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[6].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1654:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[6].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[6].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 4;
L_002D1664:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1670:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 22512u)));
    set32(c.r[5], c.r[3].w[0] + 22512u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D1688; } }
    st32((c.r[5].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 1;
L_002D1688:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1690:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] << 24);
    set32(c.r[3], c.r[2].w[0] + 22512u);
    st32((c.r[2].w[0] + 22512u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D16BC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D16BC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_002D16BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D16C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[3].w[0] + 22768u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D1718; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 22512u);
    set32(c.r[6], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1704u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x002D1704u) [[unlikely]] return; }
L_002D1704:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1718u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002D1718u) [[unlikely]] return; }
L_002D1718:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1738:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1740:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1750:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[2].w[0] - 9692u), 0u);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1770u);  if (depth < kMaxDepth) unit_0074(c, 59u, depth + 1u); else { c.pc = 0x002D0AE0u; return; } if (c.pc != 0x002D1770u) [[unlikely]] return; }
L_002D1770:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1780:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1790:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 22512u)));
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D19F4; } }
    set32(c.r[9], ld32((c.r[18].w[0] + 8u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[29].w[0] + 64u);
    set32(c.r[25], c.r[29].w[0] + 24u);
    set32(c.r[24], c.r[29].w[0] + 20u);
    set32(c.r[15], c.r[29].w[0] + 16u);
    c.r[14].d[0] = c.r[29].d[0] | 12ull;
    c.r[13].d[0] = c.r[29].d[0] | 8ull;
    c.r[12].d[0] = c.r[29].d[0] | 4ull;
    c.r[11].d[0] = c.r[29].d[0] + 0ull;
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 12;
L_002D17F0:
    set32(c.r[5], ld32((c.r[10].w[0])));
    set32(c.r[4], c.r[17].w[0] << 3);
    c.r[2].d[0] = c.r[4].d[0] | 1ull;
    c.r[3].d[0] = c.r[4].d[0] | 2ull;
    st32((c.r[11].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[4].d[0] | 3ull;
    c.r[6].d[0] = c.r[4].d[0] | 4ull;
    st32((c.r[12].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    c.r[7].d[0] = c.r[4].d[0] | 5ull;
    c.r[8].d[0] = c.r[4].d[0] | 6ull;
    st32((c.r[13].w[0]), c.r[5].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 7ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[14].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[14], c.r[14].w[0] + 28u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[13], c.r[13].w[0] + 28u);
    set32(c.r[12], c.r[12].w[0] + 28u);
    set32(c.r[11], c.r[11].w[0] + 28u);
    st32((c.r[15].w[0]), c.r[2].w[0]);
    set32(c.r[10], c.r[10].w[0] + 32u);
    set32(c.r[15], c.r[15].w[0] + 28u);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[7].w[0])));
    st32((c.r[24].w[0]), c.r[2].w[0]);
    set32(c.r[24], c.r[24].w[0] + 28u);
    set32(c.r[2], ld32((c.r[8].w[0])));
    st32((c.r[25].w[0]), c.r[2].w[0]);
    set32(c.r[25], c.r[25].w[0] + 28u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 51;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D17F0u | kUnwind; return; } goto L_002D17F0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[14].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], c.r[19].w[0] + 22512u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[13], ld32((c.r[2].w[0] + 64u)));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[19].w[0] + 22512u), 0u);
    c.r[12].d[0] = c.r[29].d[0] + 0ull;
    c.r[11].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[10], c.r[29].w[0] + 56u);
    c.budget -= 11;
L_002D18E8:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_002D1950; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[12].d[0];  if (t) { goto L_002D1928; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 24u)));
    st32((c.r[8].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[8].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[8].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[8].w[0] + 40u), c.r[5].w[0]);
    st32((c.r[8].w[0] + 44u), c.r[6].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D1950; } }
L_002D1928:
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 24u)));
    st32((c.r[8].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[8].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[8].w[0] + 56u), c.r[4].w[0]);
    st32((c.r[8].w[0] + 68u), c.r[5].w[0]);
    st32((c.r[8].w[0] + 72u), c.r[6].w[0]);
    c.budget -= 10;
L_002D1950:
    set32(c.r[4], c.r[14].w[0] + 22512u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_002D198C; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[11].d[0];  if (t) { goto L_002D197C; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 16u)));
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D198C; } }
L_002D197C:
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 16u)));
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 4;
L_002D198C:
    set32(c.r[7], c.r[7].w[0] + 28u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D18E8u | kUnwind; return; } goto L_002D18E8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 22512u)));
    set32(c.r[3], c.r[19].w[0] + 22512u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D19B0; } }
    st32((c.r[3].w[0] + 8u), c.r[13].w[0]);
    c.budget -= 1;
L_002D19B0:
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D19C0u);  if (depth < kMaxDepth) unit_0074(c, 35u, depth + 1u); else { c.pc = 0x002D05E8u; return; } if (c.pc != 0x002D19C0u) [[unlikely]] return; }
L_002D19C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D19E0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002D19E0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D19F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 9692u), c.r[2].w[0]);
    c.budget -= 3;
L_002D19F4:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1A18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1A30u);  if (depth < kMaxDepth) unit_0074(c, 88u, depth + 1u); else { c.pc = 0x002D10F8u; return; } if (c.pc != 0x002D1A30u) [[unlikely]] return; }
L_002D1A30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1A40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[7], ld32((c.r[2].w[0] + 18708u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 23024u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 68u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1A70u);  if (depth < kMaxDepth) unit_0042(c, 249u, depth + 1u); else { c.pc = 0x0020BEB0u; return; } if (c.pc != 0x002D1A70u) [[unlikely]] return; }
L_002D1A70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1A80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 23024u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1A98u);  if (depth < kMaxDepth) unit_0043(c, 17u, depth + 1u); else { c.pc = 0x0020C4D0u; return; } if (c.pc != 0x002D1A98u) [[unlikely]] return; }
L_002D1A98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1AA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + 23024u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1ACCu);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x002D1ACCu) [[unlikely]] return; }
L_002D1ACC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D1AE0; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D1AE4; } }
L_002D1AE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D1AE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1AF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1B08u);  if (depth < kMaxDepth) unit_0074(c, 150u, depth + 1u); else { c.pc = 0x002D1B30u; return; } if (c.pc != 0x002D1B08u) [[unlikely]] return; }
L_002D1B08:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D1B1C; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[3].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002D1B1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1B30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23028u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D1B64; } }
L_002D1B40:
    set32(c.r[2], c.r[3].w[0] + 24u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002D1B58; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1B58:
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D1B40u | kUnwind; return; } goto L_002D1B40; } }
L_002D1B64:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D1B70:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 128u), c.f[20]);
    set32(c.r[3], c.r[18].w[0] + 88u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 84u)));
    if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[4].d[0];
    c.f[1] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 28;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002D1C58; } }
    set32(c.r[17], c.r[18].w[0] + 240u);
    set32(c.r[16], c.r[18].w[0] + 224u);
    set32(c.r[22], c.r[18].w[0] + 272u);
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], c.r[18].w[0] + 256u);
    c.budget -= 6;
L_002D1BF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1C08u);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x002D1C08u) [[unlikely]] return; }
L_002D1C08:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1C1Cu);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x002D1C1Cu) [[unlikely]] return; }
L_002D1C1C:
    set32(c.r[22], c.r[22].w[0] + 96u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1C38u);  if (depth < kMaxDepth) unit_008A(c, 240u, depth + 1u); else { c.pc = 0x0032B120u; return; } if (c.pc != 0x002D1C38u) [[unlikely]] return; }
L_002D1C38:
    set32(c.r[17], c.r[17].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 96u);
    set32(c.r[20], c.r[20].w[0] + 96u);
    set32(c.r[19], c.r[19].w[0] + 96u);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D1BF8u | kUnwind; return; } goto L_002D1BF8; } }
L_002D1C58:
    set32(c.r[3], c.r[18].w[0] + 96u);
    set32(c.r[4], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.r[21].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 84u)));
    if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[4].d[0];
    c.f[1] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 17;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002D1D10; } }
    set32(c.r[17], c.r[18].w[0] + 240u);
    set32(c.r[16], c.r[18].w[0] + 224u);
    set32(c.r[22], c.r[18].w[0] + 304u);
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], c.r[18].w[0] + 288u);
    c.budget -= 5;
L_002D1CB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1CC0u);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x002D1CC0u) [[unlikely]] return; }
L_002D1CC0:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1CD4u);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x002D1CD4u) [[unlikely]] return; }
L_002D1CD4:
    set32(c.r[22], c.r[22].w[0] + 96u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1CF0u);  if (depth < kMaxDepth) unit_008A(c, 240u, depth + 1u); else { c.pc = 0x0032B120u; return; } if (c.pc != 0x002D1CF0u) [[unlikely]] return; }
L_002D1CF0:
    set32(c.r[17], c.r[17].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 96u);
    set32(c.r[20], c.r[20].w[0] + 96u);
    set32(c.r[19], c.r[19].w[0] + 96u);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D1CB0u | kUnwind; return; } goto L_002D1CB0; } }
L_002D1D10:
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
L_002D1D40:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[21].w[0] + 96u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 224u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 84u)));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1D84u);  if (depth < kMaxDepth) unit_0075(c, 9u, depth + 1u); else { c.pc = 0x002D4138u; return; } if (c.pc != 0x002D1D84u) [[unlikely]] return; }
L_002D1D84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D1E58; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1D98u);  if (depth < kMaxDepth) unit_0074(c, 336u, depth + 1u); else { c.pc = 0x002D3A10u; return; } if (c.pc != 0x002D1D98u) [[unlikely]] return; }
L_002D1D98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1DA8u);  if (depth < kMaxDepth) unit_0074(c, 336u, depth + 1u); else { c.pc = 0x002D3A10u; return; } if (c.pc != 0x002D1DA8u) [[unlikely]] return; }
L_002D1DA8:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], c.r[2].w[0] - 25536u);
    ldl(c.r[3], (c.r[7].w[0] + 7u));
    ldr(c.r[3], (c.r[7].w[0]));
    sdl(c.r[3], (c.r[29].w[0] + 7u));
    sdr(c.r[3], (c.r[29].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1DD0u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D1DD0u) [[unlikely]] return; }
L_002D1DD0:
    set32(c.r[3], c.r[2].w[0] >> 31);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1E00u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D1E00u) [[unlikely]] return; }
L_002D1E00:
    set32(c.r[3], 0u + 314u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[0] = c.r[1].w[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002D1E18u);  goto L_002D1E1C; }
L_002D1E1C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.hi.d[0];
    c.f[20] = c.r[5].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1E3Cu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D1E3Cu) [[unlikely]] return; }
L_002D1E3C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D1E4C; } }
    c.f[20] = c.f[20] ^ fp::kSign;
    c.budget -= 1;
L_002D1E4C:
    st32((c.r[16].w[0] + 28u), c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D1E74; } }
L_002D1E58:
    set32(c.r[4], c.r[2].w[0] + 96u);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.budget -= 7;
L_002D1E74:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 84u)));
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[23], c.r[21].w[0] + 96u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002D1FE8; } }
    c.r[16].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[22], c.r[21].w[0] + 2160u);
    set32(c.r[19], c.r[21].w[0] + 304u);
    set32(c.r[17], c.r[21].w[0] + 224u);
    set32(c.r[18], c.r[21].w[0] + 288u);
    c.budget -= 6;
L_002D1EA0:
    st32((c.r[16].w[0] + 8u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1EB4u);  if (depth < kMaxDepth) unit_0074(c, 357u, depth + 1u); else { c.pc = 0x002D3DD0u; return; } if (c.pc != 0x002D1EB4u) [[unlikely]] return; }
L_002D1EB4:
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[20] = ld32((c.r[16].w[0] + 16u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    fpu_div(c, 12u, c.f[12], c.f[0]);
    c.f[12] = fp::mul(c.f[1], c.f[12]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1EE8u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x002D1EE8u) [[unlikely]] return; }
L_002D1EE8:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1F04u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002D1F04u) [[unlikely]] return; }
L_002D1F04:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[12] = ld32((c.r[16].w[0] + 28u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1F18u);  if (depth < kMaxDepth) unit_0045(c, 36u, depth + 1u); else { c.pc = 0x00214778u; return; } if (c.pc != 0x002D1F18u) [[unlikely]] return; }
L_002D1F18:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1F2Cu);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x002D1F2Cu) [[unlikely]] return; }
L_002D1F2C:
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1F40u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002D1F40u) [[unlikely]] return; }
L_002D1F40:
    set32(c.r[18], c.r[18].w[0] + 96u);
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[20] = ld32((c.r[16].w[0] + 20u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    fpu_div(c, 12u, c.f[12], c.f[0]);
    c.f[12] = fp::mul(c.f[1], c.f[12]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1F78u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x002D1F78u) [[unlikely]] return; }
L_002D1F78:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 84u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1F94u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002D1F94u) [[unlikely]] return; }
L_002D1F94:
    set32(c.r[17], c.r[17].w[0] + 96u);
    c.f[12] = ld32((c.r[16].w[0] + 28u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1FACu);  if (depth < kMaxDepth) unit_0045(c, 36u, depth + 1u); else { c.pc = 0x00214778u; return; } if (c.pc != 0x002D1FACu) [[unlikely]] return; }
L_002D1FAC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1FC0u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x002D1FC0u) [[unlikely]] return; }
L_002D1FC0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1FD8u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002D1FD8u) [[unlikely]] return; }
L_002D1FD8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 84u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D1EA0u | kUnwind; return; } goto L_002D1EA0; } }
L_002D1FE8:
    c.r[2].d[0] = ld16((c.r[23].w[0] + 2u));
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    st16((c.r[23].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D2028:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 144u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 84u)));
    c.budget -= 16;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002D21DC; } }
    set32(c.r[23], 0u + 1u);
    set32(c.r[20], c.r[17].w[0] + 272u);
    set32(c.r[19], c.r[17].w[0] + 224u);
    set32(c.r[21], c.r[17].w[0] + 256u);
    c.budget -= 4;
L_002D2078:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2084u);  if (depth < kMaxDepth) unit_0074(c, 357u, depth + 1u); else { c.pc = 0x002D3DD0u; return; } if (c.pc != 0x002D2084u) [[unlikely]] return; }
L_002D2084:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002D2094; } }
    st16((c.r[17].w[0] + 88u), static_cast<std::uint16_t>(c.r[23].w[0]));
    c.budget -= 1;
L_002D2094:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D20A0u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D20A0u) [[unlikely]] return; }
L_002D20A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 88u)));
    c.r[4].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002D20B0u);  goto L_002D20B4; }
L_002D20B4:
    c.r[16].d[0] = c.hi.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D20C0u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D20C0u) [[unlikely]] return; }
L_002D20C0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], 0u - c.r[16].w[0]);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[16].d[0];
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 36u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 88u)));
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002D20F4; } }
    st16((c.r[17].w[0] + 88u), static_cast<std::uint16_t>(c.r[23].w[0]));
    c.budget -= 1;
L_002D20F4:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[17].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2104u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D2104u) [[unlikely]] return; }
L_002D2104:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 88u)));
    c.r[4].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002D2114u);  goto L_002D2118; }
L_002D2118:
    c.r[16].d[0] = c.hi.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2124u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D2124u) [[unlikely]] return; }
L_002D2124:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], 0u - c.r[16].w[0]);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[16].d[0];
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 4u), c.f[1]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D21BC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D21BC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2178u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D2178u) [[unlikely]] return; }
L_002D2178:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 40u)));
    c.r[4].d[0] = 0ull + 0ull;
    if (c.r[3].d[0] == 0) c.r[3].d[0] = c.r[16].d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002D218Cu);  goto L_002D2190; }
L_002D2190:
    c.r[5].d[0] = c.hi.d[0];
    c.f[20] = c.r[5].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D21A8u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D21A8u) [[unlikely]] return; }
L_002D21A8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D21B8; } }
    c.f[20] = c.f[20] ^ fp::kSign;
    c.budget -= 1;
L_002D21B8:
    st32((c.r[18].w[0] + 36u), c.f[20]);
    c.budget -= 1;
L_002D21BC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 84u)));
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 96u);
    set32(c.r[19], c.r[19].w[0] + 96u);
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[21], c.r[21].w[0] + 96u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D2078u | kUnwind; return; } goto L_002D2078; } }
L_002D21DC:
    set32(c.r[3], c.r[17].w[0] + 88u);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D2220:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 84u));
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002D22C8; } }
    set32(c.r[19], c.r[16].w[0] + 240u);
    set32(c.r[17], c.r[16].w[0] + 224u);
    c.budget -= 2;
L_002D2258:
    set32(c.r[2], c.r[3].w[0] << 16);
    c.f[0] = c.r[18].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[5], c.r[16].w[0] + 144u);
    set32(c.r[6], c.r[16].w[0] + 192u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    fpu_div(c, 12u, c.f[0], c.f[12]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D229Cu);  if (depth < kMaxDepth) unit_008A(c, 240u, depth + 1u); else { c.pc = 0x0032B120u; return; } if (c.pc != 0x002D229Cu) [[unlikely]] return; }
L_002D229C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D22ACu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D22ACu) [[unlikely]] return; }
L_002D22AC:
    set32(c.r[19], c.r[19].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    set32(c.r[17], c.r[17].w[0] + 96u);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 84u));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D2258u | kUnwind; return; } goto L_002D2258; } }
L_002D22C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D22E0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D22E0u);  if (depth < kMaxDepth) unit_0074(c, 162u, depth + 1u); else { c.pc = 0x002D1D40u; return; } if (c.pc != 0x002D22E0u) [[unlikely]] return; }
L_002D22E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D22F8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D22F8u);  if (depth < kMaxDepth) unit_0074(c, 181u, depth + 1u); else { c.pc = 0x002D2028u; return; } if (c.pc != 0x002D22F8u) [[unlikely]] return; }
L_002D22F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2304u);  if (depth < kMaxDepth) unit_0074(c, 153u, depth + 1u); else { c.pc = 0x002D1B70u; return; } if (c.pc != 0x002D2304u) [[unlikely]] return; }
L_002D2304:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D2328:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[18].w[0] + 16u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    set32(c.r[22], 0u + 13248u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    set32(c.r[23], 0u + 1u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[30], c.r[2].w[0] + 27456u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 20;
L_002D2378:
    set32(c.r[2], ld32((c.r[17].w[0] + 2144u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D2460; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[23].d[0];  if (t) { goto L_002D23D0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D23DC; } }
L_002D239C:
    mmi::mult(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[18].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D23C8u);  if (depth < kMaxDepth) unit_0074(c, 370u, depth + 1u); else { c.pc = 0x002D3FC0u; return; } if (c.pc != 0x002D23C8u) [[unlikely]] return; }
L_002D23C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D241C; } }
L_002D23D0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 128u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[30].w[0]);
    c.budget -= 3;
L_002D23DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_002D2460; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2224u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[18].w[0] + 16u);
    c.budget -= 5;
L_002D23F8:
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D239Cu | kUnwind; return; } goto L_002D239C; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 2224u);
    c.r[2].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D23F8u | kUnwind; return; } goto L_002D23F8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D241C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D2474; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 2224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2438u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x002D2438u) [[unlikely]] return; }
L_002D2438:
    set32(c.r[3], ld32((c.r[20].w[0] + 104u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 2144u), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 176u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2454u);  if (depth < kMaxDepth) unit_0074(c, 162u, depth + 1u); else { c.pc = 0x002D1D40u; return; } if (c.pc != 0x002D2454u) [[unlikely]] return; }
L_002D2454:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2460u);  if (depth < kMaxDepth) unit_0074(c, 181u, depth + 1u); else { c.pc = 0x002D2028u; return; } if (c.pc != 0x002D2460u) [[unlikely]] return; }
L_002D2460:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 2224u);
    c.r[2].d[0] = c.r[19].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D2378u | kUnwind; return; } goto L_002D2378; } }
L_002D2474:
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
L_002D24A8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[17], c.r[16].w[0] + 128u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D24D4u);  if (depth < kMaxDepth) unit_0074(c, 271u, depth + 1u); else { c.pc = 0x002D2DF0u; return; } if (c.pc != 0x002D24D4u) [[unlikely]] return; }
L_002D24D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D254C; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D24F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D24F0u);  if (depth < kMaxDepth) unit_0074(c, 352u, depth + 1u); else { c.pc = 0x002D3CC0u; return; } if (c.pc != 0x002D24F0u) [[unlikely]] return; }
L_002D24F0:
    st32((c.r[16].w[0] + 2144u), 0u);
    set32(c.r[2], c.r[16].w[0] + 176u);
    st32((c.r[16].w[0] + 48u), 0u);
    set32(c.r[3], c.r[16].w[0] + 88u);
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 96u);
    st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 32u), 0u);
    st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(0u));
    c.budget -= 23;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D2608; } }
L_002D254C:
    set32(c.r[18], c.r[16].w[0] + 176u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2560u);  if (depth < kMaxDepth) unit_0074(c, 271u, depth + 1u); else { c.pc = 0x002D2DF0u; return; } if (c.pc != 0x002D2560u) [[unlikely]] return; }
L_002D2560:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D25A4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2144u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D2678; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2580u);  if (depth < kMaxDepth) unit_0074(c, 190u, depth + 1u); else { c.pc = 0x002D2220u; return; } if (c.pc != 0x002D2580u) [[unlikely]] return; }
L_002D2580:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D258Cu);  if (depth < kMaxDepth) unit_0074(c, 239u, depth + 1u); else { c.pc = 0x002D2930u; return; } if (c.pc != 0x002D258Cu) [[unlikely]] return; }
L_002D258C:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 80u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002D2624; } }
L_002D25A4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D25B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D25B8u);  if (depth < kMaxDepth) unit_0074(c, 352u, depth + 1u); else { c.pc = 0x002D3CC0u; return; } if (c.pc != 0x002D25B8u) [[unlikely]] return; }
L_002D25B8:
    st32((c.r[16].w[0] + 2144u), 0u);
    set32(c.r[2], c.r[16].w[0] + 88u);
    st32((c.r[16].w[0] + 48u), 0u);
    set32(c.r[3], c.r[16].w[0] + 96u);
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[18].w[0] + 36u), 0u);
    st32((c.r[18].w[0] + 4u), 0u);
    st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st32((c.r[18].w[0] + 32u), 0u);
    st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(0u));
    c.budget -= 20;
L_002D2608:
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0]), 0u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D2678; } }
L_002D2624:
    set32(c.r[4], c.r[16].w[0] + 88u);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002D2644; } }
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002D2644:
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002D2664; } }
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002D2664:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D2678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2678u);  if (depth < kMaxDepth) unit_0074(c, 205u, depth + 1u); else { c.pc = 0x002D24A8u; return; } if (c.pc != 0x002D2678u) [[unlikely]] return; }
L_002D2678:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D2698:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[20]);
    set32(c.r[5], c.r[16].w[0] + 144u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[21]);
    set32(c.r[17], c.r[16].w[0] + 192u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[23]);
    st32((c.r[29].w[0] + 408u), c.f[21]);
    st32((c.r[29].w[0] + 400u), c.f[20]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D26E4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D26E4u) [[unlikely]] return; }
L_002D26E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D26FCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D26FCu) [[unlikely]] return; }
L_002D26FC:
    set32(c.r[23], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2710u);  if (depth < kMaxDepth) unit_0045(c, 16u, depth + 1u); else { c.pc = 0x00214208u; return; } if (c.pc != 0x002D2710u) [[unlikely]] return; }
L_002D2710:
    c.f[12] = ld32((c.r[29].w[0] + 16u));
    c.f[13] = ld32((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2720u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x002D2720u) [[unlikely]] return; }
L_002D2720:
    set32(c.r[21], c.r[29].w[0] + 32u);
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2734u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002D2734u) [[unlikely]] return; }
L_002D2734:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2748u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x002D2748u) [[unlikely]] return; }
L_002D2748:
    set32(c.r[4], c.r[16].w[0] + 2160u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2758u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x002D2758u) [[unlikely]] return; }
L_002D2758:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[20], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] - 17840u);
    c.f[15] = c.f[21];
    c.f[12] = ld32((c.r[2].w[0] + 128u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[14] = ld32((c.r[2].w[0] + 136u));
    c.f[13] = ld32((c.r[2].w[0] + 132u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2780u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D2780u) [[unlikely]] return; }
L_002D2780:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2790u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D2790u) [[unlikely]] return; }
L_002D2790:
    set32(c.r[19], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D27A4u);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x002D27A4u) [[unlikely]] return; }
L_002D27A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D27BCu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002D27BCu) [[unlikely]] return; }
L_002D27BC:
    set32(c.r[16], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D27D0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D27D0u) [[unlikely]] return; }
L_002D27D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D27E0u);  if (depth < kMaxDepth) unit_0045(c, 16u, depth + 1u); else { c.pc = 0x00214208u; return; } if (c.pc != 0x002D27E0u) [[unlikely]] return; }
L_002D27E0:
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D2810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2810u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x002D2810u) [[unlikely]] return; }
L_002D2810:
    c.f[12] = ld32((c.r[29].w[0] + 132u));
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2820u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x002D2820u) [[unlikely]] return; }
L_002D2820:
    set32(c.r[18], c.r[29].w[0] + 144u);
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2834u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002D2834u) [[unlikely]] return; }
L_002D2834:
    mmi::por(c.r[2], c.r[0], c.r[0]);
    set32(c.r[17], c.r[29].w[0] + 208u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[6], c.r[29].w[0] + 224u);
    st32((c.r[29].w[0] + 228u), c.f[21]);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2858u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x002D2858u) [[unlikely]] return; }
L_002D2858:
    set32(c.r[16], c.r[29].w[0] + 240u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D286Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D286Cu) [[unlikely]] return; }
L_002D286C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D287Cu);  if (depth < kMaxDepth) unit_0045(c, 16u, depth + 1u); else { c.pc = 0x00214208u; return; } if (c.pc != 0x002D287Cu) [[unlikely]] return; }
L_002D287C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2888u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x002D2888u) [[unlikely]] return; }
L_002D2888:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2894u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x002D2894u) [[unlikely]] return; }
L_002D2894:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D28A4u);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x002D28A4u) [[unlikely]] return; }
L_002D28A4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D28C0; } }
    c.f[20] = c.f[20] ^ fp::kSign;
    c.budget -= 1;
L_002D28C0:
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D28D4u);  if (depth < kMaxDepth) unit_0045(c, 36u, depth + 1u); else { c.pc = 0x00214778u; return; } if (c.pc != 0x002D28D4u) [[unlikely]] return; }
L_002D28D4:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D28E0u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002D28E0u) [[unlikely]] return; }
L_002D28E0:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D28F4u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x002D28F4u) [[unlikely]] return; }
L_002D28F4:
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    c.f[21] = ld32((c.r[29].w[0] + 408u));
    c.f[20] = ld32((c.r[29].w[0] + 400u));
    set32(c.r[29], c.r[29].w[0] + 416u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D2930:
    set32(c.r[29], c.r[29].w[0] - 1552u);
    st128((c.r[29].w[0] + 1520u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 1456u) & ~15u, c.r[20]);
    set32(c.r[16], c.r[29].w[0] + 1280u);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 1504u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 1472u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 1440u) & ~15u, c.r[21]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 1424u) & ~15u, c.r[22]);
    set32(c.r[19], 0u + 1u);
    st128((c.r[29].w[0] + 1488u) & ~15u, c.r[18]);
    set32(c.r[22], c.r[20].w[0] + 176u);
    st128((c.r[29].w[0] + 1408u) & ~15u, c.r[23]);
    set32(c.r[21], 0u + 4u);
    st128((c.r[29].w[0] + 1392u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 1376u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 1544u), c.f[21]);
    st32((c.r[29].w[0] + 1536u), c.f[20]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2984u);  if (depth < kMaxDepth) unit_0074(c, 213u, depth + 1u); else { c.pc = 0x002D2698u; return; } if (c.pc != 0x002D2984u) [[unlikely]] return; }
L_002D2984:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2994u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D2994u) [[unlikely]] return; }
L_002D2994:
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D29A8u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x002D29A8u) [[unlikely]] return; }
L_002D29A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 86u)));
    set32(c.r[4], c.r[29].w[0] + 1344u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[14] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D29D4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D29D4u) [[unlikely]] return; }
L_002D29D4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 86u)));
    set32(c.r[4], c.r[29].w[0] + 1360u);
    c.f[12] = 0u;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[14] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A04u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D2A04u) [[unlikely]] return; }
L_002D2A04:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 1344u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A18u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002D2A18u) [[unlikely]] return; }
L_002D2A18:
    set32(c.r[6], c.r[29].w[0] + 1360u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A2Cu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002D2A2Cu) [[unlikely]] return; }
L_002D2A2C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A3Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D2A3Cu) [[unlikely]] return; }
L_002D2A3C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A4Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D2A4Cu) [[unlikely]] return; }
L_002D2A4C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 84u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D2B2C; } }
    set32(c.r[18], c.r[20].w[0] + 320u);
    c.budget -= 1;
L_002D2A60:
    set32(c.r[16], c.r[21].w[0] << 4);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[16].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A80u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D2A80u) [[unlikely]] return; }
L_002D2A80:
    set32(c.r[21], c.r[21].w[0] + 2u);
    set32(c.r[4], c.r[29].w[0] + 1280u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A94u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x002D2A94u) [[unlikely]] return; }
L_002D2A94:
    set32(c.r[18], c.r[18].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 86u)));
    set32(c.r[4], c.r[29].w[0] + 1344u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[14] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2AC4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D2AC4u) [[unlikely]] return; }
L_002D2AC4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 86u)));
    set32(c.r[4], c.r[29].w[0] + 1360u);
    c.f[12] = 0u;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[14] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2AF4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D2AF4u) [[unlikely]] return; }
L_002D2AF4:
    set32(c.r[5], c.r[29].w[0] + 1280u);
    set32(c.r[6], c.r[29].w[0] + 1344u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B08u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002D2B08u) [[unlikely]] return; }
L_002D2B08:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 1280u);
    set32(c.r[6], c.r[29].w[0] + 1360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B1Cu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002D2B1Cu) [[unlikely]] return; }
L_002D2B1C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 84u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D2A60u | kUnwind; return; } goto L_002D2A60; } }
L_002D2B2C:
    set32(c.r[16], c.r[21].w[0] << 4);
    set32(c.r[5], c.r[22].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[22], c.r[21].w[0] + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[16].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B4Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D2B4Cu) [[unlikely]] return; }
L_002D2B4C:
    set32(c.r[4], c.r[29].w[0] + 1280u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B5Cu);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x002D2B5Cu) [[unlikely]] return; }
L_002D2B5C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 86u)));
    set32(c.r[4], c.r[29].w[0] + 1344u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[14] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B88u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D2B88u) [[unlikely]] return; }
L_002D2B88:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 86u)));
    set32(c.r[4], c.r[29].w[0] + 1360u);
    c.f[12] = 0u;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[14] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2BB8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D2BB8u) [[unlikely]] return; }
L_002D2BB8:
    set32(c.r[5], c.r[29].w[0] + 1280u);
    set32(c.r[6], c.r[29].w[0] + 1344u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2BCCu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002D2BCCu) [[unlikely]] return; }
L_002D2BCC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 1280u);
    set32(c.r[6], c.r[29].w[0] + 1360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2BE0u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002D2BE0u) [[unlikely]] return; }
L_002D2BE0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 82u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D2D9C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.f[21] = 0u;
    set32(c.r[4], c.r[4].w[0] - 4576u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2C04u);  if (depth < kMaxDepth) unit_0078(c, 67u, depth + 1u); else { c.pc = 0x002E0B80u; return; } if (c.pc != 0x002D2C04u) [[unlikely]] return; }
L_002D2C04:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] <= 0;  if (t) { goto L_002D2CD4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[16], c.r[2].w[0] + 27264u);
    set32(c.r[17], c.r[3].w[0] + 22464u);
    set32(c.r[21], c.r[4].w[0] + 17664u);
    c.r[18].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 9;
L_002D2C30:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2C40u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D2C40u) [[unlikely]] return; }
L_002D2C40:
    c.f[1] = ld32((c.r[20].w[0] + 64u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    st32((c.r[17].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 68u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 72u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 76u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D2C88; } }
    st32((c.r[16].w[0]), c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D2CA8; } }
L_002D2C88:
    c.f[1] = c.r[19].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[16].w[0]), 0u);
    c.f[0] = c.r[22].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 21u, c.f[1], c.f[0]);
    c.budget -= 8;
L_002D2CA8:
    st32((c.r[16].w[0] + 4u), c.f[21]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[16].w[0] + 8u), c.f[20]);
    set32(c.r[17], c.r[17].w[0] + 16u);
    st32((c.r[16].w[0] + 12u), c.f[20]);
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[21], c.r[21].w[0] + 16u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D2C30u | kUnwind; return; } goto L_002D2C30; } }
L_002D2CD4:
    set32(c.r[2], c.r[19].w[0] - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[16], c.r[2].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] + 22480u);
    set32(c.r[2], c.r[2].w[0] + 27280u);
    set32(c.r[4], c.r[4].w[0] + 17680u);
    set32(c.r[30], c.r[3].w[0] - 16u);
    set32(c.r[23], c.r[2].w[0] - 16u);
    set32(c.r[19], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[21], 0u + 1u);
    c.budget -= 15;
L_002D2D10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 17664u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2D30u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D2D30u) [[unlikely]] return; }
L_002D2D30:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + c.r[30].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2D40u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D2D40u) [[unlikely]] return; }
L_002D2D40:
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + c.r[23].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2D54u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002D2D54u) [[unlikely]] return; }
L_002D2D54:
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[21].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D2D10u | kUnwind; return; } goto L_002D2D10; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[2], c.r[22].w[0] + 2u);
    st32((c.r[3].w[0] - 4576u), c.r[2].w[0]);
    set32(c.r[5], c.r[3].w[0] - 4576u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 82u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2D94u);  if (depth < kMaxDepth) unit_0059(c, 242u, depth + 1u); else { c.pc = 0x00267EE0u; return; } if (c.pc != 0x002D2D94u) [[unlikely]] return; }
L_002D2D94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D2DB0; } }
L_002D2D9C:
    set32(c.r[5], c.r[20].w[0] + 64u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2DB0u);  if (depth < kMaxDepth) unit_004B(c, 71u, depth + 1u); else { c.pc = 0x0022E110u; return; } if (c.pc != 0x002D2DB0u) [[unlikely]] return; }
L_002D2DB0:
    ld128((c.r[29].w[0] + 1520u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1504u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 1488u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 1472u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 1456u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 1440u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 1424u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 1408u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 1392u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1376u));
    c.f[21] = ld32((c.r[29].w[0] + 1544u));
    c.f[20] = ld32((c.r[29].w[0] + 1536u));
    set32(c.r[29], c.r[29].w[0] + 1552u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D2DF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D30A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 25520u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002D0000u < 16384u) { entry = entries_0074[(t - 0x002D0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D2E44:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[5], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[4], c.r[4].w[0] - 19312u);
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2E70u);  if (depth < kMaxDepth) unit_0089(c, 39u, depth + 1u); else { c.pc = 0x003249E0u; return; } if (c.pc != 0x002D2E70u) [[unlikely]] return; }
L_002D2E70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D30A4; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[4], 0u + 268u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D2EE8; } }
L_002D2EC4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
L_002D2EE8:
    set32(c.r[10], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2EF4u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002D2EF4u) [[unlikely]] return; }
L_002D2EF4:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2F14u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D2F14u) [[unlikely]] return; }
L_002D2F14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D30A8; } }
L_002D2F1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2F28u);  if (depth < kMaxDepth) unit_0075(c, 9u, depth + 1u); else { c.pc = 0x002D4138u; return; } if (c.pc != 0x002D2F28u) [[unlikely]] return; }
L_002D2F28:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002D2FB4; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D2F48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2F48u);  if (depth < kMaxDepth) unit_0074(c, 352u, depth + 1u); else { c.pc = 0x002D3CC0u; return; } if (c.pc != 0x002D2F48u) [[unlikely]] return; }
L_002D2F48:
    st32((c.r[16].w[0] + 2144u), 0u);
    set32(c.r[2], c.r[16].w[0] + 128u);
    st32((c.r[16].w[0] + 48u), 0u);
    set32(c.r[3], c.r[16].w[0] + 176u);
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 88u);
    st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[16].w[0] + 96u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[3].w[0] + 36u), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st32((c.r[3].w[0] + 32u), 0u);
    st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0]), 0u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 27;
L_002D2FB4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2FC8u);  if (depth < kMaxDepth) unit_0075(c, 14u, depth + 1u); else { c.pc = 0x002D4248u; return; } if (c.pc != 0x002D2FC8u) [[unlikely]] return; }
L_002D2FC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D30A8; } }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D30A8; } }
L_002D2FF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2FFCu);  if (depth < kMaxDepth) unit_0075(c, 9u, depth + 1u); else { c.pc = 0x002D4138u; return; } if (c.pc != 0x002D2FFCu) [[unlikely]] return; }
L_002D2FFC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002D3088; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D301C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D301Cu);  if (depth < kMaxDepth) unit_0074(c, 352u, depth + 1u); else { c.pc = 0x002D3CC0u; return; } if (c.pc != 0x002D301Cu) [[unlikely]] return; }
L_002D301C:
    st32((c.r[16].w[0] + 2144u), 0u);
    set32(c.r[2], c.r[16].w[0] + 128u);
    st32((c.r[16].w[0] + 48u), 0u);
    set32(c.r[3], c.r[16].w[0] + 176u);
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 88u);
    st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[16].w[0] + 96u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[3].w[0] + 36u), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st32((c.r[3].w[0] + 32u), 0u);
    st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0]), 0u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 27;
L_002D3088:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D309Cu);  if (depth < kMaxDepth) unit_0075(c, 14u, depth + 1u); else { c.pc = 0x002D4248u; return; } if (c.pc != 0x002D309Cu) [[unlikely]] return; }
L_002D309C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D30A8; } }
L_002D30A4:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D30A8:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D30D0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    set32(c.r[2], 0u + 450u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 240u), c.f[22]);
    st32((c.r[29].w[0] + 232u), c.f[21]);
    st32((c.r[29].w[0] + 224u), c.f[20]);
    c.budget -= 18;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002D3148; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[2].w[0] + 23152u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002D3140; } }
    set32(c.r[2], 0u + 2224u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[19], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_002D3140:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002D3664; } }
L_002D3148:
    set32(c.r[3], c.r[5].w[0] - 450u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D3664; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 25488u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002D0000u < 16384u) { entry = entries_0074[(t - 0x002D0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D3174:
    set32(c.r[2], 0u + 2224u);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D31A4u);  if (depth < kMaxDepth) unit_0074(c, 370u, depth + 1u); else { c.pc = 0x002D3FC0u; return; } if (c.pc != 0x002D31A4u) [[unlikely]] return; }
L_002D31A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D31E4; } }
L_002D31AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[2].w[0] + 23152u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[5].w[0] + 16u);
    c.budget -= 5;
L_002D31C0:
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D3174u | kUnwind; return; } goto L_002D3174; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 2224u);
    c.r[2].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D31C0u | kUnwind; return; } goto L_002D31C0; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D31E4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002D3664; } }
    set32(c.r[4], ld32((c.r[22].w[0] + 104u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 45);
    c.r[21].d[0] = c.r[2].d[0] & 32767ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 15);
    set32(c.r[18], c.r[4].w[0] - 1u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 30);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[3].d[0] & 32767ull;
    c.r[20].d[0] = c.r[2].d[0] & 32767ull;
    set32(c.r[4], c.r[4].w[0] - 2144u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[16].d[0] & 32767ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D322Cu);  if (depth < kMaxDepth) unit_001B(c, 278u, depth + 1u); else { c.pc = 0x0016F810u; return; } if (c.pc != 0x002D322Cu) [[unlikely]] return; }
L_002D322C:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D3240; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 2;
L_002D3240:
    st16((c.r[19].w[0] + 128u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[2], c.r[19].w[0] + 128u);
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[21].d[0] & 65535ull;
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st16((c.r[19].w[0] + 176u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[2], c.r[19].w[0] + 176u);
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D3664; } }
L_002D3280:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[6].d[0] = c.r[2].d[0] & 15ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 16);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 52);
    c.r[21].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[20].d[0] = c.r[5].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002D32BC; } }
    c.r[16].d[0] = 0ull - c.r[16].d[0];
    c.budget -= 1;
L_002D32BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002D32C8; } }
    c.r[20].d[0] = 0ull - c.r[20].d[0];
    c.budget -= 1;
L_002D32C8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_002D32D4; } }
    c.r[21].d[0] = 0ull - c.r[21].d[0];
    c.budget -= 1;
L_002D32D4:
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], ld32((c.r[19].w[0] + 132u)));
    st32((c.r[19].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D32F8; } }
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D3310; } }
L_002D32F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 128u)));
    set32(c.r[4], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[22], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_002D3310:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_002D3340; } }
    c.f[12] = 0u;
    set32(c.r[4], c.r[19].w[0] + 192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3338u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D3338u) [[unlikely]] return; }
L_002D3338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D3664; } }
L_002D3340:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[20] = ld32((c.r[22].w[0] + 148u));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[1] = c.r[1].w[0];
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[22] = c.r[1].w[0];
    c.f[20] = fp::mul(c.f[20], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3378u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002D3378u) [[unlikely]] return; }
L_002D3378:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D338Cu);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x002D338Cu) [[unlikely]] return; }
L_002D338C:
    set32(c.r[17], c.r[29].w[0] + 64u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D339Cu);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x002D339Cu) [[unlikely]] return; }
L_002D339C:
    c.f[21] = c.f[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D33ACu);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x002D33ACu) [[unlikely]] return; }
L_002D33AC:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D33BCu);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x002D33BCu) [[unlikely]] return; }
L_002D33BC:
    c.f[12] = c.f[21];
    c.f[13] = c.f[20];
    c.f[14] = c.f[0];
    c.f[15] = c.f[22];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D33D8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D33D8u) [[unlikely]] return; }
L_002D33D8:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D33ECu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002D33ECu) [[unlikely]] return; }
L_002D33EC:
    set32(c.r[16], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[18].w[0] - 19312u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3404u);  if (depth < kMaxDepth) unit_0089(c, 11u, depth + 1u); else { c.pc = 0x003242A8u; return; } if (c.pc != 0x002D3404u) [[unlikely]] return; }
L_002D3404:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3414u);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x002D3414u) [[unlikely]] return; }
L_002D3414:
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[4], c.r[19].w[0] + 192u);
    c.f[13] = ld32((c.r[29].w[0] + 68u));
    c.f[15] = c.f[22];
    c.f[14] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3430u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D3430u) [[unlikely]] return; }
L_002D3430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D3664; } }
L_002D3438:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[19].w[0] + 2144u), c.r[3].w[0]);
    st16((c.r[19].w[0] + 80u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D3664; } }
L_002D3464:
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    st16((c.r[19].w[0] + 84u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D3664; } }
L_002D3474:
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    st16((c.r[19].w[0] + 86u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D3664; } }
L_002D3484:
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 45);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 15);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 30);
    c.r[6].d[0] = c.r[6].d[0] & 32767ull;
    c.r[7].d[0] = c.r[7].d[0] & 32767ull;
    c.r[8].d[0] = c.r[8].d[0] & 32767ull;
    c.r[5].d[0] = c.r[16].d[0] & 32767ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D34CCu);  if (depth < kMaxDepth) unit_0075(c, 16u, depth + 1u); else { c.pc = 0x002D4288u; return; } if (c.pc != 0x002D34CCu) [[unlikely]] return; }
L_002D34CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D3664; } }
L_002D34D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    st16((c.r[19].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[3], c.r[19].w[0] + 88u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D3534; } }
L_002D3508:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    st16((c.r[19].w[0] + 96u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[3], c.r[19].w[0] + 96u);
    c.budget -= 11;
L_002D3534:
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D3664; } }
L_002D3544:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23156u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002D3584; } }
    set32(c.r[5], c.r[3].w[0] << 16);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D356Cu);  if (depth < kMaxDepth) unit_0075(c, 11u, depth + 1u); else { c.pc = 0x002D4190u; return; } if (c.pc != 0x002D356Cu) [[unlikely]] return; }
L_002D356C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3578u);  if (depth < kMaxDepth) unit_0075(c, 9u, depth + 1u); else { c.pc = 0x002D4138u; return; } if (c.pc != 0x002D3578u) [[unlikely]] return; }
L_002D3578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D3584; } }
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_002D3584:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D3664; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D3664; } }
L_002D359C:
    set32(c.r[9], c.r[19].w[0] + 128u);
    set32(c.r[3], 0u + 3u);
    c.r[2].d[0] = c.r[16].d[0] & 32767ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 15);
    st32((c.r[9].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[5].d[0] & 32767ull;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 30);
    st16((c.r[9].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[19].w[0] + 176u);
    c.r[4].d[0] = c.r[4].d[0] & 32767ull;
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], 0u + 4u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 45);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    st16((c.r[6].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    st16((c.r[9].w[0] + 40u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D3664; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[9].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D3664; } }
L_002D3600:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st16((c.r[19].w[0] + 82u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D3664; } }
L_002D3614:
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 45);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 15);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 30);
    c.r[6].d[0] = c.r[6].d[0] & 32767ull;
    c.r[7].d[0] = c.r[7].d[0] & 32767ull;
    c.r[8].d[0] = c.r[8].d[0] & 32767ull;
    c.r[5].d[0] = c.r[16].d[0] & 32767ull;
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 32u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3664u);  if (depth < kMaxDepth) unit_0075(c, 13u, depth + 1u); else { c.pc = 0x002D4230u; return; } if (c.pc != 0x002D3664u) [[unlikely]] return; }
L_002D3664:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[22] = ld32((c.r[29].w[0] + 240u));
    c.f[21] = ld32((c.r[29].w[0] + 232u));
    c.f[20] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D36A0:
    set32(c.r[2], 0u + 1u);
    set32(c.r[8], c.r[4].w[0] + 88u);
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[9], c.r[4].w[0] + 96u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    st16((c.r[4].w[0] + 82u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 32u)));
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 76u), c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 36u)));
    st16((c.r[4].w[0] + 86u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 44u)));
    st16((c.r[4].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[8].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[8].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 52u)));
    st16((c.r[4].w[0] + 96u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[9].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[9].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 56u)));
    st16((c.r[4].w[0] + 80u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0] + 60u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0] + 2144u), c.r[2].w[0]);
    c.budget -= 41;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D3748:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    set32(c.r[19], 0u + 13248u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    set32(c.r[20], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[21], c.r[2].w[0] + 27456u);
    c.budget -= 16;
L_002D3788:
    set32(c.r[2], ld32((c.r[16].w[0] + 2144u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D3840; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_002D37AC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D37B8; } }
L_002D37AC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 128u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[21].w[0]);
    c.budget -= 3;
L_002D37B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_002D3840; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D37D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D37D4u);  if (depth < kMaxDepth) unit_0074(c, 352u, depth + 1u); else { c.pc = 0x002D3CC0u; return; } if (c.pc != 0x002D37D4u) [[unlikely]] return; }
L_002D37D4:
    st32((c.r[16].w[0] + 2144u), 0u);
    set32(c.r[2], c.r[16].w[0] + 128u);
    st32((c.r[16].w[0] + 48u), 0u);
    set32(c.r[3], c.r[16].w[0] + 176u);
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 88u);
    st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[16].w[0] + 96u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[3].w[0] + 36u), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st32((c.r[3].w[0] + 32u), 0u);
    st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0]), 0u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 27;
L_002D3840:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 2224u);
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D3788u | kUnwind; return; } goto L_002D3788; } }
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
L_002D3880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002D38D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D38D8; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] + 23120u);
    set32(c.r[2], c.r[2].w[0] - 25424u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D38C0u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x002D38C0u) [[unlikely]] return; }
L_002D38C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 25440u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D38D8u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x002D38D8u) [[unlikely]] return; }
L_002D38D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D38F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 23152u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3908u);  if (depth < kMaxDepth) unit_0074(c, 360u, depth + 1u); else { c.pc = 0x002D3E18u; return; } if (c.pc != 0x002D3908u) [[unlikely]] return; }
L_002D3908:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D3918:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 23152u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3930u);  if (depth < kMaxDepth) unit_0074(c, 319u, depth + 1u); else { c.pc = 0x002D3748u; return; } if (c.pc != 0x002D3930u) [[unlikely]] return; }
L_002D3930:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D3940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 23152u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3958u);  if (depth < kMaxDepth) unit_0074(c, 197u, depth + 1u); else { c.pc = 0x002D2328u; return; } if (c.pc != 0x002D3958u) [[unlikely]] return; }
L_002D3958:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D3968:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 23152u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3980u);  if (depth < kMaxDepth) unit_0075(c, 17u, depth + 1u); else { c.pc = 0x002D42A0u; return; } if (c.pc != 0x002D3980u) [[unlikely]] return; }
L_002D3980:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D3990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[16], c.r[5].w[0] + 16u);
    c.budget -= 8;
L_002D39B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002D39E4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D39D8u);  if (depth < kMaxDepth) unit_0074(c, 370u, depth + 1u); else { c.pc = 0x002D3FC0u; return; } if (c.pc != 0x002D39D8u) [[unlikely]] return; }
L_002D39D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D39FC; } }
L_002D39E4:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 2224u);
    c.r[2].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D39B0u | kUnwind; return; } goto L_002D39B0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D39FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D3A10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002D3A34; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002D3A34:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3A40u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D3A40u) [[unlikely]] return; }
L_002D3A40:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002D3A50u);  goto L_002D3A54; }
L_002D3A54:
    c.r[16].d[0] = c.hi.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3A60u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D3A60u) [[unlikely]] return; }
L_002D3A60:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u - c.r[16].w[0]);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[16].d[0];
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D3A80:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 128u), c.f[20]);
    c.budget -= 10;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002D3ABC; } }
    set32(c.r[17], c.r[6].w[0] + 64u);
    c.f[20] = ld32((c.r[16].w[0] + 16u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D3AC8; } }
L_002D3ABC:
    c.f[20] = ld32((c.r[16].w[0] + 20u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    set32(c.r[17], c.r[6].w[0] + 80u);
    c.budget -= 3;
L_002D3AC8:
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[12], c.f[0]);
    c.f[12] = fp::mul(c.f[1], c.f[12]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3AECu);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x002D3AECu) [[unlikely]] return; }
L_002D3AEC:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3B08u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002D3B08u) [[unlikely]] return; }
L_002D3B08:
    c.f[12] = ld32((c.r[16].w[0] + 28u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3B1Cu);  if (depth < kMaxDepth) unit_0045(c, 36u, depth + 1u); else { c.pc = 0x00214778u; return; } if (c.pc != 0x002D3B1Cu) [[unlikely]] return; }
L_002D3B1C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3B30u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x002D3B30u) [[unlikely]] return; }
L_002D3B30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3B44u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002D3B44u) [[unlikely]] return; }
L_002D3B44:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D3B68:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002D3B90; } }
    set32(c.r[17], c.r[5].w[0] + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D3B94; } }
L_002D3B90:
    set32(c.r[17], c.r[5].w[0] + 48u);
    c.budget -= 1;
L_002D3B94:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002D3BA8; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002D3BA8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3BB4u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D3BB4u) [[unlikely]] return; }
L_002D3BB4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002D3BC4u);  goto L_002D3BC8; }
L_002D3BC8:
    c.r[16].d[0] = c.hi.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3BD4u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D3BD4u) [[unlikely]] return; }
L_002D3BD4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], 0u - c.r[16].w[0]);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[16].d[0];
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D3C10:
    set32(c.r[2], c.r[4].w[0] + 128u);
    set32(c.r[8], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + 176u);
    st32((c.r[2].w[0] + 4u), c.r[8].w[0]);
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 4u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[2].w[0] + 40u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D3C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C60u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D3C60u) [[unlikely]] return; }
L_002D3C60:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[5].d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002D3C78u);  goto L_002D3C7C; }
L_002D3C7C:
    c.r[6].d[0] = c.hi.d[0];
    c.f[20] = c.r[6].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C94u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002D3C94u) [[unlikely]] return; }
L_002D3C94:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D3CA4; } }
    c.f[20] = c.f[20] ^ fp::kSign;
    c.budget -= 1;
L_002D3CA4:
    st32((c.r[16].w[0] + 36u), c.f[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D3CC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D3CE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3CE4u);  if (depth < kMaxDepth) unit_0074(c, 352u, depth + 1u); else { c.pc = 0x002D3CC0u; return; } if (c.pc != 0x002D3CE4u) [[unlikely]] return; }
L_002D3CE4:
    st32((c.r[16].w[0] + 2144u), 0u);
    set32(c.r[2], c.r[16].w[0] + 128u);
    st32((c.r[16].w[0] + 48u), 0u);
    set32(c.r[3], c.r[16].w[0] + 176u);
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 88u);
    st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[16].w[0] + 96u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[3].w[0] + 36u), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st32((c.r[3].w[0] + 32u), 0u);
    st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0]), 0u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 8u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D3D68:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002D3D84; } }
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002D3D84:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D3D90:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002D3DC0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 13248u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D3DC0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D3DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 16u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3DF0u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002D3DF0u) [[unlikely]] return; }
L_002D3DF0:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3E04u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002D3E04u) [[unlikely]] return; }
L_002D3E04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D3E18:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002D3E4C; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3E4Cu);  if (depth < kMaxDepth) unit_0075(c, 17u, depth + 1u); else { c.pc = 0x002D42A0u; return; } if (c.pc != 0x002D3E4Cu) [[unlikely]] return; }
L_002D3E4C:
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[17], 0u + 9u);
    c.budget -= 3;
L_002D3E58:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D3E80; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_002D3E80; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3E80u);  if (depth < kMaxDepth) unit_0074(c, 205u, depth + 1u); else { c.pc = 0x002D24A8u; return; } if (c.pc != 0x002D3E80u) [[unlikely]] return; }
L_002D3E80:
    set32(c.r[16], c.r[16].w[0] + 2224u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D3E58u | kUnwind; return; } goto L_002D3E58; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D3EB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 136u), c.f[21]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 128u), c.f[20]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3EF8u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x002D3EF8u) [[unlikely]] return; }
L_002D3EF8:
    c.f[20] = 0u;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 86u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.f[12] = c.f[20];
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[14] = c.f[20];
    c.f[15] = c.f[21];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3F2Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D3F2Cu) [[unlikely]] return; }
L_002D3F2C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 86u)));
    c.f[12] = c.f[20];
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.f[15] = c.f[21];
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[14] = c.f[12];
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3F5Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002D3F5Cu) [[unlikely]] return; }
L_002D3F5C:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3F70u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002D3F70u) [[unlikely]] return; }
L_002D3F70:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3F84u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002D3F84u) [[unlikely]] return; }
L_002D3F84:
    set32(c.r[2], ld32((c.r[19].w[0])));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 2u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 136u));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D3FC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 500u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 8u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], 0u + 1u);
    st32((c.r[16].w[0] + 48u), c.r[17].w[0]);
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3FF0u);  if (depth < kMaxDepth) unit_0075(c, 3u, depth + 1u); else { c.pc = 0x002D4090u; return; } if (c.pc != 0x002D3FF0u) [[unlikely]] return; }
L_002D3FF0:
    set32(c.r[2], 0u + 800u);
    set32(c.r[3], 0u + 44u);
    st16((c.r[16].w[0] + 86u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    [[clang::musttail]] return unit_0075(c, 1u, depth);
}

}
