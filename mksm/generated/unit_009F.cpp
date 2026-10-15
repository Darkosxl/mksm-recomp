#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009F[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94,
    0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 108, 0, 109, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0,
    0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0,
    0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0,
    165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0,
    0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0,
    0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0,
    0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0,
    0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204,
    0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0,
    0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 235,
    0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0,
    0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0,
    0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264,
    0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0,
    0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315,
    0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330,
    0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0,
    0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_009F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0037C000;
    case 2u: goto L_0037C004;
    case 3u: goto L_0037C010;
    case 4u: goto L_0037C048;
    case 5u: goto L_0037C058;
    case 6u: goto L_0037C070;
    case 7u: goto L_0037C080;
    case 8u: goto L_0037C098;
    case 9u: goto L_0037C0A8;
    case 10u: goto L_0037C0C8;
    case 11u: goto L_0037C0F0;
    case 12u: goto L_0037C108;
    case 13u: goto L_0037C138;
    case 14u: goto L_0037C188;
    case 15u: goto L_0037C198;
    case 16u: goto L_0037C1E4;
    case 17u: goto L_0037C1F8;
    case 18u: goto L_0037C238;
    case 19u: goto L_0037C260;
    case 20u: goto L_0037C298;
    case 21u: goto L_0037C2B0;
    case 22u: goto L_0037C35C;
    case 23u: goto L_0037C37C;
    case 24u: goto L_0037C3C8;
    case 25u: goto L_0037C3E8;
    case 26u: goto L_0037C410;
    case 27u: goto L_0037C420;
    case 28u: goto L_0037C440;
    case 29u: goto L_0037C464;
    case 30u: goto L_0037C470;
    case 31u: goto L_0037C490;
    case 32u: goto L_0037C4C0;
    case 33u: goto L_0037C4D4;
    case 34u: goto L_0037C4E0;
    case 35u: goto L_0037C508;
    case 36u: goto L_0037C518;
    case 37u: goto L_0037C52C;
    case 38u: goto L_0037C540;
    case 39u: goto L_0037C550;
    case 40u: goto L_0037C588;
    case 41u: goto L_0037C5B0;
    case 42u: goto L_0037C5CC;
    case 43u: goto L_0037C608;
    case 44u: goto L_0037C628;
    case 45u: goto L_0037C640;
    case 46u: goto L_0037C660;
    case 47u: goto L_0037C690;
    case 48u: goto L_0037C69C;
    case 49u: goto L_0037C6B0;
    case 50u: goto L_0037C6C0;
    case 51u: goto L_0037C6D8;
    case 52u: goto L_0037C71C;
    case 53u: goto L_0037C73C;
    case 54u: goto L_0037C74C;
    case 55u: goto L_0037C778;
    case 56u: goto L_0037C7A8;
    case 57u: goto L_0037C7D4;
    case 58u: goto L_0037C814;
    case 59u: goto L_0037C840;
    case 60u: goto L_0037C850;
    case 61u: goto L_0037C870;
    case 62u: goto L_0037C890;
    case 63u: goto L_0037C8BC;
    case 64u: goto L_0037C8E0;
    case 65u: goto L_0037C91C;
    case 66u: goto L_0037C93C;
    case 67u: goto L_0037C95C;
    case 68u: goto L_0037C988;
    case 69u: goto L_0037C9A0;
    case 70u: goto L_0037C9D8;
    case 71u: goto L_0037C9F4;
    case 72u: goto L_0037CA00;
    case 73u: goto L_0037CA34;
    case 74u: goto L_0037CA50;
    case 75u: goto L_0037CA70;
    case 76u: goto L_0037CA80;
    case 77u: goto L_0037CA8C;
    case 78u: goto L_0037CAC8;
    case 79u: goto L_0037CAE0;
    case 80u: goto L_0037CB74;
    case 81u: goto L_0037CC7C;
    case 82u: goto L_0037CDC0;
    case 83u: goto L_0037CE40;
    case 84u: goto L_0037CFC0;
    case 85u: goto L_0037CFEC;
    case 86u: goto L_0037D010;
    case 87u: goto L_0037D038;
    case 88u: goto L_0037D050;
    case 89u: goto L_0037D10C;
    case 90u: goto L_0037D138;
    case 91u: goto L_0037D17C;
    case 92u: goto L_0037D198;
    case 93u: goto L_0037D1CC;
    case 94u: goto L_0037D1FC;
    case 95u: goto L_0037D204;
    case 96u: goto L_0037D24C;
    case 97u: goto L_0037D254;
    case 98u: goto L_0037D290;
    case 99u: goto L_0037D298;
    case 100u: goto L_0037D2D0;
    case 101u: goto L_0037D2D8;
    case 102u: goto L_0037D2E8;
    case 103u: goto L_0037D308;
    case 104u: goto L_0037D318;
    case 105u: goto L_0037D334;
    case 106u: goto L_0037D34C;
    case 107u: goto L_0037D358;
    case 108u: goto L_0037D368;
    case 109u: goto L_0037D370;
    case 110u: goto L_0037D388;
    case 111u: goto L_0037D398;
    case 112u: goto L_0037D3A8;
    case 113u: goto L_0037D3B0;
    case 114u: goto L_0037D3C0;
    case 115u: goto L_0037D3D4;
    case 116u: goto L_0037D3E4;
    case 117u: goto L_0037D3F4;
    case 118u: goto L_0037D404;
    case 119u: goto L_0037D414;
    case 120u: goto L_0037D420;
    case 121u: goto L_0037D438;
    case 122u: goto L_0037D450;
    case 123u: goto L_0037D474;
    case 124u: goto L_0037D490;
    case 125u: goto L_0037D498;
    case 126u: goto L_0037D4B0;
    case 127u: goto L_0037D4D4;
    case 128u: goto L_0037D4F0;
    case 129u: goto L_0037D510;
    case 130u: goto L_0037D54C;
    case 131u: goto L_0037D574;
    case 132u: goto L_0037D598;
    case 133u: goto L_0037D5B0;
    case 134u: goto L_0037D5D8;
    case 135u: goto L_0037D5FC;
    case 136u: goto L_0037D634;
    case 137u: goto L_0037D644;
    case 138u: goto L_0037D670;
    case 139u: goto L_0037D680;
    case 140u: goto L_0037D694;
    case 141u: goto L_0037D6B0;
    case 142u: goto L_0037D6D8;
    case 143u: goto L_0037D714;
    case 144u: goto L_0037D72C;
    case 145u: goto L_0037D764;
    case 146u: goto L_0037D798;
    case 147u: goto L_0037D7AC;
    case 148u: goto L_0037D7CC;
    case 149u: goto L_0037D7F0;
    case 150u: goto L_0037D804;
    case 151u: goto L_0037D824;
    case 152u: goto L_0037D838;
    case 153u: goto L_0037D868;
    case 154u: goto L_0037D89C;
    case 155u: goto L_0037D8B0;
    case 156u: goto L_0037D8E0;
    case 157u: goto L_0037D8F0;
    case 158u: goto L_0037D924;
    case 159u: goto L_0037D938;
    case 160u: goto L_0037D968;
    case 161u: goto L_0037D978;
    case 162u: goto L_0037D990;
    case 163u: goto L_0037D9DC;
    case 164u: goto L_0037D9F0;
    case 165u: goto L_0037DA00;
    case 166u: goto L_0037DA10;
    case 167u: goto L_0037DA58;
    case 168u: goto L_0037DA68;
    case 169u: goto L_0037DABC;
    case 170u: goto L_0037DAD8;
    case 171u: goto L_0037DAE8;
    case 172u: goto L_0037DAF8;
    case 173u: goto L_0037DB08;
    case 174u: goto L_0037DB1C;
    case 175u: goto L_0037DB4C;
    case 176u: goto L_0037DB68;
    case 177u: goto L_0037DB88;
    case 178u: goto L_0037DB98;
    case 179u: goto L_0037DBA8;
    case 180u: goto L_0037DBB8;
    case 181u: goto L_0037DBC8;
    case 182u: goto L_0037DBE0;
    case 183u: goto L_0037DBF4;
    case 184u: goto L_0037DC08;
    case 185u: goto L_0037DC24;
    case 186u: goto L_0037DC40;
    case 187u: goto L_0037DC8C;
    case 188u: goto L_0037DCAC;
    case 189u: goto L_0037DCD0;
    case 190u: goto L_0037DCF0;
    case 191u: goto L_0037DCF8;
    case 192u: goto L_0037DD08;
    case 193u: goto L_0037DD18;
    case 194u: goto L_0037DD68;
    case 195u: goto L_0037DD7C;
    case 196u: goto L_0037DDA8;
    case 197u: goto L_0037DDB8;
    case 198u: goto L_0037DE10;
    case 199u: goto L_0037DEEC;
    case 200u: goto L_0037DF08;
    case 201u: goto L_0037DFE8;
    case 202u: goto L_0037E008;
    case 203u: goto L_0037E040;
    case 204u: goto L_0037E07C;
    case 205u: goto L_0037E094;
    case 206u: goto L_0037E108;
    case 207u: goto L_0037E158;
    case 208u: goto L_0037E1F8;
    case 209u: goto L_0037E208;
    case 210u: goto L_0037E27C;
    case 211u: goto L_0037E2A4;
    case 212u: goto L_0037E2C0;
    case 213u: goto L_0037E2D0;
    case 214u: goto L_0037E2E0;
    case 215u: goto L_0037E30C;
    case 216u: goto L_0037E38C;
    case 217u: goto L_0037E398;
    case 218u: goto L_0037E3C0;
    case 219u: goto L_0037E3DC;
    case 220u: goto L_0037E490;
    case 221u: goto L_0037E524;
    case 222u: goto L_0037E54C;
    case 223u: goto L_0037E558;
    case 224u: goto L_0037E578;
    case 225u: goto L_0037E580;
    case 226u: goto L_0037E5C8;
    case 227u: goto L_0037E5F4;
    case 228u: goto L_0037E608;
    case 229u: goto L_0037E67C;
    case 230u: goto L_0037E768;
    case 231u: goto L_0037E794;
    case 232u: goto L_0037E7BC;
    case 233u: goto L_0037E7D8;
    case 234u: goto L_0037E7F0;
    case 235u: goto L_0037E7FC;
    case 236u: goto L_0037E818;
    case 237u: goto L_0037E824;
    case 238u: goto L_0037E844;
    case 239u: goto L_0037E860;
    case 240u: goto L_0037E878;
    case 241u: goto L_0037E890;
    case 242u: goto L_0037E898;
    case 243u: goto L_0037E8C0;
    case 244u: goto L_0037E928;
    case 245u: goto L_0037E98C;
    case 246u: goto L_0037E99C;
    case 247u: goto L_0037E9D0;
    case 248u: goto L_0037EA88;
    case 249u: goto L_0037EACC;
    case 250u: goto L_0037EAE4;
    case 251u: goto L_0037EAF4;
    case 252u: goto L_0037EB3C;
    case 253u: goto L_0037EB54;
    case 254u: goto L_0037EB68;
    case 255u: goto L_0037EBA4;
    case 256u: goto L_0037EC20;
    case 257u: goto L_0037EC60;
    case 258u: goto L_0037EC88;
    case 259u: goto L_0037ECB8;
    case 260u: goto L_0037ECF4;
    case 261u: goto L_0037ED0C;
    case 262u: goto L_0037ED1C;
    case 263u: goto L_0037ED64;
    case 264u: goto L_0037ED7C;
    case 265u: goto L_0037ED90;
    case 266u: goto L_0037EE04;
    case 267u: goto L_0037EE28;
    case 268u: goto L_0037EE34;
    case 269u: goto L_0037EE5C;
    case 270u: goto L_0037EE88;
    case 271u: goto L_0037EF50;
    case 272u: goto L_0037EFD0;
    case 273u: goto L_0037EFE0;
    case 274u: goto L_0037EFF4;
    case 275u: goto L_0037F004;
    case 276u: goto L_0037F0B0;
    case 277u: goto L_0037F108;
    case 278u: goto L_0037F420;
    case 279u: goto L_0037F430;
    case 280u: goto L_0037F4C0;
    case 281u: goto L_0037F4F0;
    case 282u: goto L_0037F500;
    case 283u: goto L_0037F51C;
    case 284u: goto L_0037F530;
    case 285u: goto L_0037F540;
    case 286u: goto L_0037F550;
    case 287u: goto L_0037F560;
    case 288u: goto L_0037F5B8;
    case 289u: goto L_0037F608;
    case 290u: goto L_0037F66C;
    case 291u: goto L_0037F680;
    case 292u: goto L_0037F744;
    case 293u: goto L_0037F788;
    case 294u: goto L_0037F7A8;
    case 295u: goto L_0037F7E0;
    case 296u: goto L_0037F818;
    case 297u: goto L_0037F830;
    case 298u: goto L_0037F8A8;
    case 299u: goto L_0037F900;
    case 300u: goto L_0037F920;
    case 301u: goto L_0037F970;
    case 302u: goto L_0037F994;
    case 303u: goto L_0037F9B0;
    case 304u: goto L_0037F9C0;
    case 305u: goto L_0037F9D0;
    case 306u: goto L_0037FA00;
    case 307u: goto L_0037FA20;
    case 308u: goto L_0037FA38;
    case 309u: goto L_0037FA48;
    case 310u: goto L_0037FA60;
    case 311u: goto L_0037FA90;
    case 312u: goto L_0037FAA0;
    case 313u: goto L_0037FAB0;
    case 314u: goto L_0037FAC0;
    case 315u: goto L_0037FAFC;
    case 316u: goto L_0037FB10;
    case 317u: goto L_0037FB90;
    case 318u: goto L_0037FB9C;
    case 319u: goto L_0037FBA8;
    case 320u: goto L_0037FC30;
    case 321u: goto L_0037FC3C;
    case 322u: goto L_0037FC48;
    case 323u: goto L_0037FCA0;
    case 324u: goto L_0037FCD8;
    case 325u: goto L_0037FD38;
    case 326u: goto L_0037FD48;
    case 327u: goto L_0037FDA4;
    case 328u: goto L_0037FDE8;
    case 329u: goto L_0037FEB8;
    case 330u: goto L_0037FEFC;
    case 331u: goto L_0037FF08;
    case 332u: goto L_0037FF5C;
    case 333u: goto L_0037FF78;
    case 334u: goto L_0037FF9C;
    default: bad_entry(c, 0x0037C000u); return;
    }
L_0037C000:
    c.budget -= 1;
L_0037C004:
    c.r[2].d[0] = c.r[5].sd[0] < 400ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037C01C; } }
L_0037C010:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C02C; } }
L_0037C01C:
    set32(c.r[2], 0u + 24u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 112u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0037C02C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037C048; } }
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C048u);  if (depth < kMaxDepth) unit_0058(c, 72u, depth + 1u); else { c.pc = 0x00260B68u; return; } if (c.pc != 0x0037C048u) [[unlikely]] return; }
L_0037C048:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037C058:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C070u);  if (depth < kMaxDepth) unit_009E(c, 379u, depth + 1u); else { c.pc = 0x0037B8D8u; return; } if (c.pc != 0x0037C070u) [[unlikely]] return; }
L_0037C070:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037C080:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C098u);  if (depth < kMaxDepth) unit_009E(c, 379u, depth + 1u); else { c.pc = 0x0037B8D8u; return; } if (c.pc != 0x0037C098u) [[unlikely]] return; }
L_0037C098:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037C0A8:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C0E4; } }
    c.budget -= 1;
L_0037C0C8:
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[9].d[0];  if (t) { goto L_0037C188; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C0C8u | kUnwind; return; } goto L_0037C0C8; } }
L_0037C0E4:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[6].w[0] << 2);
    c.budget -= 3;
L_0037C0F0:
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[7].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C120; } }
L_0037C108:
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C108u | kUnwind; return; } goto L_0037C108; } }
L_0037C120:
    set32(c.r[2], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037C158; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[8].w[0]);
    c.budget -= 2;
L_0037C138:
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[9].d[0];  if (t) { goto L_0037C17C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C138u | kUnwind; return; } goto L_0037C138; } }
L_0037C158:
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C0F0u | kUnwind; return; } goto L_0037C0F0; } }
L_0037C17C:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037C188:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037C198:
    set32(c.r[29], c.r[29].w[0] - 432u);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[20]);
    set32(c.r[16], c.r[18].w[0] + 140u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[22]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[23]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 272u), c.r[31].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C1E4u);  if (depth < kMaxDepth) unit_0060(c, 262u, depth + 1u); else { c.pc = 0x00283C48u; return; } if (c.pc != 0x0037C1E4u) [[unlikely]] return; }
L_0037C1E4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[17], c.r[2].w[0] - 13720u);
    set32(c.r[20], c.r[17].w[0] + 132u);
    c.budget -= 5;
L_0037C1F8:
    set32(c.r[3], ld32((c.r[16].w[0] - 132u)));
    set32(c.r[30], c.r[18].w[0] + 140u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037C244; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[22].w[0] + 10256u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    set32(c.r[8], c.r[21].w[0] + 10296u);
    set32(c.r[9], 0u + 218u);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C244; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C238u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0037C238u) [[unlikely]] return; }
L_0037C238:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C248; } }
L_0037C244:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0037C248:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C1F8u | kUnwind; return; } goto L_0037C1F8; } }
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037C260:
    set32(c.r[2], c.r[22].w[0] << 2);
    set32(c.r[21], 0u + 1u);
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    c.r[21].d[0] = c.r[21].d[0] << (c.r[22].w[0] & 63u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C384; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C298u);  if (depth < kMaxDepth) unit_0090(c, 91u, depth + 1u); else { c.pc = 0x00340BB0u; return; } if (c.pc != 0x0037C298u) [[unlikely]] return; }
L_0037C298:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C360; } }
    c.budget -= 1;
L_0037C2B0:
    c.r[4].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[21].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C2DC; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[22].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 8u));
    st64((c.r[17].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 7;
L_0037C2DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037C300; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037C30C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C324; } }
L_0037C300:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C328; } }
L_0037C30C:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C328; } }
L_0037C324:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037C328:
    c.r[5].d[0] = c.r[4].d[0] & c.r[21].d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037C344; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0037C340; } }
    st32((c.r[17].w[0]), c.r[20].w[0]);
    c.budget -= 1;
L_0037C340:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0037C344:
    set32(c.r[2], c.r[17].w[0] + 16u);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    if (c.r[5].d[0] != 0) c.r[17].d[0] = c.r[2].d[0];
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C35Cu);  if (depth < kMaxDepth) unit_0090(c, 93u, depth + 1u); else { c.pc = 0x00340BF8u; return; } if (c.pc != 0x0037C35Cu) [[unlikely]] return; }
L_0037C35C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0037C360:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0037C384; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C37Cu);  if (depth < kMaxDepth) unit_0090(c, 136u, depth + 1u); else { c.pc = 0x003413C8u; return; } if (c.pc != 0x0037C37Cu) [[unlikely]] return; }
L_0037C37C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C2B0u | kUnwind; return; } goto L_0037C2B0; } }
L_0037C384:
    c.r[22].d[0] = c.r[23].d[0] + 0ull;
    c.r[2].d[0] = c.r[22].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C260u | kUnwind; return; } goto L_0037C260; } }
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
    set32(c.r[29], c.r[29].w[0] + 432u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037C3C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 10320u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 272u), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037C3E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 10320u);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st32((c.r[4].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0037C410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C410u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x0037C410u) [[unlikely]] return; }
L_0037C410:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037C420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[2], c.r[16].w[0] + 136u);
    c.budget -= 8;
L_0037C440:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C440u | kUnwind; return; } goto L_0037C440; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C464u);  if (depth < kMaxDepth) unit_009F(c, 34u, depth + 1u); else { c.pc = 0x0037C4E0u; return; } if (c.pc != 0x0037C464u) [[unlikely]] return; }
L_0037C464:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C470u);  if (depth < kMaxDepth) unit_009F(c, 15u, depth + 1u); else { c.pc = 0x0037C198u; return; } if (c.pc != 0x0037C470u) [[unlikely]] return; }
L_0037C470:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037C490:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037C4B4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037C4C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C4D4; } }
L_0037C4B4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037C4C0:
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037C4D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037C4E0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 272u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C508u);  if (depth < kMaxDepth) unit_0090(c, 91u, depth + 1u); else { c.pc = 0x00340BB0u; return; } if (c.pc != 0x0037C508u) [[unlikely]] return; }
L_0037C508:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0037C594; } }
    c.budget -= 1;
L_0037C518:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C52Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0037C52Cu) [[unlikely]] return; }
L_0037C52C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C540u);  if (depth < kMaxDepth) unit_0090(c, 136u, depth + 1u); else { c.pc = 0x003413C8u; return; } if (c.pc != 0x0037C540u) [[unlikely]] return; }
L_0037C540:
    c.r[6].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[17].w[0] + 8u);
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
L_0037C550:
    c.r[2].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C568; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0037C568:
    c.r[5].d[0] = c.r[5].d[0] << 1;
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C550u | kUnwind; return; } goto L_0037C550; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C588u);  if (depth < kMaxDepth) unit_0090(c, 93u, depth + 1u); else { c.pc = 0x00340BF8u; return; } if (c.pc != 0x0037C588u) [[unlikely]] return; }
L_0037C588:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C518u | kUnwind; return; } goto L_0037C518; } }
L_0037C594:
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 272u));
    set32(c.r[29], c.r[29].w[0] + 320u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037C5B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C5CCu);  if (depth < kMaxDepth) unit_0064(c, 238u, depth + 1u); else { c.pc = 0x002937D8u; return; } if (c.pc != 0x0037C5CCu) [[unlikely]] return; }
L_0037C5CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037C5E0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C78C; } }
L_0037C5E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 594u)));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 594u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037C5F8; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 594u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0037C5F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C608u);  if (depth < kMaxDepth) unit_0066(c, 98u, depth + 1u); else { c.pc = 0x00298DA8u; return; } if (c.pc != 0x0037C608u) [[unlikely]] return; }
L_0037C608:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C630; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 128u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 132u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C628u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037C628u) [[unlikely]] return; }
L_0037C628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C6B0; } }
L_0037C630:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C640u);  if (depth < kMaxDepth) unit_0066(c, 98u, depth + 1u); else { c.pc = 0x00298DA8u; return; } if (c.pc != 0x0037C640u) [[unlikely]] return; }
L_0037C640:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C6B0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[6], 0u + 10u);
    set32(c.r[5], ld32((c.r[17].w[0] + 204u)));
    c.f[12] = ld32((c.r[17].w[0] + 548u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C660u);  if (depth < kMaxDepth) unit_0061(c, 277u, depth + 1u); else { c.pc = 0x00286A58u; return; } if (c.pc != 0x0037C660u) [[unlikely]] return; }
L_0037C660:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C6A4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[5], 0u + 256u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C690u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037C690u) [[unlikely]] return; }
L_0037C690:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C69Cu);  if (depth < kMaxDepth) unit_009F(c, 176u, depth + 1u); else { c.pc = 0x0037DB68u; return; } if (c.pc != 0x0037C69Cu) [[unlikely]] return; }
L_0037C69C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C6B0; } }
L_0037C6A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C6B0u);  if (depth < kMaxDepth) unit_009F(c, 190u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x0037C6B0u) [[unlikely]] return; }
L_0037C6B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C6C0u);  if (depth < kMaxDepth) unit_0066(c, 98u, depth + 1u); else { c.pc = 0x00298DA8u; return; } if (c.pc != 0x0037C6C0u) [[unlikely]] return; }
L_0037C6C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037C6E0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C6D8u);  if (depth < kMaxDepth) unit_0066(c, 98u, depth + 1u); else { c.pc = 0x00298DA8u; return; } if (c.pc != 0x0037C6D8u) [[unlikely]] return; }
L_0037C6D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C778; } }
L_0037C6E0:
    set32(c.r[6], ld32((c.r[17].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 838u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037C778; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 594u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037C778; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 212u)));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C71Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037C71Cu) [[unlikely]] return; }
L_0037C71C:
    set32(c.r[6], ld32((c.r[17].w[0] + 204u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C73Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037C73Cu) [[unlikely]] return; }
L_0037C73C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C74Cu);  if (depth < kMaxDepth) unit_008B(c, 100u, depth + 1u); else { c.pc = 0x0032CC60u; return; } if (c.pc != 0x0037C74Cu) [[unlikely]] return; }
L_0037C74C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x49450000u);
    c.r[1].d[0] = c.r[1].d[0] | 49408ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0037C778; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C778u);  if (depth < kMaxDepth) unit_009F(c, 184u, depth + 1u); else { c.pc = 0x0037DC08u; return; } if (c.pc != 0x0037C778u) [[unlikely]] return; }
L_0037C778:
    set32(c.r[3], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 840u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 9284u));
    st16((c.r[17].w[0] + 602u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 5;
L_0037C78C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037C7A8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C7D4u);  if (depth < kMaxDepth) unit_0069(c, 69u, depth + 1u); else { c.pc = 0x002A4FC8u; return; } if (c.pc != 0x0037C7D4u) [[unlikely]] return; }
L_0037C7D4:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0037CA34; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0037CA34; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C814u);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0037C814u) [[unlikely]] return; }
L_0037C814:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037CA34; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 838u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037CA34; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[6], 0u + 10u);
    c.f[12] = ld32((c.r[16].w[0] + 548u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C840u);  if (depth < kMaxDepth) unit_0061(c, 277u, depth + 1u); else { c.pc = 0x00286A58u; return; } if (c.pc != 0x0037C840u) [[unlikely]] return; }
L_0037C840:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C850u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0037C850u) [[unlikely]] return; }
L_0037C850:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037C898; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C870u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037C870u) [[unlikely]] return; }
L_0037C870:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037CA34; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C890u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037C890u) [[unlikely]] return; }
L_0037C890:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037CA34; } }
L_0037C898:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 594u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0037CA34; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C8D4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C8BCu);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0037C8BCu) [[unlikely]] return; }
L_0037C8BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 784u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 192u));
    c.r[4].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0037CA34; } }
L_0037C8D4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C8E0u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0037C8E0u) [[unlikely]] return; }
L_0037C8E0:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0037C8ECu);  goto L_0037C8F0; }
L_0037C8F0:
    c.r[4].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[4].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0037CA34; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[6], 0u + 900u);
    set32(c.r[7], 0u + 180u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C91Cu);  if (depth < kMaxDepth) unit_0068(c, 229u, depth + 1u); else { c.pc = 0x002A30B8u; return; } if (c.pc != 0x0037C91Cu) [[unlikely]] return; }
L_0037C91C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C950; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], 0u + 144u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 601u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C93Cu);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0037C93Cu) [[unlikely]] return; }
L_0037C93C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037CA34; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_0037C950:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C95Cu);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0037C95Cu) [[unlikely]] return; }
L_0037C95C:
    set32(c.r[3], ld32((c.r[2].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037CA34; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0037C9A4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 140u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C988u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037C988u) [[unlikely]] return; }
L_0037C988:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 601u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C9A0u);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0037C9A0u) [[unlikely]] return; }
L_0037C9A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0037C9A4:
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037CA34; } }
    c.r[2].d[0] = c.r[17].sd[0] < 42ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037C9E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 156u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C9D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037C9D8u) [[unlikely]] return; }
L_0037C9D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CA34; } }
L_0037C9E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C9F4u);  if (depth < kMaxDepth) unit_0069(c, 81u, depth + 1u); else { c.pc = 0x002A56E8u; return; } if (c.pc != 0x0037C9F4u) [[unlikely]] return; }
L_0037C9F4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CA00u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0037CA00u) [[unlikely]] return; }
L_0037CA00:
    st32((c.r[2].w[0] + 784u), 0u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[16].w[0] + 604u));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    st16((c.r[16].w[0] + 604u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 594u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 156u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CA34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037CA34u) [[unlikely]] return; }
L_0037CA34:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037CA50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CA70u);  if (depth < kMaxDepth) unit_0065(c, 228u, depth + 1u); else { c.pc = 0x002967F8u; return; } if (c.pc != 0x0037CA70u) [[unlikely]] return; }
L_0037CA70:
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CA80u);  if (depth < kMaxDepth) unit_0065(c, 233u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x0037CA80u) [[unlikely]] return; }
L_0037CA80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CA8Cu);  if (depth < kMaxDepth) unit_0065(c, 249u, depth + 1u); else { c.pc = 0x00296B50u; return; } if (c.pc != 0x0037CA8Cu) [[unlikely]] return; }
L_0037CA8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037CAA0; } }
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA4; } }
L_0037CAA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 392u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037CAD0; } }
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CAC8u);  if (depth < kMaxDepth) unit_008A(c, 166u, depth + 1u); else { c.pc = 0x0032A5B0u; return; } if (c.pc != 0x0037CAC8u) [[unlikely]] return; }
L_0037CAC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CAE0; } }
L_0037CAD0:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CAE0u);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0037CAE0u) [[unlikely]] return; }
L_0037CAE0:
    c.f[1] = c.f[0];
    c.r[2].d[0] = ld16((c.r[16].w[0] + 596u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0037CB14; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CB40; } }
L_0037CB14:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 598u));
    set32(c.r[17], 0u + 2u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0037CB40; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_0037CB40:
    set32(c.r[2], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 840u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037CFA0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    set32(c.r[2], c.r[2].w[0] + 14208u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CB74u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x0037CB74u) [[unlikely]] return; }
L_0037CB74:
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 392u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.f[2] = c.f[0] & fp::kAbs;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037CC6C; } }
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0037CBD8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037CD98; } }
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037CD68; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0037CFA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CDA4; } }
L_0037CBD8:
    set32(c.r[2], ld32((c.r[3].w[0] + 368u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 100u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0037CC6C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[4].d[0];  if (t) { goto L_0037CC54; } }
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037CC34; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0037CC48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA0; } }
L_0037CC34:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037CC60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA0; } }
L_0037CC48:
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA4; } }
L_0037CC54:
    set32(c.r[2], 0u + 47u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA4; } }
L_0037CC60:
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA4; } }
L_0037CC6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 840u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CC7Cu);  if (depth < kMaxDepth) unit_0089(c, 142u, depth + 1u); else { c.pc = 0x00325A50u; return; } if (c.pc != 0x0037CC7Cu) [[unlikely]] return; }
L_0037CC7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037CDB0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 392u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037CDB0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037CD50; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037CD08; } }
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037CCD0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0037CCE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA0; } }
L_0037CCD0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037CD2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA0; } }
L_0037CCE4:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 86u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA4; } }
L_0037CD08:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 87u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA4; } }
L_0037CD2C:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 88u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA4; } }
L_0037CD50:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037CD98; } }
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037CD78; } }
L_0037CD68:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0037CD8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA0; } }
L_0037CD78:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037CDA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA0; } }
L_0037CD8C:
    set32(c.r[2], 0u + 43u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA4; } }
L_0037CD98:
    set32(c.r[2], 0u + 44u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA4; } }
L_0037CDA4:
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA4; } }
L_0037CDB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 840u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CDC0u);  if (depth < kMaxDepth) unit_0089(c, 151u, depth + 1u); else { c.pc = 0x00325BC0u; return; } if (c.pc != 0x0037CDC0u) [[unlikely]] return; }
L_0037CDC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037CE28; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037CE10; } }
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037CDF0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0037CE04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA0; } }
L_0037CDF0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037CE1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA0; } }
L_0037CE04:
    set32(c.r[2], 0u + 52u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA4; } }
L_0037CE10:
    set32(c.r[2], 0u + 53u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA4; } }
L_0037CE1C:
    set32(c.r[2], 0u + 54u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA4; } }
L_0037CE28:
    set32(c.r[2], ld32((c.r[16].w[0] + 204u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 19312u);
    set32(c.r[5], ld32((c.r[2].w[0] + 840u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CE40u);  if (depth < kMaxDepth) unit_0088(c, 305u, depth + 1u); else { c.pc = 0x003237A0u; return; } if (c.pc != 0x0037CE40u) [[unlikely]] return; }
L_0037CE40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037CEA8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037CE90; } }
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037CE70; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0037CE84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA0; } }
L_0037CE70:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037CE9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA0; } }
L_0037CE84:
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA4; } }
L_0037CE90:
    set32(c.r[2], 0u + 50u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA4; } }
L_0037CE9C:
    set32(c.r[2], 0u + 51u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA4; } }
L_0037CEA8:
    set32(c.r[4], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037CF5C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037CF14; } }
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037CEDC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0037CEF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA0; } }
L_0037CEDC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037CF38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA0; } }
L_0037CEF0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 62u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA4; } }
L_0037CF14:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 63u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA4; } }
L_0037CF38:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 64u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA4; } }
L_0037CF5C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037CF88; } }
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037CFA0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037CF94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA0; } }
L_0037CF88:
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA4; } }
L_0037CF94:
    set32(c.r[2], 0u + 41u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CFA4; } }
L_0037CFA0:
    set32(c.r[2], 0u + 39u);
    c.budget -= 1;
L_0037CFA4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037CFC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 840u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037D000; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CFECu);  if (depth < kMaxDepth) unit_0089(c, 151u, depth + 1u); else { c.pc = 0x00325BC0u; return; } if (c.pc != 0x0037CFECu) [[unlikely]] return; }
L_0037CFEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D000; } }
    set32(c.r[2], 0u + 148u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D120; } }
L_0037D000:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D010u);  if (depth < kMaxDepth) unit_0065(c, 228u, depth + 1u); else { c.pc = 0x002967F8u; return; } if (c.pc != 0x0037D010u) [[unlikely]] return; }
L_0037D010:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 392u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D040; } }
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D038u);  if (depth < kMaxDepth) unit_008A(c, 166u, depth + 1u); else { c.pc = 0x0032A5B0u; return; } if (c.pc != 0x0037D038u) [[unlikely]] return; }
L_0037D038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D050; } }
L_0037D040:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D050u);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0037D050u) [[unlikely]] return; }
L_0037D050:
    c.f[1] = c.f[0];
    c.r[2].d[0] = ld16((c.r[16].w[0] + 596u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0037D084; } }
    set32(c.r[17], 0u + 34u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D0F4; } }
L_0037D084:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 598u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0037D0B4; } }
    set32(c.r[17], 0u + 35u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D0F4; } }
L_0037D0B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 528u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0037D0F0; } }
    c.r[4].d[0] = ~(0ull | c.r[4].d[0]);
    set32(c.r[3], 0u + 36u);
    set32(c.r[2], 0u + 37u);
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D120; } }
L_0037D0F0:
    set32(c.r[17], 0u + 36u);
    c.budget -= 1;
L_0037D0F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 840u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037D11C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D10Cu);  if (depth < kMaxDepth) unit_0089(c, 142u, depth + 1u); else { c.pc = 0x00325A50u; return; } if (c.pc != 0x0037D10Cu) [[unlikely]] return; }
L_0037D10C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 147u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037D120; } }
L_0037D11C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0037D120:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037D138:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], c.r[5].w[0] - 27u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(27ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D4F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 10592u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0037C000u < 16384u) { entry = entries_009F[(t - 0x0037C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0037D17C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 246u)));
    c.r[5].d[0] = ld16((c.r[17].w[0] + 246u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037D4F0; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D1E4; } }
L_0037D198:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 246u)));
    c.r[4].d[0] = ld16((c.r[17].w[0] + 246u));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0037D4F0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037D1C0; } }
    set32(c.r[2], c.r[4].w[0] - 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D234; } }
L_0037D1C0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D23C; } }
L_0037D1CC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 246u)));
    c.r[5].d[0] = ld16((c.r[17].w[0] + 246u));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D4F0; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0037D1E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 248u)));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D1FCu);  if (depth < kMaxDepth) unit_0065(c, 283u, depth + 1u); else { c.pc = 0x00297028u; return; } if (c.pc != 0x0037D1FCu) [[unlikely]] return; }
L_0037D1FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D4F0; } }
L_0037D204:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 246u)));
    c.r[4].d[0] = ld16((c.r[17].w[0] + 246u));
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D4F0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D230; } }
    set32(c.r[2], c.r[4].w[0] + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D234; } }
L_0037D230:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0037D234:
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 2;
L_0037D23C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 248u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D24Cu);  if (depth < kMaxDepth) unit_0065(c, 283u, depth + 1u); else { c.pc = 0x00297028u; return; } if (c.pc != 0x0037D24Cu) [[unlikely]] return; }
L_0037D24C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D4F0; } }
L_0037D254:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 248u)));
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 246u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 8u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D290u);  if (depth < kMaxDepth) unit_0065(c, 283u, depth + 1u); else { c.pc = 0x00297028u; return; } if (c.pc != 0x0037D290u) [[unlikely]] return; }
L_0037D290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D4F0; } }
L_0037D298:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 248u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 246u)));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 248u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D2C0; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D2C4; } }
L_0037D2C0:
    set32(c.r[6], 0u + 7u);
    c.budget -= 1;
L_0037D2C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D2D0u);  if (depth < kMaxDepth) unit_0065(c, 283u, depth + 1u); else { c.pc = 0x00297028u; return; } if (c.pc != 0x0037D2D0u) [[unlikely]] return; }
L_0037D2D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D4F0; } }
L_0037D2D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D2E8u);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0037D2E8u) [[unlikely]] return; }
L_0037D2E8:
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1024u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D308u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037D308u) [[unlikely]] return; }
L_0037D308:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D318u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0037D318u) [[unlikely]] return; }
L_0037D318:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037D358; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 248u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 246u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D334u);  if (depth < kMaxDepth) unit_0065(c, 138u, depth + 1u); else { c.pc = 0x00295618u; return; } if (c.pc != 0x0037D334u) [[unlikely]] return; }
L_0037D334:
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D34Cu);  if (depth < kMaxDepth) unit_0065(c, 283u, depth + 1u); else { c.pc = 0x00297028u; return; } if (c.pc != 0x0037D34Cu) [[unlikely]] return; }
L_0037D34C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D358u);  if (depth < kMaxDepth) unit_0064(c, 227u, depth + 1u); else { c.pc = 0x00293600u; return; } if (c.pc != 0x0037D358u) [[unlikely]] return; }
L_0037D358:
    st32((c.r[17].w[0] + 56u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D368u);  if (depth < kMaxDepth) unit_0065(c, 287u, depth + 1u); else { c.pc = 0x00297148u; return; } if (c.pc != 0x0037D368u) [[unlikely]] return; }
L_0037D368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D4F0; } }
L_0037D370:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[5], 0u + 21u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D484; } }
L_0037D388:
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D398u);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0037D398u) [[unlikely]] return; }
L_0037D398:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D3A8u);  if (depth < kMaxDepth) unit_0065(c, 292u, depth + 1u); else { c.pc = 0x002971E8u; return; } if (c.pc != 0x0037D3A8u) [[unlikely]] return; }
L_0037D3A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D4F0; } }
L_0037D3B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D3C0u);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0037D3C0u) [[unlikely]] return; }
L_0037D3C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 204u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D3D4u);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0037D3D4u) [[unlikely]] return; }
L_0037D3D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D3E4u);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0037D3E4u) [[unlikely]] return; }
L_0037D3E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D3F4u);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0037D3F4u) [[unlikely]] return; }
L_0037D3F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D404u);  if (depth < kMaxDepth) unit_0066(c, 99u, depth + 1u); else { c.pc = 0x00298DC0u; return; } if (c.pc != 0x0037D404u) [[unlikely]] return; }
L_0037D404:
    st16((c.r[17].w[0] + 604u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D414u);  if (depth < kMaxDepth) unit_0061(c, 248u, depth + 1u); else { c.pc = 0x00286728u; return; } if (c.pc != 0x0037D414u) [[unlikely]] return; }
L_0037D414:
    st32((c.r[17].w[0] + 56u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D4F0; } }
L_0037D420:
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 148u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D438u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037D438u) [[unlikely]] return; }
L_0037D438:
    set32(c.r[3], ld32((c.r[17].w[0] + 196u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 601u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D450u);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0037D450u) [[unlikely]] return; }
L_0037D450:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D474; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D474u);  if (depth < kMaxDepth) unit_0069(c, 81u, depth + 1u); else { c.pc = 0x002A56E8u; return; } if (c.pc != 0x0037D474u) [[unlikely]] return; }
L_0037D474:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 156u)));
    c.budget -= 4;
L_0037D484:
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D490u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037D490u) [[unlikely]] return; }
L_0037D490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D4F0; } }
L_0037D498:
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[5], 0u + 140u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 601u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D4B0u);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0037D4B0u) [[unlikely]] return; }
L_0037D4B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D4D4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D4D4u);  if (depth < kMaxDepth) unit_0069(c, 81u, depth + 1u); else { c.pc = 0x002A56E8u; return; } if (c.pc != 0x0037D4D4u) [[unlikely]] return; }
L_0037D4D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 156u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D4F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037D4F0u) [[unlikely]] return; }
L_0037D4F0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037D510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0037D580; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[16], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D54Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037D54Cu) [[unlikely]] return; }
L_0037D54C:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[17].w[0] + 48u), 0u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[16].d[0];  if (t) { goto L_0037D5D8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D574u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037D574u) [[unlikely]] return; }
L_0037D574:
    st32((c.r[17].w[0] + 36u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D5D8; } }
L_0037D580:
    set32(c.r[2], ld32((c.r[17].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D5E4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D598u);  if (depth < kMaxDepth) unit_0065(c, 249u, depth + 1u); else { c.pc = 0x00296B50u; return; } if (c.pc != 0x0037D598u) [[unlikely]] return; }
L_0037D598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D5E4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D5B0u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0037D5B0u) [[unlikely]] return; }
L_0037D5B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D5C4; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 536u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D5C8; } }
L_0037D5C4:
    set32(c.r[2], 0u + 180u);
    c.budget -= 1;
L_0037D5C8:
    st16((c.r[17].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D5D8u);  if (depth < kMaxDepth) unit_0065(c, 235u, depth + 1u); else { c.pc = 0x002968D0u; return; } if (c.pc != 0x0037D5D8u) [[unlikely]] return; }
L_0037D5D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D6BC; } }
L_0037D5E4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 604u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037D6B8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D5FCu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0037D5FCu) [[unlikely]] return; }
L_0037D5FC:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0037D608u);  goto L_0037D60C; }
L_0037D60C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 600u)));
    c.r[4].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037D6B8; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 246u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D634u);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0037D634u) [[unlikely]] return; }
L_0037D634:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D644u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0037D644u) [[unlikely]] return; }
L_0037D644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D688; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[16], c.r[17].w[0] + 80u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D670u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037D670u) [[unlikely]] return; }
L_0037D670:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D680u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0037D680u) [[unlikely]] return; }
L_0037D680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D694; } }
L_0037D688:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D694u);  if (depth < kMaxDepth) unit_0064(c, 227u, depth + 1u); else { c.pc = 0x00293600u; return; } if (c.pc != 0x0037D694u) [[unlikely]] return; }
L_0037D694:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[5], 0u + 1024u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D6B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037D6B0u) [[unlikely]] return; }
L_0037D6B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037D5D8u | kUnwind; return; } goto L_0037D5D8; } }
L_0037D6B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037D6BC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037D6D8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[6], 0u + 8192u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 176u), c.f[22]);
    st32((c.r[29].w[0] + 168u), c.f[21]);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    set32(c.r[4], ld32((c.r[17].w[0] + 192u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D714u);  if (depth < kMaxDepth) unit_0067(c, 120u, depth + 1u); else { c.pc = 0x0029D328u; return; } if (c.pc != 0x0037D714u) [[unlikely]] return; }
L_0037D714:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 192u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 8192u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D72Cu);  if (depth < kMaxDepth) unit_0067(c, 120u, depth + 1u); else { c.pc = 0x0029D328u; return; } if (c.pc != 0x0037D72Cu) [[unlikely]] return; }
L_0037D72C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0037D83C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[16], c.r[29].w[0] + 16u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 840u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.f[22] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D764u);  if (depth < kMaxDepth) unit_0049(c, 71u, depth + 1u); else { c.pc = 0x00225208u; return; } if (c.pc != 0x0037D764u) [[unlikely]] return; }
L_0037D764:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.f[20] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[12] = c.r[1].w[0];
    c.f[13] = c.f[22];
    c.f[14] = c.f[20];
    c.f[15] = c.f[21];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D798u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0037D798u) [[unlikely]] return; }
L_0037D798:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D7ACu);  if (depth < kMaxDepth) unit_008A(c, 136u, depth + 1u); else { c.pc = 0x0032A0B8u; return; } if (c.pc != 0x0037D7ACu) [[unlikely]] return; }
L_0037D7AC:
    set32(c.r[6], ld32((c.r[18].w[0] + 196u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D7CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037D7CCu) [[unlikely]] return; }
L_0037D7CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[22];
    c.f[14] = c.f[20];
    c.f[15] = c.f[21];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D7F0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0037D7F0u) [[unlikely]] return; }
L_0037D7F0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D804u);  if (depth < kMaxDepth) unit_008A(c, 136u, depth + 1u); else { c.pc = 0x0032A0B8u; return; } if (c.pc != 0x0037D804u) [[unlikely]] return; }
L_0037D804:
    set32(c.r[6], ld32((c.r[19].w[0] + 196u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D824u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037D824u) [[unlikely]] return; }
L_0037D824:
    st32((c.r[17].w[0] + 52u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 92u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D838u);  if (depth < kMaxDepth) unit_0065(c, 292u, depth + 1u); else { c.pc = 0x002971E8u; return; } if (c.pc != 0x0037D838u) [[unlikely]] return; }
L_0037D838:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0037D83C:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[22] = ld32((c.r[29].w[0] + 176u));
    c.f[21] = ld32((c.r[29].w[0] + 168u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037D868:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] + 10544u);
    set32(c.r[8], c.r[8].w[0] + 10384u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 31u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D89Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0037D89Cu) [[unlikely]] return; }
L_0037D89C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037D8B0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 10544u);
    set32(c.r[7], c.r[7].w[0] + 10392u);
    set32(c.r[8], 0u + 31u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D8E0u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0037D8E0u) [[unlikely]] return; }
L_0037D8E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037D8F0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] + 10544u);
    set32(c.r[8], c.r[8].w[0] + 10400u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 31u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D924u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0037D924u) [[unlikely]] return; }
L_0037D924:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037D938:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 10544u);
    set32(c.r[7], c.r[7].w[0] + 10408u);
    set32(c.r[8], 0u + 31u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D968u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0037D968u) [[unlikely]] return; }
L_0037D968:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037D978:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 10704u);
    st32((c.r[4].w[0] + 128u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037D990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 29416u);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st32((c.r[3].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0037D9DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 10544u);
    set32(c.r[7], c.r[7].w[0] + 10392u);
    set32(c.r[8], 0u + 31u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D9DCu);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0037D9DCu) [[unlikely]] return; }
L_0037D9DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037D9F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DA00u);  if (depth < kMaxDepth) unit_0064(c, 148u, depth + 1u); else { c.pc = 0x00292358u; return; } if (c.pc != 0x0037DA00u) [[unlikely]] return; }
L_0037DA00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037DA10:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 20u);
    set32(c.r[4], 0u + 600u);
    set32(c.r[5], 0u + 2200u);
    st16((c.r[2].w[0] + 596u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st16((c.r[2].w[0] + 592u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st16((c.r[2].w[0] + 598u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[2].w[0] + 604u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 594u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 10500u));
    st8((c.r[2].w[0] + 601u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 600u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DA58u);  if (depth < kMaxDepth) unit_0064(c, 115u, depth + 1u); else { c.pc = 0x00291E60u; return; } if (c.pc != 0x0037DA58u) [[unlikely]] return; }
L_0037DA58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037DA68:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 32768ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0037DA9C; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 592u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 536u));
    st16((c.r[16].w[0] + 594u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 514u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0037DA9C:
    c.r[2].d[0] = c.r[17].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037DABC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DABCu);  if (depth < kMaxDepth) unit_0064(c, 121u, depth + 1u); else { c.pc = 0x00292018u; return; } if (c.pc != 0x0037DABCu) [[unlikely]] return; }
L_0037DABC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0037DB24; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DAD8u);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0037DAD8u) [[unlikely]] return; }
L_0037DAD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DAE8u);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0037DAE8u) [[unlikely]] return; }
L_0037DAE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DAF8u);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0037DAF8u) [[unlikely]] return; }
L_0037DAF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DB08u);  if (depth < kMaxDepth) unit_0066(c, 98u, depth + 1u); else { c.pc = 0x00298DA8u; return; } if (c.pc != 0x0037DB08u) [[unlikely]] return; }
L_0037DB08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037DB4C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DB1Cu);  if (depth < kMaxDepth) unit_009F(c, 176u, depth + 1u); else { c.pc = 0x0037DB68u; return; } if (c.pc != 0x0037DB1Cu) [[unlikely]] return; }
L_0037DB1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DB4C; } }
L_0037DB24:
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0037DB4C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[5], 0u + 16u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DB4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037DB4Cu) [[unlikely]] return; }
L_0037DB4C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037DB68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DB88u);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0037DB88u) [[unlikely]] return; }
L_0037DB88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DB98u);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0037DB98u) [[unlikely]] return; }
L_0037DB98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DBA8u);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0037DBA8u) [[unlikely]] return; }
L_0037DBA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DBB8u);  if (depth < kMaxDepth) unit_0066(c, 99u, depth + 1u); else { c.pc = 0x00298DC0u; return; } if (c.pc != 0x0037DBB8u) [[unlikely]] return; }
L_0037DBB8:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    st16((c.r[16].w[0] + 604u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DBC8u);  if (depth < kMaxDepth) unit_0061(c, 248u, depth + 1u); else { c.pc = 0x00286728u; return; } if (c.pc != 0x0037DBC8u) [[unlikely]] return; }
L_0037DBC8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037DBE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 196u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DBF4u);  if (depth < kMaxDepth) unit_0061(c, 243u, depth + 1u); else { c.pc = 0x00286658u; return; } if (c.pc != 0x0037DBF4u) [[unlikely]] return; }
L_0037DBF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037DC08:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DC24u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0037DC24u) [[unlikely]] return; }
L_0037DC24:
    set32(c.r[3], ld32((c.r[2].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037DCD8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DC40u);  if (depth < kMaxDepth) unit_0069(c, 69u, depth + 1u); else { c.pc = 0x002A4FC8u; return; } if (c.pc != 0x0037DC40u) [[unlikely]] return; }
L_0037DC40:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0037DCD8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0037DCD8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], 0u + 152u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 601u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DC8Cu);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0037DC8Cu) [[unlikely]] return; }
L_0037DC8C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0037DCD8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DCACu);  if (depth < kMaxDepth) unit_0069(c, 81u, depth + 1u); else { c.pc = 0x002A56E8u; return; } if (c.pc != 0x0037DCACu) [[unlikely]] return; }
L_0037DCAC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 592u));
    set32(c.r[6], 0u + 10u);
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    st16((c.r[16].w[0] + 594u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DCD0u);  if (depth < kMaxDepth) unit_0061(c, 277u, depth + 1u); else { c.pc = 0x00286A58u; return; } if (c.pc != 0x0037DCD0u) [[unlikely]] return; }
L_0037DCD0:
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    st16((c.r[2].w[0] + 836u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0037DCD8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037DCF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037DCF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DD08u);  if (depth < kMaxDepth) unit_0065(c, 318u, depth + 1u); else { c.pc = 0x002976B0u; return; } if (c.pc != 0x0037DD08u) [[unlikely]] return; }
L_0037DD08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037DD18:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 18712u)));
    set32(c.r[9], 0u + 1u);
    set32(c.r[7], ld32((c.r[18].w[0] + 28376u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] - 364u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 28372u)));
    st32((c.r[18].w[0] + 28396u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DD68u);  if (depth < kMaxDepth) unit_005A(c, 167u, depth + 1u); else { c.pc = 0x00269900u; return; } if (c.pc != 0x0037DD68u) [[unlikely]] return; }
L_0037DD68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0] + 28408u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DD7Cu);  if (depth < kMaxDepth) unit_009F(c, 299u, depth + 1u); else { c.pc = 0x0037F900u; return; } if (c.pc != 0x0037DD7Cu) [[unlikely]] return; }
L_0037DD7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 28408u)));
    set32(c.r[8], ld32((c.r[3].w[0] - 368u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DDA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037DDA8u) [[unlikely]] return; }
L_0037DDA8:
    set32(c.r[4], ld32((c.r[17].w[0] - 364u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 28408u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DDB8u);  if (depth < kMaxDepth) unit_005B(c, 129u, depth + 1u); else { c.pc = 0x0026D590u; return; } if (c.pc != 0x0037DDB8u) [[unlikely]] return; }
L_0037DDB8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037DEEC; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 28352u)));
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 28380u), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld16((c.r[4].w[0] + 10u));
    st32((c.r[18].w[0] + 28384u), c.r[2].w[0]);
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0037DDE8u);  goto L_0037DDEC; }
L_0037DDEC:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 8u));
    set32(c.r[4], ld32((c.r[18].w[0] + 28368u)));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 28360u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0037DEE0; } }
    set32(c.r[4], c.r[18].w[0] + 28424u);
    set32(c.r[6], c.r[18].w[0] + 32500u);
    c.budget -= 2;
L_0037DE10:
    c.f[0] = ld32((c.r[18].w[0] + 28380u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], c.r[8].w[0] + 1u);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] - 12u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 28384u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 2u, c.f[2], c.f[0]);
    st32((c.r[4].w[0] - 8u), c.f[2]);
    c.f[0] = ld32((c.r[18].w[0] + 28380u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 3u, c.f[3], c.f[0]);
    st32((c.r[4].w[0] - 4u), c.f[3]);
    set32(c.r[2], ld32((c.r[18].w[0] + 28356u)));
    c.f[1] = ld32((c.r[18].w[0] + 28384u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 28352u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 28360u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 42;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037DEC4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28356u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_0037DEC4:
    set32(c.r[2], ld32((c.r[18].w[0] + 28368u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037DE10u | kUnwind; return; } goto L_0037DE10; } }
L_0037DEE0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DEECu);  if (depth < kMaxDepth) unit_009F(c, 304u, depth + 1u); else { c.pc = 0x0037F9C0u; return; } if (c.pc != 0x0037DEECu) [[unlikely]] return; }
L_0037DEEC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037DF08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 400u);
    c.f[3] = ld32((c.r[2].w[0] + 19772u));
    c.f[3] = fp::cvt_s_w(c.f[3]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[18]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 8));
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[22]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[29].w[0] + 392u), c.f[21]);
    c.f[2] = ld32((c.r[3].w[0] + 19776u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    st32((c.r[29].w[0] + 384u), c.f[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 24));
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[16]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[17]);
    c.f[21] = c.f[12];
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[19]);
    set32(c.r[21], 0u + 1u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[20]);
    c.f[20] = c.f[13];
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 224u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 28356u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[4] = fp::cvt_w_s(c.f[0]);
    set32(c.r[22], c.f[4]);
    st32((c.r[29].w[0] + 76u), c.f[3]);
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[29].w[0]), c.f[21]);
    st32((c.r[29].w[0] + 4u), c.f[13]);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 52u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[21].w[0]);
    st32((c.r[29].w[0] + 60u), c.f[1]);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 52;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E11C; } }
    set32(c.r[20], 0u + 10u);
    set32(c.r[19], c.r[29].w[0] + 96u);
    set32(c.r[30], 0u + 2u);
    set32(c.r[23], 0u + 1u);
    c.budget -= 4;
L_0037DFE8:
    set32(c.r[2], c.r[4].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_0037E020; } }
    c.f[0] = c.r[22].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], 0u + 10u);
    c.budget -= 4;
L_0037E008:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E008u | kUnwind; return; } goto L_0037E008; } }
L_0037E020:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_0037E058; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E058; } }
    set32(c.r[4], 0u + 10u);
    c.budget -= 2;
L_0037E040:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0037E058; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E040u | kUnwind; return; } goto L_0037E040; } }
L_0037E058:
    c.r[2].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E108; } }
    set32(c.r[16], c.r[17].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E07Cu);  if (depth < kMaxDepth) unit_00DD(c, 90u, depth + 1u); else { c.pc = 0x004753A0u; return; } if (c.pc != 0x0037E07Cu) [[unlikely]] return; }
L_0037E07C:
    set32(c.r[5], ld32((c.r[18].w[0] + 28364u)));
    set32(c.r[16], c.r[19].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E094u);  if (depth < kMaxDepth) unit_007D(c, 131u, depth + 1u); else { c.pc = 0x002F5CC8u; return; } if (c.pc != 0x0037E094u) [[unlikely]] return; }
L_0037E094:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.budget -= 8;
    { const bool t = c.r[21].d[0] != c.r[30].d[0];  if (t) { goto L_0037E0C8; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E0E8; } }
L_0037E0C8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[23].d[0];  if (t) { goto L_0037E0F0; } }
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
L_0037E0E8:
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    st32((c.r[29].w[0]), c.f[0]);
    c.budget -= 2;
L_0037E0F0:
    st32((c.r[29].w[0] + 52u), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[20]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E108u);  if (depth < kMaxDepth) unit_009F(c, 226u, depth + 1u); else { c.pc = 0x0037E5C8u; return; } if (c.pc != 0x0037E108u) [[unlikely]] return; }
L_0037E108:
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037DFE8u | kUnwind; return; } goto L_0037DFE8; } }
L_0037E11C:
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 224u));
    c.f[21] = ld32((c.r[29].w[0] + 392u));
    c.f[20] = ld32((c.r[29].w[0] + 384u));
    set32(c.r[29], c.r[29].w[0] + 400u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037E158:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21184u)));
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 224u), c.r[31].d[0]);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037E188; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 4;
L_0037E188:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[1] = ld32((c.r[2].w[0] + 19772u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 24));
    c.f[0] = ld32((c.r[3].w[0] + 19776u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 8));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    set32(c.r[7], 0u + 1u);
    st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[29].w[0]), c.f[12]);
    st32((c.r[29].w[0] + 4u), c.f[13]);
    st32((c.r[29].w[0] + 52u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 60u), c.f[14]);
    st32((c.r[29].w[0] + 64u), c.f[15]);
    st32((c.r[29].w[0] + 76u), c.f[1]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E1F8u);  if (depth < kMaxDepth) unit_009F(c, 226u, depth + 1u); else { c.pc = 0x0037E5C8u; return; } if (c.pc != 0x0037E1F8u) [[unlikely]] return; }
L_0037E1F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 224u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037E208:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[2].w[0] + 10968u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 288u), c.f[24]);
    st32((c.r[29].w[0] + 280u), c.f[23]);
    st32((c.r[29].w[0] + 272u), c.f[22]);
    st32((c.r[29].w[0] + 264u), c.f[21]);
    st32((c.r[29].w[0] + 256u), c.f[20]);
    c.r[4].d[0] = ld64((c.r[2].w[0] + 10968u));
    c.r[6].d[0] = ld64((c.r[3].w[0] + 8u));
    st64((c.r[29].w[0]), c.r[4].d[0]);
    st32((c.r[29].w[0] + 80u), c.r[7].w[0]);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    st32((c.r[29].w[0] + 84u), c.r[8].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E27Cu);  if (depth < kMaxDepth) unit_00A1(c, 15u, depth + 1u); else { c.pc = 0x00384230u; return; } if (c.pc != 0x0037E27Cu) [[unlikely]] return; }
L_0037E27C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[16], c.r[29].w[0] + 48u);
    st32((c.r[4].w[0] + 5520u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E2A4u);  if (depth < kMaxDepth) unit_00A1(c, 67u, depth + 1u); else { c.pc = 0x00384988u; return; } if (c.pc != 0x0037E2A4u) [[unlikely]] return; }
L_0037E2A4:
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E2C0u);  if (depth < kMaxDepth) unit_00A1(c, 78u, depth + 1u); else { c.pc = 0x00384BB8u; return; } if (c.pc != 0x0037E2C0u) [[unlikely]] return; }
L_0037E2C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E2D0u);  if (depth < kMaxDepth) unit_00A1(c, 81u, depth + 1u); else { c.pc = 0x00384C48u; return; } if (c.pc != 0x0037E2D0u) [[unlikely]] return; }
L_0037E2D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037E540; } }
    c.budget -= 1;
L_0037E2E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E2FC; } }
    set32(c.r[21], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 192u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E52C; } }
L_0037E2FC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 340u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E30Cu);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0037E30Cu) [[unlikely]] return; }
L_0037E30C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[6], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[21], c.r[18].w[0] + 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[16].d[0] = c.r[16].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[18], 0u + 3u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[30].d[0] = c.r[3].d[0] & 2ull;
    c.r[23].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    st32((c.r[29].w[0] + 24u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 8;
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 28u)));
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[23] = c.r[1].w[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] << 24;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[22] = c.r[1].w[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[24] = c.r[1].w[0];
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E38Cu);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0037E38Cu) [[unlikely]] return; }
L_0037E38C:
    set32(c.r[20], c.r[29].w[0] + 16u);
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.budget -= 3;
L_0037E398:
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[1]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    st32((c.r[29].w[0] + 40u), 0u);
    st32((c.r[29].w[0] + 44u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E3C0u);  if (depth < kMaxDepth) unit_00A1(c, 125u, depth + 1u); else { c.pc = 0x003854B8u; return; } if (c.pc != 0x0037E3C0u) [[unlikely]] return; }
L_0037E3C0:
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E3DCu);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0037E3DCu) [[unlikely]] return; }
L_0037E3DC:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_0037E400; } }
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = fp::cvt_w_s(c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 72u), c.r[16].w[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 7;
L_0037E400:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0037E4F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[3], ld32((c.r[2].w[0] + 19772u)));
    set32(c.r[4], 0u + 2048u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[21] = c.r[1].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[2], ld32((c.r[5].w[0] + 23004u)));
    fpu_div(c, 2u, c.f[2], c.f[24]);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.budget -= 30;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E488; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44000000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 2;
L_0037E488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E490u);  if (depth < kMaxDepth) unit_0049(c, 259u, depth + 1u); else { c.pc = 0x002270D8u; return; } if (c.pc != 0x0037E490u) [[unlikely]] return; }
L_0037E490:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0037E4AC; } }
    c.f[1] = fp::mul(c.f[20], c.f[23]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E4C0; } }
L_0037E4AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[23]);
    c.budget -= 5;
L_0037E4C0:
    c.f[1] = fp::sub(c.f[22], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 19816u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037E4F0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
L_0037E4F0:
    st32((c.r[29].w[0] + 72u), c.r[16].w[0]);
    c.budget -= 1;
L_0037E4F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[17], c.r[17].w[0] + 48u);
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E524u);  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x00384D08u; return; } if (c.pc != 0x0037E524u) [[unlikely]] return; }
L_0037E524:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E398u | kUnwind; return; } goto L_0037E398; } }
L_0037E52C:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E2E0u | kUnwind; return; } goto L_0037E2E0; } }
L_0037E540:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E54Cu);  if (depth < kMaxDepth) unit_00A1(c, 82u, depth + 1u); else { c.pc = 0x00384C60u; return; } if (c.pc != 0x0037E54Cu) [[unlikely]] return; }
L_0037E54C:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E558u);  if (depth < kMaxDepth) unit_00A1(c, 69u, depth + 1u); else { c.pc = 0x003849A8u; return; } if (c.pc != 0x0037E558u) [[unlikely]] return; }
L_0037E558:
    set32(c.r[5], ld32((c.r[29].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 5520u)));
    c.r[5].d[0] = c.r[5].d[0] & 16368ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E578u);  if (depth < kMaxDepth) unit_00A1(c, 27u, depth + 1u); else { c.pc = 0x00384518u; return; } if (c.pc != 0x0037E578u) [[unlikely]] return; }
L_0037E578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E580u);  if (depth < kMaxDepth) unit_0053(c, 215u, depth + 1u); else { c.pc = 0x0024E680u; return; } if (c.pc != 0x0037E580u) [[unlikely]] return; }
L_0037E580:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[24] = ld32((c.r[29].w[0] + 288u));
    c.f[23] = ld32((c.r[29].w[0] + 280u));
    c.f[22] = ld32((c.r[29].w[0] + 272u));
    c.f[21] = ld32((c.r[29].w[0] + 264u));
    c.f[20] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 304u);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037E5C8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E5F4u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0037E5F4u) [[unlikely]] return; }
L_0037E5F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E640; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E608u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0037E608u) [[unlikely]] return; }
L_0037E608:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[19], c.r[2].w[0] + 1u);
    set32(c.r[2], 0u + 96u);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].sd[0] < 127ll ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[16], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037E640; } }
    set32(c.r[3], c.r[4].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 16129ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037E64C; } }
L_0037E640:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E748; } }
L_0037E64C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[5].w[0] - 12416u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E664; } }
    st32((c.r[5].w[0] - 12416u), c.r[3].w[0]);
    c.budget -= 1;
L_0037E664:
    set32(c.r[4], c.r[4].w[0] + 12208u);
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E67Cu);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x0037E67Cu) [[unlikely]] return; }
L_0037E67C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 51u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 51u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 48u));
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 49u));
    st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 50u));
    st8((c.r[16].w[0] + 50u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[16].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[16].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[16].w[0] + 24u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[16].w[0] + 32u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[16].w[0] + 40u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 60u));
    st32((c.r[16].w[0] + 60u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    st32((c.r[16].w[0] + 68u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 72u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 76u));
    st32((c.r[16].w[0] + 76u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    st32((c.r[16].w[0] + 80u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 51;
L_0037E748:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037E768:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E794u);  if (depth < kMaxDepth) unit_009F(c, 308u, depth + 1u); else { c.pc = 0x0037FA38u; return; } if (c.pc != 0x0037E794u) [[unlikely]] return; }
L_0037E794:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[17], ld32((c.r[2].w[0] - 368u)));
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 32u)));
    set32(c.r[16], c.r[16].w[0] + 32u);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E7BCu);  if (depth < kMaxDepth) unit_009F(c, 311u, depth + 1u); else { c.pc = 0x0037FA90u; return; } if (c.pc != 0x0037E7BCu) [[unlikely]] return; }
L_0037E7BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E7D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037E7D8u) [[unlikely]] return; }
L_0037E7D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E9A8; } }
    set32(c.r[4], 0u + 66u);
    set32(c.r[5], 0u + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E7F0u);  if (depth < kMaxDepth) unit_005F(c, 128u, depth + 1u); else { c.pc = 0x0027D418u; return; } if (c.pc != 0x0037E7F0u) [[unlikely]] return; }
L_0037E7F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E7FCu);  if (depth < kMaxDepth) unit_009F(c, 313u, depth + 1u); else { c.pc = 0x0037FAB0u; return; } if (c.pc != 0x0037E7FCu) [[unlikely]] return; }
L_0037E7FC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E818; } }
    set32(c.r[4], 0u + 20u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E818u);  if (depth < kMaxDepth) unit_005F(c, 128u, depth + 1u); else { c.pc = 0x0027D418u; return; } if (c.pc != 0x0037E818u) [[unlikely]] return; }
L_0037E818:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E824u);  if (depth < kMaxDepth) unit_009F(c, 313u, depth + 1u); else { c.pc = 0x0037FAB0u; return; } if (c.pc != 0x0037E824u) [[unlikely]] return; }
L_0037E824:
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E84C; } }
    set32(c.r[4], 0u + 71u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[5].d[0] = c.r[5].d[0] | 2051ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E844u);  if (depth < kMaxDepth) unit_005F(c, 128u, depth + 1u); else { c.pc = 0x0027D418u; return; } if (c.pc != 0x0037E844u) [[unlikely]] return; }
L_0037E844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E860; } }
L_0037E84C:
    set32(c.r[4], 0u + 71u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[5].d[0] = c.r[5].d[0] | 27ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E860u);  if (depth < kMaxDepth) unit_005F(c, 128u, depth + 1u); else { c.pc = 0x0027D418u; return; } if (c.pc != 0x0037E860u) [[unlikely]] return; }
L_0037E860:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_0037E9A8; } }
    set32(c.r[17], c.r[29].w[0] + 96u);
    set32(c.r[20], c.r[29].w[0] + 192u);
    set32(c.r[21], 0u + 1u);
    c.budget -= 3;
L_0037E878:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E890u);  if (depth < kMaxDepth) unit_009F(c, 309u, depth + 1u); else { c.pc = 0x0037FA48u; return; } if (c.pc != 0x0037E890u) [[unlikely]] return; }
L_0037E890:
    c.r[2].d[0] = c.r[29].d[0] + 0ull;
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0037E898:
    ld128((c.r[3].w[0]) & ~15u, c.r[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[5]);
    st128((c.r[2].w[0]) & ~15u, c.r[4]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[5]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[20].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E898u | kUnwind; return; } goto L_0037E898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E8C0u);  if (depth < kMaxDepth) unit_0049(c, 259u, depth + 1u); else { c.pc = 0x002270D8u; return; } if (c.pc != 0x0037E8C0u) [[unlikely]] return; }
L_0037E8C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_0037E930; } }
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    set32(c.r[4], 0u + 64u);
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.f[3] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[2], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[3]);
    set32(c.r[6], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E928u);  if (depth < kMaxDepth) unit_005F(c, 128u, depth + 1u); else { c.pc = 0x0027D418u; return; } if (c.pc != 0x0037E928u) [[unlikely]] return; }
L_0037E928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E98C; } }
L_0037E930:
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    set32(c.r[4], 0u + 64u);
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.f[3] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[6], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[3]);
    set32(c.r[3], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E98Cu);  if (depth < kMaxDepth) unit_005F(c, 128u, depth + 1u); else { c.pc = 0x0027D418u; return; } if (c.pc != 0x0037E98Cu) [[unlikely]] return; }
L_0037E98C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E99Cu);  if (depth < kMaxDepth) unit_009F(c, 305u, depth + 1u); else { c.pc = 0x0037F9D0u; return; } if (c.pc != 0x0037E99Cu) [[unlikely]] return; }
L_0037E99C:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E878u | kUnwind; return; } goto L_0037E878; } }
L_0037E9A8:
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 304u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037E9D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 120u), c.f[21]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[20] = 0u;
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    c.f[21] = c.f[20];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0037EA2C; } }
    c.f[21] = ld32((c.r[18].w[0] + 28400u));
    st32((c.r[18].w[0] + 28400u), c.f[0]);
    c.budget -= 2;
L_0037EA2C:
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0037EABC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28356u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[20] = ld32((c.r[18].w[0] + 28404u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 8);
    st32((c.r[18].w[0] + 28404u), c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[3].w[0] - 12400u);
    set32(c.r[6], c.r[7].w[0] - 12384u);
    set32(c.r[4], c.r[16].w[0] - 12368u);
    st32((c.r[3].w[0] - 12400u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 28404u));
    st32((c.r[7].w[0] - 12384u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EA88u);  if (depth < kMaxDepth) unit_0045(c, 8u, depth + 1u); else { c.pc = 0x00214128u; return; } if (c.pc != 0x0037EA88u) [[unlikely]] return; }
L_0037EA88:
    c.f[0] = ld32((c.r[16].w[0] - 12368u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.r[3].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    st32((c.r[18].w[0] + 28392u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037EABC; } }
    set32(c.r[2], 0u + 8u);
    st32((c.r[18].w[0] + 28392u), c.r[2].w[0]);
    c.budget -= 2;
L_0037EABC:
    set32(c.r[17], ld32((c.r[19].w[0] + 52u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EACCu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0037EACCu) [[unlikely]] return; }
L_0037EACC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] - 12352u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EAE4u);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x0037EAE4u) [[unlikely]] return; }
L_0037EAE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EAF4u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0037EAF4u) [[unlikely]] return; }
L_0037EAF4:
    set32(c.r[3], 0u + 192u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[16].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0037EB14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 18712u)));
    st32((c.r[20].w[0] - 12352u), c.r[3].w[0]);
    c.budget -= 3;
L_0037EB14:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[20].w[0] - 12352u)));
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], c.r[8].w[0] + 10920u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 10880u);
    set32(c.r[9], 0u + 162u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EB3Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0037EB3Cu) [[unlikely]] return; }
L_0037EB3C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EB54u);  if (depth < kMaxDepth) unit_009F(c, 270u, depth + 1u); else { c.pc = 0x0037EE88u; return; } if (c.pc != 0x0037EB54u) [[unlikely]] return; }
L_0037EB54:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0037EB80; } }
    c.budget -= 1;
L_0037EB68:
    st32((c.r[16].w[0] + 40u), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 48u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037EB68u | kUnwind; return; } goto L_0037EB68; } }
L_0037EB80:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037EBA4; } }
    set32(c.r[8], ld32((c.r[19].w[0] + 56u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EBA4u);  if (depth < kMaxDepth) unit_009F(c, 209u, depth + 1u); else { c.pc = 0x0037E208u; return; } if (c.pc != 0x0037EBA4u) [[unlikely]] return; }
L_0037EBA4:
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0037EBC8; } }
    st32((c.r[18].w[0] + 28400u), c.f[21]);
    c.budget -= 1;
L_0037EBC8:
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0037EC54; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28356u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[18].w[0] + 28404u), c.f[20]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[5], c.r[3].w[0] - 12400u);
    set32(c.r[6], c.r[7].w[0] - 12384u);
    set32(c.r[4], c.r[16].w[0] - 12368u);
    st32((c.r[3].w[0] - 12400u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 28404u));
    st32((c.r[7].w[0] - 12384u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EC20u);  if (depth < kMaxDepth) unit_0045(c, 8u, depth + 1u); else { c.pc = 0x00214128u; return; } if (c.pc != 0x0037EC20u) [[unlikely]] return; }
L_0037EC20:
    c.f[0] = ld32((c.r[16].w[0] - 12368u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.r[3].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    st32((c.r[18].w[0] + 28392u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037EC54; } }
    set32(c.r[2], 0u + 8u);
    st32((c.r[18].w[0] + 28392u), c.r[2].w[0]);
    c.budget -= 2;
L_0037EC54:
    set32(c.r[4], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EC60u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0037EC60u) [[unlikely]] return; }
L_0037EC60:
    set32(c.r[5], 0u + 192u);
    set32(c.r[4], ld32((c.r[20].w[0] - 12352u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[21].w[0] + 10880u);
    set32(c.r[7], c.r[7].w[0] + 10944u);
    set32(c.r[8], 0u + 173u);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EC88u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0037EC88u) [[unlikely]] return; }
L_0037EC88:
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
L_0037ECB8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    set32(c.r[17], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ECF4u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0037ECF4u) [[unlikely]] return; }
L_0037ECF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[21].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] - 12352u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ED0Cu);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x0037ED0Cu) [[unlikely]] return; }
L_0037ED0C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ED1Cu);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0037ED1Cu) [[unlikely]] return; }
L_0037ED1C:
    set32(c.r[3], 0u + 192u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[16].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0037ED3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 18712u)));
    st32((c.r[21].w[0] - 12352u), c.r[3].w[0]);
    c.budget -= 3;
L_0037ED3C:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[21].w[0] - 12352u)));
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], c.r[8].w[0] + 10920u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 10880u);
    set32(c.r[9], 0u + 162u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ED64u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0037ED64u) [[unlikely]] return; }
L_0037ED64:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ED7Cu);  if (depth < kMaxDepth) unit_009F(c, 270u, depth + 1u); else { c.pc = 0x0037EE88u; return; } if (c.pc != 0x0037ED7Cu) [[unlikely]] return; }
L_0037ED7C:
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037EDA8; } }
L_0037ED90:
    st32((c.r[16].w[0] + 40u), 0u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 48u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037ED90u | kUnwind; return; } goto L_0037ED90; } }
L_0037EDA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3A00000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    st32((c.r[29].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3700000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037EDD4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_0037EDD4:
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EE04u);  if (depth < kMaxDepth) unit_00D9(c, 155u, depth + 1u); else { c.pc = 0x004676E8u; return; } if (c.pc != 0x0037EE04u) [[unlikely]] return; }
L_0037EE04:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_0037EE28; } }
    set32(c.r[8], ld32((c.r[18].w[0] + 56u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EE28u);  if (depth < kMaxDepth) unit_009F(c, 209u, depth + 1u); else { c.pc = 0x0037E208u; return; } if (c.pc != 0x0037EE28u) [[unlikely]] return; }
L_0037EE28:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EE34u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0037EE34u) [[unlikely]] return; }
L_0037EE34:
    set32(c.r[5], 0u + 192u);
    set32(c.r[4], ld32((c.r[21].w[0] - 12352u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[22].w[0] + 10880u);
    set32(c.r[7], c.r[7].w[0] + 10944u);
    set32(c.r[8], 0u + 173u);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EE5Cu);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0037EE5Cu) [[unlikely]] return; }
L_0037EE5C:
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
L_0037EE88:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 312u), c.f[21]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 384u), c.f[30]);
    st32((c.r[29].w[0] + 376u), c.f[29]);
    st32((c.r[29].w[0] + 368u), c.f[28]);
    st32((c.r[29].w[0] + 360u), c.f[27]);
    st32((c.r[29].w[0] + 352u), c.f[26]);
    st32((c.r[29].w[0] + 344u), c.f[25]);
    st32((c.r[29].w[0] + 336u), c.f[24]);
    st32((c.r[29].w[0] + 328u), c.f[23]);
    st32((c.r[29].w[0] + 320u), c.f[22]);
    st32((c.r[29].w[0] + 304u), c.f[20]);
    st32((c.r[29].w[0] + 132u), 0u);
    c.f[30] = ld32((c.r[5].w[0]));
    c.r[23].d[0] = ld8((c.r[5].w[0] + 51u));
    c.r[22].d[0] = ld8((c.r[5].w[0] + 48u));
    c.f[21] = c.f[30];
    st32((c.r[29].w[0] + 136u), 0u);
    set32(c.r[3], ld32((c.r[5].w[0] + 52u)));
    c.r[21].d[0] = ld8((c.r[5].w[0] + 49u));
    c.r[20].d[0] = ld8((c.r[5].w[0] + 50u));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.f[29] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 39;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037F3BC; } }
    c.r[2].d[0] = 0ull | 33520ull;
    c.f[25] = 0u;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[27] = c.r[1].w[0];
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[28] = c.r[1].w[0];
    set32(c.r[30], c.r[2].w[0] - 12368u);
    c.budget -= 11;
L_0037EF50:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0037EF80; } }
    c.f[0] = ld32((c.r[16].w[0] + 28392u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.f[21] = c.f[30];
    c.f[29] = fp::add(c.f[29], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037F3AC; } }
L_0037EF80:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0037EFAC; } }
    c.f[0] = ld32((c.r[16].w[0] + 28388u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 28400u));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037F3A8; } }
L_0037EFAC:
    set32(c.r[3], ld32((c.r[16].w[0] + 28364u)));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037EFE8; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EFD0u);  if (depth < kMaxDepth) unit_009F(c, 320u, depth + 1u); else { c.pc = 0x0037FC30u; return; } if (c.pc != 0x0037EFD0u) [[unlikely]] return; }
L_0037EFD0:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EFE0u);  if (depth < kMaxDepth) unit_009F(c, 320u, depth + 1u); else { c.pc = 0x0037FC30u; return; } if (c.pc != 0x0037EFE0u) [[unlikely]] return; }
L_0037EFE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037F004; } }
L_0037EFE8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EFF4u);  if (depth < kMaxDepth) unit_009F(c, 317u, depth + 1u); else { c.pc = 0x0037FB90u; return; } if (c.pc != 0x0037EFF4u) [[unlikely]] return; }
L_0037EFF4:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F004u);  if (depth < kMaxDepth) unit_009F(c, 317u, depth + 1u); else { c.pc = 0x0037FB90u; return; } if (c.pc != 0x0037F004u) [[unlikely]] return; }
L_0037F004:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0037F3AC; } }
    set32(c.r[2], c.r[17].w[0] << 4);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[7], c.r[16].w[0] + c.r[2].w[0]);
    c.f[26] = 0u;
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.f[1] = ld32((c.r[7].w[0] + 28424u));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.f[3] = ld32((c.r[3].w[0] + 28412u));
    c.f[0] = ld32((c.r[2].w[0] + 28420u));
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[2] = ld32((c.r[6].w[0] + 28416u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] - 12400u), c.f[3]);
    set32(c.r[5], c.r[5].w[0] - 12400u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[5].w[0] + 4u), c.f[2]);
    set32(c.r[3], c.r[3].w[0] - 12400u);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] + 12u), c.f[1]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12384u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 28380u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 12384u);
    st32((c.r[2].w[0] - 12384u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 28384u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 28380u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 28384u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[1]);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F0B0u);  if (depth < kMaxDepth) unit_0045(c, 8u, depth + 1u); else { c.pc = 0x00214128u; return; } if (c.pc != 0x0037F0B0u) [[unlikely]] return; }
L_0037F0B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[23] = ld32((c.r[30].w[0] + 8u));
    c.f[22] = ld32((c.r[4].w[0] - 12368u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[24] = ld32((c.r[30].w[0] + 4u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[20] = ld32((c.r[30].w[0] + 12u));
    c.f[0] = fp::sub(c.f[23], c.f[22]);
    set32(c.r[5], c.r[5].w[0] - 12400u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[1] = fp::sub(c.f[20], c.f[24]);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[2].w[0] - 12400u), c.f[0]);
    set32(c.r[6], c.r[6].w[0] - 12384u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[5].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 28400u));
    st32((c.r[3].w[0] - 12384u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 28404u));
    st32((c.r[6].w[0] + 4u), c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F108u);  if (depth < kMaxDepth) unit_0045(c, 8u, depth + 1u); else { c.pc = 0x00214128u; return; } if (c.pc != 0x0037F108u) [[unlikely]] return; }
L_0037F108:
    set32(c.r[2], ld32((c.r[16].w[0] + 28364u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[3] = ld32((c.r[4].w[0] - 12368u));
    c.f[5] = ld32((c.r[30].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037F134; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] - 9848u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037F13C; } }
L_0037F134:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 21896u);
    c.budget -= 2;
L_0037F13C:
    c.lo.d[0] = c.r[3].d[0];
    set32(c.r[3], 0u + 132u);
    mmi::madd(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 28404u));
    c.f[2] = fp::add(c.f[21], c.f[25]);
    st32((c.r[29].w[0] + 88u), c.f[25]);
    c.f[6] = fp::add(c.f[21], c.f[3]);
    st32((c.r[29].w[0] + 92u), c.f[28]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    c.f[0] = fp::sub(c.f[2], c.f[27]);
    st32((c.r[29].w[0] + 112u), c.f[22]);
    c.f[4] = fp::sub(c.f[6], c.f[27]);
    st32((c.r[29].w[0] + 96u), c.r[22].w[0]);
    c.f[1] = fp::add(c.f[29], c.f[1]);
    st32((c.r[29].w[0] + 100u), c.r[21].w[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[20].w[0]);
    c.f[2] = fp::add(c.f[2], c.f[26]);
    c.f[0] = fp::add(c.f[1], c.f[5]);
    st32((c.r[29].w[0] + 108u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 116u), c.f[20]);
    c.f[1] = fp::add(c.f[1], c.f[25]);
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = fp::sub(c.f[0], c.f[27]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[5]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[9]);
    c.f[1] = fp::sub(c.f[1], c.f[27]);
    st32((c.r[29].w[0] + 112u), c.f[23]);
    set32(c.r[19], c.r[19].w[0] + 48u);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[2] = fp::sub(c.f[2], c.f[27]);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.f[3] = fp::add(c.f[6], c.f[26]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    set32(c.r[19], c.r[19].w[0] + 48u);
    st32((c.r[29].w[0] + 80u), c.f[4]);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.f[3] = fp::sub(c.f[3], c.f[27]);
    set32(c.r[19], c.r[19].w[0] + 48u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    c.r[10].d[0] = c.r[19].d[0] + 0ull;
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[19], c.r[19].w[0] + 48u);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[5]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[9]);
    st32((c.r[29].w[0] + 16u), c.r[22].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[5]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[6]);
    st32((c.r[29].w[0] + 20u), c.r[21].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 28u), c.r[23].w[0]);
    st128((c.r[8].w[0]) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    st32((c.r[29].w[0] + 88u), c.f[25]);
    st32((c.r[29].w[0] + 92u), c.f[28]);
    st32((c.r[29].w[0] + 112u), c.f[22]);
    st32((c.r[29].w[0] + 96u), c.r[22].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[21].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 116u), c.f[24]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[4]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 80u), c.f[3]);
    st128((c.r[8].w[0] + 16u) & ~15u, c.r[6]);
    st128((c.r[8].w[0] + 32u) & ~15u, c.r[5]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[5]);
    st128((c.r[7].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[7].w[0]) & ~15u, c.r[4]);
    st128((c.r[7].w[0] + 16u) & ~15u, c.r[3]);
    st32((c.r[29].w[0] + 112u), c.f[23]);
    st32((c.r[29].w[0] + 116u), c.f[24]);
    st32((c.r[29].w[0] + 96u), c.r[22].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[21].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[23].w[0]);
    st32((c.r[29].w[0]), c.f[3]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 12u), c.f[28]);
    st32((c.r[29].w[0] + 8u), c.f[25]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[5]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[4]);
    st128((c.r[10].w[0]) & ~15u, c.r[5]);
    st128((c.r[10].w[0] + 32u) & ~15u, c.r[4]);
    st128((c.r[10].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28364u)));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[4]);
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 101;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037F2F8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    c.f[1] = ld32((c.r[16].w[0] + 28400u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037F2FC; } }
L_0037F2F8:
    c.f[21] = c.f[6];
    c.budget -= 1;
L_0037F2FC:
    set32(c.r[4], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[4].d[0];  if (t) { goto L_0037F3AC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28364u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037F350; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    set32(c.r[4], c.r[4].w[0] - 9848u);
    c.lo.d[0] = c.r[4].d[0];
    set32(c.r[4], 0u + 132u);
    mmi::madd(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037F388; } }
    set32(c.r[2], c.r[18].w[0] >> 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037F398; } }
L_0037F350:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    set32(c.r[4], c.r[4].w[0] + 21896u);
    c.lo.d[0] = c.r[4].d[0];
    set32(c.r[4], 0u + 132u);
    mmi::madd(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037F388; } }
    set32(c.r[2], c.r[18].w[0] >> 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037F398; } }
L_0037F388:
    set32(c.r[2], c.r[18].w[0] >> 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] << 28);
    c.budget -= 4;
L_0037F398:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 28));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 4;
L_0037F3A8:
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.budget -= 1;
L_0037F3AC:
    set32(c.r[4], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037EF50u | kUnwind; return; } goto L_0037EF50; } }
L_0037F3BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[30] = ld32((c.r[29].w[0] + 384u));
    c.f[29] = ld32((c.r[29].w[0] + 376u));
    c.f[28] = ld32((c.r[29].w[0] + 368u));
    c.f[27] = ld32((c.r[29].w[0] + 360u));
    c.f[26] = ld32((c.r[29].w[0] + 352u));
    c.f[25] = ld32((c.r[29].w[0] + 344u));
    c.f[24] = ld32((c.r[29].w[0] + 336u));
    c.f[23] = ld32((c.r[29].w[0] + 328u));
    c.f[22] = ld32((c.r[29].w[0] + 320u));
    c.f[21] = ld32((c.r[29].w[0] + 312u));
    c.f[20] = ld32((c.r[29].w[0] + 304u));
    set32(c.r[29], c.r[29].w[0] + 400u);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037F420:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037F430:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[10].w[0] + 28372u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[9].d[0] & 2ull;
    st32((c.r[10].w[0] + 28376u), c.r[7].w[0]);
    st32((c.r[10].w[0] + 28368u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 28404u), c.f[0]);
    st32((c.r[10].w[0] + 28364u), c.r[9].w[0]);
    st32((c.r[10].w[0] + 28400u), c.f[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037F47C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], c.r[2].w[0] + 21864u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037F488; } }
L_0037F47C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 21832u);
    c.budget -= 3;
L_0037F488:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    st32((c.r[10].w[0] + 28352u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    st32((c.r[10].w[0] + 28388u), c.r[5].w[0]);
    st32((c.r[10].w[0] + 28392u), c.r[4].w[0]);
    st32((c.r[10].w[0] + 28356u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[10].w[0] + 28368u)));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[10].w[0] + 32492u), 0u);
    st32((c.r[10].w[0] + 32496u), 0u);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037F4E0; } }
    c.r[2].d[0] = 0ull | 33520ull;
    set32(c.r[3], c.r[10].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0037F4C0:
    st32((c.r[3].w[0] - 1020u), 0u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[2], ld32((c.r[10].w[0] + 28368u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037F4C0u | kUnwind; return; } goto L_0037F4C0; } }
L_0037F4E0:
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F4F0u);  if (depth < kMaxDepth) unit_009F(c, 193u, depth + 1u); else { c.pc = 0x0037DD18u; return; } if (c.pc != 0x0037F4F0u) [[unlikely]] return; }
L_0037F4F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037F500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0037F51C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F51Cu);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x0037F51Cu) [[unlikely]] return; }
L_0037F51C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037F530:
    c.f[0] = ld32((c.r[4].w[0] + 28400u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037F540:
    c.f[0] = ld32((c.r[4].w[0] + 28404u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037F550:
    st32((c.r[4].w[0] + 28400u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037F560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[17].w[0] + 28404u), c.f[12]);
    set32(c.r[5], c.r[3].w[0] - 12400u);
    set32(c.r[2], ld32((c.r[17].w[0] + 28356u)));
    set32(c.r[6], c.r[7].w[0] - 12384u);
    set32(c.r[4], c.r[16].w[0] - 12368u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[3].w[0] - 12400u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 28404u));
    st32((c.r[7].w[0] - 12384u), c.f[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F5B8u);  if (depth < kMaxDepth) unit_0045(c, 8u, depth + 1u); else { c.pc = 0x00214128u; return; } if (c.pc != 0x0037F5B8u) [[unlikely]] return; }
L_0037F5B8:
    c.f[0] = ld32((c.r[16].w[0] - 12368u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.r[3].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    st32((c.r[17].w[0] + 28392u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037F5EC; } }
    set32(c.r[2], 0u + 8u);
    st32((c.r[17].w[0] + 28392u), c.r[2].w[0]);
    c.budget -= 2;
L_0037F5EC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037F608:
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 24));
    c.r[7].d[0] = c.r[7].d[0] | 1ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 8));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[29].w[0]), c.f[12]);
    st32((c.r[29].w[0] + 4u), c.f[13]);
    st32((c.r[29].w[0] + 52u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[14]);
    st32((c.r[29].w[0] + 76u), c.f[16]);
    st32((c.r[29].w[0] + 72u), c.f[15]);
    st32((c.r[29].w[0] + 80u), c.f[17]);
    st32((c.r[29].w[0] + 60u), c.f[18]);
    st32((c.r[29].w[0] + 64u), c.f[19]);
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[29].w[0] + 8u), 0u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F66Cu);  if (depth < kMaxDepth) unit_009F(c, 226u, depth + 1u); else { c.pc = 0x0037E5C8u; return; } if (c.pc != 0x0037F66Cu) [[unlikely]] return; }
L_0037F66C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037F680:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 416u);
    c.f[1] = ld32((c.r[2].w[0] + 19772u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[3].w[0] + 19776u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 400u), c.f[22]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 24));
    st32((c.r[29].w[0] + 392u), c.f[21]);
    c.f[22] = c.f[14];
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[19]);
    c.f[21] = c.f[12];
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[20]);
    c.r[8].d[0] = c.r[8].d[0] | 1ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 8));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 224u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 384u), c.f[20]);
    st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[29].w[0] + 56u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 76u), c.f[1]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[29].w[0]), c.f[21]);
    st32((c.r[29].w[0] + 4u), c.f[13]);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 52u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 60u), c.f[22]);
    st32((c.r[29].w[0] + 64u), c.f[15]);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    c.budget -= 46;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_0037F74C; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F744u);  if (depth < kMaxDepth) unit_009F(c, 226u, depth + 1u); else { c.pc = 0x0037E5C8u; return; } if (c.pc != 0x0037F744u) [[unlikely]] return; }
L_0037F744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037F8BC; } }
L_0037F74C:
    c.f[0] = ld32((c.r[19].w[0] + 28356u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.f[20] = c.f[13];
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[15]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[22], c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037F8BC; } }
    set32(c.r[21], 0u + 10u);
    set32(c.r[18], c.r[29].w[0] + 96u);
    set32(c.r[30], 0u + 2u);
    set32(c.r[23], 0u + 1u);
    c.budget -= 4;
L_0037F788:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_0037F7C0; } }
    c.f[0] = c.r[22].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
L_0037F7A8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037F7A8u | kUnwind; return; } goto L_0037F7A8; } }
L_0037F7C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_0037F7F8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037F7F8; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 2;
L_0037F7E0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037F7F8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037F7E0u | kUnwind; return; } goto L_0037F7E0; } }
L_0037F7F8:
    c.r[2].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037F8A8; } }
    set32(c.r[16], c.r[17].w[0] - c.r[5].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F818u);  if (depth < kMaxDepth) unit_00DD(c, 90u, depth + 1u); else { c.pc = 0x004753A0u; return; } if (c.pc != 0x0037F818u) [[unlikely]] return; }
L_0037F818:
    set32(c.r[5], ld32((c.r[19].w[0] + 28364u)));
    set32(c.r[16], c.r[18].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F830u);  if (depth < kMaxDepth) unit_007D(c, 131u, depth + 1u); else { c.pc = 0x002F5CC8u; return; } if (c.pc != 0x0037F830u) [[unlikely]] return; }
L_0037F830:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[20].d[0] != c.r[30].d[0];  if (t) { goto L_0037F868; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037F888; } }
L_0037F868:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[23].d[0];  if (t) { goto L_0037F890; } }
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
L_0037F888:
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    st32((c.r[29].w[0]), c.f[0]);
    c.budget -= 2;
L_0037F890:
    st32((c.r[29].w[0] + 52u), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[20]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F8A8u);  if (depth < kMaxDepth) unit_009F(c, 226u, depth + 1u); else { c.pc = 0x0037E5C8u; return; } if (c.pc != 0x0037F8A8u) [[unlikely]] return; }
L_0037F8A8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037F788u | kUnwind; return; } goto L_0037F788; } }
L_0037F8BC:
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 224u));
    c.f[22] = ld32((c.r[29].w[0] + 400u));
    c.f[21] = ld32((c.r[29].w[0] + 392u));
    c.f[20] = ld32((c.r[29].w[0] + 384u));
    set32(c.r[29], c.r[29].w[0] + 416u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037F900:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = 0ull | 33520ull;
    set32(c.r[5], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 21896u);
    set32(c.r[4], c.r[4].w[0] - 9848u);
    set32(c.r[6], 0u + 254u);
    c.budget -= 8;
L_0037F920:
    set32(c.r[2], ld32((c.r[7].w[0] + 28364u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037F93C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037F940; } }
L_0037F93C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 1;
L_0037F940:
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[5].w[0] - 1020u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 132u);
    set32(c.r[4], c.r[4].w[0] + 132u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037F920u | kUnwind; return; } goto L_0037F920; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037F970:
    set32(c.r[2], ld32((c.r[4].w[0] + 28364u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037F994; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32500u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037F994:
    c.r[3].d[0] = 0ull | 33520ull;
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037F9B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 28388u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037F9C0:
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037F9D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037FA00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FA00u);  if (depth < kMaxDepth) unit_009F(c, 247u, depth + 1u); else { c.pc = 0x0037E9D0u; return; } if (c.pc != 0x0037FA00u) [[unlikely]] return; }
L_0037FA00:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037FA20; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FA20u);  if (depth < kMaxDepth) unit_009F(c, 259u, depth + 1u); else { c.pc = 0x0037ECB8u; return; } if (c.pc != 0x0037FA20u) [[unlikely]] return; }
L_0037FA20:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037FA38:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037FA48:
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] + 112u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 6;
L_0037FA60:
    ld128((c.r[5].w[0]) & ~15u, c.r[6]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    set32(c.r[5], c.r[5].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037FA60u | kUnwind; return; } goto L_0037FA60; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037FA90:
    set32(c.r[2], ld32((c.r[4].w[0] + 28408u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037FAA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037FAB0:
    set32(c.r[2], ld32((c.r[4].w[0] + 28364u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037FAC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 28364u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037FB04; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FAFCu);  if (depth < kMaxDepth) unit_009F(c, 320u, depth + 1u); else { c.pc = 0x0037FC30u; return; } if (c.pc != 0x0037FAFCu) [[unlikely]] return; }
L_0037FAFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FB10; } }
L_0037FB04:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FB10u);  if (depth < kMaxDepth) unit_009F(c, 317u, depth + 1u); else { c.pc = 0x0037FB90u; return; } if (c.pc != 0x0037FB10u) [[unlikely]] return; }
L_0037FB10:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0037FB40; } }
    c.f[0] = 0u;
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FB74; } }
L_0037FB40:
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 28412u));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[16].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 28416u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 28420u));
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 28424u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 13;
L_0037FB74:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037FB90:
    set32(c.r[6], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0037FBA8; } }
L_0037FB9C:
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037FBA8:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037FB9Cu | kUnwind; return; } goto L_0037FB9C; } }
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[3].w[0] - 97u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037FBD8; } }
    set32(c.r[2], c.r[3].w[0] - 224u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(29ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037FBDC; } }
L_0037FBD8:
    set32(c.r[3], c.r[3].w[0] - 32u);
    c.budget -= 1;
L_0037FBDC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037FBF0; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0037FBFC; } }
L_0037FBF0:
    set32(c.r[6], 0u + 255u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FC1C; } }
L_0037FBFC:
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(255ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037FC1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 10944u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
L_0037FC1C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037FC30:
    set32(c.r[6], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0037FC48; } }
L_0037FC3C:
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037FC48:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037FC3Cu | kUnwind; return; } goto L_0037FC3C; } }
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037FC8C; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037FC8C; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(255ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037FC8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 10688u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
L_0037FC8C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037FCA0:
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037FCC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 10688u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FCC8; } }
L_0037FCC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 10944u);
    c.budget -= 2;
L_0037FCC8:
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037FCD8:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 200u), c.f[25]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 184u), c.f[23]);
    c.f[25] = c.f[13];
    st32((c.r[29].w[0] + 176u), c.f[22]);
    c.f[23] = c.f[12];
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.f[22] = c.f[14];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 192u), c.f[24]);
    st32((c.r[29].w[0] + 168u), c.f[21]);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.budget -= 23;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037FD38:
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], 0u + 1000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FD48u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0037FD48u) [[unlikely]] return; }
L_0037FD48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[21] = c.r[1].w[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = c.r[1].w[0];
    c.f[1] = c.f[23] ^ fp::kSign;
    c.budget -= 8;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x0037FD64u);  goto L_0037FD68; }
L_0037FD68:
    c.f[20] = fp::mul(c.f[23], c.f[20]);
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[24] = c.r[1].w[0];
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.r[3].d[0] = c.hi.d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[21]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    st32((c.r[29].w[0]), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FDA4u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0037FDA4u) [[unlikely]] return; }
L_0037FDA4:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[2], 0u + 1000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0037FDBCu);  goto L_0037FDC0; }
L_0037FDC0:
    st32((c.r[29].w[0] + 12u), c.f[1]);
    c.r[3].d[0] = c.hi.d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[21]);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    st32((c.r[29].w[0] + 8u), c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FDE8u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0037FDE8u) [[unlikely]] return; }
L_0037FDE8:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[6], c.r[19].w[0] - 11856u);
    set32(c.r[2], 0u + 1000u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0037FDFCu);  goto L_0037FE00; }
L_0037FE00:
    set32(c.r[5], ld32((c.r[6].w[0] + 540u)));
    c.r[3].d[0] = c.hi.d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 20u, c.f[0], c.f[21]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0037FE38; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FE3C; } }
L_0037FE38:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037FE3C:
    set32(c.r[2], 0u + 544u);
    set32(c.r[3], ld32((c.r[3].w[0] + 240u)));
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 3u);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[5], c.r[17].w[0] + 128u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0037FE6C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0037FF9C; } }
L_0037FE6C:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037FF9C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037FF9C; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037FF9C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037FF9C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    set32(c.r[5], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FEB8u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x0037FEB8u) [[unlikely]] return; }
L_0037FEB8:
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.f[0] = ld32((c.r[2].w[0] + 52u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    st32((c.r[29].w[0] + 44u), c.f[2]);
    st32((c.r[29].w[0] + 40u), c.f[1]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FEFCu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0037FEFCu) [[unlikely]] return; }
L_0037FEFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF08u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0037FF08u) [[unlikely]] return; }
L_0037FF08:
    c.f[1] = c.f[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0037FF38; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0037FF3C; } }
L_0037FF38:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0037FF3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037FF9C; } }
    set32(c.r[16], c.r[17].w[0] + 128u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF5Cu);  if (depth < kMaxDepth) unit_008E(c, 311u, depth + 1u); else { c.pc = 0x0033B670u; return; } if (c.pc != 0x0037FF5Cu) [[unlikely]] return; }
L_0037FF5C:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    st32((c.r[2].w[0] + 20u), c.f[25]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF78u);  if (depth < kMaxDepth) unit_008D(c, 292u, depth + 1u); else { c.pc = 0x00337620u; return; } if (c.pc != 0x0037FF78u) [[unlikely]] return; }
L_0037FF78:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 24u), c.f[24]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF9Cu);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x0037FF9Cu) [[unlikely]] return; }
L_0037FF9C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0037FFA0:
    set32(c.r[4], c.r[19].w[0] - 11856u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 540u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037FFCC; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFD0; } }
L_0037FFCC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037FFD0:
    set32(c.r[2], ld32((c.r[2].w[0] + 236u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037FD38u | kUnwind; return; } goto L_0037FD38; } }
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    [[clang::musttail]] return unit_00A0(c, 1u, depth);
}

}
